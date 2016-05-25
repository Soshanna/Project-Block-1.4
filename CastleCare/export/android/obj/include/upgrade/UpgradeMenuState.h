#ifndef INCLUDED_upgrade_UpgradeMenuState
#define INCLUDED_upgrade_UpgradeMenuState

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
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(upgrade,UpgradeMenuState)
namespace upgrade{


class HXCPP_CLASS_ATTRIBUTES  UpgradeMenuState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef UpgradeMenuState_obj OBJ_;
		UpgradeMenuState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="upgrade.UpgradeMenuState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UpgradeMenuState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpgradeMenuState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UpgradeMenuState","\xd6","\x73","\x0a","\x93"); }

		::flixel::ui::FlxButton upgradeCharacterButton;
		::flixel::ui::FlxButton upgradeCastleButton;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxButton backButton;
		::PlayState doctorBool;
		virtual Void create( );

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

		virtual Void clickCharacter( );
		Dynamic clickCharacter_dyn();

		virtual Void clickCastle( );
		Dynamic clickCastle_dyn();

};

} // end namespace upgrade

#endif /* INCLUDED_upgrade_UpgradeMenuState */ 
