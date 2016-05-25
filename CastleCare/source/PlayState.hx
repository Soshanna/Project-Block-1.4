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
import flash.display.BitmapData;
import flash.Assets;

class PlayState extends FlxState
{
	public var doctorBool:Bool = false;
	public var energy:Int;
	var _btnMenu:FlxButton;
	var _btnQuest:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energyBar:FlxBar;
	var currency:Int = 0;
	
	override public function create():Void
	{
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickMenu);
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "Quest", clickQuest);
		add(_btnQuest);
		
		_btnUpgradeMenu = new FlxButton(500, 60, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		var bitmapdata:BitmapData = Assets.getBitmapData("img/EmptyEnergy.png");
		energyBar.createImageFilledBar(bitmapdata, FlxColor.GREEN);
		add(energyBar);
		
		var text:FlxText = new FlxText(energyBar.x + (energyBar.width/2)-10, energyBar.y+5, 0,"" + energyBar.percent,16);
		add(text);
		
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