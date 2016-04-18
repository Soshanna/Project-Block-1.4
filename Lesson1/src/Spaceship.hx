package;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.Assets;
import openfl.events.Event;


/**
 * ...
 * @author F.Neeleman
 */
class Spaceship extends Sprite
{
	var ship:Bitmap = null;

	public function new() 
	{
		super();
		
		var shipBD:BitmapData = Assets.getBitmapData("img/Ship.png");
		ship = new Bitmap(shipBD);
		addChild(ship);
	}
	
	public function update(event:Event){
		ship.x += 4;
		if(ship.x > stage.stageWidth){
			ship.x = -ship.width;
		}
	}
}