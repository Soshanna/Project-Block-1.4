package quest;

import flixel.ui.FlxButton;

/**
 * ...
 * @author Fimme Neeleman
 */
class Item extends FlxButton
{
	public var type:Int;
	public var name:String;
	public var arrayID:Int;
	
	public function new() 
	{
		super(0, 0, null, null);
	}

	public function setName(string:String){
		name = string;
	}
}