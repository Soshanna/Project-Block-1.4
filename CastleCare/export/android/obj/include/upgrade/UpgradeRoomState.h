#ifndef INCLUDED_upgrade_UpgradeRoomState
#define INCLUDED_upgrade_UpgradeRoomState

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
HX_DECLARE_CLASS1(upgrade,UpgradeRoomState)
namespace upgrade{


class HXCPP_CLASS_ATTRIBUTES  UpgradeRoomState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef UpgradeRoomState_obj OBJ_;
		UpgradeRoomState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="upgrade.UpgradeRoomState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UpgradeRoomState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpgradeRoomState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UpgradeRoomState","\xda","\x89","\x74","\xe4"); }

		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxButton backButton;
		virtual Void create( );

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

};

} // end namespace upgrade

#endif /* INCLUDED_upgrade_UpgradeRoomState */ 
