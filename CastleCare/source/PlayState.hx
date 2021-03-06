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
	public var energy:Float;
	public var currency:Int;
	var _btnMenu:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energySymbol:FlxSprite;
	var text:FlxText;
	var energyBar:FlxBar;
	var _castleNavigation:Castle;
	var rightNow:Date = Date.now();
	var timeDifference:Float;
	var lastTime:Float;
	var upgradeText:FlxText;
	var flowerBool:Bool;
	var flower:FlxSprite;
	
	override public function create():Void{
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		energy = save.data.energy;
		lastTime = save.data.time;
		currency = save.data.currency;
		save.close();
		
		timeDifference = (((rightNow.getTime() - lastTime) / 1000) / 100) * 60;
		//timeDifference = (((rightNow.getTime() - lastTime) / 1000) / 100)* 0.02777778;
		if (energy >= 100){
			energy = 100;
		}else if (energy < 100){
			energy = energy + timeDifference;
			if (energy > 100){
				energy = 100;
			}
		}
		
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
		
		text = new FlxText(energyBar.x + (energyBar.width / 2) - 40, energyBar.y + 3, 0, Math.floor(energy) + "%", 16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y - 18, "" ,clickUpgradeMenu);
		_btnUpgradeMenu.loadGraphic("assets/img/MoneyBar.png");
		add(_btnUpgradeMenu);
		
		upgradeText = new FlxText(_btnUpgradeMenu.x + 45, _btnUpgradeMenu.y + 20, 0, "" + currency, 24);
		add(upgradeText);
		
		super.create();
	}
	
	function saveData(){
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		save.data.energy = energy;
		save.data.currency = currency;
		save.data.time	= rightNow.getTime();
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
		energyBar.value = energy;
		energyBar.updateBar();
		text.text = Math.floor(energy) + "%";
		upgradeText.text = "" + currency;
		if(energy < 100){
			energy += 0.01;
			//energy += 0.0002777778;
		}else if (energy >= 100){
			energy = 100;
		}
		if(energy < 0){
			energy = 0;
		}
	}
}