package;

import flixel.ui.FlxBar;
import flixel.ui.FlxBar.FlxBarFillDirection;

/**
 * ...
 * @author Fimme Neeleman
 */
class EnergyBar extends FlxBar
{
	public var energy:Int = 100;
	
	public function new(x:Float=0, y:Float=0, width:Int=100, height:Int=10) 
	{
		super(x, y, LEFT_TO_RIGHT, width, height, energy, "", 0, 100, true);
	}
	
}