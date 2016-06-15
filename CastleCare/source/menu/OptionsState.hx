package menu;

import menu.MenuState;
import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxSave;
import flixel.FlxSprite;

/**
 * ...
 * @author Fimme Neeleman
 */
class OptionsState extends FlxState
{
	private var _btnMenu:FlxButton;
	private var _txtTitle:FlxText;
	private var _barVolume:FlxBar;
	private var _txtVolume:FlxText;
	private var _txtVolumeAmt:FlxText;
	private var _btnVolumeDown:FlxButton;
	private var _btnVolumeUp:FlxButton;
	var _bkgrOver = new FlxSprite();
	
	override public function create():Void {
		_bkgrOver.loadGraphic("assets/img/background.png");
		_bkgrOver.scale.set(1.5, 1.5);
		_bkgrOver.x = 100;
		_bkgrOver.y = 120;
		add(_bkgrOver);
		
		_txtTitle = new FlxText(20, 0, 0, "Options", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtVolume = new FlxText(0, _txtTitle.y + _txtTitle.height + 239, 0, "Volume", 18);
		_txtVolume.alignment = CENTER;
		_txtVolume.screenCenter(FlxAxes.X);
		add(_txtVolume);
		
		_barVolume = new FlxBar(_txtVolume.x - 375, _txtVolume.y + _txtVolume.height + 2, LEFT_TO_RIGHT,800,70);
		_barVolume.createFilledBar(0xff464646, FlxColor.WHITE, true, FlxColor.WHITE);
		add(_barVolume);
		
		_btnVolumeDown = new FlxButton(_barVolume.x - 23,_barVolume.y, "-", clickVolumeDown);
		_btnVolumeDown.makeGraphic(70, 70, FlxColor.WHITE);
		add(_btnVolumeDown);
		
		_btnVolumeUp = new FlxButton(_btnVolumeDown.x - 23+ _barVolume.width + 27, _btnVolumeDown.y, "+", clickVolumeUp);
		_btnVolumeUp.makeGraphic(70, 70, FlxColor.WHITE);
		add(_btnVolumeUp);
		
		_txtVolumeAmt = new FlxText(0, 0, 200, (FlxG.sound.volume * 100) + "%", 16);
		_txtVolumeAmt.alignment = CENTER;
		_txtVolumeAmt.borderStyle = FlxTextBorderStyle.OUTLINE;
		_txtVolumeAmt.borderColor = 0xff464646;
		_txtVolumeAmt.y = _barVolume.y + (_barVolume.height / 2) - (_txtVolumeAmt.height / 2);
		_txtVolumeAmt.screenCenter(FlxAxes.X);
		add(_txtVolumeAmt);
		
		var _btnMenu:FlxButton = new FlxButton((FlxG.width / 2) -70, FlxG.height -70,"", clickMenu);
		_btnMenu.loadGraphic("assets/img/Buttons/terug-3.png");
		add(_btnMenu);
		
		updateVolume();
		
		FlxG.camera.fade(FlxColor.BLACK, .20, true);
		super.create();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new menu.MenuState());
		});
	}
	
	private function clickVolumeDown():Void{
		FlxG.sound.volume -= 0.1;
		updateVolume();
	}
	
	private function clickVolumeUp():Void{
		FlxG.sound.volume += 0.1;
		updateVolume();
	}
	
	private function updateVolume():Void{
		var vol:Int = Math.round(FlxG.sound.volume * 100);
		_barVolume.value = vol;
		_txtVolumeAmt.text = vol + "%";
	}
}