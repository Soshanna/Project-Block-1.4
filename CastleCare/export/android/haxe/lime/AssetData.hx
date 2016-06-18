package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/GLECB.TTF", "assets/data/GLECB.TTF");
			type.set ("assets/data/GLECB.TTF", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/saveFile.db", "assets/data/saveFile.db");
			type.set ("assets/data/saveFile.db", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/Axe.png", "assets/images/Axe.png");
			type.set ("assets/images/Axe.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Chisel.png", "assets/images/Chisel.png");
			type.set ("assets/images/Chisel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hammer.png", "assets/images/hammer.png");
			type.set ("assets/images/hammer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hiddenobjectgame3.jpg", "assets/images/hiddenobjectgame3.jpg");
			type.set ("assets/images/hiddenobjectgame3.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/saw.png", "assets/images/saw.png");
			type.set ("assets/images/saw.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Shovel.png", "assets/images/Shovel.png");
			type.set ("assets/images/Shovel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/back.png", "assets/img/back.png");
			type.set ("assets/img/back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/background.png", "assets/img/background.png");
			type.set ("assets/img/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Bigroom-1.png", "assets/img/Bigroom-1.png");
			type.set ("assets/img/Bigroom-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Bigroom-2.png", "assets/img/Bigroom-2.png");
			type.set ("assets/img/Bigroom-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Bigroom-3.png", "assets/img/Bigroom-3.png");
			type.set ("assets/img/Bigroom-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/credits-1.png", "assets/img/Buttons/credits-1.png");
			type.set ("assets/img/Buttons/credits-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/credits-2.png", "assets/img/Buttons/credits-2.png");
			type.set ("assets/img/Buttons/credits-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/interieur-1.png", "assets/img/Buttons/interieur-1.png");
			type.set ("assets/img/Buttons/interieur-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/interieur-2.png", "assets/img/Buttons/interieur-2.png");
			type.set ("assets/img/Buttons/interieur-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/kamers-1.png", "assets/img/Buttons/kamers-1.png");
			type.set ("assets/img/Buttons/kamers-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/kamers-2.png", "assets/img/Buttons/kamers-2.png");
			type.set ("assets/img/Buttons/kamers-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/karakter-1.png", "assets/img/Buttons/karakter-1.png");
			type.set ("assets/img/Buttons/karakter-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/karakter-2.png", "assets/img/Buttons/karakter-2.png");
			type.set ("assets/img/Buttons/karakter-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/kasteel-1.png", "assets/img/Buttons/kasteel-1.png");
			type.set ("assets/img/Buttons/kasteel-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/kasteel-2.png", "assets/img/Buttons/kasteel-2.png");
			type.set ("assets/img/Buttons/kasteel-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/koop-1.png", "assets/img/Buttons/koop-1.png");
			type.set ("assets/img/Buttons/koop-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/koop-2.png", "assets/img/Buttons/koop-2.png");
			type.set ("assets/img/Buttons/koop-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/leeg.png", "assets/img/Buttons/leeg.png");
			type.set ("assets/img/Buttons/leeg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/left-1.png", "assets/img/Buttons/left-1.png");
			type.set ("assets/img/Buttons/left-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/left-2.png", "assets/img/Buttons/left-2.png");
			type.set ("assets/img/Buttons/left-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/menu.png", "assets/img/Buttons/menu.png");
			type.set ("assets/img/Buttons/menu.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/opties-1.png", "assets/img/Buttons/opties-1.png");
			type.set ("assets/img/Buttons/opties-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/opties-2.png", "assets/img/Buttons/opties-2.png");
			type.set ("assets/img/Buttons/opties-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/opties-3.png", "assets/img/Buttons/opties-3.png");
			type.set ("assets/img/Buttons/opties-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/opties-4.png", "assets/img/Buttons/opties-4.png");
			type.set ("assets/img/Buttons/opties-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/over-1.png", "assets/img/Buttons/over-1.png");
			type.set ("assets/img/Buttons/over-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/over-2.png", "assets/img/Buttons/over-2.png");
			type.set ("assets/img/Buttons/over-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/right-1.png", "assets/img/Buttons/right-1.png");
			type.set ("assets/img/Buttons/right-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/right-2.png", "assets/img/Buttons/right-2.png");
			type.set ("assets/img/Buttons/right-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/start-1.png", "assets/img/Buttons/start-1.png");
			type.set ("assets/img/Buttons/start-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/start-2.png", "assets/img/Buttons/start-2.png");
			type.set ("assets/img/Buttons/start-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/taken.png", "assets/img/Buttons/taken.png");
			type.set ("assets/img/Buttons/taken.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/terug-3.png", "assets/img/Buttons/terug-3.png");
			type.set ("assets/img/Buttons/terug-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/terug-4.png", "assets/img/Buttons/terug-4.png");
			type.set ("assets/img/Buttons/terug-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/upgrades-1.png", "assets/img/Buttons/upgrades-1.png");
			type.set ("assets/img/Buttons/upgrades-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Buttons/upgrades-2.png", "assets/img/Buttons/upgrades-2.png");
			type.set ("assets/img/Buttons/upgrades-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/castle-background.png", "assets/img/castle-background.png");
			type.set ("assets/img/castle-background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Characters/architect.png", "assets/img/Characters/architect.png");
			type.set ("assets/img/Characters/architect.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Characters/cat.png", "assets/img/Characters/cat.png");
			type.set ("assets/img/Characters/cat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Characters/doctor.png", "assets/img/Characters/doctor.png");
			type.set ("assets/img/Characters/doctor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/EmptyEnergy.png", "assets/img/EmptyEnergy.png");
			type.set ("assets/img/EmptyEnergy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/EnergySymbol.png", "assets/img/EnergySymbol.png");
			type.set ("assets/img/EnergySymbol.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/FullEnergy.png", "assets/img/FullEnergy.png");
			type.set ("assets/img/FullEnergy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/left-1.png", "assets/img/left-1.png");
			type.set ("assets/img/left-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Minigame/AppleButton.png", "assets/img/Minigame/AppleButton.png");
			type.set ("assets/img/Minigame/AppleButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Minigame/BananaButton.png", "assets/img/Minigame/BananaButton.png");
			type.set ("assets/img/Minigame/BananaButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Minigame/BurgerButton.png", "assets/img/Minigame/BurgerButton.png");
			type.set ("assets/img/Minigame/BurgerButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Minigame/Minigame Background.png", "assets/img/Minigame/Minigame Background.png");
			type.set ("assets/img/Minigame/Minigame Background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Minigame/WaterMelonButton.png", "assets/img/Minigame/WaterMelonButton.png");
			type.set ("assets/img/Minigame/WaterMelonButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/MissionButton.png", "assets/img/MissionButton.png");
			type.set ("assets/img/MissionButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/MoodHappy.png", "assets/img/MoodHappy.png");
			type.set ("assets/img/MoodHappy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Moodmenu/MoodAngry.png", "assets/img/Moodmenu/MoodAngry.png");
			type.set ("assets/img/Moodmenu/MoodAngry.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Moodmenu/MoodHappy.png", "assets/img/Moodmenu/MoodHappy.png");
			type.set ("assets/img/Moodmenu/MoodHappy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Moodmenu/MoodMenu.png", "assets/img/Moodmenu/MoodMenu.png");
			type.set ("assets/img/Moodmenu/MoodMenu.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/room1.png", "assets/img/room1.png");
			type.set ("assets/img/room1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/room2.png", "assets/img/room2.png");
			type.set ("assets/img/room2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/room3.png", "assets/img/room3.png");
			type.set ("assets/img/room3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/TalkButton.png", "assets/img/TalkButton.png");
			type.set ("assets/img/TalkButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/TextBoxText.png", "assets/img/TextBoxText.png");
			type.set ("assets/img/TextBoxText.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/titelbackground.png", "assets/img/titelbackground.png");
			type.set ("assets/img/titelbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
