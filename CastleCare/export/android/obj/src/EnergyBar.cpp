#include <hxcpp.h>

#ifndef INCLUDED_EnergyBar
#include <EnergyBar.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void EnergyBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::String pic1,::String pic2)
{
HX_STACK_FRAME("EnergyBar","new",0xb196303d,"EnergyBar.new","EnergyBar.hx",12,0x18e765d3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(pic1,"pic1")
HX_STACK_ARG(pic2,"pic2")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
{
	HX_STACK_LINE(15)
	this->energy = (int)0;
	HX_STACK_LINE(14)
	this->playstate = ::PlayState_obj::__new(null());
	HX_STACK_LINE(19)
	::PlayState tmp = this->playstate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->energy = tmp->energy;
	HX_STACK_LINE(20)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	int tmp5 = this->energy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(20)
	super::__construct(tmp1,tmp2,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,tmp3,tmp4,tmp5,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,(int)100,true);
	HX_STACK_LINE(21)
	::String tmp6 = pic1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(21)
	::String tmp7 = pic2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(21)
	this->super::createImageBar(tmp6,tmp7,null(),null());
}
;
	return null();
}

//EnergyBar_obj::~EnergyBar_obj() { }

Dynamic EnergyBar_obj::__CreateEmpty() { return  new EnergyBar_obj; }
hx::ObjectPtr< EnergyBar_obj > EnergyBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::String pic1,::String pic2)
{  hx::ObjectPtr< EnergyBar_obj > _result_ = new EnergyBar_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height,pic1,pic2);
	return _result_;}

Dynamic EnergyBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnergyBar_obj > _result_ = new EnergyBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}


EnergyBar_obj::EnergyBar_obj()
{
}

void EnergyBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnergyBar);
	HX_MARK_MEMBER_NAME(playstate,"playstate");
	HX_MARK_MEMBER_NAME(energy,"energy");
	::flixel::ui::FlxBar_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnergyBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playstate,"playstate");
	HX_VISIT_MEMBER_NAME(energy,"energy");
	::flixel::ui::FlxBar_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnergyBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playstate") ) { return playstate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnergyBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playstate") ) { playstate=inValue.Cast< ::PlayState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnergyBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playstate","\x9d","\x33","\xc2","\x11"));
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(EnergyBar_obj,playstate),HX_HCSTRING("playstate","\x9d","\x33","\xc2","\x11")},
	{hx::fsInt,(int)offsetof(EnergyBar_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("playstate","\x9d","\x33","\xc2","\x11"),
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnergyBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnergyBar_obj::__mClass,"__mClass");
};

#endif

hx::Class EnergyBar_obj::__mClass;

void EnergyBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EnergyBar","\xcb","\x4d","\xd8","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnergyBar_obj >;
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

