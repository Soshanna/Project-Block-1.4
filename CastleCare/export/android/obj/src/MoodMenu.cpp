#include <hxcpp.h>

#ifndef INCLUDED_MoodMenu
#include <MoodMenu.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

Void MoodMenu_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MoodMenu","new",0x819ed648,"MoodMenu.new","MoodMenu.hx",15,0x791e8a28)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	this->smiley = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(20)
	this->_bkgrOver = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	HX_STACK_LINE(18)
	this->happy = true;
	HX_STACK_LINE(15)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
}
;
	return null();
}

//MoodMenu_obj::~MoodMenu_obj() { }

Dynamic MoodMenu_obj::__CreateEmpty() { return  new MoodMenu_obj; }
hx::ObjectPtr< MoodMenu_obj > MoodMenu_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MoodMenu_obj > _result_ = new MoodMenu_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MoodMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MoodMenu_obj > _result_ = new MoodMenu_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MoodMenu_obj::create( ){
{
		HX_STACK_FRAME("MoodMenu","create",0x830f0214,"MoodMenu.create","MoodMenu.hx",24,0x791e8a28)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::create();
		HX_STACK_LINE(26)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(27)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(28)
		this->energy = save->data->__Field(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"), hx::paccDynamic );
		HX_STACK_LINE(29)
		save->close(null(),null());
		HX_STACK_LINE(31)
		int tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		bool tmp2 = (tmp1 <= (int)40);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(32)
			this->happy = false;
		}
		HX_STACK_LINE(35)
		::flixel::FlxSprite tmp3 = this->_bkgrOver;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		tmp3->loadGraphic(HX_HCSTRING("assets/img/Moodmenu/MoodMenu.png","\x32","\xff","\xbd","\x54"),null(),null(),null(),null(),null());
		HX_STACK_LINE(36)
		::flixel::FlxSprite tmp4 = this->_bkgrOver;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		this->add(tmp4);
		HX_STACK_LINE(38)
		::flixel::FlxSprite tmp5 = this->smiley;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp5->set_x((int)8);
		HX_STACK_LINE(39)
		::flixel::FlxSprite tmp6 = this->smiley;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		tmp6->set_y((int)8);
		HX_STACK_LINE(41)
		bool tmp7 = this->happy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		if ((tmp8)){
			HX_STACK_LINE(42)
			::flixel::FlxSprite tmp9 = this->smiley;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			tmp9->loadGraphic(HX_HCSTRING("assets/img/Moodmenu/MoodHappy.png","\x83","\x8e","\xd1","\x24"),null(),null(),null(),null(),null());
			HX_STACK_LINE(43)
			::flixel::FlxSprite tmp10 = this->smiley;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			this->add(tmp10);
		}
		HX_STACK_LINE(46)
		bool tmp9 = this->happy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		bool tmp10 = (tmp9 == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		if ((tmp10)){
			HX_STACK_LINE(47)
			::flixel::FlxSprite tmp11 = this->smiley;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			tmp11->loadGraphic(HX_HCSTRING("assets/img/Moodmenu/MoodAngry.png","\x04","\x07","\x3d","\x9e"),null(),null(),null(),null(),null());
			HX_STACK_LINE(48)
			::flixel::FlxSprite tmp12 = this->smiley;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			this->add(tmp12);
		}
		HX_STACK_LINE(51)
		int tmp11 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		Float tmp13 = (tmp12 + (int)510);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		int tmp15 = (tmp14 - (int)95);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		Dynamic tmp16 = this->clickBack_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		::flixel::ui::FlxButton tmp17 = ::flixel::ui::FlxButton_obj::__new(tmp13,tmp15,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		this->_btnMenu = tmp17;
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp18 = this->_btnMenu;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		tmp18->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp19 = this->_btnMenu;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(53)
		this->add(tmp19);
	}
return null();
}


Void MoodMenu_obj::clickBack( ){
{
		HX_STACK_FRAME("MoodMenu","clickBack",0xc660aa77,"MoodMenu.clickBack","MoodMenu.hx",56,0x791e8a28)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","MoodMenu.hx",58,0x791e8a28)
			{
				HX_STACK_LINE(58)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(58)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				if ((tmp4)){
					HX_STACK_LINE(58)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(58)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(57)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MoodMenu_obj,clickBack,(void))


MoodMenu_obj::MoodMenu_obj()
{
}

void MoodMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MoodMenu);
	HX_MARK_MEMBER_NAME(energy,"energy");
	HX_MARK_MEMBER_NAME(happy,"happy");
	HX_MARK_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_MARK_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	HX_MARK_MEMBER_NAME(smiley,"smiley");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MoodMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(energy,"energy");
	HX_VISIT_MEMBER_NAME(happy,"happy");
	HX_VISIT_MEMBER_NAME(_btnMenu,"_btnMenu");
	HX_VISIT_MEMBER_NAME(_bkgrOver,"_bkgrOver");
	HX_VISIT_MEMBER_NAME(smiley,"smiley");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MoodMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"happy") ) { return happy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
		if (HX_FIELD_EQ(inName,"smiley") ) { return smiley; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { return _btnMenu; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { return _bkgrOver; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MoodMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"happy") ) { happy=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smiley") ) { smiley=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnMenu") ) { _btnMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bkgrOver") ) { _bkgrOver=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MoodMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
	outFields->push(HX_HCSTRING("happy","\x20","\x65","\x1f","\x22"));
	outFields->push(HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"));
	outFields->push(HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"));
	outFields->push(HX_HCSTRING("smiley","\xb1","\x6c","\x71","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MoodMenu_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
	{hx::fsBool,(int)offsetof(MoodMenu_obj,happy),HX_HCSTRING("happy","\x20","\x65","\x1f","\x22")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MoodMenu_obj,_btnMenu),HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MoodMenu_obj,_bkgrOver),HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MoodMenu_obj,smiley),HX_HCSTRING("smiley","\xb1","\x6c","\x71","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
	HX_HCSTRING("happy","\x20","\x65","\x1f","\x22"),
	HX_HCSTRING("_btnMenu","\x9c","\xeb","\x9b","\x0f"),
	HX_HCSTRING("_bkgrOver","\x07","\x53","\x60","\x95"),
	HX_HCSTRING("smiley","\xb1","\x6c","\x71","\x03"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("clickBack","\x8f","\x46","\x10","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MoodMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MoodMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class MoodMenu_obj::__mClass;

void MoodMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MoodMenu","\x56","\x52","\xdc","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MoodMenu_obj >;
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

