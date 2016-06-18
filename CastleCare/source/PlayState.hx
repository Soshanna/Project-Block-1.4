package;

import flixel.ui.FlxBar;
import menu.MenuState;
import quest.JobListState;
import upgrade.UpgradeMenuState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxSave;

class PlayState extends FlxState
{
	public var energy:Int;
	public var currency:Int;
	var _btnMenu:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energySymbol:FlxSprite;
	var text:FlxText;
	var energyBar:FlxBar;
	var _castleNavigation:Castle;
	
	override public function create():Void{
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		energy = save.data.energy;
		currency = save.data.currency;
		save.close();
		
		_castleNavigation = new Castle();
		add(_castleNavigation);	
		
		var _btnMenu:FlxButton = new FlxButton ((FlxG.width / 2) +500, FlxG.height - 80, "", clickMenu);
		_btnMenu.loadGraphic("assets/img/Buttons/menu.png");
		add(_btnMenu);
		
		energyBar = new FlxBar(155, 60, LEFT_TO_RIGHT, 500, 30, energy, "energy", 0, 100, true);
		add(energyBar);
		
		energySymbol = new FlxSprite(145, 50, "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		var mood:MoodSmiley = new MoodSmiley(10, 5, clickMood);
		add(mood);
		
		text = new FlxText(energyBar.x + (energyBar.width / 2) - 40, energyBar.y + 3, 0, energy + "%", 16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y - 5, "$ " + currency, clickUpgradeMenu);
		_btnUpgradeMenu.label.size = 24;
		_btnUpgradeMenu.loadGraphic("assets/img/Buttons/leeg.png");
		add(_btnUpgradeMenu);
		super.create();
	}
	
	function saveData(){
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		save.data.energy = energy;
		save.data.currency = currency;
		save.flush();
		save.close();
	}
	
	private function clickMood():Void{
		saveData();
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MoodMenu());
		});
	}
	
	private function clickMenu():Void{
		saveData();
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
	}
	
	private function clickUpgradeMenu():Void{
		saveData();
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new UpgradeMenuState());
		});
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		text.text = energy + "%";
		energyBar.value = energy;
		energyBar.updateBar();
		_btnUpgradeMenu.text = "$ " + currency;
	}
}