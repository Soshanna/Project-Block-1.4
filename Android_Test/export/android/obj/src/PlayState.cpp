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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",24,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("This is the PlayState","\x1a","\xa4","\x1f","\x07"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		this->_txtTitle = tmp;
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(27)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		this->add(tmp3);
		HX_STACK_LINE(30)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		Float tmp6 = (tmp5 - (int)115);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		int tmp8 = (tmp7 - (int)250);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		::flixel::ui::FlxBar tmp9 = ::flixel::ui::FlxBar_obj::__new(tmp6,tmp8,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)250,(int)15,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		this->_barEnergy = tmp9;
		HX_STACK_LINE(31)
		::flixel::ui::FlxBar tmp10 = this->_barEnergy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		tmp10->createFilledBar((int)-12171706,(int)-16711936,true,(int)-16744448);
		HX_STACK_LINE(32)
		::flixel::ui::FlxBar tmp11 = this->_barEnergy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		this->add(tmp11);
		HX_STACK_LINE(34)
		::flixel::ui::FlxBar tmp12 = this->_barEnergy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		int tmp15 = (tmp14 - (int)200);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		Dynamic tmp16 = this->energyDown_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp17 = ::flixel::ui::FlxButton_obj::__new(tmp13,tmp15,HX_HCSTRING("Energy Down","\xba","\xce","\x12","\xc4"),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		this->_btnEnergyDown = tmp17;
		HX_STACK_LINE(35)
		::flixel::_system::frontEnds::SoundFrontEnd tmp18 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		::flixel::_system::FlxSound tmp19 = tmp18->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp20 = this->_btnEnergyDown;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(35)
		tmp20->onUp->sound = tmp19;
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp21 = this->_btnEnergyDown;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(36)
		this->add(tmp21);
		HX_STACK_LINE(38)
		::flixel::ui::FlxBar tmp22 = this->_barEnergy;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(38)
		Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(38)
		::flixel::ui::FlxBar tmp24 = this->_barEnergy;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		Float tmp28 = (tmp27 - (int)30);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		::flixel::ui::FlxBar tmp29 = this->_barEnergy;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		Float tmp31 = (tmp30 - (int)40);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float tmp32 = (tmp31 + (int)40);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp33 = ::flixel::text::FlxText_obj::__new(tmp28,tmp32,(int)0,HX_HCSTRING("Energybar","\xeb","\x95","\xf0","\x09"),(int)8,null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(38)
		this->_txtbar = tmp33;
		HX_STACK_LINE(39)
		::flixel::text::FlxText tmp34 = this->_txtbar;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		this->add(tmp34);
		HX_STACK_LINE(41)
		int tmp35 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(41)
		Float tmp36 = (Float(tmp35) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(41)
		Float tmp37 = (tmp36 + (int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(41)
		int tmp38 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(41)
		int tmp39 = (tmp38 - (int)28);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(41)
		Dynamic tmp40 = this->clickMenu_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp41 = ::flixel::ui::FlxButton_obj::__new(tmp37,tmp39,HX_HCSTRING("Back to Menu","\xab","\x47","\xfe","\x4e"),tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(41)
		this->_btnMenu = tmp41;
		HX_STACK_LINE(42)
		::flixel::_system::frontEnds::SoundFrontEnd tmp42 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(42)
		::flixel::_system::FlxSound tmp43 = tmp42->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp44 = this->_btnMenu;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(42)
		tmp44->onUp->sound = tmp43;
		HX_STACK_LINE(43)
		::flixel::ui::FlxButton tmp45 = this->_btnMenu;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(43)
		this->add(tmp45);
		HX_STACK_LINE(45)
		::flixel::util::FlxTimer tmp46 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(45)
		this->_timer = tmp46;
		HX_STACK_LINE(46)
		::flixel::util::FlxTimer tmp47 = this->_timer;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(46)
		Dynamic tmp48 = this->energyUp_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(46)
		tmp47->start((int)30,tmp48,(int)0);
		HX_STACK_LINE(48)
		::flixel::FlxCamera tmp49 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(48)
		tmp49->fade((int)-16777216,((Float).33),true,null(),null());
		HX_STACK_LINE(49)
		this->super::create();
	}
return null();
}


Void PlayState_obj::energyUp( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","energyUp",0x680e3c74,"PlayState.energyUp","PlayState.hx",53,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			::flixel::ui::FlxBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(55)
		::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		tmp->updateBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,energyUp,(void))

Void PlayState_obj::energyDown( ){
{
		HX_STACK_FRAME("PlayState","energyDown",0x2a3046bb,"PlayState.energyDown","PlayState.hx",59,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(60)
			::flixel::ui::FlxBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			Float tmp2 = (tmp1 - (int)20);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(61)
		::flixel::ui::FlxBar tmp = this->_barEnergy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->updateBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,energyDown,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",65,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",68,0xb30d7781)
			{
				HX_STACK_LINE(68)
				::MenuState tmp1 = ::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(68)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				if ((tmp4)){
					HX_STACK_LINE(68)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(66)
		tmp->fade((int)-16777216,((Float).33),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))


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
	HX_MARK_MEMBER_NAME(_txtbar,"_txtbar");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
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
	HX_VISIT_MEMBER_NAME(_txtbar,"_txtbar");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_txtbar") ) { return _txtbar; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		if (HX_FIELD_EQ(inName,"energyUp") ) { return energyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barEnergy") ) { return _barEnergy; }
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
		if (HX_FIELD_EQ(inName,"_txtbar") ) { _txtbar=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
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
	outFields->push(HX_HCSTRING("_txtbar","\x02","\xfb","\xe9","\x34"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergyUp),HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergyDown),HX_HCSTRING("_btnEnergyDown","\x07","\x93","\x1a","\xb1")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,_barEnergy),HX_HCSTRING("_barEnergy","\xbc","\xea","\x85","\x7c")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtbar),HX_HCSTRING("_txtbar","\x02","\xfb","\xe9","\x34")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(PlayState_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
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
	HX_HCSTRING("_txtbar","\x02","\xfb","\xe9","\x34"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("energyUp","\x43","\xb5","\x4a","\xb9"),
	HX_HCSTRING("energyDown","\x4a","\xd1","\x17","\x9e"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
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

