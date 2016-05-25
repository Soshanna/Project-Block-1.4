#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
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
#ifndef INCLUDED_menu_MenuState
#include <menu/MenuState.h>
#endif
#ifndef INCLUDED_menu_OptionsState
#include <menu/OptionsState.h>
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

Void OptionsState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("menu.OptionsState","new",0x1a9d5414,"menu.OptionsState.new","menu/OptionsState.hx",17,0x1d67f2fb)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//OptionsState_obj::~OptionsState_obj() { }

Dynamic OptionsState_obj::__CreateEmpty() { return  new OptionsState_obj; }
hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< OptionsState_obj > _result_ = new OptionsState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic OptionsState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionsState_obj > _result_ = new OptionsState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void OptionsState_obj::create( ){
{
		HX_STACK_FRAME("menu.OptionsState","create",0x43542bc8,"menu.OptionsState.create","menu/OptionsState.hx",27,0x1d67f2fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Options","\x3e","\x5b","\x4f","\xad"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		this->_txtTitle = tmp;
		HX_STACK_LINE(29)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(30)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(31)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		this->add(tmp3);
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp4 = this->_txtTitle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp6 = this->_txtTitle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		Float tmp9 = (tmp8 + (int)200);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,tmp9,(int)0,HX_HCSTRING("Volume","\xfa","\x9d","\xe7","\x93"),(int)8,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		this->_txtVolume = tmp10;
		HX_STACK_LINE(34)
		::flixel::text::FlxText tmp11 = this->_txtVolume;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		tmp11->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(35)
		::flixel::text::FlxText tmp12 = this->_txtVolume;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		tmp12->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(36)
		::flixel::text::FlxText tmp13 = this->_txtVolume;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		this->add(tmp13);
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp14 = this->_txtVolume;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		Float tmp16 = (tmp15 - (int)125);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp17 = this->_txtVolume;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(38)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp19 = this->_txtVolume;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(38)
		Float tmp20 = tmp19->get_height();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(38)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(38)
		Float tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(38)
		::flixel::ui::FlxBar tmp23 = ::flixel::ui::FlxBar_obj::__new(tmp16,tmp22,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)300,(int)30,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(38)
		this->_barVolume = tmp23;
		HX_STACK_LINE(39)
		::flixel::ui::FlxBar tmp24 = this->_barVolume;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(39)
		tmp24->createFilledBar((int)-12171706,(int)-1,true,(int)-1);
		HX_STACK_LINE(40)
		::flixel::ui::FlxBar tmp25 = this->_barVolume;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(40)
		this->add(tmp25);
		HX_STACK_LINE(42)
		::flixel::ui::FlxBar tmp26 = this->_barVolume;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(42)
		Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(42)
		Float tmp28 = (tmp27 - (int)23);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(42)
		::flixel::ui::FlxBar tmp29 = this->_barVolume;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(42)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(42)
		Dynamic tmp31 = this->clickVolumeDown_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp32 = ::flixel::ui::FlxButton_obj::__new(tmp28,tmp30,HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(42)
		this->_btnVolumeDown = tmp32;
		HX_STACK_LINE(43)
		::flixel::ui::FlxButton tmp33 = this->_btnVolumeDown;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(43)
		tmp33->makeGraphic((int)20,(int)20,(int)-1,null(),null());
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp34 = this->_btnVolumeDown;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(44)
		this->add(tmp34);
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp35 = this->_btnVolumeDown;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(46)
		Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(46)
		::flixel::ui::FlxBar tmp37 = this->_barVolume;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(46)
		Float tmp38 = tmp37->get_width();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(46)
		Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(46)
		Float tmp40 = (tmp39 + (int)27);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp41 = this->_btnVolumeDown;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(46)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(46)
		Dynamic tmp43 = this->clickVolumeUp_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp44 = ::flixel::ui::FlxButton_obj::__new(tmp40,tmp42,HX_HCSTRING("+","\x2b","\x00","\x00","\x00"),tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(46)
		this->_btnVolumeUp = tmp44;
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton tmp45 = this->_btnVolumeUp;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(47)
		tmp45->makeGraphic((int)20,(int)20,(int)-1,null(),null());
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp46 = this->_btnVolumeUp;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(48)
		this->add(tmp46);
		HX_STACK_LINE(50)
		::flixel::_system::frontEnds::SoundFrontEnd tmp47 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(50)
		Float tmp48 = tmp47->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(50)
		Float tmp49 = (tmp48 * (int)100);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(50)
		::String tmp50 = (tmp49 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(50)
		::flixel::text::FlxText tmp51 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)200,tmp50,(int)8,null());		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(50)
		this->_txtVolumeAmt = tmp51;
		HX_STACK_LINE(51)
		::flixel::text::FlxText tmp52 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(51)
		tmp52->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(52)
		::flixel::text::FlxText tmp53 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(52)
		tmp53->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE);
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp54 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(53)
		tmp54->set_borderColor((int)-12171706);
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp55 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(54)
		::flixel::ui::FlxBar tmp56 = this->_barVolume;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(54)
		Float tmp57 = tmp56->y;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(54)
		::flixel::ui::FlxBar tmp58 = this->_barVolume;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(54)
		Float tmp59 = tmp58->get_height();		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(54)
		Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(54)
		Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp62 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(54)
		Float tmp63 = tmp62->get_height();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(54)
		Float tmp64 = (Float(tmp63) / Float((int)2));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(54)
		Float tmp65 = (tmp61 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(54)
		tmp55->set_y(tmp65);
		HX_STACK_LINE(55)
		::flixel::text::FlxText tmp66 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(55)
		tmp66->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(56)
		::flixel::text::FlxText tmp67 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(56)
		this->add(tmp67);
		HX_STACK_LINE(58)
		int tmp68 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(58)
		Float tmp69 = (Float(tmp68) / Float((int)2));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(58)
		Float tmp70 = (tmp69 + (int)10);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(58)
		int tmp71 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(58)
		int tmp72 = (tmp71 - (int)28);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(58)
		Dynamic tmp73 = this->clickMenu_dyn();		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp74 = ::flixel::ui::FlxButton_obj::__new(tmp70,tmp72,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(58)
		this->_btnMenu = tmp74;
		HX_STACK_LINE(59)
		::flixel::ui::FlxButton tmp75 = this->_btnMenu;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(59)
		this->add(tmp75);
		HX_STACK_LINE(61)
		this->updateVolume();
		HX_STACK_LINE(63)
		::flixel::FlxCamera tmp76 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(63)
		tmp76->fade((int)-16777216,((Float).20),true,null(),null());
		HX_STACK_LINE(64)
		this->super::create();
	}
return null();
}


Void OptionsState_obj::clickMenu( ){
{
		HX_STACK_FRAME("menu.OptionsState","clickMenu",0x573df4bb,"menu.OptionsState.clickMenu","menu/OptionsState.hx",67,0x1d67f2fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","menu/OptionsState.hx",69,0x1d67f2fb)
			{
				HX_STACK_LINE(69)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(69)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(69)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(69)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(69)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				if ((tmp4)){
					HX_STACK_LINE(69)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(69)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(68)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickMenu,(void))

Void OptionsState_obj::clickVolumeDown( ){
{
		HX_STACK_FRAME("menu.OptionsState","clickVolumeDown",0x2fa82f78,"menu.OptionsState.clickVolumeDown","menu/OptionsState.hx",73,0x1d67f2fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) - ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(75)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeDown,(void))

Void OptionsState_obj::clickVolumeUp( ){
{
		HX_STACK_FRAME("menu.OptionsState","clickVolumeUp",0xc9758bf1,"menu.OptionsState.clickVolumeUp","menu/OptionsState.hx",78,0x1d67f2fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(79)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(80)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeUp,(void))

Void OptionsState_obj::updateVolume( ){
{
		HX_STACK_FRAME("menu.OptionsState","updateVolume",0x8361368f,"menu.OptionsState.updateVolume","menu/OptionsState.hx",83,0x1d67f2fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		Float tmp1 = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Float tmp2 = (tmp1 * (int)100);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int vol = tmp3;		HX_STACK_VAR(vol,"vol");
		HX_STACK_LINE(85)
		::flixel::ui::FlxBar tmp4 = this->_barVolume;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		int tmp5 = vol;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		tmp4->set_value(tmp5);
		HX_STACK_LINE(86)
		::flixel::text::FlxText tmp6 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		::String tmp7 = (vol + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		tmp6->set_text(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,updateVolume,(void))


OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_barVolume,"_barVolume");
	HX_MARK_MEMBER_NAME(_txtVolume,"_txtVolume");
	HX_MARK_MEMBER_NAME(_txtVolumeAmt,"_txtVolumeAmt");
	HX_MARK_MEMBER_NAME(_btnVolumeDown,"_btnVolumeDown");
	HX_MARK_MEMBER_NAME(_btnVolumeUp,"_btnVolumeUp");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_barVolume,"_barVolume");
	HX_VISIT_MEMBER_NAME(_txtVolume,"_txtVolume");
	HX_VISIT_MEMBER_NAME(_txtVolumeAmt,"_txtVolumeAmt");
	HX_VISIT_MEMBER_NAME(_btnVolumeDown,"_btnVolumeDown");
	HX_VISIT_MEMBER_NAME(_btnVolumeUp,"_btnVolumeUp");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OptionsState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barVolume") ) { return _barVolume; }
		if (HX_FIELD_EQ(inName,"_txtVolume") ) { return _txtVolume; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnVolumeUp") ) { return _btnVolumeUp; }
		if (HX_FIELD_EQ(inName,"updateVolume") ) { return updateVolume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_txtVolumeAmt") ) { return _txtVolumeAmt; }
		if (HX_FIELD_EQ(inName,"clickVolumeUp") ) { return clickVolumeUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnVolumeDown") ) { return _btnVolumeDown; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clickVolumeDown") ) { return clickVolumeDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptionsState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barVolume") ) { _barVolume=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtVolume") ) { _txtVolume=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnVolumeUp") ) { _btnVolumeUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_txtVolumeAmt") ) { _txtVolumeAmt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnVolumeDown") ) { _btnVolumeDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_barVolume","\xce","\x6b","\xa0","\xe0"));
	outFields->push(HX_HCSTRING("_txtVolume","\x2b","\xfc","\x4c","\x2c"));
	outFields->push(HX_HCSTRING("_txtVolumeAmt","\x9d","\x62","\x96","\x39"));
	outFields->push(HX_HCSTRING("_btnVolumeDown","\x19","\x05","\x40","\x38"));
	outFields->push(HX_HCSTRING("_btnVolumeUp","\x52","\x07","\x2f","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(OptionsState_obj,_barVolume),HX_HCSTRING("_barVolume","\xce","\x6b","\xa0","\xe0")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtVolume),HX_HCSTRING("_txtVolume","\x2b","\xfc","\x4c","\x2c")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtVolumeAmt),HX_HCSTRING("_txtVolumeAmt","\x9d","\x62","\x96","\x39")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnVolumeDown),HX_HCSTRING("_btnVolumeDown","\x19","\x05","\x40","\x38")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnVolumeUp),HX_HCSTRING("_btnVolumeUp","\x52","\x07","\x2f","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_barVolume","\xce","\x6b","\xa0","\xe0"),
	HX_HCSTRING("_txtVolume","\x2b","\xfc","\x4c","\x2c"),
	HX_HCSTRING("_txtVolumeAmt","\x9d","\x62","\x96","\x39"),
	HX_HCSTRING("_btnVolumeDown","\x19","\x05","\x40","\x38"),
	HX_HCSTRING("_btnVolumeUp","\x52","\x07","\x2f","\x94"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	HX_HCSTRING("clickVolumeDown","\xc4","\xed","\x4d","\xc0"),
	HX_HCSTRING("clickVolumeUp","\x3d","\xdf","\xa6","\x2c"),
	HX_HCSTRING("updateVolume","\xc3","\xd0","\x16","\x5f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionsState_obj::__mClass;

void OptionsState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("menu.OptionsState","\x22","\xfa","\x3c","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionsState_obj >;
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
