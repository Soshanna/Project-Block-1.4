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
	static var instance:PlayState;
	public var doctorBool:Bool = false;
	public var energy:Int = 50;
	var _btnMenu:FlxButton;
	var _btnQuest:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energyBar:EnergyBar;
	var energyBarFull:EnergyBar;
	var currency:Int = 0;
	
	override public function create():Void
	{
		instance = this;
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickMenu);
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "Quest", clickQuest);
		add(_btnQuest);
		
		energyBarFull = new EnergyBar(130, 30, 100, 10, "assets/img/FullEnergy.png","assets/img/EmptyEnergy.png");
		energyBarFull.value = energy;
		add(energyBarFull);
		
		var energyText:FlxText = new FlxText(energyBarFull.x + (energyBarFull.width / 2) -20 , energyBarFull.y + 21, 0, "" + energyBarFull.value + "%", 25);
		add(energyText);
		//make this a FlxButton
		//var mood:MoodSmiley = new MoodSmiley(10, 5);
		//add(mood);
		
		var energySymbol:FlxSprite = new FlxSprite(energyBarFull.x, energyBarFull.y , "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		_btnUpgradeMenu = new FlxButton((energyBarFull.x + energyBarFull.width) + 10, energyBarFull.y + 20, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		super.create();
	}
	
	public function getInstance():PlayState{
		return instance;
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