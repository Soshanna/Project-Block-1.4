package upgrade;

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
	var _txtTitle:FlxText;
	var backButton:FlxButton;
	
	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "Upgrade Castle Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
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