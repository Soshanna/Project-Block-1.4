#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		::flixel::ui::FlxButton _btnMenu;
		::flixel::ui::FlxButton _btnEnergyUp;
		::flixel::ui::FlxButton _btnEnergyDown;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxBar _barEnergy;
		::flixel::ui::FlxBar _barMood;
		::flixel::text::FlxText _txtbarE;
		::flixel::text::FlxText _txtbarM;
		::flixel::text::FlxText _txtMood;
		::flixel::util::FlxTimer _timer;
		::flixel::util::FlxTimer _timerM;
		virtual Void create( );

		virtual Void energyUp( ::flixel::util::FlxTimer Timer);
		Dynamic energyUp_dyn();

		virtual Void stressDown( ::flixel::util::FlxTimer Timer);
		Dynamic stressDown_dyn();

		virtual Void energyDown( );
		Dynamic energyDown_dyn();

		virtual Void clickMenu( );
		Dynamic clickMenu_dyn();

		virtual Void update( Float elapsed);

};


#endif /* INCLUDED_PlayState */ 
