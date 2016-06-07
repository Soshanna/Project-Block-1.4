package menu;

import flixel.FlxSprite;
import menu.MenuState;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class OverState extends FlxState
{
	var _txtTitle:FlxText;
	var _btnMenu:FlxButton;
	var _txtOver:FlxText;
	var _bkgrOver = new FlxSprite();

	override public function create():Void 
	{
		_bkgrOver.loadGraphic("assets/img/background.png");
		_bkgrOver.scale.set(1.5, 1.5);
		_bkgrOver.x = 100;
		_bkgrOver.y = 120;
		add(_bkgrOver);
		
		_txtTitle = new FlxText(20, 50, 0, "Over", 60);
		_txtTitle.setFormat("assets/data/GLECB.TTF", 60, 0x000000, CENTER);
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtOver = new FlxText(440, 230, 400, "Welkom bij Castle Care. Als de troonopvolger is het aan jou de taak om het kasteel weer wederop the bouwen tot zijn oude glorie.", 50);
		_txtOver.setFormat ("assets/data/GLECB.TTF", 50, 0x000000, CENTER);
		add(_txtOver);
		
		var _btnMenu:FlxButton = new FlxButton( (FlxG.width / 2) + 10, FlxG.height - 70, "", clickMenu);
		_btnMenu.loadGraphic("assets/img/Buttons/terug-3.png");
		_btnMenu.screenCenter(X);
		add(_btnMenu);
		
		FlxG.camera.fade(FlxColor.BLACK, .20, true);
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new menu.MenuState());
		});
	}
}