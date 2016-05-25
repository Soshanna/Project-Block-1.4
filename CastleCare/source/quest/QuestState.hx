package quest;

import flixel.FlxState;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.text.FlxText;

/**
 * ...
 * @author Fimme Neeleman
 */
class QuestState extends FlxState
{
	var jobListButton:FlxButton;
	var contactListButton:FlxButton;
	var _txtTitle:FlxText;
	var backButton:FlxButton;
	
	override public function create():Void 
	{
		_txtTitle = new FlxText(20, 0, 0, "Quest Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		backButton = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		jobListButton = new FlxButton(0, 350, "Taken", clickJobList);
		jobListButton.screenCenter(X);
		add(jobListButton);
		
		contactListButton = new FlxButton(0, 450, "Contacten", clickcontactList);
		contactListButton.screenCenter(X);
		add(contactListButton);
		
		super.create();
	}
	
	function clickBack():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
	
	function clickJobList():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	function clickcontactList():Void {
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new ContactListState());
		});
	}
	
}