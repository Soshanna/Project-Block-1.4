#ifndef INCLUDED_quest_MiniGameScreen
#define INCLUDED_quest_MiniGameScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(quest,Item)
HX_DECLARE_CLASS1(quest,MiniGameScreen)
namespace quest{


class HXCPP_CLASS_ATTRIBUTES  MiniGameScreen_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef MiniGameScreen_obj OBJ_;
		MiniGameScreen_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="quest.MiniGameScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MiniGameScreen_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MiniGameScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MiniGameScreen","\x95","\xce","\x14","\xc6"); }

		::flixel::group::FlxTypedSpriteGroup itemGroup;
		Array< ::Dynamic > rowArray;
		Array< ::Dynamic > lastArray;
		Array< ::Dynamic > markedArray;
		int energy;
		::flixel::ui::FlxButton backButton;
		::flixel::text::FlxText _txtScore;
		::flixel::text::FlxText _txtTurns;
		::flixel::text::FlxText _txtMaxScore;
		int a;
		::quest::Item object1;
		int score;
		int turns;
		int maxScore;
		int typeCount;
		int lastType;
		int lastCount;
		virtual Void create( );

		virtual Void itemCheck( );
		Dynamic itemCheck_dyn();

		virtual Void makeItems( );
		Dynamic makeItems_dyn();

		virtual Void itemClicked( ::quest::Item button);
		Dynamic itemClicked_dyn();

		virtual Void checkItemHor( ::quest::Item item,int i);
		Dynamic checkItemHor_dyn();

		virtual Void checkItemVer( ::quest::Item item,int i);
		Dynamic checkItemVer_dyn();

		virtual Void checkForRemove( );
		Dynamic checkForRemove_dyn();

		virtual Void removeMarked( ::quest::Item item);
		Dynamic removeMarked_dyn();

		virtual Void replaceItem( ::quest::Item item1,int random);
		Dynamic replaceItem_dyn();

		virtual Void winScreen( );
		Dynamic winScreen_dyn();

		virtual Void loseScreen( );
		Dynamic loseScreen_dyn();

		virtual Void buttonPress( );
		Dynamic buttonPress_dyn();

		virtual Void update( Float elapsed);

};

} // end namespace quest

#endif /* INCLUDED_quest_MiniGameScreen */ 
