package quest;

import flixel.ui.FlxButton;
import flixel.addons.plugin.FlxMouseControl;

/**
 * ...
 * @author Fimme Neeleman
 */
class Item extends FlxButton
{
	public var positionx:Float;
	public var positiony:Float;
	public var name:String;
	
	public function new(_function) 
	{
		super(0,0,null,_function);
	}
	
}