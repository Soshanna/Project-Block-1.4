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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_quest_HiddenObjectGame
#include <quest/HiddenObjectGame.h>
#endif
#ifndef INCLUDED_quest_JobListState
#include <quest/JobListState.h>
#endif
#ifndef INCLUDED_quest_MiniGameScreen
#include <quest/MiniGameScreen.h>
#endif
namespace quest{

Void JobListState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.JobListState","new",0x7fa04f34,"quest.JobListState.new","quest/JobListState.hx",15,0x9f94bbdb)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(22)
	this->_bkgrOver = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(15)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
}
;
	return null();
}

//JobListState_obj::~JobListState_obj() { }

Dynamic JobListState_obj::__CreateEmpty() { return  new JobListState_obj; }
hx::ObjectPtr< JobListState_obj > JobListState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< JobListState_obj > _result_ = new JobListState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic JobListState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JobListState_obj > _result_ = new JobListState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void JobListState_obj::create( ){
{
		HX_STACK_FRAME("quest.JobListState","create",0x6946e4a8,"quest.JobListState.create","quest/JobListState.hx",24,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp = this->_bkgrOver;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		tmp->loadGraphic(HX_HCSTRING("assets/img/background.png","\x41","\x41","\x6f","\x96"),null(),null(),null(),null(),null());
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp1 = this->_bkgrOver;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp1->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(27)
		::flixel::FlxSprite tmp2 = this->_bkgrOver;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp2->set_x((int)100);
		HX_STACK_LINE(28)
		::flixel::FlxSprite tmp3 = this->_bkgrOver;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp3->set_y((int)120);
		HX_STACK_LINE(29)
		::flixel::FlxSprite tmp4 = this->_bkgrOver;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->add(tmp4);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)100,(int)80,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		this->duckButton = tmp5;
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp6 = this->duckButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		tmp6->loadGraphic(HX_HCSTRING("assets/img/Characters/duck-button.png","\x54","\xf9","\xbc","\x1b"),null(),null(),null(),null(),null());
		HX_STACK_LINE(33)
		::flixel::ui::FlxButton tmp7 = this->duckButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		this->add(tmp7);
		HX_STACK_LINE(35)
		Dynamic tmp8 = this->clickpinguin_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp9 = ::flixel::ui::FlxButton_obj::__new((int)700,(int)80,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		this->pinguinButton = tmp9;
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp10 = this->pinguinButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		tmp10->loadGraphic(HX_HCSTRING("assets/img/Characters/penguin-button.png","\x7b","\x12","\xdd","\x4d"),false,(int)60,(int)60,null(),null());
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp11 = this->pinguinButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		this->add(tmp11);
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp12 = ::flixel::ui::FlxButton_obj::__new((int)100,(int)380,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		this->turtleButton = tmp12;
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp13 = this->turtleButton;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(40)
		tmp13->loadGraphic(HX_HCSTRING("assets/img/Characters/turtle-button.png","\xb1","\x38","\x60","\xc4"),false,(int)60,(int)60,null(),null());
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp14 = this->turtleButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		this->add(tmp14);
		HX_STACK_LINE(43)
		Dynamic tmp15 = this->clickbever_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(43)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)700,(int)380,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(43)
		this->beverButton = tmp16;
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp17 = this->beverButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(44)
		tmp17->loadGraphic(HX_HCSTRING("assets/img/Characters/bever-button.png","\x27","\x40","\x21","\x98"),false,(int)60,(int)60,null(),null());
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton tmp18 = this->beverButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(45)
		this->add(tmp18);
		HX_STACK_LINE(47)
		int tmp19 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(47)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(47)
		Float tmp21 = (tmp20 + (int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(47)
		int tmp22 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(47)
		int tmp23 = (tmp22 - (int)70);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(47)
		Dynamic tmp24 = this->clickBack_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton tmp25 = ::flixel::ui::FlxButton_obj::__new(tmp21,tmp23,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton backButton = tmp25;		HX_STACK_VAR(backButton,"backButton");
		HX_STACK_LINE(48)
		backButton->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(49)
		backButton->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(50)
		::flixel::ui::FlxButton tmp26 = backButton;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(50)
		this->add(tmp26);
		HX_STACK_LINE(52)
		this->super::create();
	}
return null();
}


Void JobListState_obj::clickBack( ){
{
		HX_STACK_FRAME("quest.JobListState","clickBack",0x20959c63,"quest.JobListState.clickBack","quest/JobListState.hx",55,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/JobListState.hx",57,0x9f94bbdb)
			{
				HX_STACK_LINE(57)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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
		tmp->fade((int)-16777216,(int)1,false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JobListState_obj,clickBack,(void))

Void JobListState_obj::clickpinguin( ){
{
		HX_STACK_FRAME("quest.JobListState","clickpinguin",0x0816e7cc,"quest.JobListState.clickpinguin","quest/JobListState.hx",61,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/JobListState.hx",63,0x9f94bbdb)
			{
				HX_STACK_LINE(63)
				::quest::MiniGameScreen tmp1 = ::quest::MiniGameScreen_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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


HX_DEFINE_DYNAMIC_FUNC0(JobListState_obj,clickpinguin,(void))

Void JobListState_obj::clickbever( ){
{
		HX_STACK_FRAME("quest.JobListState","clickbever",0xd1d90ae4,"quest.JobListState.clickbever","quest/JobListState.hx",67,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/JobListState.hx",69,0x9f94bbdb)
			{
				HX_STACK_LINE(69)
				::quest::HiddenObjectGame tmp1 = ::quest::HiddenObjectGame_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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


HX_DEFINE_DYNAMIC_FUNC0(JobListState_obj,clickbever,(void))


JobListState_obj::JobListState_obj()
{
}

void JobListState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JobListState);
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(duckButton,"duckButton");
	HX_MARK_MEMBER_NAME(pinguinButton,"pinguinButton");
	HX_MARK_MEMBER_NAME(turtleButton,"turtleButton");
	HX_MARK_MEMBER_NAME(beverButton,"beverButton");
	HX_MARK_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JobListState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(duckButton,"duckButton");
	HX_VISIT_MEMBER_NAME(pinguinButton,"pinguinButton");
	HX_VISIT_MEMBER_NAME(turtleButton,"turtleButton");
	HX_VISIT_MEMBER_NAME(beverButton,"beverButton");
	HX_VISIT_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JobListState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { return _bkgrOver; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
		if (HX_FIELD_EQ(inName,"duckButton") ) { return duckButton; }
		if (HX_FIELD_EQ(inName,"clickbever") ) { return clickbever_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beverButton") ) { return beverButton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"turtleButton") ) { return turtleButton; }
		if (HX_FIELD_EQ(inName,"clickpinguin") ) { return clickpinguin_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pinguinButton") ) { return pinguinButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JobListState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { _bkgrOver=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duckButton") ) { duckButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beverButton") ) { beverButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"turtleButton") ) { turtleButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pinguinButton") ) { pinguinButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JobListState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("duckButton","\x4b","\x6b","\xdb","\x13"));
	outFields->push(HX_HCSTRING("pinguinButton","\x7a","\xd8","\xf6","\x03"));
	outFields->push(HX_HCSTRING("turtleButton","\xce","\x7b","\xa6","\x7e"));
	outFields->push(HX_HCSTRING("beverButton","\x92","\x7e","\xb7","\x91"));
	outFields->push(HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,duckButton),HX_HCSTRING("duckButton","\x4b","\x6b","\xdb","\x13")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,pinguinButton),HX_HCSTRING("pinguinButton","\x7a","\xd8","\xf6","\x03")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,turtleButton),HX_HCSTRING("turtleButton","\xce","\x7b","\xa6","\x7e")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,beverButton),HX_HCSTRING("beverButton","\x92","\x7e","\xb7","\x91")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(JobListState_obj,_bkgrOver),HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("duckButton","\x4b","\x6b","\xdb","\x13"),
	HX_HCSTRING("pinguinButton","\x7a","\xd8","\xf6","\x03"),
	HX_HCSTRING("turtleButton","\xce","\x7b","\xa6","\x7e"),
	HX_HCSTRING("beverButton","\x92","\x7e","\xb7","\x91"),
	HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	HX_HCSTRING("clickpinguin","\x20","\xe1","\x37","\xec"),
	HX_HCSTRING("clickbever","\x38","\x47","\xb3","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JobListState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JobListState_obj::__mClass,"__mClass");
};

#endif

hx::Class JobListState_obj::__mClass;

void JobListState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.JobListState","\x42","\xe5","\x1b","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JobListState_obj >;
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

} // end namespace quest
