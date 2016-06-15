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
class UpgradeRoomState extends FlxState
{
	var _txtTitle:FlxText;
	var backButton:FlxButton;
	
	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "Upgrade Menu Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		var backButton:FlxButton = new FlxButton((FlxG.width / 2) -70, FlxG.height -70,"", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		backButton.screenCenter(X);
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new UpgradeCastleState());
		});
	}
}