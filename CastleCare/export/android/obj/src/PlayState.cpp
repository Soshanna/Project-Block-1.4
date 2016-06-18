#include <hxcpp.h>

#ifndef INCLUDED_Castle
#include <Castle.h>
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
	HX_STACK_LINE(20)
	this->currency = (int)0;
	HX_STACK_LINE(19)
	this->energy = (int)100;
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",28,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(30)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(31)
		this->energy = save->data->__Field(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"), hx::paccDynamic );
		HX_STACK_LINE(32)
		this->currency = save->data->__Field(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"), hx::paccDynamic );
		HX_STACK_LINE(33)
		save->close(null(),null());
		HX_STACK_LINE(35)
		::Castle tmp1 = ::Castle_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->_castleNavigation = tmp1;
		HX_STACK_LINE(36)
		::Castle tmp2 = this->_castleNavigation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		this->add(tmp2);
		HX_STACK_LINE(38)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Float tmp5 = (tmp4 + (int)500);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		int tmp7 = (tmp6 - (int)80);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Dynamic tmp8 = this->clickMenu_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp9 = ::flixel::ui::FlxButton_obj::__new(tmp5,tmp7,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton _btnMenu = tmp9;		HX_STACK_VAR(_btnMenu,"_btnMenu");
		HX_STACK_LINE(39)
		_btnMenu->loadGraphic(HX_HCSTRING("assets/img/Buttons/menu.png","\x60","\x96","\x3a","\x3c"),null(),null(),null(),null(),null());
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp10 = _btnMenu;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		this->add(tmp10);
		HX_STACK_LINE(42)
		int tmp11 = this->energy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		::flixel::ui::FlxBar tmp12 = ::flixel::ui::FlxBar_obj::__new((int)155,(int)60,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)500,(int)30,tmp11,HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),(int)0,(int)100,true);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		this->energyBar = tmp12;
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp13 = this->energyBar;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(43)
		this->add(tmp13);
		HX_STACK_LINE(45)
		::flixel::FlxSprite tmp14 = ::flixel::FlxSprite_obj::__new((int)145,(int)50,HX_HCSTRING("assets/img/EnergySymbol.png","\xb3","\x22","\x4d","\xb2"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(45)
		this->energySymbol = tmp14;
		HX_STACK_LINE(46)
		::flixel::FlxSprite tmp15 = this->energySymbol;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		this->add(tmp15);
		HX_STACK_LINE(48)
		Dynamic tmp16 = this->clickMood_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(48)
		::MoodSmiley tmp17 = ::MoodSmiley_obj::__new((int)10,(int)5,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(48)
		::MoodSmiley mood = tmp17;		HX_STACK_VAR(mood,"mood");
		HX_STACK_LINE(49)
		::MoodSmiley tmp18 = mood;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		this->add(tmp18);
		HX_STACK_LINE(51)
		::flixel::ui::FlxBar tmp19 = this->energyBar;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		::flixel::ui::FlxBar tmp21 = this->energyBar;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		Float tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(51)
		Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(51)
		Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(51)
		Float tmp25 = (tmp24 - (int)40);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(51)
		::flixel::ui::FlxBar tmp26 = this->energyBar;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		Float tmp28 = (tmp27 + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(51)
		int tmp29 = this->energy;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(51)
		::String tmp30 = (tmp29 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(51)
		::flixel::text::FlxText tmp31 = ::flixel::text::FlxText_obj::__new(tmp25,tmp28,(int)0,tmp30,(int)16,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(51)
		this->text = tmp31;
		HX_STACK_LINE(52)
		::flixel::text::FlxText tmp32 = this->text;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(52)
		this->add(tmp32);
		HX_STACK_LINE(54)
		::flixel::ui::FlxBar tmp33 = this->energyBar;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(54)
		Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(54)
		::flixel::ui::FlxBar tmp35 = this->energyBar;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(54)
		Float tmp36 = tmp35->get_width();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(54)
		Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(54)
		Float tmp38 = (tmp37 + (int)50);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(54)
		::flixel::ui::FlxBar tmp39 = this->energyBar;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(54)
		Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(54)
		Float tmp41 = (tmp40 - (int)5);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(54)
		int tmp42 = this->currency;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(54)
		::String tmp43 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(54)
		Dynamic tmp44 = this->clickUpgradeMenu_dyn();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(54)
		::flixel::ui::FlxButton tmp45 = ::flixel::ui::FlxButton_obj::__new(tmp38,tmp41,tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(54)
		this->_btnUpgradeMenu = tmp45;
		HX_STACK_LINE(55)
		::flixel::ui::FlxButton tmp46 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(55)
		tmp46->label->set_size((int)24);
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp47 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(56)
		tmp47->loadGraphic(HX_HCSTRING("assets/img/Buttons/leeg.png","\xdc","\xc5","\x35","\x5a"),null(),null(),null(),null(),null());
		HX_STACK_LINE(57)
		::flixel::ui::FlxButton tmp48 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(57)
		this->add(tmp48);
		HX_STACK_LINE(58)
		this->super::create();
	}
return null();
}


Void PlayState_obj::saveData( ){
{
		HX_STACK_FRAME("PlayState","saveData",0xa4e07738,"PlayState.saveData","PlayState.hx",61,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(63)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(64)
		int tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		save->data->__FieldRef(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")) = tmp1;
		HX_STACK_LINE(65)
		int tmp2 = this->currency;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		save->data->__FieldRef(HX_HCSTRING("curreny","\x3e","\x9c","\xe3","\xcb")) = tmp2;
		HX_STACK_LINE(66)
		save->flush(null(),null());
		HX_STACK_LINE(67)
		save->close(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,saveData,(void))

Void PlayState_obj::clickMood( ){
{
		HX_STACK_FRAME("PlayState","clickMood",0x63b30d0e,"PlayState.clickMood","PlayState.hx",70,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",72,0xb30d7781)
			{
				HX_STACK_LINE(72)
				::MoodMenu tmp1 = ::MoodMenu_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(72)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				if ((tmp4)){
					HX_STACK_LINE(72)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(71)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(74)
		this->saveData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMood,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",77,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",79,0xb30d7781)
			{
				HX_STACK_LINE(79)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(79)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(79)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(79)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				if ((tmp4)){
					HX_STACK_LINE(79)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(78)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(81)
		this->saveData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::clickUpgradeMenu( ){
{
		HX_STACK_FRAME("PlayState","clickUpgradeMenu",0xe1acb524,"PlayState.clickUpgradeMenu","PlayState.hx",84,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",86,0xb30d7781)
			{
				HX_STACK_LINE(86)
				::upgrade::UpgradeMenuState tmp1 = ::upgrade::UpgradeMenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(86)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(86)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(86)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				if ((tmp4)){
					HX_STACK_LINE(86)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(85)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(88)
		this->saveData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickUpgradeMenu,(void))

Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",92,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(93)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->super::update(tmp);
		HX_STACK_LINE(94)
		::flixel::text::FlxText tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		int tmp2 = this->energy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::String tmp3 = (tmp2 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		tmp1->set_text(tmp3);
		HX_STACK_LINE(95)
		::flixel::ui::FlxBar tmp4 = this->energyBar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		int tmp5 = this->energy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		tmp4->set_value(tmp5);
		HX_STACK_LINE(96)
		::flixel::ui::FlxBar tmp6 = this->energyBar;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		tmp6->updateBar();
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::flixel::ui::FlxButton tmp7 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			::flixel::ui::FlxButton _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(97)
			int tmp8 = this->currency;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			::String tmp9 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			::String Text = tmp9;		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(97)
			bool tmp10 = (_this->label == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			if ((tmp10)){
				HX_STACK_LINE(97)
				bool tmp11 = (Text != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				if ((tmp11)){
					HX_STACK_LINE(97)
					Float tmp12 = _this->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(97)
					::flixel::math::FlxPoint tmp13 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(97)
					Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(97)
					Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(97)
					Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(97)
					::flixel::math::FlxPoint tmp17 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(97)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(97)
					Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(97)
					::String tmp20 = Text;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(97)
					::flixel::text::FlxText tmp21 = ::flixel::text::FlxText_obj::__new(tmp15,tmp19,(int)80,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(97)
					_this->set_label(tmp21);
					HX_STACK_LINE(97)
					_this->label->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
					HX_STACK_LINE(97)
					Float tmp22 = _this->labelAlphas->__get(_this->status);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(97)
					_this->label->set_alpha(tmp22);
					HX_STACK_LINE(97)
					_this->label->drawFrame(true);
				}
			}
			else{
				HX_STACK_LINE(97)
				::String tmp11 = Text;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				_this->label->set_text(tmp11);
			}
			HX_STACK_LINE(97)
			Text;
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
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"energyBar") ) { energyBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"energySymbol") ) { energySymbol=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
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
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlayState_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PlayState_obj,_btnUpgradeMenu),HX_HCSTRING("_btnUpgradeMenu","\xfe","\x67","\x37","\x05")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,energySymbol),HX_HCSTRING("energySymbol","\x40","\x92","\x5d","\xeb")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,energyBar),HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68")},
	{hx::fsObject /*::Castle*/ ,(int)offsetof(PlayState_obj,_castleNavigation),HX_HCSTRING("_castleNavigation","\x0b","\x1b","\x5f","\xfc")},
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

