#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",11,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",18,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Android Test Game","\x2f","\x26","\xf1","\xc3"),(int)22,null());		HX_STACK_VAR(tmp,"tmp");
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
		Dynamic tmp4 = this->clickPlay_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		this->_btnPlay = tmp5;
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton tmp6 = this->_btnPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(25)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton tmp9 = this->_btnPlay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(25)
		Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(25)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		Float tmp12 = (tmp11 - (int)10);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(25)
		tmp6->set_x(tmp12);
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton tmp13 = this->_btnPlay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(26)
		int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton tmp15 = this->_btnPlay;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		Float tmp18 = (tmp17 - (int)10);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(26)
		tmp13->set_y(tmp18);
		HX_STACK_LINE(27)
		::flixel::_system::frontEnds::SoundFrontEnd tmp19 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(27)
		::flixel::_system::FlxSound tmp20 = tmp19->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp21 = this->_btnPlay;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(27)
		tmp21->onUp->sound = tmp20;
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp22 = this->_btnPlay;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(28)
		this->add(tmp22);
		HX_STACK_LINE(30)
		Dynamic tmp23 = this->clickOptions_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp24 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Options","\x3e","\x5b","\x4f","\xad"),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(30)
		this->_btnOptions = tmp24;
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp25 = this->_btnOptions;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(31)
		int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(31)
		Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(31)
		Float tmp28 = (tmp27 + (int)10);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(31)
		tmp25->set_x(tmp28);
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp29 = this->_btnOptions;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(32)
		int tmp30 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp31 = this->_btnOptions;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(32)
		Float tmp32 = tmp31->get_height();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(32)
		Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(32)
		Float tmp34 = (tmp33 - (int)10);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(32)
		tmp29->set_y(tmp34);
		HX_STACK_LINE(33)
		::flixel::_system::frontEnds::SoundFrontEnd tmp35 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(33)
		::flixel::_system::FlxSound tmp36 = tmp35->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp37 = this->_btnOptions;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(33)
		tmp37->onUp->sound = tmp36;
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp38 = this->_btnOptions;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(34)
		this->add(tmp38);
		HX_STACK_LINE(36)
		::flixel::FlxCamera tmp39 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(36)
		tmp39->fade((int)-16777216,((Float).33),true,null(),null());
		HX_STACK_LINE(37)
		this->super::create();
	}
return null();
}


Void MenuState_obj::clickOptions( ){
{
		HX_STACK_FRAME("MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",41,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::OptionsState tmp = ::OptionsState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(41)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp3)){
			HX_STACK_LINE(41)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))

Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",45,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(45)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(45)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",48,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(49)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->super::update(tmp);
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_btnOptions,"_btnOptions");
	HX_MARK_MEMBER_NAME(_btnQuit,"_btnQuit");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnOptions,"_btnOptions");
	HX_VISIT_MEMBER_NAME(_btnQuit,"_btnQuit");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		if (HX_FIELD_EQ(inName,"_btnQuit") ) { return _btnQuit; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { return _btnOptions; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return clickOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnQuit") ) { _btnQuit=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { _btnOptions=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"));
	outFields->push(HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOptions),HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnQuit),HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"),
	HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickOptions","\xf6","\x77","\x28","\xd2"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

