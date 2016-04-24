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
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		upgradeInteriorButton = new FlxButton(0, 350, "Upgrade Interior", clickInterior);
		upgradeInteriorButton.screenCenter(X);
		add(upgradeInteriorButton);
		
		upgradeRoomButton = new FlxButton(0, 450, "Upgrade Room", clickRoom);
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