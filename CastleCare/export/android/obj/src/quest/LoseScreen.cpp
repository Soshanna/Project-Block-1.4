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
#ifndef INCLUDED_quest_LoseScreen
#include <quest/LoseScreen.h>
#endif
namespace quest{

Void LoseScreen_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.LoseScreen","new",0xaad897bf,"quest.LoseScreen.new","quest/LoseScreen.hx",14,0xd94137f0)
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

//LoseScreen_obj::~LoseScreen_obj() { }

Dynamic LoseScreen_obj::__CreateEmpty() { return  new LoseScreen_obj; }
hx::ObjectPtr< LoseScreen_obj > LoseScreen_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LoseScreen_obj > _result_ = new LoseScreen_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic LoseScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoseScreen_obj > _result_ = new LoseScreen_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LoseScreen_obj::create( ){
{
		HX_STACK_FRAME("quest.LoseScreen","create",0x044c44fd,"quest.LoseScreen.create","quest/LoseScreen.hx",19,0xd94137f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)0,(int)150,(int)0,HX_HCSTRING("Je hebt het level gehaalt!","\x60","\x55","\x51","\x8a"),(int)30,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		::flixel::text::FlxText winText = tmp;		HX_STACK_VAR(winText,"winText");
		HX_STACK_LINE(21)
		winText->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp1 = winText;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		this->add(tmp1);
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp2 = ::flixel::text::FlxText_obj::__new((int)0,(int)200,(int)0,HX_HCSTRING("Je hebt $100 verdient","\x4a","\xea","\x07","\xcc"),(int)20,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::flixel::text::FlxText scoreText = tmp2;		HX_STACK_VAR(scoreText,"scoreText");
		HX_STACK_LINE(25)
		scoreText->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp3 = scoreText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		this->add(tmp3);
		HX_STACK_LINE(28)
		Dynamic tmp4 = this->buttonPress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)550,(int)350,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		this->button = tmp5;
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp6 = this->button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		tmp6->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp7 = this->button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		this->add(tmp7);
	}
return null();
}


Void LoseScreen_obj::buttonPress( ){
{
		HX_STACK_FRAME("quest.LoseScreen","buttonPress",0xd4ecd290,"quest.LoseScreen.buttonPress","quest/LoseScreen.hx",33,0xd94137f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-4.png","\x8f","\x0a","\x1f","\xc9"),null(),null(),null(),null(),null());
		HX_STACK_LINE(35)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/LoseScreen.hx",36,0xd94137f0)
			{
				HX_STACK_LINE(36)
				::PlayState tmp2 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(36)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				if ((tmp5)){
					HX_STACK_LINE(36)
					::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					tmp6->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(35)
		tmp1->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LoseScreen_obj,buttonPress,(void))


LoseScreen_obj::LoseScreen_obj()
{
}

void LoseScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoseScreen);
	HX_MARK_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoseScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoseScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonPress") ) { return buttonPress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoseScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoseScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(LoseScreen_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("buttonPress","\x31","\x14","\x33","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoseScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoseScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class LoseScreen_obj::__mClass;

void LoseScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.LoseScreen","\x4d","\x4c","\x2c","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoseScreen_obj >;
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
