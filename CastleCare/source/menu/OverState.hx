package menu;

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

	override public function create():Void 
	{
		_txtTitle = new FlxText(20, 0, 0, "Over", 22);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickMenu);
		add(_btnMenu);
		
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new menu.MenuState());
		});
	}
}