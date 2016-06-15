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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_menu_CreditsState
#include <menu/CreditsState.h>
#endif
#ifndef INCLUDED_menu_MenuState
#include <menu/MenuState.h>
#endif
#ifndef INCLUDED_menu_OptionsState
#include <menu/OptionsState.h>
#endif
#ifndef INCLUDED_menu_OverState
#include <menu/OverState.h>
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
namespace menu{

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("menu.MenuState","new",0x0cf8eab5,"menu.MenuState.new","menu/MenuState.hx",13,0x033a1fdc)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	this->_bkgrMenu = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
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
		HX_STACK_FRAME("menu.MenuState","create",0x8c45afc7,"menu.MenuState.create","menu/MenuState.hx",23,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp = this->_bkgrMenu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		tmp->loadGraphic(HX_HCSTRING("assets/img/titelbackground.png","\x17","\x56","\xa1","\x59"),null(),null(),null(),null(),null());
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp1 = this->_bkgrMenu;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp1->scale->set(((Float)1.35),((Float)1.41));
		HX_STACK_LINE(27)
		::flixel::FlxSprite tmp2 = this->_bkgrMenu;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp2->set_x((int)160);
		HX_STACK_LINE(28)
		::flixel::FlxSprite tmp3 = this->_bkgrMenu;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp3->set_y((int)110);
		HX_STACK_LINE(29)
		::flixel::FlxSprite tmp4 = this->_bkgrMenu;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->add(tmp4);
		HX_STACK_LINE(36)
		Dynamic tmp5 = this->clickPlay_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton _btnPlay = tmp6;		HX_STACK_VAR(_btnPlay,"_btnPlay");
		HX_STACK_LINE(37)
		_btnPlay->loadGraphic(HX_HCSTRING("assets/img/Buttons/start-1.png","\x3b","\xa0","\x61","\x41"),null(),null(),null(),null(),null());
		HX_STACK_LINE(38)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		Float tmp9 = _btnPlay->get_width();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		Float tmp11 = (tmp10 - (int)110);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		_btnPlay->set_x(tmp11);
		HX_STACK_LINE(39)
		int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		Float tmp13 = _btnPlay->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		Float tmp15 = (tmp14 - (int)210);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		_btnPlay->set_y(tmp15);
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp16 = _btnPlay;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(40)
		this->add(tmp16);
		HX_STACK_LINE(42)
		Dynamic tmp17 = this->clickOptions_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp18 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton _btnOptions = tmp18;		HX_STACK_VAR(_btnOptions,"_btnOptions");
		HX_STACK_LINE(43)
		_btnOptions->loadGraphic(HX_HCSTRING("assets/img/Buttons/opties-1.png","\x69","\xef","\xae","\xbe"),null(),null(),null(),null(),null());
		HX_STACK_LINE(44)
		int tmp19 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(44)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(44)
		Float tmp21 = (tmp20 + (int)110);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(44)
		_btnOptions->set_x(tmp21);
		HX_STACK_LINE(45)
		int tmp22 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(45)
		Float tmp23 = _btnOptions->get_height();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(45)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(45)
		Float tmp25 = (tmp24 - (int)210);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(45)
		_btnOptions->set_y(tmp25);
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp26 = _btnOptions;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(46)
		this->add(tmp26);
		HX_STACK_LINE(48)
		Dynamic tmp27 = this->clickOver_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp28 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton _btnOver = tmp28;		HX_STACK_VAR(_btnOver,"_btnOver");
		HX_STACK_LINE(49)
		_btnOver->loadGraphic(HX_HCSTRING("assets/img/Buttons/over-1.png","\x79","\x14","\x0b","\xdd"),null(),null(),null(),null(),null());
		HX_STACK_LINE(50)
		int tmp29 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(50)
		Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(50)
		Float tmp31 = (tmp30 + (int)110);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(50)
		_btnOver->set_x(tmp31);
		HX_STACK_LINE(51)
		int tmp32 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(51)
		Float tmp33 = _btnOver->get_height();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(51)
		Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(51)
		Float tmp35 = (tmp34 - (int)110);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(51)
		_btnOver->set_y(tmp35);
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp36 = _btnOver;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(52)
		this->add(tmp36);
		HX_STACK_LINE(54)
		Dynamic tmp37 = this->clickCredits_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(54)
		::flixel::ui::FlxButton tmp38 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(54)
		::flixel::ui::FlxButton _btnCredits = tmp38;		HX_STACK_VAR(_btnCredits,"_btnCredits");
		HX_STACK_LINE(55)
		_btnCredits->loadGraphic(HX_HCSTRING("assets/img/Buttons/credits-1.png","\x73","\x36","\x5d","\xe3"),null(),null(),null(),null(),null());
		HX_STACK_LINE(56)
		int tmp39 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(56)
		Float tmp40 = (Float(tmp39) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(56)
		Float tmp41 = _btnCredits->get_width();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(56)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(56)
		Float tmp43 = (tmp42 - (int)110);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(56)
		_btnCredits->set_x(tmp43);
		HX_STACK_LINE(57)
		int tmp44 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(57)
		Float tmp45 = _btnCredits->get_height();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(57)
		Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(57)
		Float tmp47 = (tmp46 - (int)110);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(57)
		_btnCredits->set_y(tmp47);
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp48 = _btnCredits;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(58)
		this->add(tmp48);
		HX_STACK_LINE(60)
		::flixel::FlxCamera tmp49 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(60)
		tmp49->fade((int)-16777216,((Float).20),true,null(),null());
		HX_STACK_LINE(61)
		this->super::create();
	}
return null();
}


Void MenuState_obj::clickOver( ){
{
		HX_STACK_FRAME("menu.MenuState","clickOver",0xbbcd05d1,"menu.MenuState.clickOver","menu/MenuState.hx",65,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::menu::OverState tmp = ::menu::OverState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(65)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(65)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOver,(void))

Void MenuState_obj::clickCredits( ){
{
		HX_STACK_FRAME("menu.MenuState","clickCredits",0x2529c5bd,"menu.MenuState.clickCredits","menu/MenuState.hx",69,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::menu::CreditsState tmp = ::menu::CreditsState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(69)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		if ((tmp3)){
			HX_STACK_LINE(69)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickCredits,(void))

Void MenuState_obj::clickOptions( ){
{
		HX_STACK_FRAME("menu.MenuState","clickOptions",0xf1c9eb01,"menu.MenuState.clickOptions","menu/MenuState.hx",73,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::menu::OptionsState tmp = ::menu::OptionsState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(73)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp3)){
			HX_STACK_LINE(73)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))

Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("menu.MenuState","clickPlay",0xbc6ea271,"menu.MenuState.clickPlay","menu/MenuState.hx",77,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(77)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		if ((tmp3)){
			HX_STACK_LINE(77)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("menu.MenuState","update",0x973bced4,"menu.MenuState.update","menu/MenuState.hx",80,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(81)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
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
	HX_MARK_MEMBER_NAME(_btnOver,"_btnOver");
	HX_MARK_MEMBER_NAME(_btnCredits,"_btnCredits");
	HX_MARK_MEMBER_NAME(_bkgrMenu,"_bkgrMenu");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnOptions,"_btnOptions");
	HX_VISIT_MEMBER_NAME(_btnQuit,"_btnQuit");
	HX_VISIT_MEMBER_NAME(_btnOver,"_btnOver");
	HX_VISIT_MEMBER_NAME(_btnCredits,"_btnCredits");
	HX_VISIT_MEMBER_NAME(_bkgrMenu,"_bkgrMenu");
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
		if (HX_FIELD_EQ(inName,"_btnOver") ) { return _btnOver; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"_bkgrMenu") ) { return _bkgrMenu; }
		if (HX_FIELD_EQ(inName,"clickOver") ) { return clickOver_dyn(); }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { return _btnOptions; }
		if (HX_FIELD_EQ(inName,"_btnCredits") ) { return _btnCredits; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickCredits") ) { return clickCredits_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_btnOver") ) { _btnOver=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bkgrMenu") ) { _bkgrMenu=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { _btnOptions=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnCredits") ) { _btnCredits=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"));
	outFields->push(HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12"));
	outFields->push(HX_HCSTRING("_btnOver","\x51","\x37","\xfb","\x10"));
	outFields->push(HX_HCSTRING("_btnCredits","\x3d","\x84","\xcb","\x78"));
	outFields->push(HX_HCSTRING("_bkgrMenu","\x52","\x07","\x01","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOptions),HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnQuit),HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOver),HX_HCSTRING("_btnOver","\x51","\x37","\xfb","\x10")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnCredits),HX_HCSTRING("_btnCredits","\x3d","\x84","\xcb","\x78")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,_bkgrMenu),HX_HCSTRING("_bkgrMenu","\x52","\x07","\x01","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"),
	HX_HCSTRING("_btnQuit","\xcc","\xe5","\x4c","\x12"),
	HX_HCSTRING("_btnOver","\x51","\x37","\xfb","\x10"),
	HX_HCSTRING("_btnCredits","\x3d","\x84","\xcb","\x78"),
	HX_HCSTRING("_bkgrMenu","\x52","\x07","\x01","\x94"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickOver","\xbc","\xfd","\xb7","\x28"),
	HX_HCSTRING("clickCredits","\xb2","\x52","\x88","\x05"),
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
	__mClass->mName = HX_HCSTRING("menu.MenuState","\x43","\x6c","\xbe","\xdc");
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

} // end namespace menu
