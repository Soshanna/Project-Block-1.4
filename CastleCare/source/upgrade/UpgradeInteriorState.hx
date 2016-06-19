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
class UpgradeInteriorState extends FlxState
{
	var currency:Int;
	var flowerBool:Bool;
	var backButton:FlxButton;
	var upgrade1Button:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();
	
	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/Minigame/Minigame Background.png");
		add(_bkgrOver);
		
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		flowerBool = save.data.flower;
		currency = save.data.currency;
		save.close();
		
		var currencyText:FlxText = new FlxText(1100, 80, 0, "$" + currency, 24);
		add(currencyText);
		
		upgrade1Button = new FlxButton(100, 80, "", upgrade1);
		if(flowerBool == false){
			upgrade1Button.loadGraphic("assets/img/FlowerUpgrade.png");
		}else if(flowerBool == true){
			upgrade1Button.loadGraphic("assets/img/FlowerUpgradeDONE.png");
		}
		add(upgrade1Button);
		var backButton:FlxButton = new FlxButton(1065, 580,"", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		add(backButton);
		
		super.create();
	}
	
	function upgrade1(){
		if(currency >= 200){
			var save:FlxSave = new FlxSave();
			save.bind("Data");
			save.data.flower = true;
			save.data.currency = (currency - 200);
			save.flush();
			save.close();
		}
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new UpgradeCastleState());
		});
	}
}