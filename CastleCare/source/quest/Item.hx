package quest;

import flixel.ui.FlxButton;

/**
 * ...
 * @author Fimme Neeleman
 */
class Item extends FlxButton
{
	public var name:String;
	public var arrayID:Int;
	
	public function new() 
	{
		super(0, 0, null, null);
	}
}