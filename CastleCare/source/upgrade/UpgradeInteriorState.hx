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
class UpgradeInteriorState extends FlxState
{
	var state:PlayState = new PlayState();
	var currency:Int;
	var backButton:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();
	
	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/Minigame/Minigame Background.png");
		add(_bkgrOver);
		
		currency = state.currency;
		var currencyText:FlxText = new FlxText(1100, 80, 0, "$" + currency, 24);
		add(currencyText);
		
		var backButton:FlxButton = new FlxButton(1065, 580,"", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new UpgradeCastleState());
		});
	}
}