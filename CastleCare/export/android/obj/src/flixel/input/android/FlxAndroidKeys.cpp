#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeys_obj::__construct()
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",10,0x680fe935)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct(hx::ClassOf< ::flixel::input::android::FlxAndroidKeyList >());
	HX_STACK_LINE(14)
	::flixel::input::FlxInput tmp = ::flixel::input::FlxInput_obj::__new((int)27);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::flixel::input::FlxInput back = tmp;		HX_STACK_VAR(back,"back");
	HX_STACK_LINE(15)
	::flixel::input::FlxInput tmp1 = back;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	this->_keyListArray->push(tmp1);
	HX_STACK_LINE(16)
	::haxe::ds::IntMap tmp2 = this->_keyListMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	int tmp3 = back->ID;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	::flixel::input::FlxInput tmp4 = back;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	tmp2->set(tmp3,tmp4);
	HX_STACK_LINE(19)
	::flixel::input::FlxInput tmp5 = ::flixel::input::FlxInput_obj::__new((int)16777234);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	::flixel::input::FlxInput menu = tmp5;		HX_STACK_VAR(menu,"menu");
	HX_STACK_LINE(20)
	::flixel::input::FlxInput tmp6 = menu;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	this->_keyListArray->push(tmp6);
	HX_STACK_LINE(21)
	::haxe::ds::IntMap tmp7 = this->_keyListMap;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(21)
	int tmp8 = menu->ID;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(21)
	::flixel::input::FlxInput tmp9 = menu;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(21)
	tmp7->set(tmp8,tmp9);
}
;
	return null();
}

//FlxAndroidKeys_obj::~FlxAndroidKeys_obj() { }

Dynamic FlxAndroidKeys_obj::__CreateEmpty() { return  new FlxAndroidKeys_obj; }
hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__new()
{  hx::ObjectPtr< FlxAndroidKeys_obj > _result_ = new FlxAndroidKeys_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAndroidKeys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeys_obj > _result_ = new FlxAndroidKeys_obj();
	_result_->__construct();
	return _result_;}


FlxAndroidKeys_obj::FlxAndroidKeys_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAndroidKeys_obj::__mClass;

void FlxAndroidKeys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.android.FlxAndroidKeys","\x26","\x01","\x11","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAndroidKeys_obj >;
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

} // end namespace flixel
} // end namespace input
} // end namespace android
