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
	var _btnEnergyUp:FlxButton;
	var _btnEnergydown:FlxButton;
	var _btnMenu:FlxButton;
	var _btnQuest:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var text:FlxText;
	var energyBar:EnergyBar;
	var currency:Int = 0;
	var _castleNavigation:Castle;
	
	override public function create():Void
	{
		_castleNavigation = new Castle();
		add(_castleNavigation);	
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickMenu);
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "Quest", clickQuest);
		add(_btnQuest);
		
		energyBar = new EnergyBar(125, 35, 0, 0, "assets/img/FullEnergy.png", "assets/img/FullEnergy.png");
		add(energyBar);
		
		var mood:MoodSmiley = new MoodSmiley(10, 5, clickMood);
		add(mood);
		
		var energySymbol:FlxSprite = new FlxSprite(energyBar.x, energyBar.y, "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		text = new FlxText(energyBar.x + (energyBar.width/2)-10, energyBar.y + 25, 0,"" + energyBar.percent + "%",16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y + 25, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		_btnEnergyUp = new FlxButton(150, 300, "EnergyUp", clickEnergy);
		add(_btnEnergyUp);
		
		_btnEnergydown = new FlxButton(150, 350, "EnergyDown", clickEnergyDown);
		add(_btnEnergydown);
		
		super.create();
	}
	
	private function clickMood():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MoodMenu());
		});
	}
	
	private function clickEnergy(){
		energyBar.value += 20;
		energyBar.x = 0;
	}
	
	private function clickEnergyDown(){
		energyBar.value -= 20;
		energyBar.x = 0;
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
		if(energyBar.value > 0){
			energyBar.scale.x = (energyBar.value * 0.01);
		}
		text.text = "" + energyBar.percent + "%";
	}
}