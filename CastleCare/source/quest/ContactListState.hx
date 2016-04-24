package quest;

import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;

/**
 * ...
 * @author Fimme Neeleman
 */
class ContactListState extends FlxState
{
	var backButton:FlxButton;
	var _txtTitle:FlxText;

	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "ConcactList Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new QuestState());
		});
	}
}