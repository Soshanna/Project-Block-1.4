#ifndef INCLUDED_upgrade_UpgradeCharacterState
#define INCLUDED_upgrade_UpgradeCharacterState

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
HX_DECLARE_CLASS1(upgrade,UpgradeCharacterState)
namespace upgrade{


class HXCPP_CLASS_ATTRIBUTES  UpgradeCharacterState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef UpgradeCharacterState_obj OBJ_;
		UpgradeCharacterState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="upgrade.UpgradeCharacterState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UpgradeCharacterState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpgradeCharacterState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UpgradeCharacterState","\x44","\xf7","\x9f","\xbb"); }

		int currency;
		::flixel::ui::FlxButton backButton;
		::flixel::FlxSprite _bkgrOver;
		virtual Void create( );

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

};

} // end namespace upgrade

#endif /* INCLUDED_upgrade_UpgradeCharacterState */ 
