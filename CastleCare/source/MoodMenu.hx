package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.util.FlxSave;

/**
 * ...
 * @author Fimme Neeleman
 */
class MoodMenu extends FlxState
{
	var energy:Int;
	var happy:Bool = true;
	var _btnMenu:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();
	var smiley:FlxSprite = new FlxSprite();
	
	override public function create():Void 
	{
		super.create();
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		energy = save.data.energy;
		save.close();
		
		if(energy <= 40){
			happy = false;
		}
		
		_bkgrOver.loadGraphic("assets/img/Moodmenu/MoodMenu.png");
		add(_bkgrOver);
		
		smiley.x = 8;
		smiley.y = 8;
		
		if(happy == true){
			smiley.loadGraphic("assets/img/Moodmenu/MoodHappy.png");
			add(smiley);
		}
		
		if(happy == false){
			smiley.loadGraphic("assets/img/Moodmenu/MoodAngry.png");
			add(smiley);
		}
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 510, FlxG.height - 95, "", clickBack);
		_btnMenu.loadGraphic("assets/img/Buttons/terug-3.png");
		add(_btnMenu);
	}
	
	private function clickBack():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new PlayState());
		});
	}
	
	
}