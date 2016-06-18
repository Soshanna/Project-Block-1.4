#ifndef INCLUDED_quest_HiddenObjectGame
#define INCLUDED_quest_HiddenObjectGame

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
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(quest,HiddenObjectGame)
namespace quest{


class HXCPP_CLASS_ATTRIBUTES  HiddenObjectGame_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef HiddenObjectGame_obj OBJ_;
		HiddenObjectGame_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="quest.HiddenObjectGame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HiddenObjectGame_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HiddenObjectGame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HiddenObjectGame","\x7b","\x72","\x06","\x79"); }

		Array< int > PosArray;
		int itemCounter;
		::flixel::ui::FlxButton button;
		int currency;
		virtual Void create( );

		virtual Void displayButtons( );
		Dynamic displayButtons_dyn();

		virtual Void onClicked( ::flixel::ui::FlxButton button);
		Dynamic onClicked_dyn();

		virtual Void win( );
		Dynamic win_dyn();

		virtual Void back( );
		Dynamic back_dyn();

};

} // end namespace quest

#endif /* INCLUDED_quest_HiddenObjectGame */ 
