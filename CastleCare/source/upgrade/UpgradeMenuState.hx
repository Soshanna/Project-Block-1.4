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
class UpgradeMenuState extends FlxState
{
	var upgradeCharacterButton:FlxButton;
	var upgradeCastleButton:FlxButton;
	var _txtTitle:FlxText;
	var backButton:FlxButton;
	
	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "Upgrade Menu Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		upgradeCharacterButton = new FlxButton(0, 350, "Upgrade Character", clickCharacter);
		upgradeCharacterButton.screenCenter(X);
		add(upgradeCharacterButton);
		
		upgradeCastleButton = new FlxButton(0, 450, "Upgrade Castle", clickCastle);
		upgradeCastleButton.screenCenter(X);
		add(upgradeCastleButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
	
	function clickCharacter():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeCharacterState());
		});
	}
	
	function clickCastle():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeCastleState());
		});
	}
}