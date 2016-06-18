package quest;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

/**
 * ...
 * @author F.Neeleman
 */
class WinScreen extends FlxState
{
	var button:FlxButton;
	var currency:Int;

	override public function create() 
	{
		var winText:FlxText = new FlxText(0, 150, 0, "Je hebt het level gehaalt!", 30);
		winText.screenCenter(X);
		add(winText);
		
		var scoreText:FlxText = new FlxText(0, 200, 0, "Je hebt $100 verdient", 20);
		scoreText.screenCenter(X);
		add(scoreText);
		
		button = new FlxButton(550, 350, "", buttonPress);
		button.loadGraphic("assets/img/Buttons/terug-3.png");
		add(button);
	}
	
	function buttonPress(){
		button.loadGraphic("assets/img/Buttons/terug-4.png");
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		currency = save.data.currency;
		save.data.currency = (currency + 100);
		save.flush();
		save.close();
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
}