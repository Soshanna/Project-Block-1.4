package quest;

import flixel.FlxG;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

/**
 * ...
 * @author Fimme Neeleman
 */
class HiddenObjectGame extends FlxState
{
	var PosArray:Array<Int> = new Array<Int>();
	var energy:Int;
	var itemCounter:Int = 0;
	var button:FlxButton;
	var currency:Int;
	
	override public function create():Void
	{
		var room:FlxSprite = new FlxSprite();
		room.loadGraphic("assets/images/hiddenobjectgame3.jpg");
		add(room);
		
		for (i in 0...6){
			var posx:Int = 400 - (50 * i);
			var posy:Int = 110;
			PosArray.push(posx);
			PosArray.push(posy);
		}
		displayButtons();
	}
	
	function displayButtons()
	{
		var hammer:FlxButton = new FlxButton(465, 565);
		hammer.loadGraphic("assets/images/hammer.png");
		hammer.onDown.callback = onClicked.bind(hammer);
		hammer.scale.x = .77;
		hammer.scale.y = .77;
		add(hammer);
		
		var chisel:FlxButton = new FlxButton(900, 630);
		chisel.loadGraphic("assets/images/Chisel.png");
		chisel.onDown.callback = onClicked.bind(chisel);
		add(chisel);
		
		var axe:FlxButton = new FlxButton(500, 555);
		axe.loadGraphic("assets/images/Axe.png");
		axe.onDown.callback = onClicked.bind(axe);
		add(axe);
		
		var saw:FlxButton = new FlxButton(268, 428);
		saw.loadGraphic("assets/images/saw.png");
		saw.onDown.callback = onClicked.bind(saw);
		add(saw);
		
		var shovel:FlxButton = new FlxButton(425, 410);
		shovel.loadGraphic("assets/images/Shovel.png");
		shovel.onDown.callback = onClicked.bind(shovel);
		add(shovel);
		
		button = new FlxButton(1065, 580, "", back);
		button.loadGraphic("assets/img/Buttons/terug-3.png");
		add(button);
	}
	
	function onClicked(button:FlxButton)
	{
		button.y = PosArray.pop();
		button.x = PosArray.pop();
		itemCounter += 1;
		if (itemCounter == 5)
		{
			win();
		}
	}

	function win(){
		var background:FlxSprite = new FlxSprite();
		background.makeGraphic(Std.int(FlxG.stage.width), Std.int(FlxG.stage.height), FlxColor.BLACK);
		add(background);
		
		var winText:FlxText = new FlxText(0, 150, 0, "Je hebt de kamer schoon gemaakt!", 30);
		winText.screenCenter(X);
		add(winText);
		
		var scoreText:FlxText = new FlxText(0, 200, 0, "Je hebt $100 verdient", 20);
		scoreText.screenCenter(X);
		add(scoreText);
		
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		currency = save.data.currency;
		energy = save.data.energy;
		save.data.energy = (energy - 25);
		save.data.currency = (currency + 100);
		save.flush();
		save.close();
		
		button = new FlxButton(550, 350, "", back);
		button.loadGraphic("assets/img/Buttons/terug-3.png");
		add(button);
	}
	
	function back(){
		var save:FlxSave = new FlxSave();
		save.bind("Data");
		energy = save.data.energy;
		save.data.energy = (energy - 25);
		save.flush();
		save.close();
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new PlayState());
		});
	}
}