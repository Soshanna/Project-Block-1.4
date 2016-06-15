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
	
	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "Upgrade Menu Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		var _btnMenu:FlxButton = new FlxButton((FlxG.width / 2) -70, FlxG.height -70,"", clickBack);
 		_btnMenu.loadGraphic("assets/img/Buttons/terug-3.png");
 		_btnMenu.screenCenter(X);
 		add(_btnMenu);
		
		upgradeCharacterButton = new FlxButton(0, 350, "Upgrade Character", clickCharacter);
		upgradeCharacterButton.loadGraphic("assets/img/Buttons.karakter-1.png");
		upgradeCharacterButton.screenCenter(X);
		add(upgradeCharacterButton);
		
		var upgradeCastleButton:FlxButton = new FlxButton (0, 440, "", clickCastle);
 		upgradeCastleButton.loadGraphic("assets/img/Buttons/kasteel-1.png");
		upgradeCastleButton.screenCenter(X);
		add(upgradeCastleButton);
		
		super.create();
	}
	
	function clickBack():Void {
		_btnMenu.loadGraphic("assets/img/Buttons/terug-4.png");
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
	
	function clickCharacter():Void {
		upgradeCharacterButton.loadGraphic("assets/img/Buttons.karakter-2.png");
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeCharacterState());
		});
	}
	
	function clickCastle():Void {
		upgradeCastleButton.loadGraphic("assets/img/Buttons/kasteel-2.png");
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new UpgradeCastleState());
		});
	}
}