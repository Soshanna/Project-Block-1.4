package;

import flixel.ui.FlxBar;
import flixel.ui.FlxBar.FlxBarFillDirection;
import flixel.text.FlxText;
import flixel.graphics.FlxGraphic;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class EnergyBar extends FlxBar
{
	var playstate:PlayState = new PlayState();
	var energy:Int = 0;
	
	public function new(x:Float=0, y:Float=0, width:Int=100, height:Int=10, pic1:String, pic2:String) 
	{
		energy = playstate.energy;
		super(x, y, LEFT_TO_RIGHT, width, height, energy, "", 0, 100, true);
		super.createImageBar(pic1, pic2, FlxColor.TRANSPARENT, FlxColor.GREEN);
	}
}