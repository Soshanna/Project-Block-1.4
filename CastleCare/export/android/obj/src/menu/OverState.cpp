#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_menu_MenuState
#include <menu/MenuState.h>
#endif
#ifndef INCLUDED_menu_OverState
#include <menu/OverState.h>
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
namespace menu{

Void OverState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("menu.OverState","new",0x2d7f0060,"menu.OverState.new","menu/OverState.hx",15,0xda0ba891)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	this->_bkgrOver = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(15)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
}
;
	return null();
}

//OverState_obj::~OverState_obj() { }

Dynamic OverState_obj::__CreateEmpty() { return  new OverState_obj; }
hx::ObjectPtr< OverState_obj > OverState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< OverState_obj > _result_ = new OverState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic OverState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OverState_obj > _result_ = new OverState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void OverState_obj::create( ){
{
		HX_STACK_FRAME("menu.OverState","create",0x560236fc,"menu.OverState.create","menu/OverState.hx",23,0xda0ba891)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::flixel::FlxSprite tmp = this->_bkgrOver;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		tmp->loadGraphic(HX_HCSTRING("assets/img/background.png","\x41","\x41","\x6f","\x96"),null(),null(),null(),null(),null());
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp1 = this->_bkgrOver;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		tmp1->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp2 = this->_bkgrOver;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		tmp2->set_x((int)100);
		HX_STACK_LINE(27)
		::flixel::FlxSprite tmp3 = this->_bkgrOver;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		tmp3->set_y((int)120);
		HX_STACK_LINE(28)
		::flixel::FlxSprite tmp4 = this->_bkgrOver;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		this->add(tmp4);
		HX_STACK_LINE(30)
		::flixel::text::FlxText tmp5 = ::flixel::text::FlxText_obj::__new((int)20,(int)50,(int)0,HX_HCSTRING("Over","\x74","\xbd","\x91","\x34"),(int)60,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		this->_txtTitle = tmp5;
		HX_STACK_LINE(31)
		::flixel::text::FlxText tmp6 = this->_txtTitle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		tmp6->setFormat(HX_HCSTRING("assets/data/GLECB.TTF","\xde","\xd7","\x53","\x83"),(int)60,(int)0,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
		HX_STACK_LINE(32)
		::flixel::text::FlxText tmp7 = this->_txtTitle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		tmp7->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(33)
		::flixel::text::FlxText tmp8 = this->_txtTitle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		this->add(tmp8);
		HX_STACK_LINE(35)
		::flixel::text::FlxText tmp9 = ::flixel::text::FlxText_obj::__new((int)440,(int)230,(int)400,HX_HCSTRING("Welkom bij Castle Care. Als de troonopvolger is het aan jou de taak om het kasteel weer wederop the bouwen tot zijn oude glorie.","\xd8","\x2b","\x57","\x12"),(int)50,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		this->_txtOver = tmp9;
		HX_STACK_LINE(36)
		::flixel::text::FlxText tmp10 = this->_txtOver;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		tmp10->setFormat(HX_HCSTRING("assets/data/GLECB.TTF","\xde","\xd7","\x53","\x83"),(int)50,(int)0,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
		HX_STACK_LINE(37)
		::flixel::text::FlxText tmp11 = this->_txtOver;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		this->add(tmp11);
		HX_STACK_LINE(39)
		int tmp12 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		Float tmp14 = (tmp13 + (int)10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		int tmp16 = (tmp15 - (int)70);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(39)
		Dynamic tmp17 = this->clickMenu_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp18 = ::flixel::ui::FlxButton_obj::__new(tmp14,tmp16,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton _btnMenu = tmp18;		HX_STACK_VAR(_btnMenu,"_btnMenu");
		HX_STACK_LINE(40)
		_btnMenu->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		_btnMenu->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp19 = _btnMenu;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(42)
		this->add(tmp19);
		HX_STACK_LINE(44)
		::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(44)
		tmp20->fade((int)-16777216,((Float).20),true,null(),null());
		HX_STACK_LINE(45)
		this->super::create();
	}
return null();
}


Void OverState_obj::clickMenu( ){
{
		HX_STACK_FRAME("menu.OverState","clickMenu",0x0d07e207,"menu.OverState.clickMenu","menu/OverState.hx",48,0xda0ba891)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","menu/OverState.hx",50,0xda0ba891)
			{
				HX_STACK_LINE(50)
				::menu::MenuState tmp1 = ::menu::MenuState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(50)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				if ((tmp4)){
					HX_STACK_LINE(50)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(50)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(49)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverState_obj,clickMenu,(void))


OverState_obj::OverState_obj()
{
}

void OverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OverState);
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_txtOver,"_txtOver");
	HX_MARK_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_txtOver,"_txtOver");
	HX_VISIT_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OverState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		if (HX_FIELD_EQ(inName,"_txtOver") ) { return _txtOver; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { return _bkgrOver; }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OverState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtOver") ) { _txtOver=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { _bkgrOver=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_txtOver","\x65","\x7d","\x52","\x0b"));
	outFields->push(HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OverState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OverState_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OverState_obj,_txtOver),HX_HCSTRING("_txtOver","\x65","\x7d","\x52","\x0b")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(OverState_obj,_bkgrOver),HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_txtOver","\x65","\x7d","\x52","\x0b"),
	HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickMenu","\x07","\xb2","\x58","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverState_obj::__mClass,"__mClass");
};

#endif

hx::Class OverState_obj::__mClass;

void OverState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("menu.OverState","\x6e","\x90","\xa7","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OverState_obj >;
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

} // end namespace menu
