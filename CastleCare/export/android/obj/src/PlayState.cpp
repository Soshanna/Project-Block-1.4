#include <hxcpp.h>

#ifndef INCLUDED_Castle
#include <Castle.h>
#endif
#ifndef INCLUDED_EnergyBar
#include <EnergyBar.h>
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
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
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
#ifndef INCLUDED_quest_QuestState
#include <quest/QuestState.h>
#endif
#ifndef INCLUDED_upgrade_UpgradeMenuState
#include <upgrade/UpgradeMenuState.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",16,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	this->currency = (int)0;
	HX_STACK_LINE(19)
	this->doctorBool = false;
	HX_STACK_LINE(16)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",32,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::PlayState instance = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(35)
		::Castle tmp = ::Castle_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		this->_castleNavigation = tmp;
		HX_STACK_LINE(36)
		::Castle tmp1 = this->_castleNavigation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		this->add(tmp1);
		HX_STACK_LINE(38)
		int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Float tmp4 = (tmp3 + (int)520);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		int tmp5 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		int tmp6 = (tmp5 - (int)35);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Dynamic tmp7 = this->clickMenu_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp8 = ::flixel::ui::FlxButton_obj::__new(tmp4,tmp6,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		this->_btnMenu = tmp8;
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp9 = this->_btnMenu;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		this->add(tmp9);
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp10 = this->_btnMenu;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Dynamic tmp12 = this->clickQuest_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp13 = ::flixel::ui::FlxButton_obj::__new((int)20,tmp11,HX_HCSTRING("Quest","\xc2","\xfb","\x17","\xf1"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		this->_btnQuest = tmp13;
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp14 = this->_btnQuest;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		this->add(tmp14);
		HX_STACK_LINE(44)
		::EnergyBar tmp15 = ::EnergyBar_obj::__new((int)125,(int)35,(int)0,(int)0,HX_HCSTRING("assets/img/FullEnergy.png","\xaa","\x75","\xa5","\x4b"),HX_HCSTRING("assets/img/FullEnergy.png","\xaa","\x75","\xa5","\x4b"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		this->energyBar = tmp15;
		HX_STACK_LINE(45)
		::EnergyBar tmp16 = this->energyBar;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(45)
		this->add(tmp16);
		HX_STACK_LINE(47)
		Dynamic tmp17 = this->clickMood_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(47)
		::MoodSmiley tmp18 = ::MoodSmiley_obj::__new((int)10,(int)5,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(47)
		::MoodSmiley mood = tmp18;		HX_STACK_VAR(mood,"mood");
		HX_STACK_LINE(48)
		::MoodSmiley tmp19 = mood;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(48)
		this->add(tmp19);
		HX_STACK_LINE(50)
		::EnergyBar tmp20 = this->energyBar;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(50)
		Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(50)
		::EnergyBar tmp22 = this->energyBar;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(50)
		Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(50)
		::flixel::FlxSprite tmp24 = ::flixel::FlxSprite_obj::__new(tmp21,tmp23,HX_HCSTRING("assets/img/EnergySymbol.png","\xb3","\x22","\x4d","\xb2"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(50)
		::flixel::FlxSprite energySymbol = tmp24;		HX_STACK_VAR(energySymbol,"energySymbol");
		HX_STACK_LINE(51)
		::flixel::FlxSprite tmp25 = energySymbol;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(51)
		this->add(tmp25);
		HX_STACK_LINE(53)
		::EnergyBar tmp26 = this->energyBar;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(53)
		Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(53)
		::EnergyBar tmp28 = this->energyBar;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(53)
		Float tmp29 = tmp28->get_width();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(53)
		Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(53)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(53)
		Float tmp32 = (tmp31 - (int)80);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(53)
		::EnergyBar tmp33 = this->energyBar;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(53)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(53)
		Float tmp35 = (tmp34 + (int)25);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(53)
		::EnergyBar tmp36 = this->energyBar;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(53)
		Float tmp37 = tmp36->get_percent();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(53)
		::String tmp38 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(53)
		::String tmp39 = (tmp38 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp40 = ::flixel::text::FlxText_obj::__new(tmp32,tmp35,(int)0,tmp39,(int)16,null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(53)
		this->text = tmp40;
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp41 = this->text;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(54)
		this->add(tmp41);
		HX_STACK_LINE(56)
		::EnergyBar tmp42 = this->energyBar;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(56)
		Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(56)
		::EnergyBar tmp44 = this->energyBar;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(56)
		Float tmp45 = tmp44->get_width();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(56)
		Float tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(56)
		Float tmp47 = (tmp46 + (int)50);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(56)
		::EnergyBar tmp48 = this->energyBar;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(56)
		Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(56)
		Float tmp50 = (tmp49 + (int)25);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(56)
		int tmp51 = this->currency;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(56)
		::String tmp52 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(56)
		Dynamic tmp53 = this->clickUpgradeMenu_dyn();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp54 = ::flixel::ui::FlxButton_obj::__new(tmp47,tmp50,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(56)
		this->_btnUpgradeMenu = tmp54;
		HX_STACK_LINE(57)
		::flixel::ui::FlxButton tmp55 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(57)
		this->add(tmp55);
		HX_STACK_LINE(59)
		Dynamic tmp56 = this->clickEnergy_dyn();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(59)
		::flixel::ui::FlxButton tmp57 = ::flixel::ui::FlxButton_obj::__new((int)150,(int)300,HX_HCSTRING("EnergyUp","\x63","\x71","\xfc","\x92"),tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(59)
		this->_btnEnergyUp = tmp57;
		HX_STACK_LINE(60)
		::flixel::ui::FlxButton tmp58 = this->_btnEnergyUp;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(60)
		this->add(tmp58);
		HX_STACK_LINE(62)
		Dynamic tmp59 = this->clickEnergyDown_dyn();		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(62)
		::flixel::ui::FlxButton tmp60 = ::flixel::ui::FlxButton_obj::__new((int)150,(int)350,HX_HCSTRING("EnergyDown","\x6a","\xd5","\xc8","\x94"),tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(62)
		this->_btnEnergydown = tmp60;
		HX_STACK_LINE(63)
		::flixel::ui::FlxButton tmp61 = this->_btnEnergydown;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(63)
		this->add(tmp61);
		HX_STACK_LINE(65)
		this->super::create();
	}
return null();
}


Void PlayState_obj::miniGameWon( ){
{
		HX_STACK_FRAME("PlayState","miniGameWon",0x36bd2c1c,"PlayState.miniGameWon","PlayState.hx",73,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		hx::AddEq(this->currency,(int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,miniGameWon,(void))

Void PlayState_obj::clickMood( ){
{
		HX_STACK_FRAME("PlayState","clickMood",0x63b30d0e,"PlayState.clickMood","PlayState.hx",76,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",78,0xb30d7781)
			{
				HX_STACK_LINE(78)
				::MoodMenu tmp1 = ::MoodMenu_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(78)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(78)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				if ((tmp4)){
					HX_STACK_LINE(78)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(77)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMood,(void))

Void PlayState_obj::clickEnergy( ){
{
		HX_STACK_FRAME("PlayState","clickEnergy",0x33884c9f,"PlayState.clickEnergy","PlayState.hx",82,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::EnergyBar tmp = this->energyBar;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			::EnergyBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(84)
		::EnergyBar tmp = this->energyBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		tmp->set_x((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickEnergy,(void))

Void PlayState_obj::clickEnergyDown( ){
{
		HX_STACK_FRAME("PlayState","clickEnergyDown",0xc59baca1,"PlayState.clickEnergyDown","PlayState.hx",87,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::EnergyBar tmp = this->energyBar;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			::EnergyBar _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Float tmp1 = _g->get_value();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			Float tmp2 = (tmp1 - (int)20);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(89)
		::EnergyBar tmp = this->energyBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->set_x((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickEnergyDown,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",92,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",94,0xb30d7781)
			{
				HX_STACK_LINE(94)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(94)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				if ((tmp4)){
					HX_STACK_LINE(94)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(93)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::clickQuest( ){
{
		HX_STACK_FRAME("PlayState","clickQuest",0x2a826feb,"PlayState.clickQuest","PlayState.hx",98,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",100,0xb30d7781)
			{
				HX_STACK_LINE(100)
				::quest::QuestState tmp1 = ::quest::QuestState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(100)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				if ((tmp4)){
					HX_STACK_LINE(100)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(99)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickQuest,(void))

Void PlayState_obj::clickUpgradeMenu( ){
{
		HX_STACK_FRAME("PlayState","clickUpgradeMenu",0xe1acb524,"PlayState.clickUpgradeMenu","PlayState.hx",104,0xb30d7781)
		HX_STACK_THIS(this)
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
		::EnergyBar tmp1 = this->energyBar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		Float tmp2 = tmp1->get_value();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(114)
			::EnergyBar tmp4 = this->energyBar;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			::EnergyBar tmp5 = this->energyBar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			Float tmp6 = tmp5->get_value();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			Float tmp7 = (tmp6 * ((Float)0.01));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			tmp4->scale->set_x(tmp7);
		}
		HX_STACK_LINE(116)
		::flixel::text::FlxText tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		::EnergyBar tmp5 = this->energyBar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Float tmp6 = tmp5->get_percent();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		::String tmp8 = (tmp7 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		tmp4->set_text(tmp8);
	}
return null();
}


::PlayState PlayState_obj::instance;

::PlayState PlayState_obj::getInstance( ){
	HX_STACK_FRAME("PlayState","getInstance",0x89232fba,"PlayState.getInstance","PlayState.hx",68,0xb30d7781)
	HX_STACK_LINE(69)
	::PlayState tmp = ::PlayState_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,getInstance,return )


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(doctorBool,"doctorBool");
	HX_MARK_MEMBER_NAME(energy,"energy");
	HX_MARK_MEMBER_NAME(currency,"currency");
	HX_MARK_MEMBER_NAME(_btnEnergyUp,"_btnEnergyUp");
	HX_MARK_MEMBER_NAME(_btnEnergydown,"_btnEnergydown");
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_btnQuest,"_btnQuest");
	HX_MARK_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(energyBar,"energyBar");
	HX_MARK_MEMBER_NAME(_castleNavigation,"_castleNavigation");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doctorBool,"doctorBool");
	HX_VISIT_MEMBER_NAME(energy,"energy");
	HX_VISIT_MEMBER_NAME(currency,"currency");
	HX_VISIT_MEMBER_NAME(_btnEnergyUp,"_btnEnergyUp");
	HX_VISIT_MEMBER_NAME(_btnEnergydown,"_btnEnergydown");
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_btnQuest,"_btnQuest");
	HX_VISIT_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(energyBar,"energyBar");
	HX_VISIT_MEMBER_NAME(_castleNavigation,"_castleNavigation");
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnQuest") ) { return _btnQuest; }
		if (HX_FIELD_EQ(inName,"energyBar") ) { return energyBar; }
		if (HX_FIELD_EQ(inName,"clickMood") ) { return clickMood_dyn(); }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doctorBool") ) { return doctorBool; }
		if (HX_FIELD_EQ(inName,"clickQuest") ) { return clickQuest_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"miniGameWon") ) { return miniGameWon_dyn(); }
		if (HX_FIELD_EQ(inName,"clickEnergy") ) { return clickEnergy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnEnergyUp") ) { return _btnEnergyUp; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnEnergydown") ) { return _btnEnergydown; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { return _btnUpgradeMenu; }
		if (HX_FIELD_EQ(inName,"clickEnergyDown") ) { return clickEnergyDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickUpgradeMenu") ) { return clickUpgradeMenu_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_castleNavigation") ) { return _castleNavigation; }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnQuest") ) { _btnQuest=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"energyBar") ) { energyBar=inValue.Cast< ::EnergyBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doctorBool") ) { doctorBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnEnergyUp") ) { _btnEnergyUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnEnergydown") ) { _btnEnergydown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { _btnUpgradeMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_castleNavigation") ) { _castleNavigation=inValue.Cast< ::Castle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::PlayState >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"));
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
	outFields->push(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"));
	outFields->push(HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13"));
	outFields->push(HX_HCSTRING("_btnEnergydown","\xe7","\x66","\x41","\xc6"));
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0"));
	outFields->push(HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"));
	outFields->push(HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlayState_obj,doctorBool),HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergyUp),HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnEnergydown),HX_HCSTRING("_btnEnergydown","\xe7","\x66","\x41","\xc6")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnQuest),HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnUpgradeMenu),HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::EnergyBar*/ ,(int)offsetof(PlayState_obj,energyBar),HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68")},
	{hx::fsObject /*::Castle*/ ,(int)offsetof(PlayState_obj,_castleNavigation),HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(void *) &PlayState_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"),
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
	HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"),
	HX_HCSTRING("_btnEnergyUp","\xc0","\x9d","\xa4","\x13"),
	HX_HCSTRING("_btnEnergydown","\xe7","\x66","\x41","\xc6"),
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0"),
	HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"),
	HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("miniGameWon","\xad","\xde","\x6e","\x2d"),
	HX_HCSTRING("clickMood","\x5f","\x49","\x60","\x27"),
	HX_HCSTRING("clickEnergy","\x30","\xff","\x39","\x2a"),
	HX_HCSTRING("clickEnergyDown","\xb2","\x7b","\x28","\x39"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	HX_HCSTRING("clickQuest","\x7a","\xfa","\x69","\x9e"),
	HX_HCSTRING("clickUpgradeMenu","\xf3","\x14","\x55","\x89"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::instance,"instance");
};

#endif

hx::Class PlayState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("getInstance","\x4b","\xe2","\xd4","\x7f"),
	::String(null()) };

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
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

