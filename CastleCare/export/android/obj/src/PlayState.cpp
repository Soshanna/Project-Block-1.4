#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Castle
#include <Castle.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_MoodMenu
#include <MoodMenu.h>
#endif
#ifndef INCLUDED_MoodSmiley
#include <MoodSmiley.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_menu_MenuState
#include <menu/MenuState.h>
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
#ifndef INCLUDED_upgrade_UpgradeMenuState
#include <upgrade/UpgradeMenuState.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",17,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(27)
	this->rightNow = ::Date_obj::now();
	HX_STACK_LINE(17)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",31,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(33)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(34)
		this->energy = save->data->__Field(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"), hx::paccDynamic );
		HX_STACK_LINE(35)
		this->lastTime = save->data->__Field(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"), hx::paccDynamic );
		HX_STACK_LINE(36)
		this->currency = save->data->__Field(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"), hx::paccDynamic );
		HX_STACK_LINE(37)
		save->close(null(),null());
		HX_STACK_LINE(39)
		::Date tmp1 = this->rightNow;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Float tmp2 = tmp1->getTime();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Float tmp3 = this->lastTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = (Float(tmp4) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		Float tmp6 = (Float(tmp5) / Float((int)100));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Float tmp7 = (tmp6 * (int)60);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		this->timeDifference = tmp7;
		HX_STACK_LINE(40)
		::Date tmp8 = this->rightNow;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		Float tmp9 = tmp8->getTime();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),40,HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		::haxe::Log_obj::trace(tmp9,tmp10);
		HX_STACK_LINE(41)
		Float tmp11 = this->lastTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),41,HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::haxe::Log_obj::trace(tmp11,tmp12);
		HX_STACK_LINE(42)
		Float tmp13 = this->timeDifference;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),42,HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		::haxe::Log_obj::trace(tmp13,tmp14);
		HX_STACK_LINE(44)
		Float tmp15 = this->energy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		bool tmp16 = (tmp15 >= (int)100);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(44)
		if ((tmp16)){
			HX_STACK_LINE(45)
			this->energy = (int)100;
		}
		else{
			HX_STACK_LINE(46)
			Float tmp17 = this->energy;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(46)
			bool tmp18 = (tmp17 < (int)100);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			if ((tmp18)){
				HX_STACK_LINE(47)
				Float tmp19 = this->energy;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(47)
				Float tmp20 = this->timeDifference;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(47)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(47)
				this->energy = tmp21;
				HX_STACK_LINE(48)
				Float tmp22 = this->energy;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(48)
				bool tmp23 = (tmp22 > (int)100);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				if ((tmp23)){
					HX_STACK_LINE(49)
					this->energy = (int)100;
				}
			}
		}
		HX_STACK_LINE(53)
		::Castle tmp17 = ::Castle_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(53)
		this->_castleNavigation = tmp17;
		HX_STACK_LINE(54)
		::Castle tmp18 = this->_castleNavigation;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(54)
		this->add(tmp18);
		HX_STACK_LINE(56)
		int tmp19 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(56)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(56)
		Float tmp21 = (tmp20 + (int)500);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(56)
		int tmp22 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(56)
		int tmp23 = (tmp22 - (int)80);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(56)
		Dynamic tmp24 = this->clickMenu_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp25 = ::flixel::ui::FlxButton_obj::__new(tmp21,tmp23,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton _btnMenu = tmp25;		HX_STACK_VAR(_btnMenu,"_btnMenu");
		HX_STACK_LINE(57)
		_btnMenu->loadGraphic(HX_HCSTRING("assets/img/Buttons/menu.png","\x60","\x96","\x3a","\x3c"),null(),null(),null(),null(),null());
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp26 = _btnMenu;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(58)
		this->add(tmp26);
		HX_STACK_LINE(60)
		Float tmp27 = this->energy;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(60)
		::flixel::ui::FlxBar tmp28 = ::flixel::ui::FlxBar_obj::__new((int)155,(int)60,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)500,(int)30,tmp27,HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),(int)0,(int)100,true);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(60)
		this->energyBar = tmp28;
		HX_STACK_LINE(61)
		::flixel::ui::FlxBar tmp29 = this->energyBar;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		this->add(tmp29);
		HX_STACK_LINE(63)
		::flixel::FlxSprite tmp30 = ::flixel::FlxSprite_obj::__new((int)145,(int)50,HX_HCSTRING("assets/img/EnergySymbol.png","\xb3","\x22","\x4d","\xb2"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(63)
		this->energySymbol = tmp30;
		HX_STACK_LINE(64)
		::flixel::FlxSprite tmp31 = this->energySymbol;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(64)
		this->add(tmp31);
		HX_STACK_LINE(66)
		Dynamic tmp32 = this->clickMood_dyn();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(66)
		::MoodSmiley tmp33 = ::MoodSmiley_obj::__new((int)10,(int)5,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(66)
		::MoodSmiley mood = tmp33;		HX_STACK_VAR(mood,"mood");
		HX_STACK_LINE(67)
		::MoodSmiley tmp34 = mood;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(67)
		this->add(tmp34);
		HX_STACK_LINE(69)
		::flixel::ui::FlxBar tmp35 = this->energyBar;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(69)
		Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(69)
		::flixel::ui::FlxBar tmp37 = this->energyBar;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(69)
		Float tmp38 = tmp37->get_width();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(69)
		Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(69)
		Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(69)
		Float tmp41 = (tmp40 - (int)40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(69)
		::flixel::ui::FlxBar tmp42 = this->energyBar;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(69)
		Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(69)
		Float tmp44 = (tmp43 + (int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(69)
		Float tmp45 = this->energy;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(69)
		int tmp46 = ::Math_obj::floor(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(69)
		::String tmp47 = (tmp46 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(69)
		::flixel::text::FlxText tmp48 = ::flixel::text::FlxText_obj::__new(tmp41,tmp44,(int)0,tmp47,(int)16,null());		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(69)
		this->text = tmp48;
		HX_STACK_LINE(70)
		::flixel::text::FlxText tmp49 = this->text;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(70)
		this->add(tmp49);
		HX_STACK_LINE(72)
		::flixel::ui::FlxBar tmp50 = this->energyBar;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(72)
		Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(72)
		::flixel::ui::FlxBar tmp52 = this->energyBar;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(72)
		Float tmp53 = tmp52->get_width();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(72)
		Float tmp54 = (tmp51 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(72)
		Float tmp55 = (tmp54 + (int)50);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(72)
		::flixel::ui::FlxBar tmp56 = this->energyBar;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(72)
		Float tmp57 = tmp56->y;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(72)
		Float tmp58 = (tmp57 - (int)5);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(72)
		int tmp59 = this->currency;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(72)
		::String tmp60 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(72)
		Dynamic tmp61 = this->clickUpgradeMenu_dyn();		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(72)
		::flixel::ui::FlxButton tmp62 = ::flixel::ui::FlxButton_obj::__new(tmp55,tmp58,tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(72)
		this->_btnUpgradeMenu = tmp62;
		HX_STACK_LINE(73)
		::flixel::ui::FlxButton tmp63 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(73)
		tmp63->label->set_size((int)24);
		HX_STACK_LINE(74)
		::flixel::ui::FlxButton tmp64 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(74)
		tmp64->loadGraphic(HX_HCSTRING("assets/img/Buttons/leeg.png","\xdc","\xc5","\x35","\x5a"),null(),null(),null(),null(),null());
		HX_STACK_LINE(75)
		::flixel::ui::FlxButton tmp65 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(75)
		this->add(tmp65);
		HX_STACK_LINE(76)
		this->super::create();
	}
return null();
}


Void PlayState_obj::saveData( ){
{
		HX_STACK_FRAME("PlayState","saveData",0xa4e07738,"PlayState.saveData","PlayState.hx",79,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(81)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(82)
		Float tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		save->data->__FieldRef(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")) = tmp1;
		HX_STACK_LINE(83)
		int tmp2 = this->currency;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		save->data->__FieldRef(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")) = tmp2;
		HX_STACK_LINE(84)
		::Date tmp3 = this->rightNow;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float tmp4 = tmp3->getTime();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		save->data->__FieldRef(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")) = tmp4;
		HX_STACK_LINE(85)
		save->flush(null(),null());
		HX_STACK_LINE(86)
		save->close(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,saveData,(void))

Void PlayState_obj::clickMood( ){
{
		HX_STACK_FRAME("PlayState","clickMood",0x63b30d0e,"PlayState.clickMood","PlayState.hx",89,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->saveData();
		HX_STACK_LINE(91)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",92,0xb30d7781)
			{
				HX_STACK_LINE(92)
				::MoodMenu tmp1 = ::MoodMenu_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(92)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(92)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(92)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				if ((tmp4)){
					HX_STACK_LINE(92)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(91)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMood,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",96,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->saveData();
		HX_STACK_LINE(98)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",99,0xb30d7781)
			{
				HX_STACK_LINE(99)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(99)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				if ((tmp4)){
					HX_STACK_LINE(99)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(99)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(98)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::clickUpgradeMenu( ){
{
		HX_STACK_FRAME("PlayState","clickUpgradeMenu",0xe1acb524,"PlayState.clickUpgradeMenu","PlayState.hx",103,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->saveData();
		HX_STACK_LINE(105)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",106,0xb30d7781)
			{
				HX_STACK_LINE(106)
				::upgrade::UpgradeMenuState tmp1 = ::upgrade::UpgradeMenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(106)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				if ((tmp4)){
					HX_STACK_LINE(106)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(106)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(105)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickUpgradeMenu,(void))

Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",111,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(112)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		this->super::update(tmp);
		HX_STACK_LINE(113)
		::flixel::ui::FlxBar tmp1 = this->energyBar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		Float tmp2 = this->energy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		tmp1->set_value(tmp2);
		HX_STACK_LINE(114)
		::flixel::ui::FlxBar tmp3 = this->energyBar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		tmp3->updateBar();
		HX_STACK_LINE(115)
		::flixel::text::FlxText tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		Float tmp5 = this->energy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		::String tmp7 = (tmp6 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		tmp4->set_text(tmp7);
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::flixel::ui::FlxButton tmp8 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			::flixel::ui::FlxButton _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(116)
			int tmp9 = this->currency;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::String tmp10 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			::String Text = tmp10;		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(116)
			bool tmp11 = (_this->label == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			if ((tmp11)){
				HX_STACK_LINE(116)
				bool tmp12 = (Text != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(116)
				if ((tmp12)){
					HX_STACK_LINE(116)
					Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					::flixel::math::FlxPoint tmp14 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					Float tmp17 = _this->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(116)
					::flixel::math::FlxPoint tmp18 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(116)
					Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(116)
					::String tmp21 = Text;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(116)
					::flixel::text::FlxText tmp22 = ::flixel::text::FlxText_obj::__new(tmp16,tmp20,(int)80,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(116)
					_this->set_label(tmp22);
					HX_STACK_LINE(116)
					_this->label->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
					HX_STACK_LINE(116)
					Float tmp23 = _this->labelAlphas->__get(_this->status);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(116)
					_this->label->set_alpha(tmp23);
					HX_STACK_LINE(116)
					_this->label->drawFrame(true);
				}
			}
			else{
				HX_STACK_LINE(116)
				::String tmp12 = Text;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(116)
				_this->label->set_text(tmp12);
			}
			HX_STACK_LINE(116)
			Text;
		}
		HX_STACK_LINE(117)
		Float tmp8 = this->energy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		bool tmp9 = (tmp8 < (int)100);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		if ((tmp9)){
			HX_STACK_LINE(118)
			hx::AddEq(this->energy,((Float)0.01));
		}
		else{
			HX_STACK_LINE(120)
			Float tmp10 = this->energy;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			bool tmp11 = (tmp10 >= (int)100);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			if ((tmp11)){
				HX_STACK_LINE(121)
				this->energy = (int)100;
			}
		}
		HX_STACK_LINE(123)
		Float tmp10 = this->energy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		bool tmp11 = (tmp10 < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		if ((tmp11)){
			HX_STACK_LINE(124)
			this->energy = (int)0;
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(energy,"energy");
	HX_MARK_MEMBER_NAME(currency,"currency");
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_MARK_MEMBER_NAME(energySymbol,"energySymbol");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(energyBar,"energyBar");
	HX_MARK_MEMBER_NAME(_castleNavigation,"_castleNavigation");
	HX_MARK_MEMBER_NAME(rightNow,"rightNow");
	HX_MARK_MEMBER_NAME(timeDifference,"timeDifference");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(energy,"energy");
	HX_VISIT_MEMBER_NAME(currency,"currency");
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_VISIT_MEMBER_NAME(energySymbol,"energySymbol");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(energyBar,"energyBar");
	HX_VISIT_MEMBER_NAME(_castleNavigation,"_castleNavigation");
	HX_VISIT_MEMBER_NAME(rightNow,"rightNow");
	HX_VISIT_MEMBER_NAME(timeDifference,"timeDifference");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { return currency; }
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		if (HX_FIELD_EQ(inName,"rightNow") ) { return rightNow; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		if (HX_FIELD_EQ(inName,"saveData") ) { return saveData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"energyBar") ) { return energyBar; }
		if (HX_FIELD_EQ(inName,"clickMood") ) { return clickMood_dyn(); }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"energySymbol") ) { return energySymbol; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timeDifference") ) { return timeDifference; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { return _btnUpgradeMenu; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickUpgradeMenu") ) { return clickUpgradeMenu_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_castleNavigation") ) { return _castleNavigation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightNow") ) { rightNow=inValue.Cast< ::Date >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"energyBar") ) { energyBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"energySymbol") ) { energySymbol=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timeDifference") ) { timeDifference=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { _btnUpgradeMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_castleNavigation") ) { _castleNavigation=inValue.Cast< ::Castle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
	outFields->push(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"));
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"));
	outFields->push(HX_HCSTRING("energySymbol","\x40","\x92","\x5d","\xeb"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"));
	outFields->push(HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc"));
	outFields->push(HX_HCSTRING("rightNow","\x9a","\x56","\x1b","\xe4"));
	outFields->push(HX_HCSTRING("timeDifference","\x6a","\xde","\x01","\xe6"));
	outFields->push(HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PlayState_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnUpgradeMenu),HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,energySymbol),HX_HCSTRING("energySymbol","\x40","\x92","\x5d","\xeb")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,energyBar),HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68")},
	{hx::fsObject /*::Castle*/ ,(int)offsetof(PlayState_obj,_castleNavigation),HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc")},
	{hx::fsObject /*::Date*/ ,(int)offsetof(PlayState_obj,rightNow),HX_HCSTRING("rightNow","\x9a","\x56","\x1b","\xe4")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,timeDifference),HX_HCSTRING("timeDifference","\x6a","\xde","\x01","\xe6")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,lastTime),HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
	HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"),
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"),
	HX_HCSTRING("energySymbol","\x40","\x92","\x5d","\xeb"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"),
	HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc"),
	HX_HCSTRING("rightNow","\x9a","\x56","\x1b","\xe4"),
	HX_HCSTRING("timeDifference","\x6a","\xde","\x01","\xe6"),
	HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("saveData","\x07","\xf0","\x1c","\xf6"),
	HX_HCSTRING("clickMood","\x5f","\x49","\x60","\x27"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	HX_HCSTRING("clickUpgradeMenu","\xf3","\x14","\x55","\x89"),
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

