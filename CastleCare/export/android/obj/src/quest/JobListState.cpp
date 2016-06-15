#include <hxcpp.h>

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
#ifndef INCLUDED_quest_JobListState
#include <quest/JobListState.h>
#endif
#ifndef INCLUDED_quest_MiniGameScreen
#include <quest/MiniGameScreen.h>
#endif
#ifndef INCLUDED_quest_QuestState
#include <quest/QuestState.h>
#endif
namespace quest{

Void JobListState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.JobListState","new",0x7fa04f34,"quest.JobListState.new","quest/JobListState.hx",14,0x9f94bbdb)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
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
		HX_STACK_FRAME("quest.JobListState","create",0x6946e4a8,"quest.JobListState.create","quest/JobListState.hx",20,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("JobList Screen","\x31","\xe6","\x59","\x2c"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->_txtTitle = tmp;
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(23)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		this->add(tmp3);
		HX_STACK_LINE(26)
		Dynamic tmp4 = this->clickMiniGame_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)600,(int)300,HX_HCSTRING("MiniGame","\x49","\xc2","\x06","\xe2"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		this->miniGameButton = tmp5;
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp6 = this->miniGameButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		this->add(tmp6);
		HX_STACK_LINE(29)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(29)
		Float tmp9 = (tmp8 + (int)10);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		int tmp10 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		int tmp11 = (tmp10 - (int)28);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(29)
		Dynamic tmp12 = this->clickBack_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp13 = ::flixel::ui::FlxButton_obj::__new(tmp9,tmp11,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(29)
		this->backButton = tmp13;
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp14 = this->backButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		this->add(tmp14);
		HX_STACK_LINE(32)
		this->super::create();
	}
return null();
}


Void JobListState_obj::clickBack( ){
{
		HX_STACK_FRAME("quest.JobListState","clickBack",0x20959c63,"quest.JobListState.clickBack","quest/JobListState.hx",35,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/JobListState.hx",37,0x9f94bbdb)
			{
				HX_STACK_LINE(37)
				::quest::QuestState tmp1 = ::quest::QuestState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(37)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				if ((tmp4)){
					HX_STACK_LINE(37)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(37)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(36)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JobListState_obj,clickBack,(void))

Void JobListState_obj::clickMiniGame( ){
{
		HX_STACK_FRAME("quest.JobListState","clickMiniGame",0x426d9665,"quest.JobListState.clickMiniGame","quest/JobListState.hx",41,0x9f94bbdb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/JobListState.hx",43,0x9f94bbdb)
			{
				HX_STACK_LINE(43)
				::quest::MiniGameScreen tmp1 = ::quest::MiniGameScreen_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(43)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(43)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(43)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				if ((tmp4)){
					HX_STACK_LINE(43)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(42)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JobListState_obj,clickMiniGame,(void))


JobListState_obj::JobListState_obj()
{
}

void JobListState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JobListState);
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(miniGameButton,"miniGameButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JobListState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(miniGameButton,"miniGameButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JobListState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickMiniGame") ) { return clickMiniGame_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"miniGameButton") ) { return miniGameButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JobListState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"miniGameButton") ) { miniGameButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JobListState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("miniGameButton","\xfb","\x60","\x42","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(JobListState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(JobListState_obj,miniGameButton),HX_HCSTRING("miniGameButton","\xfb","\x60","\x42","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("miniGameButton","\xfb","\x60","\x42","\xae"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	HX_HCSTRING("clickMiniGame","\x91","\xc6","\x26","\xfb"),
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
