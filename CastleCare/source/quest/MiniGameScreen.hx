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
	var d:Int = 1;
	var a:Int = 0;
	
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
		
		backButton = new FlxButton((FlxG.width / 2) + 540, FlxG.height - 28, "Back", clickBack);
		add(backButton);
		
		makeItems();
		itemGroup.forEachAlive(checkItem);
	}
	
	function makeItems(){
		for (i in 1 ... 64){
			var random = Math.floor(Math.random() * 10);
			var item1:Item= new Item(itemClicked);
			
			if (random >= 5) {
				item1.loadGraphic("assets/img/red.png");
				item1.name = "Red";
			}else{
				item1.loadGraphic("assets/img/orange.png");
				item1.name = "Orange";
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
			item1.positionx = item1.x;
			item1.positiony = item1.y;
			
//			var rect:FlxRect = new FlxRect(item1.x - 120, item1.y - 80, 280, 200);
//			item1.enableMouseDrag(false, false, 255, null, null);
			itemGroup.add(item1);
			add(itemGroup);
			
			d += 1;
			if(d == 10){
				d = 1;
			}
		}
	}
	
	function collideItems(object1:Item, object2:Item){
		//object2.y = object1.positiony;
		//object2.x = object1.positionx;
	}
	
	function itemClicked(){
		a += 1;
		var object1;
		if(a == 1){
			object1 = FlxMouseControl.clickTarget;
		}
		if(a == 2){
			var object2 = FlxMouseControl.clickTarget;
			var posx:FlxPoint = object2.point;
			//var posy:Float = object2.y;
			object2.point = object1.point;
			//object2.y = object1.y;
			object1.point = posx;
			//object1.y = posy;
			a = 0;
			itemGroup.forEachAlive(checkItem);
		}
	}
	
	function clickBack() {
		FlxG.camera.fade(FlxColor.BLACK, .20, false ,function(){
			FlxG.switchState(new JobListState());
		});
	}
	
	function checkItem(item:Item){
		if(item.name == "Red"){
			
		}
		if(item.name == "Orange"){
			
		}
		itemGroup.forEachDead(replaceItem,false);
	}
	
	function replaceItem(dead:Item):Void{
		var random = Math.floor(Math.random() * 10);
		var item1:Item= new Item(itemClicked);
		
		if (random >= 5) {
			item1.loadGraphic("assets/img/red.png");
		}else{
			item1.loadGraphic("assets/img/orange.png");
		}
		replace(dead, item1);
	}
	
	override public function update(elapsed:Float):Void {
		//FlxG.overlap(itemGroup, itemGroup, collideItems);
		super.update(elapsed);
	}
}