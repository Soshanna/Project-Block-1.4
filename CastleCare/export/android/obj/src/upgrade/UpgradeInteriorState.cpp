#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_upgrade_UpgradeCastleState
#include <upgrade/UpgradeCastleState.h>
#endif
#ifndef INCLUDED_upgrade_UpgradeInteriorState
#include <upgrade/UpgradeInteriorState.h>
#endif
namespace upgrade{

Void UpgradeInteriorState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("upgrade.UpgradeInteriorState","new",0x54e93729,"upgrade.UpgradeInteriorState.new","upgrade/UpgradeInteriorState.hx",13,0xe6048086)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//UpgradeInteriorState_obj::~UpgradeInteriorState_obj() { }

Dynamic UpgradeInteriorState_obj::__CreateEmpty() { return  new UpgradeInteriorState_obj; }
hx::ObjectPtr< UpgradeInteriorState_obj > UpgradeInteriorState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< UpgradeInteriorState_obj > _result_ = new UpgradeInteriorState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic UpgradeInteriorState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpgradeInteriorState_obj > _result_ = new UpgradeInteriorState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UpgradeInteriorState_obj::create( ){
{
		HX_STACK_FRAME("upgrade.UpgradeInteriorState","create",0x6339a3d3,"upgrade.UpgradeInteriorState.create","upgrade/UpgradeInteriorState.hx",18,0xe6048086)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Upgrade Menu Screen","\x29","\xb6","\x38","\x6f"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this->_txtTitle = tmp;
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(21)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		this->add(tmp3);
		HX_STACK_LINE(24)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		Float tmp6 = (tmp5 + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		int tmp8 = (tmp7 - (int)28);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		Dynamic tmp9 = this->clickBack_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp6,tmp8,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		this->backButton = tmp10;
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		this->add(tmp11);
		HX_STACK_LINE(27)
		this->super::create();
	}
return null();
}


Void UpgradeInteriorState_obj::clickBack( ){
{
		HX_STACK_FRAME("upgrade.UpgradeInteriorState","clickBack",0xc6106a18,"upgrade.UpgradeInteriorState.clickBack","upgrade/UpgradeInteriorState.hx",30,0xe6048086)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeInteriorState.hx",32,0xe6048086)
			{
				HX_STACK_LINE(32)
				::upgrade::UpgradeCastleState tmp1 = ::upgrade::UpgradeCastleState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(32)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				if ((tmp4)){
					HX_STACK_LINE(32)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(31)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeInteriorState_obj,clickBack,(void))


UpgradeInteriorState_obj::UpgradeInteriorState_obj()
{
}

void UpgradeInteriorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpgradeInteriorState);
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeInteriorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UpgradeInteriorState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpgradeInteriorState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpgradeInteriorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeInteriorState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeInteriorState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpgradeInteriorState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpgradeInteriorState_obj::__mClass,"__mClass");
};

#endif

hx::Class UpgradeInteriorState_obj::__mClass;

void UpgradeInteriorState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("upgrade.UpgradeInteriorState","\xb7","\x6e","\x0a","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UpgradeInteriorState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace upgrade
