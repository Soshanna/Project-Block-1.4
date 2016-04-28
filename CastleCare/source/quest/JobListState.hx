package quest;

import minigames.CandyCrushMiniGame;
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
	var _txtTitle:FlxText;
	var miniGameButton:FlxButton;

	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "JobList Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		miniGameButton = new FlxButton(600, 300, "MiniGame", clickMiniGame);
		add(miniGameButton);
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new QuestState());
		});
	}
	
	function clickMiniGame():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new CandyCrushMiniGame());
		});
	}
}