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
class CreditsState extends FlxState
{
	var _txtTitle:FlxText;
	var _txtCredits:FlxText;
	var _txtCredits1:FlxText;
	var _btnMenu:FlxButton;
	var _bkgrCredits=new FlxSprite();

	override public function create():Void 
	{
		_bkgrCredits.loadGraphic("assets/img/background.png");
		_bkgrCredits.scale.set(1.5, 1.5);
		_bkgrCredits.x = 100;
		_bkgrCredits.y = 120;
		add(_bkgrCredits);
		
		_txtTitle = new FlxText(20, 50, 0, "Credits", 60);
		_txtTitle.setFormat("assets/data/GLECB.TTF", 60, 0x000000, CENTER);
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtCredits = new FlxText(420, 140, 450, "   Dit spel is gemaakt door:     Bas Altenburg, Soshanna Botter, Robin Knopf, Ysmar Nava, Fimme Neeleman.", 50);
		_txtCredits.setFormat ("assets/data/GLECB.TTF", 50, 0x000000, CENTER);
		add(_txtCredits);
		
		_txtCredits1 = new FlxText(420, 390, 450, "In opdracht van: Ludovita (Lerenophetweb.nl, Impuls, ErgoEnzo en Hanzehogeschool Groningen)", 50);
		_txtCredits1.setFormat ("assets/data/GLECB.TTF", 50, 0x000000, CENTER);
		add(_txtCredits1);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 70, "Back", clickMenu);
		_btnMenu.screenCenter(X);
		add(_btnMenu);
		
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new menu.MenuState());
		});
	}
}