#ifndef INCLUDED_menu_MenuState
#define INCLUDED_menu_MenuState

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
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(menu,MenuState)
namespace menu{


class HXCPP_CLASS_ATTRIBUTES  MenuState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="menu.MenuState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MenuState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0"); }

		::flixel::ui::FlxButton _btnPlay;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxButton _btnOptions;
		::flixel::ui::FlxButton _btnQuit;
		::flixel::ui::FlxButton _btnOver;
		::flixel::ui::FlxButton _btnCredits;
		::flixel::FlxSprite _bkgrMenu;
		virtual Void create( );

		virtual Void clickOver( );
		Dynamic clickOver_dyn();

		virtual Void clickCredits( );
		Dynamic clickCredits_dyn();

		virtual Void clickOptions( );
		Dynamic clickOptions_dyn();

		virtual Void clickPlay( );
		Dynamic clickPlay_dyn();

		virtual Void update( Float elapsed);

};

} // end namespace menu

#endif /* INCLUDED_menu_MenuState */ 
