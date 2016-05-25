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
#ifndef INCLUDED_upgrade_UpgradeMenuState
#include <upgrade/UpgradeMenuState.h>
#endif
#ifndef INCLUDED_upgrade_UpgradeRoomState
#include <upgrade/UpgradeRoomState.h>
#endif
namespace upgrade{

Void UpgradeCastleState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("upgrade.UpgradeCastleState","new",0x1476d1e1,"upgrade.UpgradeCastleState.new","upgrade/UpgradeCastleState.hx",13,0x06680f0e)
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

//UpgradeCastleState_obj::~UpgradeCastleState_obj() { }

Dynamic UpgradeCastleState_obj::__CreateEmpty() { return  new UpgradeCastleState_obj; }
hx::ObjectPtr< UpgradeCastleState_obj > UpgradeCastleState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< UpgradeCastleState_obj > _result_ = new UpgradeCastleState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic UpgradeCastleState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpgradeCastleState_obj > _result_ = new UpgradeCastleState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UpgradeCastleState_obj::create( ){
{
		HX_STACK_FRAME("upgrade.UpgradeCastleState","create",0x5e478c1b,"upgrade.UpgradeCastleState.create","upgrade/UpgradeCastleState.hx",20,0x06680f0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Upgrade Castle Screen","\xf0","\x64","\xc9","\x7a"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->_txtTitle = tmp;
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(23)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		this->add(tmp3);
		HX_STACK_LINE(26)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		Float tmp6 = (tmp5 + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		int tmp8 = (tmp7 - (int)28);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		Dynamic tmp9 = this->clickBack_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp6,tmp8,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		this->backButton = tmp10;
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(27)
		this->add(tmp11);
		HX_STACK_LINE(29)
		Dynamic tmp12 = this->clickInterior_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp13 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)350,HX_HCSTRING("Upgrade Interior","\x74","\x38","\xa5","\x32"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(29)
		this->upgradeInteriorButton = tmp13;
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp14 = this->upgradeInteriorButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		tmp14->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp15 = this->upgradeInteriorButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(31)
		this->add(tmp15);
		HX_STACK_LINE(33)
		Dynamic tmp16 = this->clickRoom_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp17 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)450,HX_HCSTRING("Upgrade Room","\x5f","\x0c","\x3b","\x73"),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(33)
		this->upgradeRoomButton = tmp17;
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp18 = this->upgradeRoomButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(34)
		tmp18->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp19 = this->upgradeRoomButton;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		this->add(tmp19);
		HX_STACK_LINE(37)
		this->super::create();
	}
return null();
}


Void UpgradeCastleState_obj::clickBack( ){
{
		HX_STACK_FRAME("upgrade.UpgradeCastleState","clickBack",0xfa3aded0,"upgrade.UpgradeCastleState.clickBack","upgrade/UpgradeCastleState.hx",40,0x06680f0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeCastleState.hx",42,0x06680f0e)
			{
				HX_STACK_LINE(42)
				::upgrade::UpgradeMenuState tmp1 = ::upgrade::UpgradeMenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(42)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(42)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(41)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeCastleState_obj,clickBack,(void))

Void UpgradeCastleState_obj::clickInterior( ){
{
		HX_STACK_FRAME("upgrade.UpgradeCastleState","clickInterior",0xa7a6b559,"upgrade.UpgradeCastleState.clickInterior","upgrade/UpgradeCastleState.hx",46,0x06680f0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeCastleState.hx",48,0x06680f0e)
			{
				HX_STACK_LINE(48)
				::upgrade::UpgradeInteriorState tmp1 = ::upgrade::UpgradeInteriorState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(48)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				if ((tmp4)){
					HX_STACK_LINE(48)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(48)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(47)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeCastleState_obj,clickInterior,(void))

Void UpgradeCastleState_obj::clickRoom( ){
{
		HX_STACK_FRAME("upgrade.UpgradeCastleState","clickRoom",0x04d8f2c4,"upgrade.UpgradeCastleState.clickRoom","upgrade/UpgradeCastleState.hx",52,0x06680f0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeCastleState.hx",54,0x06680f0e)
			{
				HX_STACK_LINE(54)
				::upgrade::UpgradeRoomState tmp1 = ::upgrade::UpgradeRoomState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(54)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				if ((tmp4)){
					HX_STACK_LINE(54)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(54)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(53)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeCastleState_obj,clickRoom,(void))


UpgradeCastleState_obj::UpgradeCastleState_obj()
{
}

void UpgradeCastleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpgradeCastleState);
	HX_MARK_MEMBER_NAME(upgradeInteriorButton,"upgradeInteriorButton");
	HX_MARK_MEMBER_NAME(upgradeRoomButton,"upgradeRoomButton");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeCastleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upgradeInteriorButton,"upgradeInteriorButton");
	HX_VISIT_MEMBER_NAME(upgradeRoomButton,"upgradeRoomButton");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UpgradeCastleState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		if (HX_FIELD_EQ(inName,"clickRoom") ) { return clickRoom_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickInterior") ) { return clickInterior_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"upgradeRoomButton") ) { return upgradeRoomButton; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"upgradeInteriorButton") ) { return upgradeInteriorButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpgradeCastleState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"upgradeRoomButton") ) { upgradeRoomButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"upgradeInteriorButton") ) { upgradeInteriorButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpgradeCastleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("upgradeInteriorButton","\xfe","\x63","\x4b","\x91"));
	outFields->push(HX_HCSTRING("upgradeRoomButton","\x29","\xde","\xe2","\x33"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeCastleState_obj,upgradeInteriorButton),HX_HCSTRING("upgradeInteriorButton","\xfe","\x63","\x4b","\x91")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeCastleState_obj,upgradeRoomButton),HX_HCSTRING("upgradeRoomButton","\x29","\xde","\xe2","\x33")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeCastleState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeCastleState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("upgradeInteriorButton","\xfe","\x63","\x4b","\x91"),
	HX_HCSTRING("upgradeRoomButton","\x29","\xde","\xe2","\x33"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	HX_HCSTRING("clickInterior","\x98","\x68","\x44","\x1b"),
	HX_HCSTRING("clickRoom","\x83","\x5a","\xae","\x2a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpgradeCastleState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpgradeCastleState_obj::__mClass,"__mClass");
};

#endif

hx::Class UpgradeCastleState_obj::__mClass;

void UpgradeCastleState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("upgrade.UpgradeCastleState","\x6f","\x4d","\x96","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UpgradeCastleState_obj >;
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
