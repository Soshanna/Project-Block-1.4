#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_fonts_nokiafc22_ttf
#include <__ASSET__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif

Void __ASSET__flixel_fonts_nokiafc22_ttf_obj::__construct()
{
HX_STACK_FRAME("__ASSET__flixel_fonts_nokiafc22_ttf","new",0x22f03f2a,"__ASSET__flixel_fonts_nokiafc22_ttf.new","DefaultAssetLibrary.hx",644,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(644)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(644)
	this->__fontPath = HX_HCSTRING("flixel/fonts/nokiafc22.ttf","\x59","\xd0","\x25","\x83");
	HX_STACK_LINE(644)
	this->fontName = HX_HCSTRING("Nokia Cellphone FC Small","\xd6","\x2f","\x44","\xca");
}
;
	return null();
}

//__ASSET__flixel_fonts_nokiafc22_ttf_obj::~__ASSET__flixel_fonts_nokiafc22_ttf_obj() { }

Dynamic __ASSET__flixel_fonts_nokiafc22_ttf_obj::__CreateEmpty() { return  new __ASSET__flixel_fonts_nokiafc22_ttf_obj; }
hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > __ASSET__flixel_fonts_nokiafc22_ttf_obj::__new()
{  hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > _result_ = new __ASSET__flixel_fonts_nokiafc22_ttf_obj();
	_result_->__construct();
	return _result_;}

Dynamic __ASSET__flixel_fonts_nokiafc22_ttf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > _result_ = new __ASSET__flixel_fonts_nokiafc22_ttf_obj();
	_result_->__construct();
	return _result_;}


__ASSET__flixel_fonts_nokiafc22_ttf_obj::__ASSET__flixel_fonts_nokiafc22_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass;

void __ASSET__flixel_fonts_nokiafc22_ttf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__flixel_fonts_nokiafc22_ttf","\x38","\x22","\x8b","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__flixel_fonts_nokiafc22_ttf_obj >;
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

