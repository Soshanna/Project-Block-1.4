#include <hxcpp.h>

#ifndef INCLUDED_Castle
#include <Castle.h>
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
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_quest_HiddenObjectGame
#include <quest/HiddenObjectGame.h>
#endif
#ifndef INCLUDED_quest_MiniGameScreen
#include <quest/MiniGameScreen.h>
#endif

Void Castle_obj::__construct()
{
HX_STACK_FRAME("Castle","new",0x3f186c0a,"Castle.new","Castle.hx",20,0x630262a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->timer = ::flixel::util::FlxTimer_obj::__new();
	HX_STACK_LINE(41)
	super::__construct(null());
	HX_STACK_LINE(42)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Float tmp3 = (tmp2 - (int)180);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	::flixel::ui::FlxButton tmp4 = ::flixel::ui::FlxButton_obj::__new(tmp3,(int)330,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	this->myButton = tmp4;
	HX_STACK_LINE(43)
	::flixel::ui::FlxButton tmp5 = this->myButton;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	tmp5->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
	HX_STACK_LINE(45)
	::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new((int)390,(int)590,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	this->missionButton = tmp6;
	HX_STACK_LINE(46)
	::flixel::ui::FlxButton tmp7 = this->missionButton;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	tmp7->loadGraphic(HX_HCSTRING("assets/img/MissionButton.png","\x61","\x99","\xe6","\xfc"),null(),null(),null(),null(),null());
	HX_STACK_LINE(48)
	::flixel::ui::FlxButton tmp8 = ::flixel::ui::FlxButton_obj::__new((int)680,(int)590,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	this->talkButton = tmp8;
	HX_STACK_LINE(49)
	::flixel::ui::FlxButton tmp9 = this->talkButton;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	tmp9->loadGraphic(HX_HCSTRING("assets/img/TalkButton.png","\xb1","\x61","\x84","\x0b"),null(),null(),null(),null(),null());
	HX_STACK_LINE(51)
	::flixel::FlxSprite tmp10 = ::flixel::FlxSprite_obj::__new((int)0,(int)550,HX_HCSTRING("assets/img/TextBoxText.png","\xae","\xbd","\xa8","\xcd"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	this->textBox = tmp10;
	HX_STACK_LINE(52)
	::flixel::FlxSprite tmp11 = this->textBox;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	tmp11->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(54)
	::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new((int)850,(int)40,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)45,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	this->_txtRoom = tmp12;
	HX_STACK_LINE(55)
	::flixel::text::FlxText tmp13 = this->_txtRoom;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	tmp13->setFormat(HX_HCSTRING("assets/data/GLECB.TTF","\xde","\xd7","\x53","\x83"),(int)45,(int)16777215,null(),null(),null(),null());
	HX_STACK_LINE(57)
	::flixel::text::FlxText tmp14 = ::flixel::text::FlxText_obj::__new((int)0,(int)140,(int)0,HX_HCSTRING("Dit is nu niet beschikbaar!","\x9c","\xc3","\xa2","\x56"),(int)26,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(57)
	this->_txtCharacter = tmp14;
	HX_STACK_LINE(58)
	::flixel::text::FlxText tmp15 = this->_txtCharacter;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	tmp15->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(60)
	::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/castle-background.png","\x06","\x73","\x63","\xa2"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(60)
	this->background = tmp16;
	HX_STACK_LINE(61)
	::flixel::FlxSprite tmp17 = this->background;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(61)
	this->add(tmp17);
	HX_STACK_LINE(63)
	Dynamic tmp18 = this->roomOne_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(63)
	::flixel::ui::FlxButton tmp19 = ::flixel::ui::FlxButton_obj::__new((int)440,(int)32,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(63)
	this->_room1 = tmp19;
	HX_STACK_LINE(64)
	::flixel::ui::FlxButton tmp20 = this->_room1;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(64)
	tmp20->loadGraphic(HX_HCSTRING("assets/img/room1.png","\xd9","\x4f","\xd9","\x5a"),null(),null(),null(),null(),null());
	HX_STACK_LINE(65)
	::flixel::ui::FlxButton tmp21 = this->_room1;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(65)
	this->add(tmp21);
	HX_STACK_LINE(67)
	Dynamic tmp22 = this->roomTwo_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(67)
	::flixel::ui::FlxButton tmp23 = ::flixel::ui::FlxButton_obj::__new((int)27,(int)26,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(67)
	this->_room2 = tmp23;
	HX_STACK_LINE(68)
	::flixel::ui::FlxButton tmp24 = this->_room2;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(68)
	tmp24->loadGraphic(HX_HCSTRING("assets/img/room2.png","\x5a","\xe4","\x3f","\xee"),null(),null(),null(),null(),null());
	HX_STACK_LINE(69)
	::flixel::ui::FlxButton tmp25 = this->_room2;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(69)
	this->add(tmp25);
	HX_STACK_LINE(71)
	Dynamic tmp26 = this->roomThree_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(71)
	::flixel::ui::FlxButton tmp27 = ::flixel::ui::FlxButton_obj::__new((int)28,(int)360,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(71)
	this->_room3 = tmp27;
	HX_STACK_LINE(72)
	::flixel::ui::FlxButton tmp28 = this->_room3;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(72)
	tmp28->loadGraphic(HX_HCSTRING("assets/img/room3.png","\xdb","\x78","\xa6","\x81"),null(),null(),null(),null(),null());
	HX_STACK_LINE(73)
	::flixel::ui::FlxButton tmp29 = this->_room3;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(73)
	this->add(tmp29);
}
;
	return null();
}

//Castle_obj::~Castle_obj() { }

Dynamic Castle_obj::__CreateEmpty() { return  new Castle_obj; }
hx::ObjectPtr< Castle_obj > Castle_obj::__new()
{  hx::ObjectPtr< Castle_obj > _result_ = new Castle_obj();
	_result_->__construct();
	return _result_;}

Dynamic Castle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Castle_obj > _result_ = new Castle_obj();
	_result_->__construct();
	return _result_;}

Void Castle_obj::removeCallback( ){
{
		HX_STACK_FRAME("Castle","removeCallback",0x4996e6bf,"Castle.removeCallback","Castle.hx",76,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::flixel::ui::FlxButton tmp = this->_room1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		this->remove(tmp,null());
		HX_STACK_LINE(78)
		::flixel::ui::FlxButton tmp1 = this->_room2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		this->remove(tmp1,null());
		HX_STACK_LINE(79)
		::flixel::ui::FlxButton tmp2 = this->_room3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		this->remove(tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,removeCallback,(void))

Void Castle_obj::addCallback( ){
{
		HX_STACK_FRAME("Castle","addCallback",0x920a26b0,"Castle.addCallback","Castle.hx",82,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::flixel::ui::FlxButton tmp = this->_room1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		this->add(tmp);
		HX_STACK_LINE(84)
		::flixel::ui::FlxButton tmp1 = this->_room2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		this->add(tmp1);
		HX_STACK_LINE(85)
		::flixel::ui::FlxButton tmp2 = this->_room3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		this->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,addCallback,(void))

Void Castle_obj::roomOne( ){
{
		HX_STACK_FRAME("Castle","roomOne",0x06bb9fb5,"Castle.roomOne","Castle.hx",89,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->removeCallback();
		HX_STACK_LINE(91)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-1.png","\x82","\xfd","\x7a","\x1a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		this->_roomOne = tmp;
		HX_STACK_LINE(92)
		::flixel::FlxSprite tmp1 = this->_roomOne;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		this->add(tmp1);
		HX_STACK_LINE(94)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		tmp2->set_text(HX_HCSTRING("Troonzaal","\xc2","\x97","\x1a","\xc0"));
		HX_STACK_LINE(95)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		this->add(tmp3);
		HX_STACK_LINE(97)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		this->add(tmp4);
		HX_STACK_LINE(98)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::flixel::FlxSprite tmp6 = this->_roomOne;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(98)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",98,0x630262a6)
				{
					HX_STACK_LINE(98)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(98)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(98)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(98)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(99)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		this->add(tmp9);
		HX_STACK_LINE(100)
		Dynamic tmp10 = this->talkCat_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(101)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		this->add(tmp12);
		HX_STACK_LINE(102)
		Dynamic tmp13 = this->missionCat_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(103)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		this->add(tmp15);
		HX_STACK_LINE(104)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)200,(int)480,HX_HCSTRING("assets/img/Characters/cat.png","\xe4","\xeb","\x79","\xc8"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		this->character = tmp16;
		HX_STACK_LINE(105)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(105)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomOne,(void))

Void Castle_obj::roomTwo( ){
{
		HX_STACK_FRAME("Castle","roomTwo",0x06bf72db,"Castle.roomTwo","Castle.hx",109,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		this->removeCallback();
		HX_STACK_LINE(111)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-2.png","\x03","\x92","\xe1","\xad"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		this->_roomTwo = tmp;
		HX_STACK_LINE(112)
		::flixel::FlxSprite tmp1 = this->_roomTwo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		this->add(tmp1);
		HX_STACK_LINE(114)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		tmp2->set_text(HX_HCSTRING("Architect Kamer","\x59","\x3d","\xa4","\x9b"));
		HX_STACK_LINE(115)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		this->add(tmp3);
		HX_STACK_LINE(117)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		this->add(tmp4);
		HX_STACK_LINE(118)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp6 = this->_roomTwo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(118)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",118,0x630262a6)
				{
					HX_STACK_LINE(118)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(118)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(118)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(118)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(119)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		this->add(tmp9);
		HX_STACK_LINE(120)
		Dynamic tmp10 = this->talkArchitect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(120)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(120)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(121)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(121)
		this->add(tmp12);
		HX_STACK_LINE(122)
		Dynamic tmp13 = this->missionArchitect_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(123)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		this->add(tmp15);
		HX_STACK_LINE(124)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)190,(int)480,HX_HCSTRING("assets/img/Characters/architect.png","\x43","\x55","\xa0","\xb8"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(124)
		this->character = tmp16;
		HX_STACK_LINE(125)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomTwo,(void))

Void Castle_obj::roomThree( ){
{
		HX_STACK_FRAME("Castle","roomThree",0xc1be8b6d,"Castle.roomThree","Castle.hx",129,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->removeCallback();
		HX_STACK_LINE(131)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-3.png","\x84","\x26","\x48","\x41"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		this->_roomThree = tmp;
		HX_STACK_LINE(132)
		::flixel::FlxSprite tmp1 = this->_roomThree;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		this->add(tmp1);
		HX_STACK_LINE(134)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		tmp2->set_text(HX_HCSTRING("Dokter Kamer","\x45","\x04","\x2d","\x9c"));
		HX_STACK_LINE(135)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		this->add(tmp3);
		HX_STACK_LINE(137)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		this->add(tmp4);
		HX_STACK_LINE(138)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::flixel::FlxSprite tmp6 = this->_roomThree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(138)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",138,0x630262a6)
				{
					HX_STACK_LINE(138)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(138)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(138)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(138)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(139)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		this->add(tmp9);
		HX_STACK_LINE(140)
		Dynamic tmp10 = this->talkDoctor_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(141)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		this->add(tmp12);
		HX_STACK_LINE(142)
		Dynamic tmp13 = this->missionDoctor_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(143)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(143)
		this->add(tmp15);
		HX_STACK_LINE(144)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)190,(int)480,HX_HCSTRING("assets/img/Characters/doctor.png","\x27","\xde","\xe9","\x92"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		this->character = tmp16;
		HX_STACK_LINE(145)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(145)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomThree,(void))

Void Castle_obj::talkCat( ){
{
		HX_STACK_FRAME("Castle","talkCat",0x05582ef4,"Castle.talkCat","Castle.hx",148,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		this->add(tmp);
		HX_STACK_LINE(150)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkCat,(void))

Void Castle_obj::missionCat( ){
{
		HX_STACK_FRAME("Castle","missionCat",0x5ab730c0,"Castle.missionCat","Castle.hx",153,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		this->add(tmp);
		HX_STACK_LINE(155)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionCat,(void))

Void Castle_obj::talkArchitect( ){
{
		HX_STACK_FRAME("Castle","talkArchitect",0xcfd7e713,"Castle.talkArchitect","Castle.hx",158,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		this->add(tmp);
		HX_STACK_LINE(160)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkArchitect,(void))

Void Castle_obj::missionArchitect( ){
{
		HX_STACK_FRAME("Castle","missionArchitect",0xaf0849df,"Castle.missionArchitect","Castle.hx",163,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Castle.hx",165,0x630262a6)
			{
				HX_STACK_LINE(165)
				::quest::HiddenObjectGame tmp1 = ::quest::HiddenObjectGame_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(165)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(165)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(165)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(165)
				if ((tmp4)){
					HX_STACK_LINE(165)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(165)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(164)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionArchitect,(void))

Void Castle_obj::talkDoctor( ){
{
		HX_STACK_FRAME("Castle","talkDoctor",0x55d3e301,"Castle.talkDoctor","Castle.hx",169,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		this->add(tmp);
		HX_STACK_LINE(171)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkDoctor,(void))

Void Castle_obj::missionDoctor( ){
{
		HX_STACK_FRAME("Castle","missionDoctor",0x95e308b5,"Castle.missionDoctor","Castle.hx",174,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Castle.hx",176,0x630262a6)
			{
				HX_STACK_LINE(176)
				::quest::MiniGameScreen tmp1 = ::quest::MiniGameScreen_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(176)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(176)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(176)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				if ((tmp4)){
					HX_STACK_LINE(176)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(176)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(175)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionDoctor,(void))

Void Castle_obj::removeText( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("Castle","removeText",0x326d94a7,"Castle.removeText","Castle.hx",180,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(181)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		this->remove(tmp,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,removeText,(void))

Void Castle_obj::removeRoom( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","removeRoom",0x3122b615,"Castle.removeRoom","Castle.hx",185,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(186)
		::flixel::FlxSprite tmp = sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		this->remove(tmp,null());
		HX_STACK_LINE(187)
		::flixel::text::FlxText tmp1 = this->_txtRoom;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		this->remove(tmp1,null());
		HX_STACK_LINE(188)
		::flixel::ui::FlxButton tmp2 = this->myButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		this->remove(tmp2,null());
		HX_STACK_LINE(189)
		::flixel::ui::FlxButton tmp3 = this->talkButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		this->remove(tmp3,null());
		HX_STACK_LINE(190)
		::flixel::ui::FlxButton tmp4 = this->missionButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		this->remove(tmp4,null());
		HX_STACK_LINE(191)
		::flixel::FlxSprite tmp5 = this->textBox;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		this->remove(tmp5,null());
		HX_STACK_LINE(192)
		::flixel::FlxSprite tmp6 = this->character;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		this->remove(tmp6,null());
		HX_STACK_LINE(193)
		::flixel::text::FlxText tmp7 = this->_txtCharacter;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		this->remove(tmp7,null());
		HX_STACK_LINE(194)
		this->addCallback();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,removeRoom,(void))


Castle_obj::Castle_obj()
{
}

void Castle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Castle);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(_room1,"_room1");
	HX_MARK_MEMBER_NAME(_room2,"_room2");
	HX_MARK_MEMBER_NAME(_room3,"_room3");
	HX_MARK_MEMBER_NAME(_roomOne,"_roomOne");
	HX_MARK_MEMBER_NAME(_roomTwo,"_roomTwo");
	HX_MARK_MEMBER_NAME(_roomThree,"_roomThree");
	HX_MARK_MEMBER_NAME(myButton,"myButton");
	HX_MARK_MEMBER_NAME(talkButton,"talkButton");
	HX_MARK_MEMBER_NAME(missionButton,"missionButton");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(character,"character");
	HX_MARK_MEMBER_NAME(textBox,"textBox");
	HX_MARK_MEMBER_NAME(_txtCharacter,"_txtCharacter");
	HX_MARK_MEMBER_NAME(_txtRoom,"_txtRoom");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Castle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(_room1,"_room1");
	HX_VISIT_MEMBER_NAME(_room2,"_room2");
	HX_VISIT_MEMBER_NAME(_room3,"_room3");
	HX_VISIT_MEMBER_NAME(_roomOne,"_roomOne");
	HX_VISIT_MEMBER_NAME(_roomTwo,"_roomTwo");
	HX_VISIT_MEMBER_NAME(_roomThree,"_roomThree");
	HX_VISIT_MEMBER_NAME(myButton,"myButton");
	HX_VISIT_MEMBER_NAME(talkButton,"talkButton");
	HX_VISIT_MEMBER_NAME(missionButton,"missionButton");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(character,"character");
	HX_VISIT_MEMBER_NAME(textBox,"textBox");
	HX_VISIT_MEMBER_NAME(_txtCharacter,"_txtCharacter");
	HX_VISIT_MEMBER_NAME(_txtRoom,"_txtRoom");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Castle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_room1") ) { return _room1; }
		if (HX_FIELD_EQ(inName,"_room2") ) { return _room2; }
		if (HX_FIELD_EQ(inName,"_room3") ) { return _room3; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textBox") ) { return textBox; }
		if (HX_FIELD_EQ(inName,"roomOne") ) { return roomOne_dyn(); }
		if (HX_FIELD_EQ(inName,"roomTwo") ) { return roomTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"talkCat") ) { return talkCat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_roomOne") ) { return _roomOne; }
		if (HX_FIELD_EQ(inName,"_roomTwo") ) { return _roomTwo; }
		if (HX_FIELD_EQ(inName,"myButton") ) { return myButton; }
		if (HX_FIELD_EQ(inName,"_txtRoom") ) { return _txtRoom; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return character; }
		if (HX_FIELD_EQ(inName,"roomThree") ) { return roomThree_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"_roomThree") ) { return _roomThree; }
		if (HX_FIELD_EQ(inName,"talkButton") ) { return talkButton; }
		if (HX_FIELD_EQ(inName,"missionCat") ) { return missionCat_dyn(); }
		if (HX_FIELD_EQ(inName,"talkDoctor") ) { return talkDoctor_dyn(); }
		if (HX_FIELD_EQ(inName,"removeText") ) { return removeText_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRoom") ) { return removeRoom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addCallback") ) { return addCallback_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"missionButton") ) { return missionButton; }
		if (HX_FIELD_EQ(inName,"_txtCharacter") ) { return _txtCharacter; }
		if (HX_FIELD_EQ(inName,"talkArchitect") ) { return talkArchitect_dyn(); }
		if (HX_FIELD_EQ(inName,"missionDoctor") ) { return missionDoctor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeCallback") ) { return removeCallback_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"missionArchitect") ) { return missionArchitect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Castle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_room1") ) { _room1=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room2") ) { _room2=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room3") ) { _room3=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textBox") ) { textBox=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_roomOne") ) { _roomOne=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roomTwo") ) { _roomTwo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"myButton") ) { myButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtRoom") ) { _txtRoom=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roomThree") ) { _roomThree=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"talkButton") ) { talkButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"missionButton") ) { missionButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtCharacter") ) { _txtCharacter=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Castle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51"));
	outFields->push(HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51"));
	outFields->push(HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57"));
	outFields->push(HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10"));
	outFields->push(HX_HCSTRING("talkButton","\x3e","\xb8","\x6c","\xa0"));
	outFields->push(HX_HCSTRING("missionButton","\x5e","\xd7","\x68","\x2e"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41"));
	outFields->push(HX_HCSTRING("textBox","\x5e","\x13","\xba","\x9e"));
	outFields->push(HX_HCSTRING("_txtCharacter","\xf8","\x91","\xd1","\x1a"));
	outFields->push(HX_HCSTRING("_txtRoom","\x2c","\xda","\x48","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,_room1),HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,_room2),HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,_room3),HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomOne),HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomTwo),HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomThree),HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,myButton),HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,talkButton),HX_HCSTRING("talkButton","\x3e","\xb8","\x6c","\xa0")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(Castle_obj,missionButton),HX_HCSTRING("missionButton","\x5e","\xd7","\x68","\x2e")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Castle_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,character),HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,textBox),HX_HCSTRING("textBox","\x5e","\x13","\xba","\x9e")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Castle_obj,_txtCharacter),HX_HCSTRING("_txtCharacter","\xf8","\x91","\xd1","\x1a")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Castle_obj,_txtRoom),HX_HCSTRING("_txtRoom","\x2c","\xda","\x48","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9"),
	HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51"),
	HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51"),
	HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57"),
	HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10"),
	HX_HCSTRING("talkButton","\x3e","\xb8","\x6c","\xa0"),
	HX_HCSTRING("missionButton","\x5e","\xd7","\x68","\x2e"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41"),
	HX_HCSTRING("textBox","\x5e","\x13","\xba","\x9e"),
	HX_HCSTRING("_txtCharacter","\xf8","\x91","\xd1","\x1a"),
	HX_HCSTRING("_txtRoom","\x2c","\xda","\x48","\x0d"),
	HX_HCSTRING("removeCallback","\x29","\xd6","\x5c","\x49"),
	HX_HCSTRING("addCallback","\x06","\xd1","\x62","\xb0"),
	HX_HCSTRING("roomOne","\x0b","\xe7","\xee","\x17"),
	HX_HCSTRING("roomTwo","\x31","\xba","\xf2","\x17"),
	HX_HCSTRING("roomThree","\x43","\xd4","\xd2","\xfb"),
	HX_HCSTRING("talkCat","\x4a","\x76","\x8b","\x16"),
	HX_HCSTRING("missionCat","\x2a","\xa3","\x62","\xf2"),
	HX_HCSTRING("talkArchitect","\xe9","\x52","\x70","\xb5"),
	HX_HCSTRING("missionArchitect","\xc9","\x67","\xb8","\x9f"),
	HX_HCSTRING("talkDoctor","\x6b","\x55","\x7f","\xed"),
	HX_HCSTRING("missionDoctor","\x8b","\x74","\x7b","\x7b"),
	HX_HCSTRING("removeText","\x11","\x07","\x19","\xca"),
	HX_HCSTRING("removeRoom","\x7f","\x28","\xce","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Castle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Castle_obj::__mClass,"__mClass");
};

#endif

hx::Class Castle_obj::__mClass;

void Castle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Castle","\x18","\x5f","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Castle_obj >;
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

