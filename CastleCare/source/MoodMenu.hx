package;

import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;

/**
 * ...
 * @author Fimme Neeleman
 */
class MoodMenu extends FlxState
{
	var _btnMenu:FlxButton;
	var _txtTitle:FlxText;
	
	override public function create():Void 
	{
		super.create();
		
		_txtTitle = new FlxText(20, 0, 0, "Mood Menu", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickPlay);
		add(_btnMenu);
	}
	
	private function clickPlay():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new PlayState());
		});
	}
}