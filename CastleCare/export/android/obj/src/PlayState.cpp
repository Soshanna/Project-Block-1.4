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
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(26)
	this->currency = (int)0;
	HX_STACK_LINE(20)
	this->doctorBool = false;
	HX_STACK_LINE(18)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",29,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Float tmp2 = (tmp1 + (int)520);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		int tmp4 = (tmp3 - (int)35);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		Dynamic tmp5 = this->clickMenu_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new(tmp2,tmp4,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		this->_btnMenu = tmp6;
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp7 = this->_btnMenu;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		this->add(tmp7);
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp8 = this->_btnMenu;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		Dynamic tmp10 = this->clickQuest_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp11 = ::flixel::ui::FlxButton_obj::__new((int)20,tmp9,HX_HCSTRING("Quest","\xc2","\xfb","\x17","\xf1"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		this->_btnQuest = tmp11;
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp12 = this->_btnQuest;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		this->add(tmp12);
		HX_STACK_LINE(36)
		int tmp13 = this->currency;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		::String tmp14 = (HX_HCSTRING("$ ","\x7c","\x1f","\x00","\x00") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		Dynamic tmp15 = this->clickUpgradeMenu_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)500,(int)60,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(36)
		this->_btnUpgradeMenu = tmp16;
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp17 = this->_btnUpgradeMenu;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		this->add(tmp17);
		HX_STACK_LINE(39)
		::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("img/EmptyEnergy.png","\x84","\xc1","\xcd","\xf2"),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		::openfl::_legacy::display::BitmapData bitmapdata = tmp18;		HX_STACK_VAR(bitmapdata,"bitmapdata");
		HX_STACK_LINE(40)
		::flixel::ui::FlxBar tmp19 = this->energyBar;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(40)
		::openfl::_legacy::display::BitmapData tmp20 = bitmapdata;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(40)
		tmp19->createImageFilledBar(tmp20,(int)-16744448);
		HX_STACK_LINE(41)
		::flixel::ui::FlxBar tmp21 = this->energyBar;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(41)
		this->add(tmp21);
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp22 = this->energyBar;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp24 = this->energyBar;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(43)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(43)
		Float tmp28 = (tmp27 - (int)10);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp29 = this->energyBar;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(43)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(43)
		Float tmp31 = (tmp30 + (int)5);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(43)
		::flixel::ui::FlxBar tmp32 = this->energyBar;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(43)
		Float tmp33 = tmp32->get_percent();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(43)
		::String tmp34 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(43)
		::flixel::text::FlxText tmp35 = ::flixel::text::FlxText_obj::__new(tmp28,tmp31,(int)0,tmp34,(int)16,null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(43)
		::flixel::text::FlxText text = tmp35;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(44)
		::flixel::text::FlxText tmp36 = text;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(44)
		this->add(tmp36);
		HX_STACK_LINE(46)
		this->super::create();
	}
return null();
}


Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",49,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",51,0xb30d7781)
			{
				HX_STACK_LINE(51)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(51)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				if ((tmp4)){
					HX_STACK_LINE(51)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(51)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(50)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))

Void PlayState_obj::clickQuest( ){
{
		HX_STACK_FRAME("PlayState","clickQuest",0x2a826feb,"PlayState.clickQuest","PlayState.hx",55,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",57,0xb30d7781)
			{
				HX_STACK_LINE(57)
				::quest::QuestState tmp1 = ::quest::QuestState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(57)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				if ((tmp4)){
					HX_STACK_LINE(57)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(56)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickQuest,(void))

Void PlayState_obj::clickUpgradeMenu( ){
{
		HX_STACK_FRAME("PlayState","clickUpgradeMenu",0xe1acb524,"PlayState.clickUpgradeMenu","PlayState.hx",61,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",63,0xb30d7781)
			{
				HX_STACK_LINE(63)
				::upgrade::UpgradeMenuState tmp1 = ::upgrade::UpgradeMenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(63)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(63)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				if ((tmp4)){
					HX_STACK_LINE(63)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(62)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickUpgradeMenu,(void))

Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",68,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(69)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
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
		if (HX_FIELD_EQ(inName,"energyBar") ) { energyBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
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
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,energyBar),HX_HCSTRING("energyBar","\xeb","\x6d","\x05","\x68")},
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

