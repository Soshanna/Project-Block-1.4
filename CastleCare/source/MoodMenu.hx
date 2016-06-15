package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;

/**
 * ...
 * @author Fimme Neeleman
 */
class MoodMenu extends FlxState
{
	var state:PlayState = new PlayState();
	var energy:Int;
	var happy:Bool = true;
	var _btnMenu:FlxButton;
	var _txtTitle:FlxText;
	var _bkgrOver:FlxSprite = new FlxSprite();
	var smiley:FlxSprite = new FlxSprite();
	
	override public function create():Void 
	{
		super.create();
		
		energy = state.energy;
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
		
		_txtTitle = new FlxText(20, 0, 0, "Mood Menu", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickPlay);
		add(_btnMenu);
	}
	
	private function clickPlay():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new PlayState());
		});
	}
}