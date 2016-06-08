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
	var backButton:FlxButton;
	var _txtScore:FlxText;
	var _txtTurns:FlxText;
	var _txtMaxScore:FlxText;
	var rowArray:Array<Item> = new Array<Item>();
	var d:Int = 1;
	var a:Int = 0;
	var b:Int = 0;
	var object1 = null;
	var score = 0;
	var turns:Int = 25;
	var maxScore:Int = 50;
	
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
		
		backButton = new FlxButton((FlxG.width / 2) + 428, FlxG.height - 125, "", clickBack);
		backButton.loadGraphic("assets/img/Buttons/terug-3.png");
		backButton.onDown.callback = buttonPress;
		add(backButton);
		
		makeItems();
		//itemGroup.forEachAlive(checkItem, false);
		//itemGroup.forEachAlive(checkItem, false);
	}
	
	function buttonPress(){
		backButton.loadGraphic("assets/img/Buttons/terug-4.png");
	}
	
	function makeItems(){
		for (i in 0 ... 21){
			var random:Int = Math.floor(Math.random() * 100);
			var item1:Item = new Item();
			item1.onDown.callback = itemClicked.bind(item1);
			if(random <= 25) {
				item1.loadGraphic("assets/img/Minigame/AppleButton.png");
				item1.name = "Red";
			}else if(random <= 50){
				item1.loadGraphic("assets/img/Minigame/BananaButton.png");
				item1.name = "Orange";
			}else if(random <= 75){
				item1.loadGraphic("assets/img/Minigame/BurgerButton.png");
				item1.name = "Purple";
			}else if(random <= 100){
				item1.loadGraphic("assets/img/Minigame/WaterMelonButton.png");
				item1.name = "Green";
			}if(i <= 5){
				item1.x = 60 + (175 * d);
				item1.y = 60;	
			}if(i > 5){
				item1.x = 60 + (175 * d);
				item1.y = 220;
			}if(i > 10){
				item1.x = 60 + (175 * d);
				item1.y = 380;
			}if(i > 15){
				item1.x = 60 + (175 * d);
				item1.y = 540;
			}
			item1.arrayID = b;
			b += 1;
			rowArray.push(item1);
			itemGroup.add(item1);
			add(itemGroup);
			d += 1;
			if(d == 5){
				d = 0;
			}
		}
	}

	function itemClicked(button:Item){//*BUGGED*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		a += 1;
		if(a == 1){
			object1 = button;
			trace(object1);
		}
		if(a == 2){
			var object2 = button;
			trace(object2);
			var pos = rowArray[object2.arrayID];
			rowArray[object2.arrayID] = rowArray[object1.arrayID];
			rowArray[object1.arrayID] = pos;
			//itemGroup.forEachAlive(checkItem);
			a = 0;
			turns -= 1;
			_txtTurns.text = "Turns: " + turns;
		}
		trace(a);
	}
	
	function clickBack() {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	/*function checkItem(item:Item) {	
		var itemColor:String;
		if(item.name == "Red"){
			itemColor = "Red";
		}else if(item.name == "Orange"){
			itemColor = "Orange";
		}else if(item.name == "Purple"){
			itemColor = "Purple";
		}else if(item.name == "Green"){
			itemColor = "Green";
		}else if(item.name == "Yellow"){
			itemColor = "Yellow";
		}
		if (item.name == itemColor || item.name == itemColor + " MARKED") {//check color
			item.name == itemColor + " MARKED";
			if (item.arrayID == 0) {//first block
				if (rowArray[item.arrayID +1].name == itemColor) {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID +9].name == itemColor) {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if (item.arrayID == 62) {//last block
				if (rowArray[item.arrayID -1].name == itemColor) {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID -9].name == itemColor) {//check if there is an unmarked above
					rowArray[item.arrayID -9].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID -9]);
				}else {
					checkItem(/*lastmarkeditem);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(item.arrayID <= 9){//first row
				if (rowArray[item.arrayID +1].name == itemColor) {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == itemColor) {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID +9].name == itemColor) {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(item.arrayID >= 53){//last row
				if (rowArray[item.arrayID +1].name == itemColor) {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == itemColor) {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == itemColor + " MARKED";
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID -9].name == itemColor) {//check if there is an unmarked above
					rowArray[item.arrayID +9].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(item.arrayID > 9 && item.arrayID < 53){//The rest
				if (rowArray[item.arrayID +1].name == itemColor) {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == itemColor) {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID +9].name == itemColor) {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else if (rowArray[item.arrayID -9].name == itemColor) {//check if there is an unmarked above
					rowArray[item.arrayID -9].name == itemColor + " MARKED";	
					checkItem(rowArray[item.arrayID -9]);
				}else {
					checkItem(/*lastmarkeditem);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}
		}
		_txtScore.text = "Score: " + score;
	}*/
	
	function removeMarked(item:Item){
		
		if(item.name == "Red MARKED"){
			replaceItem(item, Math.floor(Math.random() * 100));
		}else if(item.name == "Orange MARKED"){
			replaceItem(item, Math.floor(Math.random() * 100));
		}else if(item.name == "Purple MARKED"){
			replaceItem(item, Math.floor(Math.random() * 100));
		}else if(item.name == "Green MARKED"){
			replaceItem(item, Math.floor(Math.random() * 100));
		}else if(item.name == "Yellow MARKED"){
			replaceItem(item, Math.floor(Math.random() * 100));
		}
	}
	
	function replaceItem(item1:Item, random){
		if(random <= 25) {
			item1.loadGraphic("assets/img/Minigame/AppleButton.png");
			item1.name = "Red";
		}else if(random <= 50){
			item1.loadGraphic("assets/img/Minigame/BananaButton.png");
			item1.name = "Orange";
		}else if(random <= 75){
			item1.loadGraphic("assets/img/Minigame/BurgerButton.png");
			item1.name = "Purple";
		}else if(random <= 100){
			item1.loadGraphic("assets/img/Minigame/WaterMelonButton.png");
			item1.name = "Green";
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