#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_quest_WinScreen
#include <quest/WinScreen.h>
#endif
namespace quest{

Void WinScreen_obj::__construct()
{
HX_STACK_FRAME("quest.WinScreen","new",0xf2ba87ee,"quest.WinScreen.new","quest/WinScreen.hx",19,0x2c6fccc3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(null());
	HX_STACK_LINE(22)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::flixel::FlxSprite background = tmp;		HX_STACK_VAR(background,"background");
	HX_STACK_LINE(23)
	::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	background->makeGraphic(tmp4,tmp8,(int)-16777216,null(),null());
	HX_STACK_LINE(24)
	::flixel::FlxSprite tmp9 = background;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	this->add(tmp9);
	HX_STACK_LINE(26)
	::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,(int)150,(int)0,HX_HCSTRING("Je hebt het level gehaalt!","\x60","\x55","\x51","\x8a"),(int)30,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	::flixel::text::FlxText winText = tmp10;		HX_STACK_VAR(winText,"winText");
	HX_STACK_LINE(27)
	winText->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(28)
	::flixel::text::FlxText tmp11 = winText;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	this->add(tmp11);
	HX_STACK_LINE(30)
	::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new((int)0,(int)200,(int)0,HX_HCSTRING("Je hebt $100 verdient","\x4a","\xea","\x07","\xcc"),(int)20,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	::flixel::text::FlxText scoreText = tmp12;		HX_STACK_VAR(scoreText,"scoreText");
	HX_STACK_LINE(31)
	scoreText->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(32)
	::flixel::text::FlxText tmp13 = scoreText;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	this->add(tmp13);
	HX_STACK_LINE(34)
	Dynamic tmp14 = this->buttonPress_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new((int)550,(int)350,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(34)
	this->button = tmp15;
	HX_STACK_LINE(35)
	::flixel::ui::FlxButton tmp16 = this->button;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(35)
	tmp16->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
	HX_STACK_LINE(36)
	::flixel::ui::FlxButton tmp17 = this->button;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(36)
	this->add(tmp17);
}
;
	return null();
}

//WinScreen_obj::~WinScreen_obj() { }

Dynamic WinScreen_obj::__CreateEmpty() { return  new WinScreen_obj; }
hx::ObjectPtr< WinScreen_obj > WinScreen_obj::__new()
{  hx::ObjectPtr< WinScreen_obj > _result_ = new WinScreen_obj();
	_result_->__construct();
	return _result_;}

Dynamic WinScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WinScreen_obj > _result_ = new WinScreen_obj();
	_result_->__construct();
	return _result_;}

Void WinScreen_obj::buttonPress( ){
{
		HX_STACK_FRAME("quest.WinScreen","buttonPress",0x729109bf,"quest.WinScreen.buttonPress","quest/WinScreen.hx",39,0x2c6fccc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		tmp->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-4.png","\x8f","\x0a","\x1f","\xc9"),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/WinScreen.hx",42,0x2c6fccc3)
			{
				HX_STACK_LINE(42)
				::quest::JobListState tmp2 = ::quest::JobListState_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(42)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				if ((tmp5)){
					HX_STACK_LINE(42)
					::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					tmp6->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(41)
		tmp1->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WinScreen_obj,buttonPress,(void))


WinScreen_obj::WinScreen_obj()
{
}

void WinScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WinScreen);
	HX_MARK_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WinScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WinScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonPress") ) { return buttonPress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WinScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WinScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(WinScreen_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("buttonPress","\x31","\x14","\x33","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WinScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WinScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class WinScreen_obj::__mClass;

void WinScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.WinScreen","\xfc","\xb8","\x48","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WinScreen_obj >;
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
