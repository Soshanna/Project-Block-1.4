#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_
#include <flixel/input/android/_FlxAndroidKey/FlxAndroidKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace android{
namespace _FlxAndroidKey{

Void FlxAndroidKey_Impl__obj::__construct()
{
	return null();
}

//FlxAndroidKey_Impl__obj::~FlxAndroidKey_Impl__obj() { }

Dynamic FlxAndroidKey_Impl__obj::__CreateEmpty() { return  new FlxAndroidKey_Impl__obj; }
hx::ObjectPtr< FlxAndroidKey_Impl__obj > FlxAndroidKey_Impl__obj::__new()
{  hx::ObjectPtr< FlxAndroidKey_Impl__obj > _result_ = new FlxAndroidKey_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAndroidKey_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKey_Impl__obj > _result_ = new FlxAndroidKey_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap FlxAndroidKey_Impl__obj::fromStringMap;

::haxe::ds::IntMap FlxAndroidKey_Impl__obj::toStringMap;

int FlxAndroidKey_Impl__obj::ANY;

int FlxAndroidKey_Impl__obj::NONE;

int FlxAndroidKey_Impl__obj::MENU;

int FlxAndroidKey_Impl__obj::BACK;

int FlxAndroidKey_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","fromString",0xb5388f3d,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.fromString","flixel/input/android/FlxAndroidKey.hx",25,0xd13214f4)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(26)
	::String tmp = s.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	s = tmp;
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp1 = ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp5 = ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		tmp4 = tmp7;
	}
	else{
		HX_STACK_LINE(27)
		tmp4 = (int)-1;
	}
	HX_STACK_LINE(27)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,fromString,return )

::String FlxAndroidKey_Impl__obj::toString( int this1){
	HX_STACK_FRAME("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","toString",0x27c6b58e,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.toString","flixel/input/android/FlxAndroidKey.hx",32,0xd13214f4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(33)
	::haxe::ds::IntMap tmp = ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::toStringMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	int tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,toString,return )


FlxAndroidKey_Impl__obj::FlxAndroidKey_Impl__obj()
{
}

bool FlxAndroidKey_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxAndroidKey_Impl__obj::fromStringMap,HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &FlxAndroidKey_Impl__obj::toStringMap,HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e")},
	{hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::MENU,HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33")},
	{hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#endif

hx::Class FlxAndroidKey_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b"),
	HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FlxAndroidKey_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","\xcc","\x9f","\x54","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAndroidKey_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAndroidKey_Impl__obj >;
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

void FlxAndroidKey_Impl__obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
		{
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				tmp = tmp2;
			}
			HX_STACK_LINE(54)
			::haxe::ds::StringMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),(int)-2);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33"),(int)16777234);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),(int)27);
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	fromStringMap= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
		{
			HX_STACK_LINE(54)
			::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				tmp = tmp2;
			}
			HX_STACK_LINE(54)
			::haxe::ds::IntMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			_g->set((int)-2,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)16777234,HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33"));
			HX_STACK_LINE(54)
			_g->set((int)27,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	toStringMap= _Function_0_2::Block();
	ANY= (int)-2;
	NONE= (int)-1;
	MENU= (int)16777234;
	BACK= (int)27;
}

} // end namespace flixel
} // end namespace input
} // end namespace android
} // end namespace _FlxAndroidKey
