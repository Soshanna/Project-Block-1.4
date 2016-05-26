#include <hxcpp.h>

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
	HX_STACK_LINE(24)
	this->currency = (int)0;
	HX_STACK_LINE(18)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",27,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		Float tmp2 = (tmp1 + (int)520);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		int tmp4 = (tmp3 - (int)35);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Dynamic tmp5 = this->clickMenu_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new(tmp2,tmp4,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		this->_btnMenu = tmp6;
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp7 = this->_btnMenu;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		this->add(tmp7);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp8 = this->_btnMenu;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		Dynamic tmp10 = this->clickQuest_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp11 = ::flixel::ui::FlxButton_obj::__new((int)20,tmp9,HX_HCSTRING("Quest","\xc2","\xfb","\x17","\xf1"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		this->_btnQuest = tmp11;
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp12 = this->_btnQuest;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(32)
		this->add(tmp12);
		HX_STACK_LINE(34)
		::EnergyBar tmp13 = ::EnergyBar_obj::__new((int)125,(int)35,(int)0,(int)0,HX_HCSTRING("assets/img/EmptyEnergy.png","\xb8","\xb6","\x54","\xde"),HX_HCSTRING("assets/img/FullEnergy.png","\xaa","\x75","\xa5","\x4b"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		this->energyBar = tmp13;
		HX_STACK_LINE(35)
		::EnergyBar tmp14 = this->energyBar;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		tmp14->set_value((int)50);
		HX_STACK_LINE(36)
		::EnergyBar tmp15 = this->energyBar;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		this->add(tmp15);
		HX_STACK_LINE(38)
		Dynamic tmp16 = this->clickMood_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		::MoodSmiley tmp17 = ::MoodSmiley_obj::__new((int)10,(int)5,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(38)
		::MoodSmiley mood = tmp17;		HX_STACK_VAR(mood,"mood");
		HX_STACK_LINE(39)
		::MoodSmiley tmp18 = mood;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		this->add(tmp18);
		HX_STACK_LINE(41)
		::EnergyBar tmp19 = this->energyBar;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(41)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		::EnergyBar tmp21 = this->energyBar;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(41)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp23 = ::flixel::FlxSprite_obj::__new(tmp20,tmp22,HX_HCSTRING("assets/img/EnergySymbol.png","\xb3","\x22","\x4d","\xb2"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(41)
		::flixel::FlxSprite energySymbol = tmp23;		HX_STACK_VAR(energySymbol,"energySymbol");
		HX_STACK_LINE(42)
		::flixel::FlxSprite tmp24 = energySymbol;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(42)
		this->add(tmp24);
		HX_STACK_LINE(44)
		::EnergyBar tmp25 = this->energyBar;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(44)
		Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		::EnergyBar tmp27 = this->energyBar;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		Float tmp28 = tmp27->get_width();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(44)
		Float tmp29 = (Float(tmp28) / Float((int)2));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(44)
		Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(44)
		Float tmp31 = (tmp30 - (int)10);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(44)
		::EnergyBar tmp32 = this->energyBar;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(44)
		Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(44)
		Float tmp34 = (tmp33 + (int)25);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(44)
		::EnergyBar tmp35 = this->energyBar;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(44)
		Float tmp36 = tmp35->get_percent();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(44)
		::String tmp37 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(44)
		::flixel::text::FlxText tmp38 = ::flixel::text::FlxText_obj::__new(tmp31,tmp34,(int)0,tmp37,(int)16,null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(44)
		::flixel::text::FlxText text = tmp38;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(45)
		::flixel::text::FlxText tmp39 = text;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(45)
		this->add(tmp39);
		HX_STACK_LINE(47)
		::EnergyBar tmp40 = this->energyBar;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(47)
		Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(47)
		::EnergyBar tmp42 = this->energyBar;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(47)
		Float tmp43 = tmp42->get_width();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(47)
		Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(47)
		Float tmp45 = (tmp44 + (int)50);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(47)
		::EnergyBar tmp46 = this->energyBar;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(47)
		Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(47)
		Float tmp48 = (tmp47 + (int)25);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(47)
		int tmp49 = this->currency;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(47)
		::String tmp50 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(47)
		Dynamic tmp51 = this->clickUpgradeMenu_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton tmp52 = ::flixel::ui::FlxButton_obj::__new(tmp45,tmp48,tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(47)
		this->_btnUpgradeMenu = tmp52;
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp53 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(48)
		this->add(tmp53);
		HX_STACK_LINE(50)
		this->super::create();
	}
return null();
}


Void PlayState_obj::clickMood( ){
{
		HX_STACK_FRAME("PlayState","clickMood",0x63b30d0e,"PlayState.clickMood","PlayState.hx",53,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",55,0xb30d7781)
			{
				HX_STACK_LINE(55)
				::MoodMenu tmp1 = ::MoodMenu_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(55)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				if ((tmp4)){
					HX_STACK_LINE(55)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(55)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(54)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMood,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",59,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",61,0xb30d7781)
			{
				HX_STACK_LINE(61)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(61)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(61)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				if ((tmp4)){
					HX_STACK_LINE(61)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(61)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(60)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::clickQuest( ){
{
		HX_STACK_FRAME("PlayState","clickQuest",0x2a826feb,"PlayState.clickQuest","PlayState.hx",65,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",67,0xb30d7781)
			{
				HX_STACK_LINE(67)
				::quest::QuestState tmp1 = ::quest::QuestState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(67)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				if ((tmp4)){
					HX_STACK_LINE(67)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(66)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickQuest,(void))

Void PlayState_obj::clickUpgradeMenu( ){
{
		HX_STACK_FRAME("PlayState","clickUpgradeMenu",0xe1acb524,"PlayState.clickUpgradeMenu","PlayState.hx",71,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",73,0xb30d7781)
			{
				HX_STACK_LINE(73)
				::upgrade::UpgradeMenuState tmp1 = ::upgrade::UpgradeMenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(73)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				if ((tmp4)){
					HX_STACK_LINE(73)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(72)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickUpgradeMenu,(void))

Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",78,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(79)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		this->super::update(tmp);
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(doctorBool,"doctorBool");
	HX_MARK_MEMBER_NAME(energy,"energy");
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_btnQuest,"_btnQuest");
	HX_MARK_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_MARK_MEMBER_NAME(energyBar,"energyBar");
	HX_MARK_MEMBER_NAME(currency,"currency");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doctorBool,"doctorBool");
	HX_VISIT_MEMBER_NAME(energy,"energy");
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_btnQuest,"_btnQuest");
	HX_VISIT_MEMBER_NAME(_btnUpgradeMenu,"_btnUpgradeMenu");
	HX_VISIT_MEMBER_NAME(energyBar,"energyBar");
	HX_VISIT_MEMBER_NAME(currency,"currency");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		if (HX_FIELD_EQ(inName,"currency") ) { return currency; }
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
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { return _btnUpgradeMenu; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickUpgradeMenu") ) { return clickUpgradeMenu_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnQuest") ) { _btnQuest=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"energyBar") ) { energyBar=inValue.Cast< ::EnergyBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doctorBool") ) { doctorBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_btnUpgradeMenu") ) { _btnUpgradeMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"));
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0"));
	outFields->push(HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"));
	outFields->push(HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"));
	outFields->push(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlayState_obj,doctorBool),HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnQuest),HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnUpgradeMenu),HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05")},
	{hx::fsObject /*::EnergyBar*/ ,(int)offsetof(PlayState_obj,energyBar),HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68")},
	{hx::fsInt,(int)offsetof(PlayState_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doctorBool","\xe9","\x2a","\x3f","\xbb"),
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_btnQuest","\x45","\x23","\xf9","\xf0"),
	HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05"),
	HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68"),
	HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickMood","\x5f","\x49","\x60","\x27"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	HX_HCSTRING("clickQuest","\x7a","\xfa","\x69","\x9e"),
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

