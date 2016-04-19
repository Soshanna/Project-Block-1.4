package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class Minigame extends FlxState
{
	var background:FlxSprite;
	var placements:Array<FlxSprite> = new Array<FlxSprite>();
	var randomcolor:FlxColor;
	var randomFloat:Float;
	
	override public function create():Void 
	{
		background = new FlxSprite().makeGraphic(1200, 650, FlxColor.GRAY);
		background.screenCenter();
		add(background);
		
		for (i in 0 ... 72) {
			randomColor();
			placements[i] = new FlxSprite().makeGraphic(50, 50, randomcolor);
			placements[i].x = 185;
			placements[i].y = 100 + (60 * i);
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 9));
				if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 18));
			}
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 27));
			}
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 36));
			}
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 45));
			}
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 54));
			}
			if(placements[i].y >= 600){
				placements[i].x += 120;
				placements[i].y = 100 + (60 * (i - 63));
			}
			}
		}
		
		for(i in 0 ... 72){
			var place = placements.pop();
			add(place);
		}
		super.create();
	}
	
	function randomColor(){
		randomFloat = Math.random();
		if(randomFloat <= 0.20){
			randomcolor = FlxColor.BROWN;
		}
		else if(randomFloat <= 0.40){
			randomcolor = FlxColor.BLUE;
		}
		else if(randomFloat <= 0.60){
			randomcolor = FlxColor.CYAN;
		}
		else if(randomFloat <= 0.80){
			randomcolor = FlxColor.GREEN;
		}
		else{
			randomcolor = FlxColor.WHITE;
		}
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
}