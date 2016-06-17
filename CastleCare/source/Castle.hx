package;

import flash.display.Sprite;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.FlxObject;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.FlxG; 
import flixel.util.FlxColor;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

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
	var _txtRoom:FlxText;
	
	
	public function new() 
	{
		super();
		myButton = new FlxButton(0, 600, "", null);
		myButton.screenCenter(X);
      	myButton.loadGraphic("assets/img/Buttons/terug-3.png");
		
		_txtRoom = new FlxText(850, 40, 0, "", 45);
		_txtRoom.setFormat("assets/data/GLECB.TTF", 45, 0xFFFFFF);
		
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
		
		myButton.onDown.callback = removeRoom.bind(_roomOne);
		add(myButton);
	}

	function roomTwo()
	{
		removeCallback();
		_roomTwo = new FlxSprite(0, 0, "assets/img/Bigroom-2.png");
		add(_roomTwo);
		
		_txtRoom.text = "Lege Kamer";
		add(_txtRoom);
		
		myButton.onDown.callback = removeRoom.bind(_roomTwo);
		add(myButton);
	}
	
	function roomThree()
	{
		removeCallback();
		_roomThree = new FlxSprite(0, 0, "assets/img/Bigroom-3.png");
		add(_roomThree);
		
		_txtRoom.text = "Lege Kamer";
		add(_txtRoom);
		
		myButton.onDown.callback = removeRoom.bind(_roomThree);
		add(myButton);
	}
	
	function removeRoom(sprite:FlxSprite)
	{
		remove(sprite);
		remove(_txtRoom);
		remove(myButton);
		addCallback();
	}	
}