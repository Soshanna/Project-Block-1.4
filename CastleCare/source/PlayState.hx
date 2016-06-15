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
	public var energy:Int;
	public var currency:Int;
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
		var resultSet = cnx.request("SELECT Energy, year, month, day, hour, minute, second, currency FROM Energy");
		var year:Int;
		var month:Int;
		var day:Int;
		var hour:Int;
		var minute:Int;
		var second:Int;
		for (row in resultSet) {
			year = row.year;
			month = row.month;
			day = row.day;
			hour = row.hour;
			minute = row.minute;
			second = row.second;
			energy = row.Energy;
			currency = row.currency;
		}
		cnx.close();
			
		/*timeDB = new Date(year,month,day ,hour,minute,second);
		var dayDifference = Math.floor(Std.parseFloat(Std.string(rightNow.getDate))) - Math.floor(Std.parseFloat(Std.string(timeDB.getDate)));
		var hourDifference = Std.parseFloat(Std.string(rightNow.getHours)) - Std.parseFloat(Std.string(timeDB.getHours));
		var MinuteDifference = Std.parseFloat(Std.string(rightNow.getMinutes)) - Std.parseFloat(Std.string(timeDB.getMinutes));
		if(dayDifference == 0){
			if (hourDifference == 0){
				if(MinuteDifference != 0){
					energy = Math.floor(MinuteDifference * 1.5);
				}
				if(energy > 100){
					energy = 100;
				}
			}else if(hourDifference > 0){
				energy = Math.floor(hourDifference * 89);
				if(energy > 100){
					energy = 100;
				}
			}
		}else if(dayDifference != 0){
			energy = 100;
		}*/
		
		_castleNavigation = new Castle();
		add(_castleNavigation);	
		
		_btnMenu = new FlxButton((FlxG.width / 2) + 520, FlxG.height - 35, "Back", clickMenu);
		add(_btnMenu);
		
		_btnQuest = new FlxButton(20, _btnMenu.y, "Quest", clickQuest);
		add(_btnQuest);
		
		energyBar = new FlxBar(155, 60, LEFT_TO_RIGHT, 500, 30, energy, "energy", 0, 100, true);
		add(energyBar);
		
		energySymbol = new FlxSprite(145, 50, "assets/img/EnergySymbol.png");
		add(energySymbol);
		
		var mood:MoodSmiley = new MoodSmiley(10, 5, clickMood);
		add(mood);
		
		text = new FlxText(energyBar.x + (energyBar.width/2) - 40, energyBar.y + 3, 0,"" + energyBar.percent + "%",16);
		add(text);
		
		_btnUpgradeMenu = new FlxButton(energyBar.x + energyBar.width + 50, energyBar.y + 3, "$ " + currency, clickUpgradeMenu);
		add(_btnUpgradeMenu);
		
		super.create();
	}
	
	function dbSend(){
		var year = Std.parseInt(Std.string(rightNow.getFullYear));
		var month = Std.parseInt(Std.string(rightNow.getMonth));
		var day = Std.parseInt(Std.string(rightNow.getDate));
		var hour = Std.parseInt(Std.string(rightNow.getHours));
		var minute = Std.parseInt(Std.string(rightNow.getMinutes));
		var second = Std.parseInt(Std.string(rightNow.getSeconds));
		var cnx = Sqlite.open("assets/data/saveFile.db");
		var sql:String = ('UPDATE Energy SET Energy = $energy, year = $year, month = $month, day = $day, hour = $hour, minute = $minute, second = $second, currency = $currency WHERE id = 1');
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