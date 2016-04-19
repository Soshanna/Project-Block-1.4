#include <hxcpp.h>

#ifndef INCLUDED_Minigame
#include <Minigame.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Minigame_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("Minigame","new",0x66d9ff9b,"Minigame.new","Minigame.hx",11,0x44312c35)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//Minigame_obj::~Minigame_obj() { }

Dynamic Minigame_obj::__CreateEmpty() { return  new Minigame_obj; }
hx::ObjectPtr< Minigame_obj > Minigame_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< Minigame_obj > _result_ = new Minigame_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic Minigame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Minigame_obj > _result_ = new Minigame_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Minigame_obj::create( ){
{
		HX_STACK_FRAME("Minigame","create",0xa5502ea1,"Minigame.create","Minigame.hx",16,0x44312c35)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		::flixel::FlxSprite tmp1 = tmp->makeGraphic((int)1200,(int)650,(int)-7650029,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		this->background = tmp1;
		HX_STACK_LINE(18)
		::flixel::FlxSprite tmp2 = this->background;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		tmp2->screenCenter(null());
		HX_STACK_LINE(19)
		::flixel::FlxSprite tmp3 = this->background;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		this->add(tmp3);
		HX_STACK_LINE(20)
		this->super::create();
	}
return null();
}


Void Minigame_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Minigame","update",0xb0464dae,"Minigame.update","Minigame.hx",24,0x44312c35)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		this->super::update(tmp);
	}
return null();
}



Minigame_obj::Minigame_obj()
{
}

void Minigame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Minigame);
	HX_MARK_MEMBER_NAME(background,"background");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Minigame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Minigame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Minigame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Minigame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Minigame_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Minigame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Minigame_obj::__mClass,"__mClass");
};

#endif

hx::Class Minigame_obj::__mClass;

void Minigame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Minigame","\x29","\x96","\x2d","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Minigame_obj >;
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

