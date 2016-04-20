package;

import openfl.display.Sprite;
import openfl.Lib;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.events.KeyboardEvent;
import openfl.events.Event;
import openfl.Lib.getTimer;

/**
 * ...
 * @author F.Neeleman
 */
class Main extends Sprite 
{
	var score:Int = 0;
	var scoreTextField:TextField = null;
	var questionTextField:TextField = null;
	var answerTextFields:Array<TextField> = new Array<TextField>();
	var correctAnswer:Int = -1;
	var questionNumber:Int = 0;
	var lastTime:Int = 0;
	var timer:Int = 5000;
	var timeTextField:TextField = null;
	
	public function new() {
		super();
		
		var textFormatRightAligned:TextFormat = new TextFormat("Arial", 24, 0x000000, false, false, false, null, null, TextFormatAlign.RIGHT);
		
		scoreTextField = new TextField();
		scoreTextField.defaultTextFormat = textFormatRightAligned;
		scoreTextField.x = 20;
		scoreTextField.y = 20;
		scoreTextField.width = 50;
		scoreTextField.height = 50;
		scoreTextField.text = "0";
		addChild(scoreTextField);
		
		var textFormatCenterAligned:TextFormat = new TextFormat("Arial", 24, 0x000000, false, false, false, null, null, TextFormatAlign.CENTER);
		
		questionTextField = new TextField();
		questionTextField.defaultTextFormat = textFormatCenterAligned;
		questionTextField.x = 0;
		questionTextField.y = 100;
		questionTextField.width = 800;
		questionTextField.height = 50;
		addChild(questionTextField);
		
		timeTextField = new TextField();
		timeTextField.defaultTextFormat = textFormatRightAligned;
		timeTextField.x = 700;
		timeTextField.y = 20;
		timeTextField.width = 50;
		timeTextField.height = 50;
		timeTextField.text = Std.string(Math.ceil(timer / 1000));
		addChild(timeTextField);
		
		for(i in 0...3){
			answerTextFields[i] = new TextField();
			answerTextFields[i].defaultTextFormat = textFormatCenterAligned;
			answerTextFields[i].x = questionTextField.x;
			answerTextFields[i].y = 200 + (i * 100);
			answerTextFields[i].width = 800;
			answerTextFields[i].height = 50;
			addChild(answerTextFields[i]);	
		}
		
		startQuestion();
		
		lastTime = getTimer();
		
		stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
		addEventListener(Event.ENTER_FRAME, onEnterFrame);
	}
	
	function onEnterFrame(event:Event){
		var currentTime:Int = getTimer();
		var elapsedTime:Int = currentTime - lastTime;
		lastTime = currentTime;
		
		timer = timer - elapsedTime;
		
		if(timer <= 0){
			startQuestion();
		}
		
		timeTextField.text = Std.string(Math.ceil(timer / 1000));
	}
	
	function startQuestion(){
		if(questionNumber == 0){
			questionTextField.text = "What is the capital of Australia?";
			answerTextFields[0].text = "(1) Sydney";
			answerTextFields[1].text = "(2) Canberra";
			answerTextFields[2].text = "(3) Melbourne";
			correctAnswer = 1;
		}
		
		if(questionNumber == 1){
			questionTextField.text = "How old is Ilja?";
			answerTextFields[0].text = "(1) 32";
			answerTextFields[1].text = "(2) 36";
			answerTextFields[2].text = "(3) 40";
			correctAnswer = 1;
		}
		
		if(questionNumber == 2){
			questionTextField.text = "What is the mass of the sun?";
			answerTextFields[0].text = "(1) 1kg";
			answerTextFields[1].text = "(2) 2kg";
			answerTextFields[2].text = "(3) 1.998*10^30 kg";
			correctAnswer = 2;
		}
		timer = 5000;
		questionNumber += 1;
	}
	
	function onKeyDown(event:KeyboardEvent){
		switch(event.keyCode){
			case 49:
				checkAnswer(0);
			case 50:
				checkAnswer(1);
			case 51:
				checkAnswer(2);
		}
	}
	
	function checkAnswer(answer:Int){
		if(answer == correctAnswer){
			trace("correct");
			score += 1;
			scoreTextField.text = Std.string(score);
		}
		else{
			trace("incorrect");
		}
		startQuestion();
	}
}