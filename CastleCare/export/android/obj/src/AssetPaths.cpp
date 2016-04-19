#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::button__png;

::String AssetPaths_obj::select__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::button__png,HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac")},
	{hx::fsString,(void *) &AssetPaths_obj::select__wav,HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac"),
	HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
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

void AssetPaths_obj::__boot()
{
	button__png= HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd");
	select__wav= HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e");
}

