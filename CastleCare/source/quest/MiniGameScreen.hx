package quest;

import flixel.addons.plugin.FlxMouseControl;
import quest.JobListState;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.display.FlxExtendedSprite;
import flixel.FlxSprite;
import flixel.util.FlxSpriteUtil;
import flixel.group.FlxSpriteGroup;
using flixel.util.FlxSpriteUtil;

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
	var groupRed:FlxSpriteGroup = new FlxSpriteGroup(0,0,63);
	var groupOrange:FlxSpriteGroup = new FlxSpriteGroup(0,0,63);

	override public function create():Void {
		super.create();
		FlxG.plugins.add(new FlxMouseControl());
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
			var random = Math.floor(Math.random() * 10);
			if(random >= 5){
				sprite1 = new FlxExtendedSprite(0, 0, "assets/img/red.png");
				groupRed.add(sprite1);
			}else{
				sprite1 = new FlxExtendedSprite(0, 0, "assets/img/orange.png");
				groupOrange.add(sprite1);
			}
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
			sprite1.enableMouseDrag(false, false, 255);
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
		if (sprite1.isDragged){
			sprite1.drawLine(FlxG.mouse.x, FlxG.mouse.y, 0, 0, { thickness: 10, color: FlxColor.BLACK });
			trace("ass");
		}
	}
}