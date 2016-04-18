#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",13,0xb30d7781)
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

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",27,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("This is the PlayState","\x1a","\xa4","\x1f","\x07"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
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
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp6 = this->_txtTitle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		Float tmp8 = (tmp7 + (int)80);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp9 = ::flixel::text::FlxText_obj::__new(tmp5,tmp8,(int)0,HX_HCSTRING("Mood = Happy","\xd4","\x68","\x3f","\xfd"),(int)15,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		this->_txtMood = tmp9;
		HX_STACK_LINE(34)
		::flixel::text::FlxText tmp10 = this->_txtMood;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		this->add(tmp10);
		HX_STACK_LINE(36)
		int tmp11 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		Float tmp13 = (tmp12 + (int)10);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		int tmp15 = (tmp14 - (int)28);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		Dynamic tmp16 = this->clickMenu_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp17 = ::flixel::ui::FlxButton_obj::__new(tmp13,tmp15,HX_HCSTRING("Back to Menu","\xab","\x47","\xfe","\x4e"),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(36)
		this->_btnMenu = tmp17;
		HX_STACK_LINE(37)
		::flixel::_system::frontEnds::SoundFrontEnd tmp18 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		::flixel::_system::FlxSound tmp19 = tmp18->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp20 = this->_btnMenu;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		tmp20->onUp->sound = tmp19;
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp21 = this->_btnMenu;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(38)
		this->add(tmp21);
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp22 = this->_btnMenu;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(40)
		Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp24 = this->_btnMenu;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(40)
		Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(40)
		Float tmp26 = (tmp25 - (int)35);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(40)
		::flixel::ui::FlxBar tmp27 = ::flixel::ui::FlxBar_obj::__new(tmp23,tmp26,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)200,(int)15,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(40)
		this->_barEnergy = tmp27;
		HX_STACK_LINE(41)
		::flixel::ui::FlxBar tmp28 = this->_barEnergy;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(41)
		tmp28->createFilledBar((int)-12171706,(int)-16711936,true,(int)-16744448);
		HX_STACK_LINE(42)
		::flixel::ui::FlxBar tmp29 = this->_barEnergy;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(42)
		tmp29->set_value((int)100);
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp30 = this->_barEnergy;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(43)
		this->add(tmp30);
		HX_STACK_LINE(45)
		::flixel::ui::FlxBar tmp31 = this->_barEnergy;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(45)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(45)
		::flixel::ui::FlxBar tmp33 = this->_barEnergy;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(45)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(45)
		Float tmp35 = (tmp34 - (int)25);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(45)
		::flixel::ui::FlxBar tmp36 = ::flixel::ui::FlxBar_obj::__new(tmp32,tmp35,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)200,(int)15,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(45)
		this->_barMood = tmp36;
		HX_STACK_LINE(46)
		::flixel::ui::FlxBar tmp37 = this->_barMood;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(46)
		tmp37->createFilledBar((int)-12171706,(int)-16711936,true,(int)-16744448);
		HX_STACK_LINE(47)
		::flixel::ui::FlxBar tmp38 = this->_barMood;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(47)
		this->add(tmp38);
		HX_STACK_LINE(49)
		int tmp39 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(49)
		Float tmp40 = (Float(tmp39) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(49)
		Float tmp41 = (tmp40 - (int)40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(49)
		int tmp42 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(49)
		int tmp43 = (tmp42 - (int)200);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(49)
		Dynamic tmp44 = this->energyDown_dyn();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(49)
		::flixel::ui::FlxButton tmp45 = ::flixel::ui::FlxButton_obj::__new(tmp41,tmp43,HX_HCSTRING("Perform Task","\x64","\xf7","\xe2","\x9b"),tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(49)
		this->_btnEnergyDown = tmp45;
		HX_STACK_LINE(50)
		::flixel::_system::frontEnds::SoundFrontEnd tmp46 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(50)
		::flixel::_system::FlxSound tmp47 = tmp46->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(50)
		::flixel::ui::FlxButton tmp48 = this->_btnEnergyDown;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(50)
		tmp48->onUp->sound = tmp47;
		HX_STACK_LINE(51)
		::flixel::ui::FlxButton tmp49 = this->_btnEnergyDown;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(51)
		this->add(tmp49);
		HX_STACK_LINE(53)
		::flixel::ui::FlxBar tmp50 = this->_barEnergy;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(53)
		Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(53)
		::flixel::ui::FlxBar tmp52 = this->_barEnergy;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(53)
		Float tmp53 = tmp52->get_width();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(53)
		Float tmp54 = (Float(tmp53) / Float((int)2));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(53)
		Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(53)
		Float tmp56 = (tmp55 - (int)20);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(53)
		::flixel::ui::FlxBar tmp57 = this->_barEnergy;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(53)
		Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(53)
		Float tmp59 = (tmp58 - (int)40);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(53)
		Float tmp60 = (tmp59 + (int)40);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp61 = ::flixel::text::FlxText_obj::__new(tmp56,tmp60,(int)0,HX_HCSTRING("Energybar","\xeb","\x95","\xf0","\x09"),(int)8,null());		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(53)
		this->_txtbarE = tmp61;
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp62 = this->_txtbarE;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(54)
		this->add(tmp62);
		HX_STACK_LINE(56)
		::flixel::ui::FlxBar tmp63 = this->_barMood;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(56)
		Float tmp64 = tmp63->x;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(56)
		::flixel::ui::FlxBar tmp65 = this->_barMood;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(56)
		Float tmp66 = tmp65->get_width();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(56)
		Float tmp67 = (Float(tmp66) / Float((int)2));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(56)
		Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(56)
		Float tmp69 = (tmp68 - (int)20);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(56)
		::flixel::ui::FlxBar tmp70 = this->_barMood;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(56)
		Float tmp71 = tmp70->y;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(56)
		Float tmp72 = (tmp71 - (int)40);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(56)
		Float tmp73 = (tmp72 + (int)40);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(56)
		::flixel::text::FlxText tmp74 = ::flixel::text::FlxText_obj::__new(tmp69,tmp73,(int)0,HX_HCSTRING("Stressbar","\xff","\x05","\x1e","\xb9"),(int)8,null());		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(56)
		this->_txtbarM = tmp74;
		HX_STACK_LINE(57)
		::flixel::text::FlxText tmp75 = this->_txtbarM;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(57)
		this->add(tmp75);
		HX_STACK_LINE(59)
		::flixel::util::FlxTimer tmp76 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(59)
		Dynamic tmp77 = this->energyUp_dyn();		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(59)
		::flixel::util::FlxTimer tmp78 = tmp76->start((int)1,tmp77,(int)0);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(59)
		this->_timer = tmp78;
		HX_STACK_LINE(60)
		::flixel::util::FlxTimer tmp79 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(60)
		Dynamic tmp80 = this->stressDown_dyn();		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(60)
		::flixel::util::FlxTimer tmp81 = tmp79->start((int)1,tmp80,(int)0);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(60)
		this->_timerM = tmp81;
		HX_STACK_LINE(62)
		::flixel::FlxCamera tmp82 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(62)
		tmp82->fade((int)-16777216,((Float).20),true,null(),null());
		HX_STACK_LINE(63)
		this->super::create();
	}
return null();
}


Void PlayState_obj::energyUp( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","energyUp",0x680e3c74,"PlayState.energyUp","PlayState.hx",66,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			::flixel::ui::FlxBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			Float tmp2 = (tmp1 + ((Float)0.03333333));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(68)
		::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		tmp->update_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,energyUp,(void))

Void PlayState_obj::stressDown( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","stressDown",0xc2c4e827,"PlayState.stressDown","PlayState.hx",71,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::flixel::ui::FlxBar tmp = this->_barMood;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			::flixel::ui::FlxBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			Float tmp2 = (tmp1 - ((Float)0.03333333));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(73)
		::flixel::ui::FlxBar tmp = this->_barMood;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		tmp->update_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,stressDown,(void))

Void PlayState_obj::energyDown( ){
{
		HX_STACK_FRAME("PlayState","energyDown",0x2a3046bb,"PlayState.energyDown","PlayState.hx",76,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		Float tmp1 = tmp->get_value();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		if ((tmp2)){
			HX_STACK_LINE(78)
			::flixel::ui::FlxBar tmp3 = this->_barMood;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			tmp3->set_value((int)100);
		}
		HX_STACK_LINE(80)
		::flixel::ui::FlxBar tmp3 = this->_barEnergy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		Float tmp4 = tmp3->get_value();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = (tmp4 <= (int)20);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		if ((tmp5)){
			HX_STACK_LINE(81)
			::flixel::ui::FlxBar tmp6 = this->_barMood;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			::flixel::ui::FlxBar _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			Float tmp7 = _g->get_value();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			Float tmp8 = (tmp7 + (int)40);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			_g->set_value(tmp8);
		}
		HX_STACK_LINE(83)
		::flixel::ui::FlxBar tmp6 = this->_barEnergy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		Float tmp7 = tmp6->get_value();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		bool tmp8 = (tmp7 <= (int)40);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		if ((tmp8)){
			HX_STACK_LINE(84)
			::flixel::ui::FlxBar tmp9 = this->_barMood;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			::flixel::ui::FlxBar _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			Float tmp10 = _g->get_value();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			Float tmp11 = (tmp10 + (int)30);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			_g->set_value(tmp11);
		}
		HX_STACK_LINE(86)
		::flixel::ui::FlxBar tmp9 = this->_barEnergy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		Float tmp10 = tmp9->get_value();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		bool tmp11 = (tmp10 <= (int)60);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(86)
		if ((tmp11)){
			HX_STACK_LINE(87)
			::flixel::ui::FlxBar tmp12 = this->_barMood;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(87)
			::flixel::ui::FlxBar _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			Float tmp13 = _g->get_value();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			Float tmp14 = (tmp13 + (int)20);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			_g->set_value(tmp14);
		}
		HX_STACK_LINE(89)
		::flixel::ui::FlxBar tmp12 = this->_barEnergy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(89)
		Float tmp13 = tmp12->get_value();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(89)
		bool tmp14 = (tmp13 <= (int)80);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(89)
		if ((tmp14)){
			HX_STACK_LINE(90)
			::flixel::ui::FlxBar tmp15 = this->_barMood;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(90)
			::flixel::ui::FlxBar _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			Float tmp16 = _g->get_value();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(90)
			Float tmp17 = (tmp16 + (int)10);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(90)
			_g->set_value(tmp17);
		}
		HX_STACK_LINE(92)
		::flixel::ui::FlxBar tmp15 = this->_barEnergy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(92)
		Float tmp16 = tmp15->get_value();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(92)
		bool tmp17 = (tmp16 <= (int)100);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(92)
		if ((tmp17)){
			HX_STACK_LINE(93)
			::flixel::ui::FlxBar tmp18 = this->_barMood;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(93)
			::flixel::ui::FlxBar _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			Float tmp19 = _g->get_value();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			Float tmp20 = (tmp19 + (int)5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			_g->set_value(tmp20);
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::flixel::ui::FlxBar tmp18 = this->_barEnergy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			::flixel::ui::FlxBar _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Float tmp19 = _g->get_value();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			Float tmp20 = (tmp19 - (int)20);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			_g->set_value(tmp20);
		}
		HX_STACK_LINE(96)
		::flixel::ui::FlxBar tmp18 = this->_barEnergy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		tmp18->updateBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,energyDown,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",99,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",101,0xb30d7781)
			{
				HX_STACK_LINE(101)
				::MenuState tmp1 = ::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(101)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(100)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",105,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(106)
		::flixel::ui::FlxBar tmp = this->_barMood;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		Float tmp1 = tmp->get_value();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		bool tmp2 = (tmp1 >= (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		if ((tmp2)){
			HX_STACK_LINE(107)
			::flixel::text::FlxText tmp3 = this->_txtMood;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			tmp3->set_text(HX_HCSTRING("Mood = Stressed","\x5f","\x36","\x64","\xdd"));
			HX_STACK_LINE(108)
			::flixel::text::FlxText tmp4 = this->_txtMood;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			tmp4->update_dyn();
		}
		HX_STACK_LINE(110)
		::flixel::ui::FlxBar tmp3 = this->_barMood;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		Float tmp4 = tmp3->get_value();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		bool tmp5 = (tmp4 >= (int)20);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		if ((tmp5)){
			HX_STACK_LINE(111)
			::flixel::text::FlxText tmp6 = this->_txtMood;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			tmp6->set_text(HX_HCSTRING("Mood = Annoyed","\x1e","\xb0","\xa1","\x42"));
			HX_STACK_LINE(112)
			::flixel::text::FlxText tmp7 = this->_txtMood;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			tmp7->update_dyn();
		}
		HX_STACK_LINE(114)
		::flixel::ui::FlxBar tmp6 = this->_barMood;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		Float tmp7 = tmp6->get_value();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		bool tmp8 = (tmp7 >= (int)50);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(114)
		if ((tmp8)){
			HX_STACK_LINE(115)
			::flixel::text::FlxText tmp9 = this->_txtMood;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			tmp9->set_text(HX_HCSTRING("Mood = Pissed","\x44","\xb1","\x49","\x6a"));
			HX_STACK_LINE(116)
			::flixel::text::FlxText tmp10 = this->_txtMood;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			tmp10->update_dyn();
		}
		HX_STACK_LINE(118)
		::flixel::ui::FlxBar tmp9 = this->_barMood;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		Float tmp10 = tmp9->get_value();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		bool tmp11 = (tmp10 >= (int)80);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		if ((tmp11)){
			HX_STACK_LINE(119)
			::flixel::text::FlxText tmp12 = this->_txtMood;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			tmp12->set_text(HX_HCSTRING("Mood = Angry","\xd5","\x4c","\x02","\xfe"));
			HX_STACK_LINE(120)
			::flixel::text::FlxText tmp13 = this->_txtMood;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			tmp13->update_dyn();
		}
		HX_STACK_LINE(123)
		Float tmp12 = elapsed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		this->super::update(tmp12);
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_btnEnergyUp,"_btnEnergyUp");
	HX_MARK_MEMBER_NAME(_btnEnergyDown,"_btnEnergyDown");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_barEnergy,"_barEnergy");
	HX_MARK_MEMBER_NAME(_barMood,"_barMood");
	HX_MARK_MEMBER_NAME(_txtbarE,"_txtbarE");
	HX_MARK_MEMBER_NAME(_txtbarM,"_txtbarM");
	HX_MARK_MEMBER_NAME(_txtMood,"_txtMood");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_timerM,"_timerM");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_btnEnergyUp,"_btnEnergyUp");
	HX_VISIT_MEMBER_NAME(_btnEnergyDown,"_btnEnergyDown");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_barEnergy,"_barEnergy");
	HX_VISIT_MEMBER_NAME(_barMood,"_barMood");
	HX_VISIT_MEMBER_NAME(_txtbarE,"_txtbarE");
	HX_VISIT_MEMBER_NAME(_txtbarM,"_txtbarM");
	HX_VISIT_MEMBER_NAME(_txtMood,"_txtMood");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_timerM,"_timerM");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timerM") ) { return _timerM; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		if (HX_FIELD_EQ(inName,"_barMood") ) { return _barMood; }
		if (HX_FIELD_EQ(inName,"_txtbarE") ) { return _txtbarE; }
		if (HX_FIELD_EQ(inName,"_txtbarM") ) { return _txtbarM; }
		if (HX_FIELD_EQ(inName,"_txtMood") ) { return _txtMood; }
		if (HX_FIELD_EQ(inName,"energyUp") ) { return energyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barEnergy") ) { return _barEnergy; }
		if (HX_FIELD_EQ(inName,"stressDown") ) { return stressDown_dyn(); }
		if (HX_FIELD_EQ(inName,"energyDown") ) { return energyDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnEnergyUp") ) { return _btnEnergyUp; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnEnergyDown") ) { return _btnEnergyDown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timerM") ) { _timerM=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_barMood") ) { _barMood=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtbarE") ) { _txtbarE=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtbarM") ) { _txtbarM=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtMood") ) { _txtMood=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barEnergy") ) { _barEnergy=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnEnergyUp") ) { _btnEnergyUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnEnergyDown") ) { _btnEnergyDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13"));
	outFields->push(HX_HCSTRING("_btnEnergyDown","\x07","\x93","\x1a","\xb1"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_barEnergy","\xbc","\xea","\x85","\x7c"));
	outFields->push(HX_HCSTRING("_barMood","\xeb","\xf9","\x75","\xc4"));
	outFields->push(HX_HCSTRING("_txtbarE","\x03","\xa7","\xd1","\x17"));
	outFields->push(HX_HCSTRING("_txtbarM","\x0b","\xa7","\xd1","\x17"));
	outFields->push(HX_HCSTRING("_txtMood","\x08","\xc9","\xfa","\x09"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_timerM","\x87","\x1e","\x49","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergyUp),HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergyDown),HX_HCSTRING("_btnEnergyDown","\x07","\x93","\x1a","\xb1")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,_barEnergy),HX_HCSTRING("_barEnergy","\xbc","\xea","\x85","\x7c")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,_barMood),HX_HCSTRING("_barMood","\xeb","\xf9","\x75","\xc4")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtbarE),HX_HCSTRING("_txtbarE","\x03","\xa7","\xd1","\x17")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtbarM),HX_HCSTRING("_txtbarM","\x0b","\xa7","\xd1","\x17")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtMood),HX_HCSTRING("_txtMood","\x08","\xc9","\xfa","\x09")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(PlayState_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(PlayState_obj,_timerM),HX_HCSTRING("_timerM","\x87","\x1e","\x49","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13"),
	HX_HCSTRING("_btnEnergyDown","\x07","\x93","\x1a","\xb1"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_barEnergy","\xbc","\xea","\x85","\x7c"),
	HX_HCSTRING("_barMood","\xeb","\xf9","\x75","\xc4"),
	HX_HCSTRING("_txtbarE","\x03","\xa7","\xd1","\x17"),
	HX_HCSTRING("_txtbarM","\x0b","\xa7","\xd1","\x17"),
	HX_HCSTRING("_txtMood","\x08","\xc9","\xfa","\x09"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_timerM","\x87","\x1e","\x49","\x8d"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("energyUp","\x43","\xb5","\x4a","\xb9"),
	HX_HCSTRING("stressDown","\xb6","\x72","\xac","\x36"),
	HX_HCSTRING("energyDown","\x4a","\xd1","\x17","\x9e"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

