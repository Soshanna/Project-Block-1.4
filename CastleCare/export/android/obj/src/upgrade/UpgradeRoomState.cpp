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
#ifndef INCLUDED_upgrade_UpgradeRoomState
#include <upgrade/UpgradeRoomState.h>
#endif
namespace upgrade{

Void UpgradeRoomState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("upgrade.UpgradeRoomState","new",0x49fea8de,"upgrade.UpgradeRoomState.new","upgrade/UpgradeRoomState.hx",14,0x913340f1)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(19)
	this->_bkgrOver = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(16)
	this->state = ::PlayState_obj::__new(null());
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//UpgradeRoomState_obj::~UpgradeRoomState_obj() { }

Dynamic UpgradeRoomState_obj::__CreateEmpty() { return  new UpgradeRoomState_obj; }
hx::ObjectPtr< UpgradeRoomState_obj > UpgradeRoomState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< UpgradeRoomState_obj > _result_ = new UpgradeRoomState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic UpgradeRoomState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpgradeRoomState_obj > _result_ = new UpgradeRoomState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UpgradeRoomState_obj::create( ){
{
		HX_STACK_FRAME("upgrade.UpgradeRoomState","create",0x3204713e,"upgrade.UpgradeRoomState.create","upgrade/UpgradeRoomState.hx",21,0x913340f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::flixel::FlxSprite tmp = this->_bkgrOver;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		tmp->loadGraphic(HX_HCSTRING("assets/img/Minigame/Minigame Background.png","\x52","\xe2","\xd9","\xeb"),null(),null(),null(),null(),null());
		HX_STACK_LINE(23)
		::flixel::FlxSprite tmp1 = this->_bkgrOver;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->add(tmp1);
		HX_STACK_LINE(25)
		::PlayState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		this->currency = tmp2->currency;
		HX_STACK_LINE(26)
		int tmp3 = this->currency;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		::String tmp4 = (HX_HCSTRING("$","\x24","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp5 = ::flixel::text::FlxText_obj::__new((int)1100,(int)80,(int)0,tmp4,(int)24,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		::flixel::text::FlxText currencyText = tmp5;		HX_STACK_VAR(currencyText,"currencyText");
		HX_STACK_LINE(27)
		::flixel::text::FlxText tmp6 = currencyText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		this->add(tmp6);
		HX_STACK_LINE(29)
		Dynamic tmp7 = this->clickBack_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp8 = ::flixel::ui::FlxButton_obj::__new((int)1065,(int)580,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton backButton = tmp8;		HX_STACK_VAR(backButton,"backButton");
		HX_STACK_LINE(30)
		backButton->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp9 = backButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		this->add(tmp9);
		HX_STACK_LINE(33)
		this->super::create();
	}
return null();
}


Void UpgradeRoomState_obj::clickBack( ){
{
		HX_STACK_FRAME("upgrade.UpgradeRoomState","clickBack",0x98fd918d,"upgrade.UpgradeRoomState.clickBack","upgrade/UpgradeRoomState.hx",36,0x913340f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","upgrade/UpgradeRoomState.hx",38,0x913340f1)
			{
				HX_STACK_LINE(38)
				::upgrade::UpgradeCastleState tmp1 = ::upgrade::UpgradeCastleState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(38)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(38)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(38)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(38)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				if ((tmp4)){
					HX_STACK_LINE(38)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(38)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(37)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeRoomState_obj,clickBack,(void))


UpgradeRoomState_obj::UpgradeRoomState_obj()
{
}

void UpgradeRoomState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpgradeRoomState);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(currency,"currency");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeRoomState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(currency,"currency");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UpgradeRoomState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { return currency; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { return _bkgrOver; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpgradeRoomState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::PlayState >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { _bkgrOver=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpgradeRoomState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(UpgradeRoomState_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(UpgradeRoomState_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(UpgradeRoomState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UpgradeRoomState_obj,_bkgrOver),HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpgradeRoomState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpgradeRoomState_obj::__mClass,"__mClass");
};

#endif

hx::Class UpgradeRoomState_obj::__mClass;

void UpgradeRoomState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("upgrade.UpgradeRoomState","\xec","\xa1","\xcd","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UpgradeRoomState_obj >;
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
