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
	private var _barMood:FlxBar;
	private var _txtbarE:FlxText;
	private var _txtbarM:FlxText;
	private var _txtMood:FlxText;
	
	override public function create():Void{
		_txtTitle = new FlxText(20, 0, 0, "This is the PlayState", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtMood = new FlxText(_txtTitle.x, _txtTitle.y + 80, 0, "Mood = Happy", 15);
		add(_txtMood);
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 10, FlxG.height - 28, "Back to Menu", clickMenu);
		_btnMenu.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnMenu);
		
		_barEnergy = new FlxBar(_btnMenu.x, _btnMenu.y - 35, LEFT_TO_RIGHT, 200, 15);
		_barEnergy.createFilledBar(0xff464646, FlxColor.LIME, true, FlxColor.GREEN);
		_barEnergy.value = 100;
		add(_barEnergy);
		
		_barMood = new FlxBar(_barEnergy.x, _barEnergy.y - 25, LEFT_TO_RIGHT, 200, 15);
		_barMood.createFilledBar(0xff464646, FlxColor.LIME, true, FlxColor.GREEN);
		add(_barMood);
		
		_btnEnergyDown = new FlxButton((FlxG.width / 2) - 40, FlxG.height - 200 , "Perform Task", energyDown);
		_btnEnergyDown.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		add(_btnEnergyDown);
		
		_txtbarE = new FlxText(_barEnergy.x + (_barEnergy.width/2)- 20, _barEnergy.y - 40 + 40, 0, "Energybar", 8);
		add(_txtbarE);
		
		_txtbarM = new FlxText(_barMood.x + (_barMood.width/2)- 20, _barMood.y - 40 + 40, 0, "Stressbar", 8);
		add(_txtbarM);
		
		FlxG.camera.fade(FlxColor.BLACK, .20, true);
		
		super.create();
	}
	
	private function energyUp():Void{
		_barEnergy.value += 0.0333333333333333;
		_barEnergy.update;
	}
	
	private function stressDown():Void{
		_barMood.value -= 0.0333333333333333;
		_barMood.update;
		var timeLast = Date.fromString;
		var text11:FlxText = new FlxText(0, 0, 0, "Hi " + timeLast);
		add(text11);
	}
	
	private function energyDown():Void {
	    if (_barEnergy.value == 0){
			_barMood.value = 100;
		}	
		if (_barEnergy.value <= 20){
			_barMood.value += 40;
		}
		if (_barEnergy.value <= 40){
			_barMood.value += 30;
		}
		if (_barEnergy.value <= 60){
			_barMood.value += 20;
		}
		if (_barEnergy.value <= 80){
			_barMood.value += 10;
		}
		if (_barEnergy.value <= 100){
			_barMood.value += 5;
		}
		_barEnergy.value -= 20;
		_barEnergy.updateBar();
	}

	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
	}
	
	override public function update(elapsed:Float):Void {
		if(_barMood.value >= 10){
			_txtMood.text = "Mood = Stressed";
			_txtMood.update;
		}
		if(_barMood.value >= 20){
			_txtMood.text = "Mood = Annoyed";
			_txtMood.update;
		}
		if(_barMood.value >= 50){
			_txtMood.text = "Mood = Pissed";
			_txtMood.update;
		}
		if(_barMood.value >= 80){
			_txtMood.text = "Mood = Angry";
			_txtMood.update;
		}
		
		super.update(elapsed);
	}
}