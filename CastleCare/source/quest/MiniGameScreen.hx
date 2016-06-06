package quest;

import flixel.addons.plugin.FlxMouseControl;
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
	var backButton:FlxButton;
	var _txtTitle:FlxText;
	var _txtScore:FlxText;
	var rowArray:Array<Item> = new Array<Item>();
	var d:Int = 1;
	var a:Int = 0;
	var b:Int = 0;
	var object1 = null;
	var score = 0;
	
	override public function create():Void {
		super.create();
		FlxG.plugins.add(new FlxMouseControl());
		
		var whiteSquare = new FlxSprite();
		whiteSquare.makeGraphic(1100, 600, FlxColor.WHITE);
		whiteSquare.x = 100;
		whiteSquare.y = 50;
		add(whiteSquare);
		
		_txtTitle = new FlxText(20, 0, 0, "Mini Game Screen", 15);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);
		
		_txtScore = new FlxText(20, 20, 0, "Score: " + score, 15);
		add(_txtScore);
		
		backButton = new FlxButton((FlxG.width / 2) + 540, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		makeItems();
		itemGroup.forEachAlive(checkItem);
	}
	
	function makeItems(){
		for (i in 1 ... 64){
			var random:Int = Math.floor(Math.random() * 100);
			var item1:Item = new Item();
			item1.onDown.callback = itemClicked.bind(item1);
			if(random <= 20) {
				item1.loadGraphic("assets/img/red.png");
				item1.name = "Red";
			}else if(random <= 40){
				item1.loadGraphic("assets/img/orange.png");
				item1.name = "Orange";
			}else if(random <= 60){
				item1.loadGraphic("assets/img/purple.png");
				item1.name = "Purple";
			}else if(random <= 80){
				item1.loadGraphic("assets/img/green.png");
				item1.name = "Green";
			}else if(random <= 100){
				item1.loadGraphic("assets/img/yellow.png");
				item1.name = "Yellow";
			}if(i <= 9){
				item1.x = 120 * d;
				item1.y = 80;	
			}if(i > 9){
				item1.x = 120 * d;
				item1.y = 160;
			}if(i > 18){
				item1.x = 120 * d;
				item1.y = 240;
			}if(i > 27){
				item1.x = 120 * d;
				item1.y = 320;
			}if(i > 36){
				item1.x = 120 * d;
				item1.y = 400;
			}if(i > 45){
				item1.x = 120 * d;
				item1.y = 480;
			}if(i > 54){
				item1.x = 120 * d;
				item1.y = 560;
			}
			item1.arrayID = b;
			b += 1;
			rowArray.push(item1);
			itemGroup.add(item1);
			add(itemGroup);
			d += 1;
			if(d == 10){
				d = 1;
			}
		}
	}

	function itemClicked(button:Item){
		a += 1;
		if(a == 1){
			object1 = button;
		}
		if(a == 2){
			var object2 = button;
			var posx:Float = object2.x;
			var posy:Float = object2.y;
			object2.x = object1.x;
			object2.y = object1.y;
			object1.x = posx;
			object1.y = posy;
			itemGroup.forEachAlive(checkItem);
			a = 0;
		}
	}
	
	function clickBack() {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	function checkItem(item:Item){
		if(item.arrayID == 0){
			trace("first in the row");
		}
		else if(item.arrayID == 63){
			trace("last in the row");
		}
		else if(item.arrayID != 0){
			if(item.name == "Red"){
				if(rowArray[item.arrayID -1].name == "Red" && rowArray[item.arrayID +1].name == "Red"){
					rowArray[item.arrayID -1].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +1].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("red match hor");
				}
				if(item.arrayID > 9 && item.arrayID < 54){
					if (rowArray[item.arrayID -9].name == "Red" && rowArray[item.arrayID +9].name == "Red"){
					rowArray[item.arrayID -9].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +9].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("red match ver");
					}
				}
				else{
					trace("no match");
				}
			}
			else if(item.name == "Orange"){
				if (rowArray[item.arrayID -1].name == "Orange" && rowArray[item.arrayID +1].name == "Orange"){
					rowArray[item.arrayID -1].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +1].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("orange match hor");
				}
				if(item.arrayID > 9 && item.arrayID < 54){
					if (rowArray[item.arrayID -9].name == "Orange" && rowArray[item.arrayID +9].name == "Orange"){
					rowArray[item.arrayID -9].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +9].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Orange match ver");
					}
				}
				else{
					trace("no match");
				}
			}
			else if(item.name == "Green"){
				if (rowArray[item.arrayID -1].name == "Green" && rowArray[item.arrayID +1].name == "Green"){
					rowArray[item.arrayID -1].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +1].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Green match hor");
				}
				if(item.arrayID > 9 && item.arrayID < 54){
					if (rowArray[item.arrayID -9].name == "Green" && rowArray[item.arrayID +9].name == "Green"){
					rowArray[item.arrayID -9].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +9].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Green match ver");
					}
				}
				else{
					trace("no match");
				}
			}
			else if(item.name == "Purple"){
				if (rowArray[item.arrayID -1].name == "Purple" && rowArray[item.arrayID +1].name == "Purple"){
					rowArray[item.arrayID -1].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +1].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Purple match hor");
				}
				if(item.arrayID > 9 && item.arrayID < 54){
					if (rowArray[item.arrayID -9].name == "Purple" && rowArray[item.arrayID +9].name == "Purple"){
					rowArray[item.arrayID -9].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +9].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Purple match ver");
					}
				}
				else{
					trace("no match");
				}
			}
			else if(item.name == "Yellow"){
				if (rowArray[item.arrayID -1].name == "Yellow" && rowArray[item.arrayID +1].name == "Yellow"){
					rowArray[item.arrayID -1].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +1].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Yellow match hor");
				}
				if(item.arrayID > 9 && item.arrayID < 54){
					if (rowArray[item.arrayID -9].name == "Yellow" && rowArray[item.arrayID +9].name == "Yellow"){
					rowArray[item.arrayID -9].replaceItem(Math.floor(Math.random() * 10));
					item.replaceItem(Math.floor(Math.random() * 10));
					rowArray[item.arrayID +9].replaceItem(Math.floor(Math.random() * 10));
					score += 3;
					trace("Yellow match ver");
					}
				}
				else{
					trace("no match");
				}
			}
		}
	}
	
	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	}
}