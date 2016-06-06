package quest;

import flixel.ui.FlxButton;

/**
 * ...
 * @author Fimme Neeleman
 */
class Item extends FlxButton
{
	public var name:String;
	public var arrayID:Int;
	public function new() 
	{
		super(0, 0, null, null);
	}
	
	public function replaceItem(random){
		if(random <= 20) {
			super.loadGraphic("assets/img/red.png");
			name = "Red";
		}else if(random <= 40){
			super.loadGraphic("assets/img/orange.png");
			name = "Orange";
		}else if(random <= 60){
			super.loadGraphic("assets/img/purple.png");
			name = "Purple";
		}else if(random <= 80){
			super.loadGraphic("assets/img/green.png");
			name = "Green";
		}else if(random <= 100){
			super.loadGraphic("assets/img/yellow.png");
			name = "Yellow";
		}
	}
}