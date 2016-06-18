package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.FlxObject;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.FlxG; 
import flixel.util.FlxColor;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import quest.HiddenObjectGame;
import quest.MiniGameScreen;
import flixel.util.FlxSave;

/**
 * ...
 * @author Soshanna Botter
 */
class Castle extends FlxState
{
	private var background:FlxSprite;
	private var _room1:FlxButton;
	private var _room2:FlxButton;
	private var _room3:FlxButton;
	private var _roomOne:FlxSprite;
	private var _roomTwo:FlxSprite;
	private var _roomThree:FlxSprite;
	private var myButton:FlxButton;
	private var talkButton:FlxButton;
	private var missionButton:FlxButton;
	var energy:Int;
	var timer:FlxTimer = new FlxTimer();
	var character:FlxSprite;
	var textBox:FlxSprite;
	var _txtCharacter:FlxText;
	var _txtRoom:FlxText;
	
	
	public function new() 
	{
		super();
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		energy = save.data.energy;
		save.close();
		
		myButton = new FlxButton(FlxG.stage.width - 180, 330, "", null);
      	myButton.loadGraphic("assets/img/Buttons/terug-3.png");
		
		missionButton = new FlxButton(390, 590, "", null);
      	missionButton.loadGraphic("assets/img/MissionButton.png");
		
		talkButton = new FlxButton(680, 590, "", null);
      	talkButton.loadGraphic("assets/img/TalkButton.png");
		
		textBox = new FlxSprite(0, 550, "assets/img/TextBoxText.png");
		textBox.screenCenter(X);
		
		_txtRoom = new FlxText(850, 40, 0, "", 45);
		_txtRoom.setFormat("assets/data/GLECB.TTF", 45, 0xFFFFFF);
		
		_txtCharacter = new FlxText(0, 140, 0, "Dit is nu niet beschikbaar!", 26);
		_txtCharacter.screenCenter(X);
		
		background = new FlxSprite(0, 0, "assets/img/castle-background.png");
		add(background);
		
		_room1 = new FlxButton(440,32,"",roomOne);
		_room1.loadGraphic("assets/img/room1.png");
		add(_room1);
		
		_room2 = new FlxButton(27,26,"",roomTwo);
		_room2.loadGraphic("assets/img/room2.png");
		add(_room2);
		
		_room3 = new FlxButton(28,360,"",roomThree);
		_room3.loadGraphic("assets/img/room3.png");
		add(_room3);
	}
	
	function removeCallback(){
		remove(_room1);
		remove(_room2);
		remove(_room3);
	}
	
	function addCallback(){
		add(_room1);
		add(_room2);
		add(_room3);
	}
	
	function roomOne()
	{
		removeCallback();
		_roomOne = new FlxSprite(0, 0, "assets/img/Bigroom-1.png");
		add(_roomOne);
		
		_txtRoom.text = "Troonzaal";
		add(_txtRoom);
		
		add(textBox);
		myButton.onDown.callback = removeRoom.bind(_roomOne);
		add(myButton);
		talkButton.onDown.callback = talkCat;
		add(talkButton);
		missionButton.onDown.callback = missionCat;
		add(missionButton);
		character = new FlxSprite(200, 480, "assets/img/Characters/cat.png");
		add(character);
	}

	function roomTwo()
	{
		removeCallback();
		_roomTwo = new FlxSprite(0, 0, "assets/img/Bigroom-2.png");
		add(_roomTwo);
		
		_txtRoom.text = "Architect Kamer";
		add(_txtRoom);
		
		add(textBox);
		myButton.onDown.callback = removeRoom.bind(_roomTwo);
		add(myButton);
		talkButton.onDown.callback = talkArchitect;
		add(talkButton);
		missionButton.onDown.callback = missionArchitect;
		add(missionButton);
		character = new FlxSprite(190, 480, "assets/img/Characters/architect.png");
		add(character);
	}
	
	function roomThree()
	{
		removeCallback();
		_roomThree = new FlxSprite(0, 0, "assets/img/Bigroom-3.png");
		add(_roomThree);
		
		_txtRoom.text = "Dokter Kamer";
		add(_txtRoom);
		
		add(textBox);
		myButton.onDown.callback = removeRoom.bind(_roomThree);
		add(myButton);
		talkButton.onDown.callback = talkDoctor;
		add(talkButton);
		missionButton.onDown.callback = missionDoctor;
		add(missionButton);
		character = new FlxSprite(190, 480, "assets/img/Characters/doctor.png");
		add(character);
	}
	
	function talkCat(){
		add(_txtCharacter);
		timer.start(2,removeText);
	}
	
	function missionCat(){
		add(_txtCharacter);
		timer.start(2,removeText);
	}
	
	function talkArchitect(){
		add(_txtCharacter);
		timer.start(2,removeText);
	}
	
	function missionArchitect(){
		if(energy >= 25){
			var save:FlxSave = new FlxSave();
			save.bind("Data");
			save.data.energy = (energy - 25);
			save.flush();
			save.close();
			FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
				FlxG.switchState(new HiddenObjectGame());
			});
		}else{
			add(_txtCharacter);
			timer.start(2,removeText);
		}
	}
	
	function talkDoctor(){
		add(_txtCharacter);
		timer.start(2,removeText);
	}
	
	function missionDoctor(){
		if(energy >= 25){
			var save:FlxSave = new FlxSave();
			save.bind("Data");
			save.data.energy = (energy - 25);
			save.flush();
			save.close();
			FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
				FlxG.switchState(new MiniGameScreen());
			});
		}else{
			add(_txtCharacter);
			timer.start(2,removeText);
		}
	}
	
	function removeText(timer:FlxTimer){
		remove(_txtCharacter);
	}
	
	function removeRoom(sprite:FlxSprite)
	{
		remove(sprite);
		remove(_txtRoom);
		remove(myButton);
		remove(talkButton);
		remove(missionButton);
		remove(textBox);
		remove(character);
		remove(_txtCharacter);
		addCallback();
	}	
}