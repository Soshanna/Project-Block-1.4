package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;

class MenuState extends FlxState
{
	private var _btnPlay:FlxButton;
	private var _txtTitle:FlxText;
	private var _btnOptions:FlxButton;
	private var _btnQuit:FlxButton;
	private var _btnOver:FlxButton;
	private var _btnCredits:FlxButton;
	
	override public function create():Void{
		_txtTitle = new FlxText(20, 0, 0, "Castle Care", 22);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_btnPlay = new FlxButton(0, 0, "Play", clickPlay);
		_btnPlay.x = (FlxG.width / 2) - _btnPlay.width - 110;
		_btnPlay.y = FlxG.height - _btnPlay.height - 210;
		add(_btnPlay);
		
		_btnOptions = new FlxButton(0, 0, "Options", clickOptions);
		_btnOptions.x = (FlxG.width / 2) +110;
		_btnOptions.y = FlxG.height - _btnOptions.height - 210;
		add(_btnOptions);
		
		_btnOver = new FlxButton(0, 0, "Over", clickOver);
		_btnOver.x = (FlxG.width / 2) + 110;
		_btnOver.y = FlxG.height - _btnOver.height - 110;
		add(_btnOver);
		
		_btnCredits = new FlxButton(0, 0, "Credits", clickCredits);
		_btnCredits.x = (FlxG.width / 2) - _btnCredits.width - 110;
		_btnCredits.y = FlxG.height - _btnCredits.height - 110;
		add(_btnCredits);
		
		FlxG.camera.fade(FlxColor.BLACK, .33, true);
		super.create();
	}
	
	private function clickOver():Void{
		FlxG.switchState(new OverState());
	}
	
	private function clickCredits():Void{
		FlxG.switchState(new CreditsState());
	}
	
	private function clickOptions():Void{
		FlxG.switchState(new OptionsState());
	}
	
	private function clickPlay():Void{
		FlxG.switchState(new PlayState());
	}

	override public function update(elapsed:Float):Void{
		super.update(elapsed);
	}
}