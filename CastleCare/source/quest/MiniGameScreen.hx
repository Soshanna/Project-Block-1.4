package quest;

import quest.JobListState;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.display.FlxExtendedSprite;
import flixel.FlxSprite;
import flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Fimme Neeleman
 */
class MiniGameScreen extends FlxState
{
	var backButton:FlxButton;
	var _txtTitle:FlxText;
	var d:Int = 1;
	var sprite1:FlxExtendedSprite;

	override public function create():Void {
		super.create();
		
		var whiteSquare = new FlxSprite();
		whiteSquare.makeGraphic(1100, 600, FlxColor.WHITE);
		whiteSquare.x = 100;
		whiteSquare.y = 50;
		add(whiteSquare);
		
		_txtTitle = new FlxText(20, 0, 0, "Mini Game Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		backButton = new FlxButton((FlxG.width / 2) + 540, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		for (i in 1 ... 64){
			var text:String;
			var random = Math.floor(Math.random() * 10);
			if(random >= 5){
				text = "assets/img/red.png";
			}else{
				text = "assets/img/orange.png";
			}
			sprite1 = new FlxExtendedSprite(0, 0, text);
			if(i > 9){
				sprite1.x = 120 * d;
				sprite1.y = 160;
			}if(i > 18){
				sprite1.x = 120 * d;
				sprite1.y = 240;
			}if(i > 27){
				sprite1.x = 120 * d;
				sprite1.y = 320;
			}if(i > 36){
				sprite1.x = 120 * d;
				sprite1.y = 400;
			}if(i > 45){
				sprite1.x = 120 * d;
				sprite1.y = 480;
			}if(i > 54){
				sprite1.x = 120 * d;
				sprite1.y = 560;
			}else if(i <= 9){
				sprite1.x = 120 * d;
				sprite1.y = 80;	
			}
			add(sprite1);
			d += 1;
			if(d == 10){
				d = 1;
			}
		}
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (sprite1.isPressed == true){
			
		}
	}
}