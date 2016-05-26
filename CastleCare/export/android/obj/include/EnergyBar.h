#ifndef INCLUDED_EnergyBar
#define INCLUDED_EnergyBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
HX_DECLARE_CLASS0(EnergyBar)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  EnergyBar_obj : public ::flixel::ui::FlxBar_obj{
	public:
		typedef ::flixel::ui::FlxBar_obj super;
		typedef EnergyBar_obj OBJ_;
		EnergyBar_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::String pic1,::String pic2);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="EnergyBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnergyBar_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::String pic1,::String pic2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnergyBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnergyBar","\xcb","\x4d","\xd8","\x09"); }

		::PlayState playstate;
		int energy;
};


#endif /* INCLUDED_EnergyBar */ 
