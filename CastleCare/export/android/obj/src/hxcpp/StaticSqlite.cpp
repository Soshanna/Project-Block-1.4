#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticSqlite
#include <hxcpp/StaticSqlite.h>
#endif
extern "C" int sqlite_register_prims();
namespace hxcpp{

Void StaticSqlite_obj::__construct()
{
	return null();
}

//StaticSqlite_obj::~StaticSqlite_obj() { }

Dynamic StaticSqlite_obj::__CreateEmpty() { return  new StaticSqlite_obj; }
hx::ObjectPtr< StaticSqlite_obj > StaticSqlite_obj::__new()
{  hx::ObjectPtr< StaticSqlite_obj > _result_ = new StaticSqlite_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticSqlite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticSqlite_obj > _result_ = new StaticSqlite_obj();
	_result_->__construct();
	return _result_;}

void StaticSqlite_obj::__init__() {
HX_STACK_FRAME("hxcpp.StaticSqlite","__init__",0xb8949b69,"hxcpp.StaticSqlite.__init__","hxcpp/StaticSqlite.hx",14,0x355d3988)
{
	HX_STACK_LINE(14)
	sqlite_register_prims();;
}
}


StaticSqlite_obj::StaticSqlite_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticSqlite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticSqlite_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticSqlite_obj::__mClass;

void StaticSqlite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hxcpp.StaticSqlite","\x75","\xc9","\x8f","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticSqlite_obj >;
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

} // end namespace hxcpp
