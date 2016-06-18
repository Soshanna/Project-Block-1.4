package quest;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;


/**
 * ...
 * @author Fimme Neeleman
 */
class JobListState extends FlxState
{
	var backButton:FlxButton;
	var duckButton:FlxButton;
	var pinguinButton:FlxButton;
	var turtleButton:FlxButton;
	var beverButton:FlxButton;
	var _bkgrOver:FlxSprite = new FlxSprite();

	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/background.png");
		_bkgrOver.scale.set(1.5, 1.5);
		_bkgrOver.x = 100;
		_bkgrOver.y = 120;
		add(_bkgrOver);
		
		duckButton = new FlxButton(100, 80, "", null);
		duckButton.loadGraphic("assets/img/Characters/duck-button.png");
		add(duckButton);
		
		pinguinButton = new FlxButton(700, 80, "", clickpinguin);
		pinguinButton.loadGraphic("assets/img/Characters/penguin-button.png", false, 60, 60);
		add(pinguinButton);
		
		turtleButton = new FlxButton(100, 380, "", null);
		turtleButton.loadGraphic("assets/img/Characters/turtle-button.png", false, 60, 60);
		add(turtleButton);
		
		beverButton = new FlxButton(700, 380, "", clickbever);
		beverButton.loadGraphic("assets/img/Characters/bever-button.png", false, 60, 60);
		add(beverButton);
		
		var backButton:FlxButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 70, "", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		backButton.screenCenter(X);
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, 1, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
	
	function clickpinguin():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new MiniGameScreen());
		});
	}
	
	function clickbever():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new HiddenObjectGame());
		});
	}
}