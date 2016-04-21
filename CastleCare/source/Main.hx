package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(1280, 720, MenuState));
		//1280,720 is the resolution for the phone. since the game is in landscape make the height of the phone the width of the game and the way around aswell.
	}
}