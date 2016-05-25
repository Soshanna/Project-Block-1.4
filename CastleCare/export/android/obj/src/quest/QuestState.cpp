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
#ifndef INCLUDED_quest_ContactListState
#include <quest/ContactListState.h>
#endif
#ifndef INCLUDED_quest_JobListState
#include <quest/JobListState.h>
#endif
#ifndef INCLUDED_quest_QuestState
#include <quest/QuestState.h>
#endif
namespace quest{

Void QuestState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.QuestState","new",0xc5c1266d,"quest.QuestState.new","quest/QuestState.hx",13,0x2d2d9902)
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

//QuestState_obj::~QuestState_obj() { }

Dynamic QuestState_obj::__CreateEmpty() { return  new QuestState_obj; }
hx::ObjectPtr< QuestState_obj > QuestState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< QuestState_obj > _result_ = new QuestState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic QuestState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuestState_obj > _result_ = new QuestState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuestState_obj::create( ){
{
		HX_STACK_FRAME("quest.QuestState","create",0xf9b3970f,"quest.QuestState.create","quest/QuestState.hx",21,0x2d2d9902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("Quest Screen","\x2a","\x68","\x88","\xec"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->_txtTitle = tmp;
		HX_STACK_LINE(23)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(25)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		this->add(tmp3);
		HX_STACK_LINE(27)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		Float tmp6 = (tmp5 + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		int tmp8 = (tmp7 - (int)28);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		Dynamic tmp9 = this->clickBack_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp6,tmp8,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(27)
		this->backButton = tmp10;
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(28)
		this->add(tmp11);
		HX_STACK_LINE(30)
		Dynamic tmp12 = this->clickJobList_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp13 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)350,HX_HCSTRING("Taken","\x27","\xf6","\x17","\x9e"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		this->jobListButton = tmp13;
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp14 = this->jobListButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		tmp14->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp15 = this->jobListButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(32)
		this->add(tmp15);
		HX_STACK_LINE(34)
		Dynamic tmp16 = this->clickcontactList_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp17 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)450,HX_HCSTRING("Contacten","\xe9","\x9a","\x53","\x5d"),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		this->contactListButton = tmp17;
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp18 = this->contactListButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		tmp18->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp19 = this->contactListButton;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(36)
		this->add(tmp19);
		HX_STACK_LINE(38)
		this->super::create();
	}
return null();
}


Void QuestState_obj::clickBack( ){
{
		HX_STACK_FRAME("quest.QuestState","clickBack",0x87b9245c,"quest.QuestState.clickBack","quest/QuestState.hx",41,0x2d2d9902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/QuestState.hx",43,0x2d2d9902)
			{
				HX_STACK_LINE(43)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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


HX_DEFINE_DYNAMIC_FUNC0(QuestState_obj,clickBack,(void))

Void QuestState_obj::clickJobList( ){
{
		HX_STACK_FRAME("quest.QuestState","clickJobList",0x987b9fe6,"quest.QuestState.clickJobList","quest/QuestState.hx",47,0x2d2d9902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/QuestState.hx",49,0x2d2d9902)
			{
				HX_STACK_LINE(49)
				::quest::JobListState tmp1 = ::quest::JobListState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(49)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				if ((tmp4)){
					HX_STACK_LINE(49)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(49)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(48)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(QuestState_obj,clickJobList,(void))

Void QuestState_obj::clickcontactList( ){
{
		HX_STACK_FRAME("quest.QuestState","clickcontactList",0xff7691a9,"quest.QuestState.clickcontactList","quest/QuestState.hx",53,0x2d2d9902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/QuestState.hx",55,0x2d2d9902)
			{
				HX_STACK_LINE(55)
				::quest::ContactListState tmp1 = ::quest::ContactListState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
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


HX_DEFINE_DYNAMIC_FUNC0(QuestState_obj,clickcontactList,(void))


QuestState_obj::QuestState_obj()
{
}

void QuestState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuestState);
	HX_MARK_MEMBER_NAME(jobListButton,"jobListButton");
	HX_MARK_MEMBER_NAME(contactListButton,"contactListButton");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuestState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jobListButton,"jobListButton");
	HX_VISIT_MEMBER_NAME(contactListButton,"contactListButton");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuestState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"clickJobList") ) { return clickJobList_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jobListButton") ) { return jobListButton; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickcontactList") ) { return clickcontactList_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contactListButton") ) { return contactListButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuestState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jobListButton") ) { jobListButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contactListButton") ) { contactListButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuestState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("jobListButton","\x4d","\x1f","\xd1","\xeb"));
	outFields->push(HX_HCSTRING("contactListButton","\xb0","\x93","\x8b","\xaf"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(QuestState_obj,jobListButton),HX_HCSTRING("jobListButton","\x4d","\x1f","\xd1","\xeb")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(QuestState_obj,contactListButton),HX_HCSTRING("contactListButton","\xb0","\x93","\x8b","\xaf")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(QuestState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(QuestState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("jobListButton","\x4d","\x1f","\xd1","\xeb"),
	HX_HCSTRING("contactListButton","\xb0","\x93","\x8b","\xaf"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	HX_HCSTRING("clickJobList","\x93","\x9f","\x7b","\x2b"),
	HX_HCSTRING("clickcontactList","\xd6","\x6b","\x34","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuestState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuestState_obj::__mClass,"__mClass");
};

#endif

hx::Class QuestState_obj::__mClass;

void QuestState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.QuestState","\xfb","\x6b","\x60","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuestState_obj >;
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
