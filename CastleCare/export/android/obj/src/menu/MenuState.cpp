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
		HX_STACK_FRAME("menu.MenuState","create",0x8c45afc7,"menu.MenuState.create","menu/MenuState.hx",22,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Castle Care","\xf9","\xc3","\x3a","\xca"),(int)22,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		this->_txtTitle = tmp;
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(25)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		this->add(tmp3);
		HX_STACK_LINE(28)
		Dynamic tmp4 = this->clickPlay_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		this->_btnPlay = tmp5;
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp6 = this->_btnPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp9 = this->_btnPlay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(29)
		Float tmp12 = (tmp11 - (int)110);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		tmp6->set_x(tmp12);
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp13 = this->_btnPlay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp15 = this->_btnPlay;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(30)
		Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		Float tmp18 = (tmp17 - (int)210);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(30)
		tmp13->set_y(tmp18);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp19 = this->_btnPlay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(31)
		this->add(tmp19);
		HX_STACK_LINE(33)
		Dynamic tmp20 = this->clickOptions_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp21 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Options","\x3e","\x5b","\x4f","\xad"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(33)
		this->_btnOptions = tmp21;
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp22 = this->_btnOptions;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(34)
		int tmp23 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(34)
		Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(34)
		Float tmp25 = (tmp24 + (int)110);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(34)
		tmp22->set_x(tmp25);
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp26 = this->_btnOptions;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(35)
		int tmp27 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp28 = this->_btnOptions;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(35)
		Float tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(35)
		Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(35)
		Float tmp31 = (tmp30 - (int)210);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(35)
		tmp26->set_y(tmp31);
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp32 = this->_btnOptions;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(36)
		this->add(tmp32);
		HX_STACK_LINE(38)
		Dynamic tmp33 = this->clickOver_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp34 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Over","\x74","\xbd","\x91","\x34"),tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(38)
		this->_btnOver = tmp34;
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp35 = this->_btnOver;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		int tmp36 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(39)
		Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(39)
		Float tmp38 = (tmp37 + (int)110);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(39)
		tmp35->set_x(tmp38);
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp39 = this->_btnOver;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(40)
		int tmp40 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp41 = this->_btnOver;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(40)
		Float tmp42 = tmp41->get_height();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(40)
		Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(40)
		Float tmp44 = (tmp43 - (int)110);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(40)
		tmp39->set_y(tmp44);
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp45 = this->_btnOver;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(41)
		this->add(tmp45);
		HX_STACK_LINE(43)
		Dynamic tmp46 = this->clickCredits_dyn();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(43)
		::flixel::ui::FlxButton tmp47 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Credits","\xfa","\x35","\xaf","\xe0"),tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(43)
		this->_btnCredits = tmp47;
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp48 = this->_btnCredits;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(44)
		int tmp49 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(44)
		Float tmp50 = (Float(tmp49) / Float((int)2));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp51 = this->_btnCredits;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(44)
		Float tmp52 = tmp51->get_width();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(44)
		Float tmp53 = (tmp50 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(44)
		Float tmp54 = (tmp53 - (int)110);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(44)
		tmp48->set_x(tmp54);
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton tmp55 = this->_btnCredits;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(45)
		int tmp56 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton tmp57 = this->_btnCredits;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(45)
		Float tmp58 = tmp57->get_height();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(45)
		Float tmp59 = (tmp56 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(45)
		Float tmp60 = (tmp59 - (int)110);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(45)
		tmp55->set_y(tmp60);
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp61 = this->_btnCredits;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(46)
		this->add(tmp61);
		HX_STACK_LINE(48)
		::flixel::FlxCamera tmp62 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(48)
		tmp62->fade((int)-16777216,((Float).33),true,null(),null());
		HX_STACK_LINE(49)
		this->super::create();
	}
return null();
}


Void MenuState_obj::clickOver( ){
{
		HX_STACK_FRAME("menu.MenuState","clickOver",0xbbcd05d1,"menu.MenuState.clickOver","menu/MenuState.hx",53,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::menu::OverState tmp = ::menu::OverState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(53)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(53)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOver,(void))

Void MenuState_obj::clickCredits( ){
{
		HX_STACK_FRAME("menu.MenuState","clickCredits",0x2529c5bd,"menu.MenuState.clickCredits","menu/MenuState.hx",57,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::menu::CreditsState tmp = ::menu::CreditsState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(57)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		if ((tmp3)){
			HX_STACK_LINE(57)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickCredits,(void))

Void MenuState_obj::clickOptions( ){
{
		HX_STACK_FRAME("menu.MenuState","clickOptions",0xf1c9eb01,"menu.MenuState.clickOptions","menu/MenuState.hx",61,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::menu::OptionsState tmp = ::menu::OptionsState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(61)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(61)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))

Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("menu.MenuState","clickPlay",0xbc6ea271,"menu.MenuState.clickPlay","menu/MenuState.hx",65,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
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


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("menu.MenuState","update",0x973bced4,"menu.MenuState.update","menu/MenuState.hx",68,0x033a1fdc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(69)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
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
