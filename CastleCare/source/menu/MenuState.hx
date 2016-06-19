package menu;

import flixel.util.FlxSave;
import menu.OptionsState;
import menu.OverState;
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
	private var _bkgrMenu = new FlxSprite();
	var tut:Bool;
	
	override public function create():Void {
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		tut = save.data.tut;
		save.close();
		
		_bkgrMenu.loadGraphic("assets/img/titelbackground.png");
		_bkgrMenu.scale.set(1.35, 1.41);
		_bkgrMenu.x = 160;
		_bkgrMenu.y = 110;
		add(_bkgrMenu);
		
		var _btnPlay:FlxButton = new FlxButton (0, 0, "", clickPlay);
		_btnPlay.loadGraphic("assets/img/Buttons/start-1.png");
		_btnPlay.x = (FlxG.width / 2) - _btnPlay.width - 110;
		_btnPlay.y = FlxG.height - _btnPlay.height - 210;
		add(_btnPlay);
		
		var _btnOptions:FlxButton = new FlxButton(0, 0, "", clickOptions);
		_btnOptions.loadGraphic("assets/img/Buttons/opties-1.png");
		_btnOptions.x = (FlxG.width / 2) +110;
		_btnOptions.y = FlxG.height - _btnOptions.height - 210;
		add(_btnOptions);
		
		var _btnOver: FlxButton = new FlxButton(0, 0, "", clickOver);
		_btnOver.loadGraphic("assets/img/Buttons/over-1.png");
		_btnOver.x = (FlxG.width / 2) + 110;
		_btnOver.y = FlxG.height - _btnOver.height - 110;
		add(_btnOver);
		
		var _btnCredits:FlxButton = new FlxButton(0, 0, "", clickCredits);
		_btnCredits.loadGraphic("assets/img/Buttons/credits-1.png");
		_btnCredits.x = (FlxG.width / 2) - _btnCredits.width - 110;
		_btnCredits.y = FlxG.height - _btnCredits.height - 110;
		add(_btnCredits);
		
		FlxG.camera.fade(FlxColor.BLACK, .20, true);
		super.create();
	}
	
	private function clickOver():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new OverState());
		});
	}
	
	private function clickCredits():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new CreditsState());
		});
	}
	
	private function clickOptions():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new OptionsState());
		});
	}
	
	private function clickPlay():Void{
		if(tut == true){
			FlxG.camera.fade(FlxColor.BLACK, 1, false, function(){
			FlxG.switchState(new OptionsState());
			});
			var save:FlxSave = new FlxSave();
			save.bind("Data");
			save.data.tut = false;
			save.flush();
			save.close();
		}else if(tut == false){
			FlxG.camera.fade(FlxColor.BLACK, 1, false, function(){
			FlxG.switchState(new PlayState());
			});
		}
	}

	override public function update(elapsed:Float):Void{
		super.update(elapsed);
	}
}