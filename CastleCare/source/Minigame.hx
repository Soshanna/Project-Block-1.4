package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class Minigame extends FlxState
{
	var background:FlxSprite;
	var placements:Array<FlxSprite> = new Array<FlxSprite>();
	var randomsprite:String;
	var randomFloat:Float;
	var score:Int = 0;
	var scoreTxt:FlxText;
	
	override public function create():Void 
	{
		background = new FlxSprite().makeGraphic(1150, 580, FlxColor.WHITE);
		background.screenCenter();
		add(background);
		
		scoreTxt = new FlxText(20, 20, 0, "" + score, 30);
		add(scoreTxt);
		
		for (i in 0 ... 144) {
			randomSprite();
			placements[i] = new FlxSprite().loadGraphic(randomsprite, false, 50, 50);
			placements[i].x = 90;
			placements[i].y = 97 + (60 * i);
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 9));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 18));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 27));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 36));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 45));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 54));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 63));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 72));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 81));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 90));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 99));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 108));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 117));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 126));}
			if(placements[i].y >= 600){placements[i].x += 70;placements[i].y = 97 + (60 * (i - 135));}
		}
		
		for(i in 0 ... 144){
			var place = placements.pop();
			add(place);
		}
		super.create();
	}
	
	function randomSprite(){
		randomFloat = Math.random();
		if(randomFloat <= 0.20){
			randomsprite = "assets/images/Candy.png";
		}
		else if(randomFloat <= 0.40){
			randomsprite = "assets/images/Candy1.png";
		}
		else if(randomFloat <= 0.60){
			randomsprite = "assets/images/Candy2.png";
		}
		else if(randomFloat <= 0.80){
			randomsprite = "assets/images/Candy3.png";
		}
		else{
			randomsprite = "assets/images/Candy4.png";
		}
	}
	
	function scoreUp(){
		score += 1;
		scoreTxt.update;
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
}