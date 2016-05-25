#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
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
#ifndef INCLUDED_upgrade_UpgradeCharacterState
#include <upgrade/UpgradeCharacterState.h>
#endif
#ifndef INCLUDED_upgrade_UpgradeMenuState
#include <upgrade/UpgradeMenuState.h>
#endif
namespace upgrade{

Void UpgradeMenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("upgrade.UpgradeMenuState","new",0xdd3740da,"upgrade.UpgradeMenuState.new","upgrade/UpgradeMenuState.hx",13,0x1706bc75)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(19)
	this->doctorBool = ::PlayState_obj::__new(null());
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//UpgradeMenuState_obj::~UpgradeMenuState_obj() { }

Dynamic UpgradeMenuState_obj::__CreateEmpty() { return  new UpgradeMenuState_obj; }
hx::ObjectPtr< UpgradeMenuState_obj > UpgradeMenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< UpgradeMenuState_obj > _result_ = new UpgradeMenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic UpgradeMenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpgradeMenuState_obj > _result_ = new UpgradeMenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UpgradeMenuState_obj::create( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","create",0xe795fec2,"upgrade.UpgradeMenuState.create","upgrade/UpgradeMenuState.hx",21,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Upgrade Menu Screen","\x29","\xb6","\x38","\x6f"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->_txtTitle = tmp;
		HX_STACK_LINE(23)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(25)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		this->add(tmp3);
		HX_STACK_LINE(27)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		Float tmp6 = (tmp5 + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		int tmp8 = (tmp7 - (int)28);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		Dynamic tmp9 = this->clickBack_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp6,tmp8,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(27)
		this->backButton = tmp10;
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(28)
		this->add(tmp11);
		HX_STACK_LINE(30)
		::PlayState tmp12 = this->doctorBool;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		bool tmp13 = tmp12->doctorBool;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		bool tmp14 = (tmp13 == true);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		if ((tmp14)){
			HX_STACK_LINE(31)
			Dynamic tmp15 = this->clickCharacter_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(31)
			::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)350,HX_HCSTRING("Upgrade Character","\xe5","\x86","\xdd","\x23"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(31)
			this->upgradeCharacterButton = tmp16;
			HX_STACK_LINE(32)
			::flixel::ui::FlxButton tmp17 = this->upgradeCharacterButton;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(32)
			tmp17->screenCenter(::flixel::util::FlxAxes_obj::X);
			HX_STACK_LINE(33)
			::flixel::ui::FlxButton tmp18 = this->upgradeCharacterButton;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(33)
			this->add(tmp18);
		}
		HX_STACK_LINE(36)
		Dynamic tmp15 = this->clickCastle_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)450,HX_HCSTRING("Upgrade Castle","\x3c","\x22","\x12","\xf5"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(36)
		this->upgradeCastleButton = tmp16;
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp17 = this->upgradeCastleButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		tmp17->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp18 = this->upgradeCastleButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		this->add(tmp18);
		HX_STACK_LINE(40)
		this->super::create();
	}
return null();
}


Void UpgradeMenuState_obj::clickBack( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickBack",0x7e624e89,"upgrade.UpgradeMenuState.clickBack","upgrade/UpgradeMenuState.hx",43,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",45,0x1706bc75)
			{
				HX_STACK_LINE(45)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(45)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				if ((tmp4)){
					HX_STACK_LINE(45)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(44)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeMenuState_obj,clickBack,(void))

Void UpgradeMenuState_obj::clickCharacter( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickCharacter",0xb3b54407,"upgrade.UpgradeMenuState.clickCharacter","upgrade/UpgradeMenuState.hx",49,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",51,0x1706bc75)
			{
				HX_STACK_LINE(51)
				::upgrade::UpgradeCharacterState tmp1 = ::upgrade::UpgradeCharacterState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(51)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				if ((tmp4)){
					HX_STACK_LINE(51)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(51)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(50)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeMenuState_obj,clickCharacter,(void))

Void UpgradeMenuState_obj::clickCastle( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickCastle",0x076fbbda,"upgrade.UpgradeMenuState.clickCastle","upgrade/UpgradeMenuState.hx",55,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",57,0x1706bc75)
			{
				HX_STACK_LINE(57)
				::upgrade::UpgradeCastleState tmp1 = ::upgrade::UpgradeCastleState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(57)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				if ((tmp4)){
					HX_STACK_LINE(57)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(56)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeMenuState_obj,clickCastle,(void))


UpgradeMenuState_obj::UpgradeMenuState_obj()
{
}

void UpgradeMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpgradeMenuState);
	HX_MARK_MEMBER_NAME(upgradeCharacterButton,"upgradeCharacterButton");
	HX_MARK_MEMBER_NAME(upgradeCastleButton,"upgradeCastleButton");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(doctorBool,"doctorBool");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upgradeCharacterButton,"upgradeCharacterButton");
	HX_VISIT_MEMBER_NAME(upgradeCastleButton,"upgradeCastleButton");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(doctorBool,"doctorBool");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UpgradeMenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"doctorBool") ) { return doctorBool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickCastle") ) { return clickCastle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clickCharacter") ) { return clickCharacter_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"upgradeCastleButton") ) { return upgradeCastleButton; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"upgradeCharacterButton") ) { return upgradeCharacterButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpgradeMenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doctorBool") ) { doctorBool=inValue.Cast< ::PlayState >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"upgradeCastleButton") ) { upgradeCastleButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"upgradeCharacterButton") ) { upgradeCharacterButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpgradeMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce"));
	outFields->push(HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,upgradeCharacterButton),HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,upgradeCastleButton),HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeMenuState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(UpgradeMenuState_obj,doctorBool),HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce"),
	HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	HX_HCSTRING("clickCharacter","\x41","\x76","\x88","\xc6"),
	HX_HCSTRING("clickCastle","\x60","\x41","\x90","\xea"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpgradeMenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpgradeMenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class UpgradeMenuState_obj::__mClass;

void UpgradeMenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("upgrade.UpgradeMenuState","\xe8","\x8b","\x63","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UpgradeMenuState_obj >;
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
