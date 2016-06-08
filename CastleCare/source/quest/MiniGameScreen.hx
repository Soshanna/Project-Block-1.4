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
	var _txtTurns:FlxText;
	var _txtMaxScore:FlxText;
	var rowArray:Array<Item> = new Array<Item>();
	var d:Int = 1;
	var a:Int = 0;
	var b:Int = 0;
	var object1 = null;
	var score = 0;
	var turns:Int = 50;
	var maxScore:Int = 200;
	
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
		
		_txtTurns = new FlxText(200, 20, 0, "Turns Left: " + turns, 15);
		add(_txtTurns);
		
		_txtMaxScore = new FlxText(400, 20, 0, "Goal: " + maxScore, 15);
		add(_txtMaxScore);
		
		backButton = new FlxButton((FlxG.width / 2) + 540, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		makeItems();
		itemGroup.forEachAlive(checkItem, false);
		itemGroup.forEachAlive(checkItem, false);
	}
	
	function makeItems(){
		for (i in 1 ... 64){
			var random:Int = Math.floor(Math.random() * 100);
			var item1:Item = new Item();
			item1.onDown.callback = itemClicked.bind(item1);
			//if(random <= 20) {
				item1.loadGraphic("assets/img/red.png");
				item1.name = "Red";
			/*}else if(random <= 40){
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
			}*/if(i <= 9){
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
			itemGroup.forEachAlive(checkItem);
			a = 0;
			turns -= 1;
			_txtTurns.text = "Turns Left: " + turns;
		}
		trace(a);
	}
	
	function clickBack() {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	function checkItem(item:Item) {	
		if (item.name == "Red" || item.name == "Red MARKED") {//check color
			item.name == "Red MARKED";
			if (rowArray[item.arrayID] == 0) {//first block
				if (rowArray[item.arrayID +1].name == "Red") {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == "Red MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID +9].name == "Red") {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == "Red MARKED";
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem*/);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if (rowArray[item.arrayID] == 62) {//last block
				if (rowArray[item.arrayID -1].name == "Red") {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID -9].name == "Red") {//check if there is an unmarked above
					rowArray[item.arrayID -9].name == "Red MARKED";
					checkItem(rowArray[item.arrayID -9]);
				}else {
					checkItem(/*lastmarkeditem*/);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(rowArray[item.arrayID] <= 9){//first row
				if (rowArray[item.arrayID +1].name == "Red") {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == "Red MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == "Red") {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == "Red MARKED";
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID +9].name == "Red") {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem*/);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(rowArray[item.arrayID] >= 53){//last row
				if (rowArray[item.arrayID +1].name == "Red") {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == "Red MARKED";
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == "Red") {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == "Red MARKED";
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID -9].name == "Red") {//check if there is an unmarked above
					rowArray[item.arrayID +9].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else {
					checkItem(/*lastmarkeditem*/);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}else if(rowArray[item.arrayID] > 9 && rowArray[item.arrayID] < 53){//The rest
				if (rowArray[item.arrayID +1].name == "Red") {//check if there is an unmarked to the right
					rowArray[item.arrayID +1].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID +1]);
				}else if (rowArray[item.arrayID -1].name == "Red") {//check if there is an unmarked to the left
					rowArray[item.arrayID -1].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID -1]);
				}else if (rowArray[item.arrayID +9].name == "Red") {//check if there is an unmarked under
					rowArray[item.arrayID +9].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID +9]);
				}else if (rowArray[item.arrayID -9].name == "Red") {//check if there is an unmarked above
					rowArray[item.arrayID -9].name == "Red MARKED";	
					checkItem(rowArray[item.arrayID -9]);
				}else {
					checkItem(/*lastmarkeditem*/);//go back to last marked, then look if that marked one has unmarked around it. if not go back to the one before and repeat this
				}
			}
		}
		_txtScore.text = "Score: " + score;
	}
	
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
		//if(random <= 20) {
			item1.loadGraphic("assets/img/red.png");
			item1.name = "Red";
		/*}else if(random <= 40){
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
		}*/
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