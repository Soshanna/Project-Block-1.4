package upgrade;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.text.FlxText;

/**
 * ...
 * @author Fimme Neeleman
 */
class UpgradeCastleState extends FlxState
{
	var upgradeInteriorButton:FlxButton;
	var upgradeRoomButton:FlxButton;
	var backButton:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();
	
	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/background.png");
		_bkgrOver.scale.set(1.5, 1.5);
		_bkgrOver.x = 100;
		_bkgrOver.y = 120;
		add(_bkgrOver);
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 70, "", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		backButton.screenCenter(X);
		add(backButton);
		
		var upgradeInteriorButton:FlxButton = new FlxButton(0,250, "", clickInterior);
		upgradeInteriorButton.loadGraphic("assets/img/Buttons/interieur-1.png");
		upgradeInteriorButton.screenCenter(X);
		add(upgradeInteriorButton);
		
		upgradeRoomButton = new FlxButton(0, 400, "", clickRoom);
		upgradeRoomButton.loadGraphic("assets/img/Buttons/kamers-1.png");
		upgradeRoomButton.screenCenter(X);
		add(upgradeRoomButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new UpgradeMenuState());
		});
	}
	
	function clickInterior():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeInteriorState());
		});
	}
	
	function clickRoom():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeRoomState());
		});
	}
}