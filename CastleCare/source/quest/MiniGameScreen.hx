package quest;

import flixel.FlxBasic;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import quest.JobListState;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.display.FlxExtendedSprite;
import flixel.FlxSprite;
import flixel.util.FlxSpriteUtil;
import flixel.group.FlxSpriteGroup;
import flixel.FlxObject;
using flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Fimme Neeleman
 */
class MiniGameScreen extends FlxState
{
	var itemGroup:FlxTypedSpriteGroup<Item> = new FlxTypedSpriteGroup<Item>(0, 0, 63);
	var rowArray:Array<Item> = new Array<Item>();
	var backButton:FlxButton;
	var _txtScore:FlxText;
	var _txtTurns:FlxText;
	var _txtMaxScore:FlxText;
	var a:Int = 0;
	var b:Int = 0;
	var object1 = null;
	var score = 0;
	var turns:Int = 25;
	var maxScore:Int = 50;
	var typeCount:Int = 0;
	var lastType:Int = 0;
	var lastCount:Int = 0;
	
	override public function create():Void {
		super.create();
		
		var backGround:FlxSprite = new FlxSprite(0,0,"assets/img/Minigame/Minigame Background.png");
		add(backGround);
		
		_txtScore = new FlxText(1010, 80, 0, "Score: "+ score, 32);
		add(_txtScore);
		
		_txtTurns = new FlxText(1010, 260, 0, "Turns: " + turns, 32);
		add(_txtTurns);
		
		_txtMaxScore = new FlxText(1010, 370, 0, "Goal: " + maxScore, 32);
		add(_txtMaxScore);
		
		backButton = new FlxButton(1065, 580, "", buttonPress);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		add(backButton);
		
		makeItems();
		
		for(i in 0...(rowArray.length)){
			checkItemHor(rowArray[i], i);
		}for (i in 0...rowArray.length){
			if(i <= 3){
				checkItemVer(rowArray[(i * 5)], i);	
			}else if(i <= 7){
				checkItemVer(rowArray[((i - 4) * 5) + 1], i);
			}else if(i <= 11){
				checkItemVer(rowArray[((i - 8) * 5) + 2], i);
			}else if(i <= 15){
				checkItemVer(rowArray[((i - 12) * 5) + 3], i);
			}else if(i <= 19){
				checkItemVer(rowArray[((i - 16) * 5) + 4], i);
			}
		}for(i in 0...rowArray.length){
			removeMarked(rowArray[i]);
		}
	}
	
	function buttonPress(){
		backButton.loadGraphic("assets/img/Buttons/terug-4.png");
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	function makeItems(){
		for (i in 0 ... 20){
			var random:Int = Math.floor(Math.random() * 100);
			var item1:Item = new Item();
			item1.onDown.callback = itemClicked.bind(item1);
			if(random <= 25) {
				item1.loadGraphic("assets/img/Minigame/AppleButton.png");
				item1.type = 1;
			}else if(random <= 50){
				item1.loadGraphic("assets/img/Minigame/BananaButton.png");
				item1.type = 2;
			}else if(random <= 75){
				item1.loadGraphic("assets/img/Minigame/BurgerButton.png");
				item1.type = 3;
			}else if(random <= 100){
				item1.loadGraphic("assets/img/Minigame/WaterMelonButton.png");
				item1.type = 4;
			}if(i < 5){
				item1.x = 60 + (175 * (i));
				item1.y = 60;	
			}if(i >= 5){
				item1.x = 60 + (175 * (i - 5));
				item1.y = 220;
			}if(i >= 10){
				item1.x = 60 + (175 * (i - 10));
				item1.y = 380;
			}if(i >= 15){
				item1.x = 60 + (175 * (i - 15));
				item1.y = 540;
			}
			item1.arrayID = b;
			b += 1;
			rowArray.push(item1);
			itemGroup.add(item1);
			add(itemGroup);
		}
	}

	function itemClicked(button:Item){//*BUGGED*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		a += 1;
		if(a == 1){
			object1 = button;
			object1.onDown.callback = null;
		}
		if(a == 2){
			var object2 = button;
			var pos = object2.arrayID;
			var posx = object2.x;
			var posy = object2.y;
			object2.arrayID = object1.arrayID;
			object1.arrayID = pos;
			object2.x = object1.x;
			object2.y = object1.y;
			object1.x = posx;
			object1.y = posy;
			a = 0;
			turns -= 1;
			_txtTurns.text = "Turns: " + turns;
			object1.onDown.callback = itemClicked.bind(object1);
		}
	}
	
	function checkItemHor(item:Item, i:Int) {	
		if(i == 5 || i == 10 || i == 15){
			typeCount = 0;
		}
		else{
			if(rowArray[item.arrayID -1] != null){
				lastType = rowArray[item.arrayID -1].type;
			}
			if (lastType != item.type) {
				lastCount = typeCount;
				if(lastCount >= 3) {
					for(i in 1...(typeCount + 1)){
						rowArray[item.arrayID - i].name = "MARKED";	
					}
				}
				typeCount = 1;
			}else if(lastType == item.type){
				typeCount ++;
			}
		}
	}
	
	function checkItemVer(item:Item, i:Int) {	
		if(i == 1 || i == 2 || i == 3 || i == 4){
			typeCount = 0;
		}
		else{
			if(rowArray[item.arrayID -5] != null){
				lastType = rowArray[item.arrayID -5].type;
			}
			if (lastType != item.type) {
				lastCount = typeCount;
				if(lastCount >= 3) {
					for(i in 1...(typeCount + 1)){
						rowArray[item.arrayID - i].name = "MARKED";	
					}
				}
				typeCount = 1;
			}else if(lastType == item.type){
				typeCount ++;
			}
		}
	}
	
	function removeMarked(item:Item){
		if (item.name == "MARKED"){
			trace(item.arrayID + " = MARKED");
			remove(item);
			score ++;
			item.name = null;
		}
	}

	function replaceItem(item1:Item, random){
		if(random <= 25) {
			item1.loadGraphic("assets/img/Minigame/AppleButton.png");
			item1.type = 1;
		}else if(random <= 50){
			item1.loadGraphic("assets/img/Minigame/BananaButton.png");
			item1.type = 2;
		}else if(random <= 75){
			item1.loadGraphic("assets/img/Minigame/BurgerButton.png");
			item1.type = 3;
		}else if(random <= 100){
			item1.loadGraphic("assets/img/Minigame/WaterMelonButton.png");
			item1.type = 4;
		}
	}
	
	override public function update(elapsed:Float):Void {
		if(score >= maxScore){
			trace("WIN");
		}
		if(turns == 0){
			trace("LOSE");
		}
		super.update(elapsed);
	}
}