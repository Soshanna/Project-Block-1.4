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
			path.set ("assets/img/background.png", "assets/img/background.png");
			type.set ("assets/img/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/EmptyEnergy.png", "assets/img/EmptyEnergy.png");
			type.set ("assets/img/EmptyEnergy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/EnergySymbol.png", "assets/img/EnergySymbol.png");
			type.set ("assets/img/EnergySymbol.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/FullEnergy.png", "assets/img/FullEnergy.png");
			type.set ("assets/img/FullEnergy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/green.png", "assets/img/green.png");
			type.set ("assets/img/green.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/MoodHappy.png", "assets/img/MoodHappy.png");
			type.set ("assets/img/MoodHappy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/orange.png", "assets/img/orange.png");
			type.set ("assets/img/orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/purple.png", "assets/img/purple.png");
			type.set ("assets/img/purple.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/red.png", "assets/img/red.png");
			type.set ("assets/img/red.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/titelbackground.png", "assets/img/titelbackground.png");
			type.set ("assets/img/titelbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/yellow.png", "assets/img/yellow.png");
			type.set ("assets/img/yellow.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
