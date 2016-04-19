#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
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
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

Void OptionsState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",16,0x342db2ab)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(16)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
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
		HX_STACK_FRAME("OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",28,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Options","\x3e","\x5b","\x4f","\xad"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->_txtTitle = tmp;
		HX_STACK_LINE(30)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(31)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(32)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		this->add(tmp3);
		HX_STACK_LINE(34)
		::flixel::text::FlxText tmp4 = this->_txtTitle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::flixel::text::FlxText tmp6 = this->_txtTitle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		Float tmp9 = (tmp8 + (int)200);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,tmp9,(int)0,HX_HCSTRING("Volume","\xfa","\x9d","\xe7","\x93"),(int)8,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		this->_txtVolume = tmp10;
		HX_STACK_LINE(35)
		::flixel::text::FlxText tmp11 = this->_txtVolume;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		tmp11->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(36)
		::flixel::text::FlxText tmp12 = this->_txtVolume;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		tmp12->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(37)
		::flixel::text::FlxText tmp13 = this->_txtVolume;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		this->add(tmp13);
		HX_STACK_LINE(39)
		::flixel::text::FlxText tmp14 = this->_txtVolume;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		::flixel::text::FlxText tmp16 = this->_txtVolume;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(39)
		Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(39)
		Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		Float tmp19 = (tmp18 + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(39)
		Dynamic tmp20 = this->clickVolumeDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp21 = ::flixel::ui::FlxButton_obj::__new((int)158,tmp19,HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(39)
		this->_btnVolumeDown = tmp21;
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp22 = this->_btnVolumeDown;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(40)
		tmp22->loadGraphic(HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(41)
		::flixel::_system::frontEnds::SoundFrontEnd tmp23 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(41)
		::flixel::_system::FlxSound tmp24 = tmp23->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp25 = this->_btnVolumeDown;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(41)
		tmp25->onUp->sound = tmp24;
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp26 = this->_btnVolumeDown;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(42)
		this->add(tmp26);
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp27 = this->_btnVolumeDown;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp29 = this->_btnVolumeDown;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(44)
		Float tmp30 = tmp29->get_width();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(44)
		Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(44)
		Float tmp32 = (tmp31 + (int)4);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp33 = this->_btnVolumeDown;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(44)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(44)
		::flixel::ui::FlxBar tmp35 = ::flixel::ui::FlxBar_obj::__new(tmp32,tmp34,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)300,(int)30,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(44)
		this->_barVolume = tmp35;
		HX_STACK_LINE(45)
		::flixel::ui::FlxBar tmp36 = this->_barVolume;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(45)
		tmp36->createFilledBar((int)-12171706,(int)-1,true,(int)-1);
		HX_STACK_LINE(46)
		::flixel::ui::FlxBar tmp37 = this->_barVolume;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(46)
		this->add(tmp37);
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp38 = this->_btnVolumeDown;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(48)
		Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(48)
		::flixel::ui::FlxBar tmp40 = this->_barVolume;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(48)
		Float tmp41 = tmp40->get_width();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(48)
		Float tmp42 = (tmp39 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(48)
		Float tmp43 = (tmp42 + (int)27);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp44 = this->_btnVolumeDown;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(48)
		Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(48)
		Dynamic tmp46 = this->clickVolumeUp_dyn();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp47 = ::flixel::ui::FlxButton_obj::__new(tmp43,tmp45,HX_HCSTRING("+","\x2b","\x00","\x00","\x00"),tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(48)
		this->_btnVolumeUp = tmp47;
		HX_STACK_LINE(49)
		::flixel::ui::FlxButton tmp48 = this->_btnVolumeUp;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(49)
		tmp48->loadGraphic(HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(50)
		::flixel::_system::frontEnds::SoundFrontEnd tmp49 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(50)
		::flixel::_system::FlxSound tmp50 = tmp49->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(50)
		::flixel::ui::FlxButton tmp51 = this->_btnVolumeUp;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(50)
		tmp51->onUp->sound = tmp50;
		HX_STACK_LINE(51)
		::flixel::ui::FlxButton tmp52 = this->_btnVolumeUp;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(51)
		this->add(tmp52);
		HX_STACK_LINE(53)
		::flixel::_system::frontEnds::SoundFrontEnd tmp53 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(53)
		Float tmp54 = tmp53->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(53)
		Float tmp55 = (tmp54 * (int)100);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(53)
		::String tmp56 = (tmp55 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp57 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)200,tmp56,(int)8,null());		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(53)
		this->_txtVolumeAmt = tmp57;
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp58 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(54)
		tmp58->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(55)
		::flixel::text::FlxText tmp59 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(55)
		tmp59->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE);
		HX_STACK_LINE(56)
		::flixel::text::FlxText tmp60 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(56)
		tmp60->set_borderColor((int)-12171706);
		HX_STACK_LINE(57)
		::flixel::text::FlxText tmp61 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(57)
		::flixel::ui::FlxBar tmp62 = this->_barVolume;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(57)
		Float tmp63 = tmp62->y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(57)
		::flixel::ui::FlxBar tmp64 = this->_barVolume;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(57)
		Float tmp65 = tmp64->get_height();		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(57)
		Float tmp66 = (Float(tmp65) / Float((int)2));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(57)
		Float tmp67 = (tmp63 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(57)
		::flixel::text::FlxText tmp68 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(57)
		Float tmp69 = tmp68->get_height();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(57)
		Float tmp70 = (Float(tmp69) / Float((int)2));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(57)
		Float tmp71 = (tmp67 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(57)
		tmp61->set_y(tmp71);
		HX_STACK_LINE(58)
		::flixel::text::FlxText tmp72 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(58)
		tmp72->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(59)
		::flixel::text::FlxText tmp73 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(59)
		this->add(tmp73);
		HX_STACK_LINE(67)
		int tmp74 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(67)
		Float tmp75 = (Float(tmp74) / Float((int)2));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(67)
		Float tmp76 = (tmp75 + (int)10);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(67)
		int tmp77 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(67)
		int tmp78 = (tmp77 - (int)28);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(67)
		Dynamic tmp79 = this->clickMenu_dyn();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(67)
		::flixel::ui::FlxButton tmp80 = ::flixel::ui::FlxButton_obj::__new(tmp76,tmp78,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(67)
		this->_btnMenu = tmp80;
		HX_STACK_LINE(68)
		::flixel::_system::frontEnds::SoundFrontEnd tmp81 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(68)
		::flixel::_system::FlxSound tmp82 = tmp81->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton tmp83 = this->_btnMenu;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(68)
		tmp83->onUp->sound = tmp82;
		HX_STACK_LINE(69)
		::flixel::ui::FlxButton tmp84 = this->_btnMenu;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(69)
		this->add(tmp84);
		HX_STACK_LINE(71)
		::flixel::util::FlxSave tmp85 = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(71)
		this->_save = tmp85;
		HX_STACK_LINE(72)
		::flixel::util::FlxSave tmp86 = this->_save;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(72)
		tmp86->bind(HX_HCSTRING("flixel-tutorial","\xef","\x96","\x5f","\x79"));
		HX_STACK_LINE(74)
		this->updateVolume();
		HX_STACK_LINE(76)
		::flixel::FlxCamera tmp87 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(76)
		tmp87->fade((int)-16777216,((Float).20),true,null(),null());
		HX_STACK_LINE(77)
		this->super::create();
	}
return null();
}


Void OptionsState_obj::clickMenu( ){
{
		HX_STACK_FRAME("OptionsState","clickMenu",0x491f53cc,"OptionsState.clickMenu","OptionsState.hx",88,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","OptionsState.hx",90,0x342db2ab)
			{
				HX_STACK_LINE(90)
				::MenuState tmp1 = ::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(90)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(90)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				if ((tmp4)){
					HX_STACK_LINE(90)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(90)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(89)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickMenu,(void))

Void OptionsState_obj::clickVolumeDown( ){
{
		HX_STACK_FRAME("OptionsState","clickVolumeDown",0x7a47b149,"OptionsState.clickVolumeDown","OptionsState.hx",94,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(95)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) - ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(96)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::flixel::util::FlxSave tmp1 = this->_save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp1->data->__FieldRef(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")) = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
		HX_STACK_LINE(97)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeDown,(void))

Void OptionsState_obj::clickVolumeUp( ){
{
		HX_STACK_FRAME("OptionsState","clickVolumeUp",0x9ac24782,"OptionsState.clickVolumeUp","OptionsState.hx",100,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(102)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::flixel::util::FlxSave tmp1 = this->_save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		tmp1->data->__FieldRef(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")) = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
		HX_STACK_LINE(103)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeUp,(void))

Void OptionsState_obj::updateVolume( ){
{
		HX_STACK_FRAME("OptionsState","updateVolume",0x0aa1d81e,"OptionsState.updateVolume","OptionsState.hx",106,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		Float tmp1 = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float tmp2 = (tmp1 * (int)100);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		int vol = tmp3;		HX_STACK_VAR(vol,"vol");
		HX_STACK_LINE(108)
		::flixel::ui::FlxBar tmp4 = this->_barVolume;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		int tmp5 = vol;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		tmp4->set_value(tmp5);
		HX_STACK_LINE(109)
		::flixel::text::FlxText tmp6 = this->_txtVolumeAmt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::String tmp7 = (vol + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
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
	HX_MARK_MEMBER_NAME(_btnClearData,"_btnClearData");
	HX_MARK_MEMBER_NAME(_save,"_save");
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
	HX_VISIT_MEMBER_NAME(_btnClearData,"_btnClearData");
	HX_VISIT_MEMBER_NAME(_save,"_save");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OptionsState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { return _save; }
		break;
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
		if (HX_FIELD_EQ(inName,"_btnClearData") ) { return _btnClearData; }
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
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { _save=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		break;
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
		if (HX_FIELD_EQ(inName,"_btnClearData") ) { _btnClearData=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
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
	outFields->push(HX_HCSTRING("_btnClearData","\x3a","\xc3","\x75","\x6a"));
	outFields->push(HX_HCSTRING("_save","\x1c","\xa7","\x5e","\xff"));
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
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnClearData),HX_HCSTRING("_btnClearData","\x3a","\xc3","\x75","\x6a")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(int)offsetof(OptionsState_obj,_save),HX_HCSTRING("_save","\x1c","\xa7","\x5e","\xff")},
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
	HX_HCSTRING("_btnClearData","\x3a","\xc3","\x75","\x6a"),
	HX_HCSTRING("_save","\x1c","\xa7","\x5e","\xff"),
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
	__mClass->mName = HX_HCSTRING("OptionsState","\xf3","\x09","\x80","\x0f");
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

