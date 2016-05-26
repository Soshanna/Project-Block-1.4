#include <hxcpp.h>

#ifndef INCLUDED_MoodSmiley
#include <MoodSmiley.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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

Void MoodSmiley_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic onclick)
{
HX_STACK_FRAME("MoodSmiley","new",0xfb6baa1a,"MoodSmiley.new","MoodSmiley.hx",13,0xed9c9696)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(onclick,"onclick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(14)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	Dynamic tmp2 = onclick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp2);
	HX_STACK_LINE(15)
	this->super::loadGraphic(HX_HCSTRING("assets/img/MoodHappy.png","\x2c","\xd8","\x17","\x9f"),null(),null(),null(),null(),null());
}
;
	return null();
}

//MoodSmiley_obj::~MoodSmiley_obj() { }

Dynamic MoodSmiley_obj::__CreateEmpty() { return  new MoodSmiley_obj; }
hx::ObjectPtr< MoodSmiley_obj > MoodSmiley_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic onclick)
{  hx::ObjectPtr< MoodSmiley_obj > _result_ = new MoodSmiley_obj();
	_result_->__construct(__o_X,__o_Y,onclick);
	return _result_;}

Dynamic MoodSmiley_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MoodSmiley_obj > _result_ = new MoodSmiley_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


MoodSmiley_obj::MoodSmiley_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MoodSmiley_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MoodSmiley_obj::__mClass,"__mClass");
};

#endif

hx::Class MoodSmiley_obj::__mClass;

void MoodSmiley_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MoodSmiley","\x28","\x55","\x5a","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MoodSmiley_obj >;
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

