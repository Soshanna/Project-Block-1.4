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
#ifndef INCLUDED_quest_ContactListState
#include <quest/ContactListState.h>
#endif
#ifndef INCLUDED_quest_QuestState
#include <quest/QuestState.h>
#endif
namespace quest{

Void ContactListState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.ContactListState","new",0x2c5700b1,"quest.ContactListState.new","quest/ContactListState.hx",13,0xff46047e)
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

//ContactListState_obj::~ContactListState_obj() { }

Dynamic ContactListState_obj::__CreateEmpty() { return  new ContactListState_obj; }
hx::ObjectPtr< ContactListState_obj > ContactListState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< ContactListState_obj > _result_ = new ContactListState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic ContactListState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactListState_obj > _result_ = new ContactListState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ContactListState_obj::create( ){
{
		HX_STACK_FRAME("quest.ContactListState","create",0x63b47f4b,"quest.ContactListState.create","quest/ContactListState.hx",18,0xff46047e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_HCSTRING("ConcactList Screen","\x9d","\x3c","\x3c","\xd0"),(int)15,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this->_txtTitle = tmp;
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp1 = this->_txtTitle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		tmp1->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(21)
		::flixel::text::FlxText tmp2 = this->_txtTitle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		tmp2->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp3 = this->_txtTitle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		this->add(tmp3);
		HX_STACK_LINE(24)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		Float tmp6 = (tmp5 + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		int tmp8 = (tmp7 - (int)28);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		Dynamic tmp9 = this->clickBack_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp6,tmp8,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		this->backButton = tmp10;
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton tmp11 = this->backButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		this->add(tmp11);
		HX_STACK_LINE(27)
		this->super::create();
	}
return null();
}


Void ContactListState_obj::clickBack( ){
{
		HX_STACK_FRAME("quest.ContactListState","clickBack",0xdee209a0,"quest.ContactListState.clickBack","quest/ContactListState.hx",30,0xff46047e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/ContactListState.hx",32,0xff46047e)
			{
				HX_STACK_LINE(32)
				::quest::QuestState tmp1 = ::quest::QuestState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(32)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				if ((tmp4)){
					HX_STACK_LINE(32)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(31)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ContactListState_obj,clickBack,(void))


ContactListState_obj::ContactListState_obj()
{
}

void ContactListState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactListState);
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ContactListState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ContactListState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ContactListState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContactListState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(ContactListState_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(ContactListState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContactListState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactListState_obj::__mClass,"__mClass");
};

#endif

hx::Class ContactListState_obj::__mClass;

void ContactListState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.ContactListState","\x3f","\xd4","\x62","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContactListState_obj >;
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
