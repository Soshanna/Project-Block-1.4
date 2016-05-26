package;

import flixel.ui.FlxButton;

/**
 * ...
 * @author Fimme Neeleman
 */
class MoodSmiley extends FlxButton
{

	public function new(X:Float=0, Y:Float=0 , onclick) 
	{
		super(X, Y, "", onclick);
		super.loadGraphic("assets/img/MoodHappy.png");
	}
	
}