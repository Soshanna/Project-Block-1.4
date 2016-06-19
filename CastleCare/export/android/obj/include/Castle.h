#ifndef INCLUDED_Castle
#define INCLUDED_Castle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Castle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Castle_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef Castle_obj OBJ_;
		Castle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Castle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Castle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Castle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Castle","\x18","\x5f","\x23","\xf0"); }

		::flixel::FlxSprite background;
		::flixel::ui::FlxButton _room1;
		::flixel::ui::FlxButton _room2;
		::flixel::ui::FlxButton _room3;
		::flixel::FlxSprite _roomOne;
		::flixel::FlxSprite _roomTwo;
		::flixel::FlxSprite _roomThree;
		::flixel::ui::FlxButton myButton;
		::flixel::ui::FlxButton talkButton;
		::flixel::ui::FlxButton missionButton;
		int energy;
		::flixel::util::FlxTimer timer;
		::flixel::FlxSprite character;
		::flixel::FlxSprite textBox;
		::flixel::text::FlxText _txtCharacter;
		::flixel::text::FlxText _txtRoom;
		virtual Void removeCallback( );
		Dynamic removeCallback_dyn();

		virtual Void addCallback( );
		Dynamic addCallback_dyn();

		virtual Void roomOne( );
		Dynamic roomOne_dyn();

		virtual Void roomTwo( );
		Dynamic roomTwo_dyn();

		virtual Void roomThree( );
		Dynamic roomThree_dyn();

		virtual Void talkCat( );
		Dynamic talkCat_dyn();

		virtual Void missionCat( );
		Dynamic missionCat_dyn();

		virtual Void talkArchitect( );
		Dynamic talkArchitect_dyn();

		virtual Void missionArchitect( );
		Dynamic missionArchitect_dyn();

		virtual Void talkDoctor( );
		Dynamic talkDoctor_dyn();

		virtual Void missionDoctor( );
		Dynamic missionDoctor_dyn();

		virtual Void removeText( ::flixel::util::FlxTimer timer);
		Dynamic removeText_dyn();

		virtual Void removeRoom( ::flixel::FlxSprite sprite);
		Dynamic removeRoom_dyn();

};


#endif /* INCLUDED_Castle */ 
