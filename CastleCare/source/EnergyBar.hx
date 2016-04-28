package;

import flixel.ui.FlxBar;
import flixel.ui.FlxBar.FlxBarFillDirection;

/**
 * ...
 * @author Fimme Neeleman
 */
class EnergyBar extends FlxBar
{
	var playstate:PlayState = new PlayState();
	var energy:Int;
	
	public function new(x:Float=0, y:Float=0, width:Int=100, height:Int=10) 
	{
		energy = playstate.energy;
		super(x, y, LEFT_TO_RIGHT, width, height, energy, "", 0, 100, true);
	}
	
}