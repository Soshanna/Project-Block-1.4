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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
HX_STACK_FRAME("Castle","new",0x3f186c0a,"Castle.new","Castle.hx",21,0x630262a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->timer = ::flixel::util::FlxTimer_obj::__new();
	HX_STACK_LINE(43)
	super::__construct(null());
	HX_STACK_LINE(44)
	::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
	HX_STACK_LINE(45)
	save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
	HX_STACK_LINE(46)
	this->energy = save->data->__Field(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"), hx::paccDynamic );
	HX_STACK_LINE(47)
	save->close(null(),null());
	HX_STACK_LINE(49)
	::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	Float tmp4 = (tmp3 - (int)180);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new(tmp4,(int)330,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	this->myButton = tmp5;
	HX_STACK_LINE(50)
	::flixel::ui::FlxButton tmp6 = this->myButton;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	tmp6->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
	HX_STACK_LINE(52)
	::flixel::ui::FlxButton tmp7 = ::flixel::ui::FlxButton_obj::__new((int)390,(int)590,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	this->missionButton = tmp7;
	HX_STACK_LINE(53)
	::flixel::ui::FlxButton tmp8 = this->missionButton;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	tmp8->loadGraphic(HX_HCSTRING("assets/img/MissionButton.png","\x61","\x99","\xe6","\xfc"),null(),null(),null(),null(),null());
	HX_STACK_LINE(55)
	::flixel::ui::FlxButton tmp9 = ::flixel::ui::FlxButton_obj::__new((int)680,(int)590,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	this->talkButton = tmp9;
	HX_STACK_LINE(56)
	::flixel::ui::FlxButton tmp10 = this->talkButton;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	tmp10->loadGraphic(HX_HCSTRING("assets/img/TalkButton.png","\xb1","\x61","\x84","\x0b"),null(),null(),null(),null(),null());
	HX_STACK_LINE(58)
	::flixel::FlxSprite tmp11 = ::flixel::FlxSprite_obj::__new((int)0,(int)550,HX_HCSTRING("assets/img/TextBoxText.png","\xae","\xbd","\xa8","\xcd"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(58)
	this->textBox = tmp11;
	HX_STACK_LINE(59)
	::flixel::FlxSprite tmp12 = this->textBox;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(59)
	tmp12->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(61)
	::flixel::text::FlxText tmp13 = ::flixel::text::FlxText_obj::__new((int)850,(int)40,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)45,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(61)
	this->_txtRoom = tmp13;
	HX_STACK_LINE(62)
	::flixel::text::FlxText tmp14 = this->_txtRoom;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(62)
	tmp14->setFormat(HX_HCSTRING("assets/data/GLECB.TTF","\xde","\xd7","\x53","\x83"),(int)45,(int)16777215,null(),null(),null(),null());
	HX_STACK_LINE(64)
	::flixel::text::FlxText tmp15 = ::flixel::text::FlxText_obj::__new((int)0,(int)140,(int)0,HX_HCSTRING("Dit is nu niet beschikbaar!","\x9c","\xc3","\xa2","\x56"),(int)26,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(64)
	this->_txtCharacter = tmp15;
	HX_STACK_LINE(65)
	::flixel::text::FlxText tmp16 = this->_txtCharacter;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(65)
	tmp16->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(67)
	::flixel::FlxSprite tmp17 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/castle-background.png","\x06","\x73","\x63","\xa2"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(67)
	this->background = tmp17;
	HX_STACK_LINE(68)
	::flixel::FlxSprite tmp18 = this->background;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(68)
	this->add(tmp18);
	HX_STACK_LINE(70)
	Dynamic tmp19 = this->roomOne_dyn();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(70)
	::flixel::ui::FlxButton tmp20 = ::flixel::ui::FlxButton_obj::__new((int)440,(int)32,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(70)
	this->_room1 = tmp20;
	HX_STACK_LINE(71)
	::flixel::ui::FlxButton tmp21 = this->_room1;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(71)
	tmp21->loadGraphic(HX_HCSTRING("assets/img/room1.png","\xd9","\x4f","\xd9","\x5a"),null(),null(),null(),null(),null());
	HX_STACK_LINE(72)
	::flixel::ui::FlxButton tmp22 = this->_room1;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(72)
	this->add(tmp22);
	HX_STACK_LINE(74)
	Dynamic tmp23 = this->roomTwo_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(74)
	::flixel::ui::FlxButton tmp24 = ::flixel::ui::FlxButton_obj::__new((int)27,(int)26,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(74)
	this->_room2 = tmp24;
	HX_STACK_LINE(75)
	::flixel::ui::FlxButton tmp25 = this->_room2;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(75)
	tmp25->loadGraphic(HX_HCSTRING("assets/img/room2.png","\x5a","\xe4","\x3f","\xee"),null(),null(),null(),null(),null());
	HX_STACK_LINE(76)
	::flixel::ui::FlxButton tmp26 = this->_room2;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(76)
	this->add(tmp26);
	HX_STACK_LINE(78)
	Dynamic tmp27 = this->roomThree_dyn();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(78)
	::flixel::ui::FlxButton tmp28 = ::flixel::ui::FlxButton_obj::__new((int)28,(int)360,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(78)
	this->_room3 = tmp28;
	HX_STACK_LINE(79)
	::flixel::ui::FlxButton tmp29 = this->_room3;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(79)
	tmp29->loadGraphic(HX_HCSTRING("assets/img/room3.png","\xdb","\x78","\xa6","\x81"),null(),null(),null(),null(),null());
	HX_STACK_LINE(80)
	::flixel::ui::FlxButton tmp30 = this->_room3;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(80)
	this->add(tmp30);
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
		HX_STACK_FRAME("Castle","removeCallback",0x4996e6bf,"Castle.removeCallback","Castle.hx",83,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::ui::FlxButton tmp = this->_room1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->remove(tmp,null());
		HX_STACK_LINE(85)
		::flixel::ui::FlxButton tmp1 = this->_room2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		this->remove(tmp1,null());
		HX_STACK_LINE(86)
		::flixel::ui::FlxButton tmp2 = this->_room3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		this->remove(tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,removeCallback,(void))

Void Castle_obj::addCallback( ){
{
		HX_STACK_FRAME("Castle","addCallback",0x920a26b0,"Castle.addCallback","Castle.hx",89,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::flixel::ui::FlxButton tmp = this->_room1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		this->add(tmp);
		HX_STACK_LINE(91)
		::flixel::ui::FlxButton tmp1 = this->_room2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		this->add(tmp1);
		HX_STACK_LINE(92)
		::flixel::ui::FlxButton tmp2 = this->_room3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		this->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,addCallback,(void))

Void Castle_obj::roomOne( ){
{
		HX_STACK_FRAME("Castle","roomOne",0x06bb9fb5,"Castle.roomOne","Castle.hx",96,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->removeCallback();
		HX_STACK_LINE(98)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-1.png","\x82","\xfd","\x7a","\x1a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->_roomOne = tmp;
		HX_STACK_LINE(99)
		::flixel::FlxSprite tmp1 = this->_roomOne;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		this->add(tmp1);
		HX_STACK_LINE(101)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		tmp2->set_text(HX_HCSTRING("Troonzaal","\xc2","\x97","\x1a","\xc0"));
		HX_STACK_LINE(102)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		this->add(tmp3);
		HX_STACK_LINE(104)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		this->add(tmp4);
		HX_STACK_LINE(105)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		::flixel::FlxSprite tmp6 = this->_roomOne;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(105)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",105,0x630262a6)
				{
					HX_STACK_LINE(105)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(105)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(105)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(105)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(106)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		this->add(tmp9);
		HX_STACK_LINE(107)
		Dynamic tmp10 = this->talkCat_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(107)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(107)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(108)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(108)
		this->add(tmp12);
		HX_STACK_LINE(109)
		Dynamic tmp13 = this->missionCat_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(109)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(109)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(110)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(110)
		this->add(tmp15);
		HX_STACK_LINE(111)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)200,(int)480,HX_HCSTRING("assets/img/Characters/cat.png","\xe4","\xeb","\x79","\xc8"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(111)
		this->character = tmp16;
		HX_STACK_LINE(112)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(112)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomOne,(void))

Void Castle_obj::roomTwo( ){
{
		HX_STACK_FRAME("Castle","roomTwo",0x06bf72db,"Castle.roomTwo","Castle.hx",116,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->removeCallback();
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-2.png","\x03","\x92","\xe1","\xad"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->_roomTwo = tmp;
		HX_STACK_LINE(119)
		::flixel::FlxSprite tmp1 = this->_roomTwo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		this->add(tmp1);
		HX_STACK_LINE(121)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		tmp2->set_text(HX_HCSTRING("Architect Kamer","\x59","\x3d","\xa4","\x9b"));
		HX_STACK_LINE(122)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		this->add(tmp3);
		HX_STACK_LINE(124)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		this->add(tmp4);
		HX_STACK_LINE(125)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		::flixel::FlxSprite tmp6 = this->_roomTwo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(125)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",125,0x630262a6)
				{
					HX_STACK_LINE(125)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(125)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(125)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(126)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		this->add(tmp9);
		HX_STACK_LINE(127)
		Dynamic tmp10 = this->talkArchitect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(127)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(128)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(128)
		this->add(tmp12);
		HX_STACK_LINE(129)
		Dynamic tmp13 = this->missionArchitect_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(129)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(130)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		this->add(tmp15);
		HX_STACK_LINE(131)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)190,(int)480,HX_HCSTRING("assets/img/Characters/architect.png","\x43","\x55","\xa0","\xb8"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		this->character = tmp16;
		HX_STACK_LINE(132)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(132)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomTwo,(void))

Void Castle_obj::roomThree( ){
{
		HX_STACK_FRAME("Castle","roomThree",0xc1be8b6d,"Castle.roomThree","Castle.hx",136,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		this->removeCallback();
		HX_STACK_LINE(138)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Bigroom-3.png","\x84","\x26","\x48","\x41"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		this->_roomThree = tmp;
		HX_STACK_LINE(139)
		::flixel::FlxSprite tmp1 = this->_roomThree;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		this->add(tmp1);
		HX_STACK_LINE(141)
		::flixel::text::FlxText tmp2 = this->_txtRoom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		tmp2->set_text(HX_HCSTRING("Dokter Kamer","\x45","\x04","\x2d","\x9c"));
		HX_STACK_LINE(142)
		::flixel::text::FlxText tmp3 = this->_txtRoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		this->add(tmp3);
		HX_STACK_LINE(144)
		::flixel::FlxSprite tmp4 = this->textBox;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		this->add(tmp4);
		HX_STACK_LINE(145)
		Dynamic tmp5 = this->removeRoom_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::flixel::FlxSprite tmp6 = this->_roomThree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(145)
			::flixel::FlxSprite a1 = tmp6;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::FlxSprite,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",145,0x630262a6)
				{
					HX_STACK_LINE(145)
					::flixel::FlxSprite tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(145)
					f(tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(145)
			tmp7 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(145)
		::flixel::ui::FlxButton tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		tmp8->onDown->callback = tmp7;
		HX_STACK_LINE(146)
		::flixel::ui::FlxButton tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		this->add(tmp9);
		HX_STACK_LINE(147)
		Dynamic tmp10 = this->talkDoctor_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(147)
		::flixel::ui::FlxButton tmp11 = this->talkButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		tmp11->onDown->callback = tmp10;
		HX_STACK_LINE(148)
		::flixel::ui::FlxButton tmp12 = this->talkButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(148)
		this->add(tmp12);
		HX_STACK_LINE(149)
		Dynamic tmp13 = this->missionDoctor_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		::flixel::ui::FlxButton tmp14 = this->missionButton;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(149)
		tmp14->onDown->callback = tmp13;
		HX_STACK_LINE(150)
		::flixel::ui::FlxButton tmp15 = this->missionButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(150)
		this->add(tmp15);
		HX_STACK_LINE(151)
		::flixel::FlxSprite tmp16 = ::flixel::FlxSprite_obj::__new((int)190,(int)480,HX_HCSTRING("assets/img/Characters/doctor.png","\x27","\xde","\xe9","\x92"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(151)
		this->character = tmp16;
		HX_STACK_LINE(152)
		::flixel::FlxSprite tmp17 = this->character;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(152)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,roomThree,(void))

Void Castle_obj::talkCat( ){
{
		HX_STACK_FRAME("Castle","talkCat",0x05582ef4,"Castle.talkCat","Castle.hx",155,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		this->add(tmp);
		HX_STACK_LINE(157)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkCat,(void))

Void Castle_obj::missionCat( ){
{
		HX_STACK_FRAME("Castle","missionCat",0x5ab730c0,"Castle.missionCat","Castle.hx",160,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		this->add(tmp);
		HX_STACK_LINE(162)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionCat,(void))

Void Castle_obj::talkArchitect( ){
{
		HX_STACK_FRAME("Castle","talkArchitect",0xcfd7e713,"Castle.talkArchitect","Castle.hx",165,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		this->add(tmp);
		HX_STACK_LINE(167)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkArchitect,(void))

Void Castle_obj::missionArchitect( ){
{
		HX_STACK_FRAME("Castle","missionArchitect",0xaf0849df,"Castle.missionArchitect","Castle.hx",170,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		int tmp = this->energy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = (tmp >= (int)25);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(172)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",173,0x630262a6)
				{
					HX_STACK_LINE(173)
					::quest::HiddenObjectGame tmp3 = ::quest::HiddenObjectGame_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(173)
					::flixel::FlxState nextState = tmp3;		HX_STACK_VAR(nextState,"nextState");
					HX_STACK_LINE(173)
					::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(173)
					::flixel::FlxState tmp5 = nextState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(173)
					bool tmp6 = tmp4->_state->switchTo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(173)
					if ((tmp6)){
						HX_STACK_LINE(173)
						::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(173)
						tmp7->_requestedState = nextState;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(172)
			tmp2->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_2_1()),null());
		}
		else{
			HX_STACK_LINE(176)
			::flixel::text::FlxText tmp2 = this->_txtCharacter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			this->add(tmp2);
			HX_STACK_LINE(177)
			::flixel::util::FlxTimer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			Dynamic tmp4 = this->removeText_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			tmp3->start((int)2,tmp4,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionArchitect,(void))

Void Castle_obj::talkDoctor( ){
{
		HX_STACK_FRAME("Castle","talkDoctor",0x55d3e301,"Castle.talkDoctor","Castle.hx",181,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		this->add(tmp);
		HX_STACK_LINE(183)
		::flixel::util::FlxTimer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		Dynamic tmp2 = this->removeText_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		tmp1->start((int)2,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,talkDoctor,(void))

Void Castle_obj::missionDoctor( ){
{
		HX_STACK_FRAME("Castle","missionDoctor",0x95e308b5,"Castle.missionDoctor","Castle.hx",186,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		int tmp = this->energy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp >= (int)25);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(188)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Castle.hx",189,0x630262a6)
				{
					HX_STACK_LINE(189)
					::quest::MiniGameScreen tmp3 = ::quest::MiniGameScreen_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(189)
					::flixel::FlxState nextState = tmp3;		HX_STACK_VAR(nextState,"nextState");
					HX_STACK_LINE(189)
					::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(189)
					::flixel::FlxState tmp5 = nextState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(189)
					bool tmp6 = tmp4->_state->switchTo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(189)
					if ((tmp6)){
						HX_STACK_LINE(189)
						::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(189)
						tmp7->_requestedState = nextState;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(188)
			tmp2->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_2_1()),null());
		}
		else{
			HX_STACK_LINE(192)
			::flixel::text::FlxText tmp2 = this->_txtCharacter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			this->add(tmp2);
			HX_STACK_LINE(193)
			::flixel::util::FlxTimer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			Dynamic tmp4 = this->removeText_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			tmp3->start((int)2,tmp4,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Castle_obj,missionDoctor,(void))

Void Castle_obj::removeText( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("Castle","removeText",0x326d94a7,"Castle.removeText","Castle.hx",197,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(198)
		::flixel::text::FlxText tmp = this->_txtCharacter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		this->remove(tmp,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,removeText,(void))

Void Castle_obj::removeRoom( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","removeRoom",0x3122b615,"Castle.removeRoom","Castle.hx",202,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(203)
		::flixel::FlxSprite tmp = sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		this->remove(tmp,null());
		HX_STACK_LINE(204)
		::flixel::text::FlxText tmp1 = this->_txtRoom;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		this->remove(tmp1,null());
		HX_STACK_LINE(205)
		::flixel::ui::FlxButton tmp2 = this->myButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		this->remove(tmp2,null());
		HX_STACK_LINE(206)
		::flixel::ui::FlxButton tmp3 = this->talkButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		this->remove(tmp3,null());
		HX_STACK_LINE(207)
		::flixel::ui::FlxButton tmp4 = this->missionButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		this->remove(tmp4,null());
		HX_STACK_LINE(208)
		::flixel::FlxSprite tmp5 = this->textBox;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		this->remove(tmp5,null());
		HX_STACK_LINE(209)
		::flixel::FlxSprite tmp6 = this->character;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		this->remove(tmp6,null());
		HX_STACK_LINE(210)
		::flixel::text::FlxText tmp7 = this->_txtCharacter;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		this->remove(tmp7,null());
		HX_STACK_LINE(211)
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
	HX_MARK_MEMBER_NAME(energy,"energy");
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
	HX_VISIT_MEMBER_NAME(energy,"energy");
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
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
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
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
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
	{hx::fsInt,(int)offsetof(Castle_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
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
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
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

