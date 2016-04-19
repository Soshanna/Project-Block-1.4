package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class Minigame extends FlxState
{
	var background:FlxSprite;
	
	override public function create():Void 
	{
		background = new FlxSprite().makeGraphic(1200, 650, FlxColor.BROWN);
		background.screenCenter();
		add(background);
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
}