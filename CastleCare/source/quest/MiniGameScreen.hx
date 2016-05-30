package quest;

import quest.JobListState;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

/**
 * ...
 * @author Fimme Neeleman
 */
class MiniGameScreen extends FlxState
{
	var backButton:FlxButton;
	var _txtTitle:FlxText;
	var d:Int = 0;

	override public function create():Void {
		super.create();
		
		var whiteSquare = new FlxSprite();
		whiteSquare.makeGraphic(400, 800, FlxColor.WHITE);
		add(whiteSquare);
		
		_txtTitle = new FlxText(20, 0, 0, "Mini Game Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		backButton = new FlxButton((FlxG.width / 2) + 540, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		for (i in 0 ... 20){
			var sprite1:FlxSprite = new FlxSprite(80,40, "assets/img/EnergySymbol.png");
			sprite1.width = 40;
			sprite1.height = 40;
			if(d == 4){
				sprite1.x = 80 * d;
				sprite1.y += 60;
				d = 0;
			}else{
				sprite1.x = 80 * d;
				sprite1.y = 40;	
			}
			add(sprite1);
		}
		
		var sprite2:FlxSprite = new FlxSprite(80,40, "assets/img/MoodHappy.png");
		sprite2.width = 40;
		sprite2.height = 40;
		if(d == 4){
			sprite2.x = 80 * d;
			sprite2.y += 60;
			d = 0;
		}else{
			sprite2.x = 80 * d;
			sprite2.y = 40;	
		}
		add(sprite2);
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
}