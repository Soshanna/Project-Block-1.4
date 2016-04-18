#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeyList_obj::__construct(int status,::flixel::input::FlxKeyManager keyManager)
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","new",0x85ddcc1d,"flixel.input.android.FlxAndroidKeyList.new","flixel/input/android/FlxAndroidKeyList.hx",11,0x85400236)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(keyManager,"keyManager")
{
	HX_STACK_LINE(11)
	int tmp = status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::flixel::input::FlxKeyManager tmp1 = keyManager;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//FlxAndroidKeyList_obj::~FlxAndroidKeyList_obj() { }

Dynamic FlxAndroidKeyList_obj::__CreateEmpty() { return  new FlxAndroidKeyList_obj; }
hx::ObjectPtr< FlxAndroidKeyList_obj > FlxAndroidKeyList_obj::__new(int status,::flixel::input::FlxKeyManager keyManager)
{  hx::ObjectPtr< FlxAndroidKeyList_obj > _result_ = new FlxAndroidKeyList_obj();
	_result_->__construct(status,keyManager);
	return _result_;}

Dynamic FlxAndroidKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeyList_obj > _result_ = new FlxAndroidKeyList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxAndroidKeyList_obj::get_BACK( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","get_BACK",0x9a67b4d3,"flixel.input.android.FlxAndroidKeyList.get_BACK","flixel/input/android/FlxAndroidKeyList.hx",13,0x85400236)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	bool tmp2 = tmp->checkStatus((int)27,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeyList_obj,get_BACK,return )

bool FlxAndroidKeyList_obj::get_MENU( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","get_MENU",0xa1b0204b,"flixel.input.android.FlxAndroidKeyList.get_MENU","flixel/input/android/FlxAndroidKeyList.hx",14,0x85400236)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = tmp->checkStatus((int)16777234,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeyList_obj,get_MENU,return )


FlxAndroidKeyList_obj::FlxAndroidKeyList_obj()
{
}

Dynamic FlxAndroidKeyList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == hx::paccAlways) return get_BACK(); }
		if (HX_FIELD_EQ(inName,"MENU") ) { if (inCallProp == hx::paccAlways) return get_MENU(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return get_BACK_dyn(); }
		if (HX_FIELD_EQ(inName,"get_MENU") ) { return get_MENU_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxAndroidKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
	outFields->push(HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_BACK","\xb0","\x5d","\x8c","\xab"),
	HX_HCSTRING("get_MENU","\x28","\xc9","\xd4","\xb2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeyList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAndroidKeyList_obj::__mClass;

void FlxAndroidKeyList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.android.FlxAndroidKeyList","\xab","\x79","\x6c","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAndroidKeyList_obj >;
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
