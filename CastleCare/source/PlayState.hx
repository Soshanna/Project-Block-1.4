package;

import flixel.ui.FlxBar;
import menu.MenuState;
import quest.QuestState;
import upgrade.UpgradeMenuState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;

class PlayState extends FlxState
{
	public var doctorBool:Bool = false;
	public var energy:Int;
	var _btnMenu:FlxButton;
	var _btnQuest:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energyBar:EnergyBar;
	var currency:Int = 0;
	
	override public function create():Void
	{
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickMenu);
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "Quest", clickQuest);
		add(_btnQuest);
		
		energyBar = new EnergyBar(125, 35, 0, 0, "assets/img/EmptyEnergy.png", "assets/img/FullEnergy.png");
		add(energyBar);
		
		var mood:MoodSmiley = new MoodSmiley(10, 5);
		add(mood);
		
		var energySymbol:FlxSprite = new FlxSprite(energyBar.x, energyBar.y, "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		var text:FlxText = new FlxText(energyBar.x + (energyBar.width/2)-10, energyBar.y + 25, 0,"" + energyBar.percent,16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y + 25, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
	}
	
	private function clickQuest():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new QuestState());
		});
	}
	
	private function clickUpgradeMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new UpgradeMenuState());
		});
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}