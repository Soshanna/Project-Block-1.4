package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

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
	private var _btnClearData:FlxButton;
	private var _save:FlxSave;
	
	override public function create():Void {
		_txtTitle = new FlxText(20, 0, 0, "Options", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtVolume = new FlxText(0, _txtTitle.y + _txtTitle.height + 200, 0, "Volume", 8);
		_txtVolume.alignment = CENTER;
		_txtVolume.screenCenter(FlxAxes.X);
		add(_txtVolume);
		
		_barVolume = new FlxBar(_txtVolume.x - 125, _txtVolume.y + _txtVolume.height + 2, LEFT_TO_RIGHT,300,30);
		_barVolume.createFilledBar(0xff464646, FlxColor.WHITE, true, FlxColor.WHITE);
		add(_barVolume);
		
		_btnVolumeDown = new FlxButton(_barVolume.x - 23,_barVolume.y, "-", clickVolumeDown);
		_btnVolumeDown.makeGraphic(20, 20, FlxColor.WHITE);
		_btnVolumeDown.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnVolumeDown);
		
		_btnVolumeUp = new FlxButton(_btnVolumeDown.x + _barVolume.width + 27, _btnVolumeDown.y, "+", clickVolumeUp);
		_btnVolumeUp.makeGraphic(20, 20, FlxColor.WHITE);
		_btnVolumeUp.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnVolumeUp);
		
		_txtVolumeAmt = new FlxText(0, 0, 200, (FlxG.sound.volume * 100) + "%", 8);
		_txtVolumeAmt.alignment = CENTER;
		_txtVolumeAmt.borderStyle = FlxTextBorderStyle.OUTLINE;
		_txtVolumeAmt.borderColor = 0xff464646;
		_txtVolumeAmt.y = _barVolume.y + (_barVolume.height / 2) - (_txtVolumeAmt.height / 2);
		_txtVolumeAmt.screenCenter(FlxAxes.X);
		add(_txtVolumeAmt);
		
		#if flash
		_btnClearData = new FlxButton((FlxG.width / 2) - 90, FlxG.height - 28, "Clear Sound", clickClearData);
		_btnClearData.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnClearData);
		#end
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back", clickMenu);
		_btnMenu.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnMenu);
		
		_save = new FlxSave();
		_save.bind("flixel-tutorial");
		
		updateVolume();
		
		FlxG.camera.fade(FlxColor.BLACK, .20, true);
		super.create();
	}
	
	#if flash
	private function clickClearData():Void{
		_save.erase();
		FlxG.sound.volume = .5;
		updateVolume();
	}
	#end
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
	}
	
	private function clickVolumeDown():Void{
		FlxG.sound.volume -= 0.1;
		_save.data.volume = FlxG.sound.volume;
		updateVolume();
	}
	
	private function clickVolumeUp():Void{
		FlxG.sound.volume += 0.1;
		_save.data.volume = FlxG.sound.volume;
		updateVolume();
	}
	
	private function updateVolume():Void{
		var vol:Int = Math.round(FlxG.sound.volume * 100);
		_barVolume.value = vol;
		_txtVolumeAmt.text = vol + "%";
	}
}