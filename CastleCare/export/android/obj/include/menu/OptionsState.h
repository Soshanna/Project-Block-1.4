#ifndef INCLUDED_menu_OptionsState
#define INCLUDED_menu_OptionsState

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
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(menu,OptionsState)
namespace menu{


class HXCPP_CLASS_ATTRIBUTES  OptionsState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef OptionsState_obj OBJ_;
		OptionsState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="menu.OptionsState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OptionsState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionsState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OptionsState","\xf3","\x09","\x80","\x0f"); }

		::flixel::ui::FlxButton _btnMenu;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxBar _barVolume;
		::flixel::text::FlxText _txtVolume;
		::flixel::text::FlxText _txtVolumeAmt;
		::flixel::ui::FlxButton _btnVolumeDown;
		::flixel::ui::FlxButton _btnVolumeUp;
		::flixel::FlxSprite _bkgrOver;
		virtual Void create( );

		virtual Void clickMenu( );
		Dynamic clickMenu_dyn();

		virtual Void clickVolumeDown( );
		Dynamic clickVolumeDown_dyn();

		virtual Void clickVolumeUp( );
		Dynamic clickVolumeUp_dyn();

		virtual Void updateVolume( );
		Dynamic updateVolume_dyn();

};

} // end namespace menu

#endif /* INCLUDED_menu_OptionsState */ 
