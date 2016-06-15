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

		::flixel::FlxSprite _room1;
		::flixel::FlxSprite _room2;
		::flixel::FlxSprite _room3;
		::flixel::FlxSprite _room4;
		::flixel::FlxSprite _room5;
		::flixel::FlxSprite _room6;
		::flixel::FlxSprite _roomOne;
		::flixel::FlxSprite _roomTwo;
		::flixel::FlxSprite _roomThree;
		::flixel::FlxSprite _roomFour;
		::flixel::FlxSprite _roomFive;
		::flixel::FlxSprite _roomSix;
		::flixel::FlxSprite myButton;
		virtual Void roomOne( ::flixel::FlxSprite sprite);
		Dynamic roomOne_dyn();

		virtual Void roomTwo( ::flixel::FlxSprite sprite);
		Dynamic roomTwo_dyn();

		virtual Void roomThree( ::flixel::FlxSprite sprite);
		Dynamic roomThree_dyn();

		virtual Void roomFour( ::flixel::FlxSprite sprite);
		Dynamic roomFour_dyn();

		virtual Void roomFive( ::flixel::FlxSprite sprite);
		Dynamic roomFive_dyn();

		virtual Void roomSix( ::flixel::FlxSprite sprite);
		Dynamic roomSix_dyn();

		virtual Void smallRooms( ::flixel::FlxSprite sprite);
		Dynamic smallRooms_dyn();

};


#endif /* INCLUDED_Castle */ 
