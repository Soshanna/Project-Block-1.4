package;

import openfl.Assets;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.events.Event;

/**
 * ...
 * @author F.Neeleman
 */
class Main extends Sprite 
{
	var ship:Spaceship = null;
	
	public function new() {
		super();
		
		ship = new Spaceship();
		addChild(ship);
		
		addEventListener(Event.ENTER_FRAME, update);
	}
	
	function update(event:Event){
		ship.update(event);
	}
}