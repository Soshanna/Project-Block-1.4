package;

import flixel.ui.FlxButton;

/**
 * ...
 * @author Fimme Neeleman
 */
class MoodSmiley extends FlxButton
{

	public function new(X:Float=0, Y:Float=0) 
	{
		super(X, Y, "");
		super.loadGraphic("assets/img/MoodHappy.png");
	}
	
}