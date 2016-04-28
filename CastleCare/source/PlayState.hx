package;

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
		
		_btnUpgradeMenu = new FlxButton(500, 60, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		energyBar = new EnergyBar(50, 50, 300, 30);
		add(energyBar);
		
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