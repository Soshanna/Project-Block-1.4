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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
HX_STACK_FRAME("upgrade.UpgradeMenuState","new",0xdd3740da,"upgrade.UpgradeMenuState.new","upgrade/UpgradeMenuState.hx",14,0x1706bc75)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(19)
	this->_bkgrOver = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
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
		::flixel::FlxSprite tmp = this->_bkgrOver;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		tmp->loadGraphic(HX_HCSTRING("assets/img/background.png","\x41","\x41","\x6f","\x96"),null(),null(),null(),null(),null());
		HX_STACK_LINE(23)
		::flixel::FlxSprite tmp1 = this->_bkgrOver;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		tmp1->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(24)
		::flixel::FlxSprite tmp2 = this->_bkgrOver;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp2->set_x((int)100);
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp3 = this->_bkgrOver;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp3->set_y((int)120);
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp4 = this->_bkgrOver;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		this->add(tmp4);
		HX_STACK_LINE(28)
		int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Float tmp7 = (tmp6 - (int)70);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		int tmp9 = (tmp8 - (int)70);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(28)
		Dynamic tmp10 = this->clickBack_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp11 = ::flixel::ui::FlxButton_obj::__new(tmp7,tmp9,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(28)
		this->_btnMenu = tmp11;
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp12 = this->_btnMenu;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		tmp12->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp13 = this->_btnMenu;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		tmp13->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp14 = this->_btnMenu;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		this->add(tmp14);
		HX_STACK_LINE(33)
		Dynamic tmp15 = this->clickCharacter_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)350,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(33)
		this->upgradeCharacterButton = tmp16;
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp17 = this->upgradeCharacterButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		tmp17->loadGraphic(HX_HCSTRING("assets/img/Buttons/karakter-1.png","\x00","\x79","\x35","\xe0"),null(),null(),null(),null(),null());
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp18 = this->upgradeCharacterButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		tmp18->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp19 = this->upgradeCharacterButton;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(36)
		this->add(tmp19);
		HX_STACK_LINE(38)
		Dynamic tmp20 = this->clickCastle_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp21 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)440,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton upgradeCastleButton = tmp21;		HX_STACK_VAR(upgradeCastleButton,"upgradeCastleButton");
		HX_STACK_LINE(39)
		upgradeCastleButton->loadGraphic(HX_HCSTRING("assets/img/Buttons/kasteel-1.png","\x4e","\xa3","\xab","\xfb"),null(),null(),null(),null(),null());
		HX_STACK_LINE(40)
		upgradeCastleButton->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp22 = upgradeCastleButton;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(41)
		this->add(tmp22);
		HX_STACK_LINE(43)
		this->super::create();
	}
return null();
}


Void UpgradeMenuState_obj::clickBack( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickBack",0x7e624e89,"upgrade.UpgradeMenuState.clickBack","upgrade/UpgradeMenuState.hx",46,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",48,0x1706bc75)
			{
				HX_STACK_LINE(48)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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
		tmp->fade((int)-16777216,(int)1,false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeMenuState_obj,clickBack,(void))

Void UpgradeMenuState_obj::clickCharacter( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickCharacter",0xb3b54407,"upgrade.UpgradeMenuState.clickCharacter","upgrade/UpgradeMenuState.hx",52,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",54,0x1706bc75)
			{
				HX_STACK_LINE(54)
				::upgrade::UpgradeCharacterState tmp1 = ::upgrade::UpgradeCharacterState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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


HX_DEFINE_DYNAMIC_FUNC0(UpgradeMenuState_obj,clickCharacter,(void))

Void UpgradeMenuState_obj::clickCastle( ){
{
		HX_STACK_FRAME("upgrade.UpgradeMenuState","clickCastle",0x076fbbda,"upgrade.UpgradeMenuState.clickCastle","upgrade/UpgradeMenuState.hx",58,0x1706bc75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeMenuState.hx",60,0x1706bc75)
			{
				HX_STACK_LINE(60)
				::upgrade::UpgradeCastleState tmp1 = ::upgrade::UpgradeCastleState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(60)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(60)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				if ((tmp4)){
					HX_STACK_LINE(60)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(59)
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
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(upgradeCharacterButton,"upgradeCharacterButton");
	HX_MARK_MEMBER_NAME(upgradeCastleButton,"upgradeCastleButton");
	HX_MARK_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(upgradeCharacterButton,"upgradeCharacterButton");
	HX_VISIT_MEMBER_NAME(upgradeCastleButton,"upgradeCastleButton");
	HX_VISIT_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UpgradeMenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { return _bkgrOver; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
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
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { _bkgrOver=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
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
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce"));
	outFields->push(HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a"));
	outFields->push(HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,upgradeCharacterButton),HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeMenuState_obj,upgradeCastleButton),HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UpgradeMenuState_obj,_bkgrOver),HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("upgradeCharacterButton","\x3f","\x39","\x06","\xce"),
	HX_HCSTRING("upgradeCastleButton","\xc6","\xc5","\x28","\x5a"),
	HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"),
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
