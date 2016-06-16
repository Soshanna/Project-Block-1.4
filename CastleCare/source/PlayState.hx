package;

import flixel.ui.FlxBar;
import menu.MenuState;
import quest.JobListState;
import upgrade.UpgradeMenuState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import sys.db.Sqlite;
import sys.db.Connection;

class PlayState extends FlxState
{
	public var energy:Int = 100;
	public var currency:Int = 0;
	var _btnMenu:FlxButton;
	var _btnQuest:FlxButton;
	var _btnUpgradeMenu:FlxButton;
	var energySymbol:FlxSprite;
	var text:FlxText;
	var energyBar:FlxBar;
	var _castleNavigation:Castle;
	var timeDB:Date;
	var rightNow:Date = Date.now();
	
	override public function create():Void{
		var cnx = Sqlite.open("assets/data/saveFile.db");
		var resultSet = cnx.request("SELECT Energy, currency FROM Energy");
		for (row in resultSet) {
			energy = row.Energy;
			currency = row.currency;
		}
		cnx.close();
		
		_castleNavigation = new Castle();
		add(_castleNavigation);	
		
		var _btnMenu:FlxButton = new FlxButton (0, 0, "", clickMenu);
		_btnMenu.loadGraphic("assets/img/Buttons/terug-3.png");
		_btnMenu.x = (FlxG.width / 2) +500;
		_btnMenu.y = FlxG.height - 80;
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "", clickQuest);
		_btnQuest.loadGraphic("assets/img/Buttons/taken.png");
		add(_btnQuest);
		
		energyBar = new FlxBar(155, 60, LEFT_TO_RIGHT, 500, 30, energy, "energy", 0, 100, true);
		add(energyBar);
		
		energySymbol = new FlxSprite(145, 50, "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		var mood:MoodSmiley = new MoodSmiley(10, 5, clickMood);
		add(mood);
		
		text = new FlxText(energyBar.x + (energyBar.width / 2) - 40, energyBar.y + 3, 0, energy + "%", 16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y - 5, "$ " + currency, clickUpgradeMenu);
		_btnUpgradeMenu.label.size = 24;
		_btnUpgradeMenu.loadGraphic("assets/img/Buttons/leeg.png");
		add(_btnUpgradeMenu);
		super.create();
	}
	
	function dbSend(){
		var cnx = Sqlite.open("assets/data/saveFile.db");
		var sql:String = ('UPDATE Energy SET Energy = $energy, currency = $currency WHERE id = 1');
		trace(sql);
		cnx.request(sql);
		cnx.close();
	}
	
	private function clickMood():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MoodMenu());
		});
		dbSend();
	}
	
	private function clickMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
			FlxG.switchState(new MenuState());
		});
		dbSend();
	}
	
	private function clickQuest():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new JobListState());
		});
		dbSend();
	}
	
	private function clickUpgradeMenu():Void{
		FlxG.camera.fade(FlxColor.BLACK, .20, false, function(){
		FlxG.switchState(new UpgradeMenuState());
		});
		dbSend();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		text.text = energy + "%";
		energyBar.value = energy;
		energyBar.updateBar();
		_btnUpgradeMenu.text = "$ " + currency;
	}
}