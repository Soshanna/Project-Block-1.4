package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class PlayState extends FlxState
{
	private var _btnMenu:FlxButton;
	private var _btnEnergyUp:FlxButton;
	private var _btnEnergyDown:FlxButton;
	private var _txtTitle:FlxText;
	private var _barEnergy:FlxBar;
	private var _txtbar:FlxText;
	private var _timer:FlxTimer;
	
	override public function create():Void
	{
		_txtTitle = new FlxText(20, 0, 0, "This is the PlayState", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_barEnergy = new FlxBar((FlxG.width / 2)- 115, FlxG.height - 250, LEFT_TO_RIGHT, 250, 15);
		_barEnergy.createFilledBar(0xff464646, FlxColor.LIME, true, FlxColor.GREEN);
		add(_barEnergy);
		
		_btnEnergyDown = new FlxButton(_barEnergy.x , FlxG.height - 200 , "Energy Down", energyDown);
		_btnEnergyDown.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnEnergyDown);
		
		_txtbar = new FlxText(_barEnergy.x + (_barEnergy.width/2)- 30, _barEnergy.y - 40 + 40, 0, "Energybar", 8);
		add(_txtbar);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back to Menu", clickMenu);
		_btnMenu.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnMenu);
		
		_timer = new FlxTimer();
		_timer.start(, energyUp, 0);
		
		FlxG.camera.fade(FlxColor.BLACK, .33, true);
		super.create();
	}
	
	private function energyUp(Timer:FlxTimer):Void
	{
		_barEnergy.value += 0.3;
		_barEnergy.updateBar();
	}
	
	private function energyDown():Void
	{
		_barEnergy.value -= 20;
		_barEnergy.updateBar();
	}

	private function clickMenu():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, .33, false, function()
		{
			FlxG.switchState(new MenuState());
		});
	}
}