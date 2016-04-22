package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
	var _btnMenu:FlxButton;
	
	override public function create():Void
	{
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickMenu);
		add(_btnMenu);
		
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}