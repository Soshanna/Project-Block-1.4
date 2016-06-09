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

/**
 * ...
 * @author Soshanna Botter
 */
class Castle extends FlxState
{
	private var _room1:FlxSprite;
	private var _room2:FlxSprite;
	private var _room3:FlxSprite;
	private var _room4:FlxSprite;
	private var _room5:FlxSprite;
	private var _room6:FlxSprite;

	
	private var _roomOne:FlxSprite;
	private var _roomTwo:FlxSprite;
	private var _roomThree:FlxSprite;
	private var _roomFour:FlxSprite;
	private var _roomFive:FlxSprite;
	private var _roomSix:FlxSprite;
	private var myButton:FlxSprite;

	public function new() 
	{
		super();
		
		_room1 = new FlxSprite();
		_room1.loadGraphic("assets/img/room1.png");
		_room1.x = 20;
		_room1.y = 20;
		add(_room1);
		FlxMouseEventManager.add(_room1, roomOne, null, null, null);
		
		_room2 = new FlxSprite();
		_room2.loadGraphic("assets/img/room2.png");
		_room2.x = 188;
		_room2.y = 20;
		add(_room2);
		FlxMouseEventManager.add(_room2, roomTwo, null, null , null); 
		
		_room3 = new FlxSprite();
		_room3.loadGraphic("assets/img/room3.png");
		_room3.x = 354;
		_room3.y = 20;
		add(_room3);
		FlxMouseEventManager.add(_room3, roomThree, null, null , null); 
		
		_room4 = new FlxSprite();
		_room4.loadGraphic("assets/img/room4.png");
		_room4.x = 20;
		_room4.y = 154;
		add(_room4);
		FlxMouseEventManager.add(_room4, roomFour, null, null , null); 
		
		_room5 = new FlxSprite();
		_room5.loadGraphic("assets/img/room5.png");
		_room5.x = 188;
		_room5.y = 155;
		add(_room5);
		FlxMouseEventManager.add(_room5, roomFive, null, null , null); 
		
		_room6 = new FlxSprite();
		_room6.loadGraphic("assets/img/room6.png");
		_room6.x = 354;
		_room6.y = 155;
		add(_room6);
		FlxMouseEventManager.add(_room6, roomSix, null, null , null);
	}
	
	public function roomOne(sprite:FlxSprite)
	{
		_roomOne = new FlxSprite();
		_roomOne.loadGraphic("assets/img/room1.png");
		_roomOne.x = 82;
		_roomOne.y = 73;
		_roomOne.scale.set(1.5, 1.5);
		add(_roomOne);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}

	public function roomTwo(sprite:FlxSprite)
	{
		_roomTwo = new FlxSprite();
		_roomTwo.loadGraphic("assets/img/room2.png");
		_roomTwo.x = 82;
		_roomTwo.y = 73;
		_roomTwo.scale.set(1.5, 1.5);
		add(_roomTwo);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}
	
	public function roomThree(sprite:FlxSprite)
	{
		_roomThree = new FlxSprite();
		_roomThree.loadGraphic("assets/img/room3.png");
		_roomThree.x = 82;
		_roomThree.y = 73;
		_roomThree.scale.set(1.5, 1.5);
		add(_roomThree);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}
	
	public function roomFour(sprite:FlxSprite)
	{
		_roomFour = new FlxSprite();
		_roomFour.loadGraphic("assets/img/room4.png");
		_roomFour.x = 82;
		_roomFour.y = 73;
		_roomFour.scale.set(1.5, 1.5);
		add(_roomFour);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}
	
	public function roomFive(sprite:FlxSprite)
	{
		_roomFive = new FlxSprite();
		_roomFive.loadGraphic("assets/img/room5.png");
		_roomFive.x = 82;
		_roomFive.y = 73;
		_roomFive.scale.set(1.5, 1.5);
		add(_roomFive);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}
	
	public function roomSix(sprite:FlxSprite)
	{
		_roomSix = new FlxSprite();
		_roomSix.loadGraphic("assets/img/room6.png");
		_roomSix.x = 82;
		_roomSix.y = 73;
		_roomSix.scale.set(1.5, 1.5);
		add(_roomSix);
		
		myButton = new FlxSprite();
      	myButton.loadGraphic("assets/img/left-1.png");
		add(myButton);
		myButton.x = 20;
		myButton.y = 320;
		FlxMouseEventManager.add(myButton, smallRooms, null, null , null); 
	}
	
	public function smallRooms(sprite:FlxSprite)
	{
		remove(myButton);
		remove(_roomOne);
		remove(_roomTwo);
		remove(_roomThree);
		remove(_roomFour);
		remove(_roomFive);
		remove(_roomSix);
		
		add(_room1);
		add(_room2);
		add(_room3);
		add(_room4);
		add(_room5);
		add(_room6);
	}
	
}