package upgrade;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.util.FlxSave;

/**
 * ...
 * @author Fimme Neeleman
 */
class UpgradeCharacterState extends FlxState
{
	var currency:Int;
	var backButton:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();

	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/Minigame/Minigame Background.png");
		add(_bkgrOver);
		
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		currency = save.data.currency;
		save.close();
		var currencyText:FlxText = new FlxText(1100, 80, 0, "$" + currency, 24);
		add(currencyText);
		
		backButton = new FlxButton(1065, 580, "", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new UpgradeMenuState());
		});
	}
}