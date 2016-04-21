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
	var ship1:Spaceship = null;
	var ship2:Spaceship = null;
	
	public function new() {
		super();
		
		ship2 = new Spaceship(0);
		addChild(ship2);
		
		ship1 = new Spaceship(150);
		addChild(ship1);
		
		ship = new Spaceship(300);
		addChild(ship);
		
		addEventListener(Event.ENTER_FRAME, update);
	}
	
	function update(event:Event){
		ship.update(event);
		ship1.update(event);
		ship2.update(event);
	}
}