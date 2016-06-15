#include <hxcpp.h>

#ifndef INCLUDED_Castle
#include <Castle.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Castle_obj::__construct()
{
HX_STACK_FRAME("Castle","new",0x3f186c0a,"Castle.new","Castle.hx",36,0x630262a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	super::__construct(null());
	HX_STACK_LINE(39)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->_room1 = tmp;
	HX_STACK_LINE(40)
	::flixel::FlxSprite tmp1 = this->_room1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	tmp1->loadGraphic(HX_HCSTRING("assets/img/room1.png","\xd9","\x4f","\xd9","\x5a"),null(),null(),null(),null(),null());
	HX_STACK_LINE(41)
	::flixel::FlxSprite tmp2 = this->_room1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	tmp2->set_x((int)251);
	HX_STACK_LINE(42)
	::flixel::FlxSprite tmp3 = this->_room1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	tmp3->set_y((int)200);
	HX_STACK_LINE(43)
	::flixel::FlxSprite tmp4 = this->_room1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	this->add(tmp4);
	HX_STACK_LINE(44)
	::flixel::FlxSprite tmp5 = this->_room1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	Dynamic tmp6 = this->roomOne_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp5,tmp6,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(46)
	::flixel::FlxSprite tmp7 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	this->_room2 = tmp7;
	HX_STACK_LINE(47)
	::flixel::FlxSprite tmp8 = this->_room2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	tmp8->loadGraphic(HX_HCSTRING("assets/img/room2.png","\x5a","\xe4","\x3f","\xee"),null(),null(),null(),null(),null());
	HX_STACK_LINE(48)
	::flixel::FlxSprite tmp9 = this->_room2;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	tmp9->set_x((int)520);
	HX_STACK_LINE(49)
	::flixel::FlxSprite tmp10 = this->_room2;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	tmp10->set_y((int)201);
	HX_STACK_LINE(50)
	::flixel::FlxSprite tmp11 = this->_room2;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	this->add(tmp11);
	HX_STACK_LINE(51)
	::flixel::FlxSprite tmp12 = this->_room2;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	Dynamic tmp13 = this->roomTwo_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp12,tmp13,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(53)
	::flixel::FlxSprite tmp14 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(53)
	this->_room3 = tmp14;
	HX_STACK_LINE(54)
	::flixel::FlxSprite tmp15 = this->_room3;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(54)
	tmp15->loadGraphic(HX_HCSTRING("assets/img/room3.png","\xdb","\x78","\xa6","\x81"),null(),null(),null(),null(),null());
	HX_STACK_LINE(55)
	::flixel::FlxSprite tmp16 = this->_room3;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(55)
	tmp16->set_x((int)785);
	HX_STACK_LINE(56)
	::flixel::FlxSprite tmp17 = this->_room3;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(56)
	tmp17->set_y((int)200);
	HX_STACK_LINE(57)
	::flixel::FlxSprite tmp18 = this->_room3;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(57)
	this->add(tmp18);
	HX_STACK_LINE(58)
	::flixel::FlxSprite tmp19 = this->_room3;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(58)
	Dynamic tmp20 = this->roomThree_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(58)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp19,tmp20,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(60)
	::flixel::FlxSprite tmp21 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(60)
	this->_room4 = tmp21;
	HX_STACK_LINE(61)
	::flixel::FlxSprite tmp22 = this->_room4;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(61)
	tmp22->loadGraphic(HX_HCSTRING("assets/img/room4.png","\x5c","\x0d","\x0d","\x15"),null(),null(),null(),null(),null());
	HX_STACK_LINE(62)
	::flixel::FlxSprite tmp23 = this->_room4;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(62)
	tmp23->set_x((int)251);
	HX_STACK_LINE(63)
	::flixel::FlxSprite tmp24 = this->_room4;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(63)
	tmp24->set_y((int)414);
	HX_STACK_LINE(64)
	::flixel::FlxSprite tmp25 = this->_room4;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(64)
	this->add(tmp25);
	HX_STACK_LINE(65)
	::flixel::FlxSprite tmp26 = this->_room4;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(65)
	Dynamic tmp27 = this->roomFour_dyn();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(65)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp26,tmp27,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(67)
	::flixel::FlxSprite tmp28 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(67)
	this->_room5 = tmp28;
	HX_STACK_LINE(68)
	::flixel::FlxSprite tmp29 = this->_room5;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(68)
	tmp29->loadGraphic(HX_HCSTRING("assets/img/room5.png","\xdd","\xa1","\x73","\xa8"),null(),null(),null(),null(),null());
	HX_STACK_LINE(69)
	::flixel::FlxSprite tmp30 = this->_room5;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(69)
	tmp30->set_x((int)520);
	HX_STACK_LINE(70)
	::flixel::FlxSprite tmp31 = this->_room5;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(70)
	tmp31->set_y((int)415);
	HX_STACK_LINE(71)
	::flixel::FlxSprite tmp32 = this->_room5;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(71)
	this->add(tmp32);
	HX_STACK_LINE(72)
	::flixel::FlxSprite tmp33 = this->_room5;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(72)
	Dynamic tmp34 = this->roomFive_dyn();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(72)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp33,tmp34,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(74)
	::flixel::FlxSprite tmp35 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(74)
	this->_room6 = tmp35;
	HX_STACK_LINE(75)
	::flixel::FlxSprite tmp36 = this->_room6;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(75)
	tmp36->loadGraphic(HX_HCSTRING("assets/img/room6.png","\x5e","\x36","\xda","\x3b"),null(),null(),null(),null(),null());
	HX_STACK_LINE(76)
	::flixel::FlxSprite tmp37 = this->_room6;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(76)
	tmp37->set_x((int)786);
	HX_STACK_LINE(77)
	::flixel::FlxSprite tmp38 = this->_room6;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(77)
	tmp38->set_y((int)415);
	HX_STACK_LINE(78)
	::flixel::FlxSprite tmp39 = this->_room6;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(78)
	this->add(tmp39);
	HX_STACK_LINE(79)
	::flixel::FlxSprite tmp40 = this->_room6;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(79)
	Dynamic tmp41 = this->roomSix_dyn();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(79)
	::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp40,tmp41,null(),null(),null(),null(),null(),null(),null());
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

Void Castle_obj::roomOne( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomOne",0x06bb9fb5,"Castle.roomOne","Castle.hx",83,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(84)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->_roomOne = tmp;
		HX_STACK_LINE(85)
		::flixel::FlxSprite tmp1 = this->_roomOne;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room1.png","\xd9","\x4f","\xd9","\x5a"),null(),null(),null(),null(),null());
		HX_STACK_LINE(86)
		::flixel::FlxSprite tmp2 = this->_roomOne;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		tmp2->set_x((int)350);
		HX_STACK_LINE(87)
		::flixel::FlxSprite tmp3 = this->_roomOne;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		tmp3->set_y((int)289);
		HX_STACK_LINE(88)
		::flixel::FlxSprite tmp4 = this->_roomOne;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(89)
		::flixel::FlxSprite tmp5 = this->_roomOne;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		this->add(tmp5);
		HX_STACK_LINE(91)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		this->myButton = tmp6;
		HX_STACK_LINE(92)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(93)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		this->add(tmp8);
		HX_STACK_LINE(94)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		tmp9->set_x((int)150);
		HX_STACK_LINE(95)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		tmp10->set_y((int)400);
		HX_STACK_LINE(96)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomOne,(void))

Void Castle_obj::roomTwo( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomTwo",0x06bf72db,"Castle.roomTwo","Castle.hx",100,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(101)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		this->_roomTwo = tmp;
		HX_STACK_LINE(102)
		::flixel::FlxSprite tmp1 = this->_roomTwo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room2.png","\x5a","\xe4","\x3f","\xee"),null(),null(),null(),null(),null());
		HX_STACK_LINE(103)
		::flixel::FlxSprite tmp2 = this->_roomTwo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		tmp2->set_x((int)350);
		HX_STACK_LINE(104)
		::flixel::FlxSprite tmp3 = this->_roomTwo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		tmp3->set_y((int)289);
		HX_STACK_LINE(105)
		::flixel::FlxSprite tmp4 = this->_roomTwo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(106)
		::flixel::FlxSprite tmp5 = this->_roomTwo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		this->add(tmp5);
		HX_STACK_LINE(108)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		this->myButton = tmp6;
		HX_STACK_LINE(109)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(110)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(110)
		this->add(tmp8);
		HX_STACK_LINE(111)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		tmp9->set_x((int)150);
		HX_STACK_LINE(112)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		tmp10->set_y((int)400);
		HX_STACK_LINE(113)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(113)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomTwo,(void))

Void Castle_obj::roomThree( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomThree",0xc1be8b6d,"Castle.roomThree","Castle.hx",117,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->_roomThree = tmp;
		HX_STACK_LINE(119)
		::flixel::FlxSprite tmp1 = this->_roomThree;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room3.png","\xdb","\x78","\xa6","\x81"),null(),null(),null(),null(),null());
		HX_STACK_LINE(120)
		::flixel::FlxSprite tmp2 = this->_roomThree;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp2->set_x((int)350);
		HX_STACK_LINE(121)
		::flixel::FlxSprite tmp3 = this->_roomThree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		tmp3->set_y((int)289);
		HX_STACK_LINE(122)
		::flixel::FlxSprite tmp4 = this->_roomThree;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(123)
		::flixel::FlxSprite tmp5 = this->_roomThree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		this->add(tmp5);
		HX_STACK_LINE(125)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		this->myButton = tmp6;
		HX_STACK_LINE(126)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(127)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		this->add(tmp8);
		HX_STACK_LINE(128)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		tmp9->set_x((int)150);
		HX_STACK_LINE(129)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		tmp10->set_y((int)400);
		HX_STACK_LINE(130)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomThree,(void))

Void Castle_obj::roomFour( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomFour",0xd77e03b7,"Castle.roomFour","Castle.hx",134,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(135)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		this->_roomFour = tmp;
		HX_STACK_LINE(136)
		::flixel::FlxSprite tmp1 = this->_roomFour;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room4.png","\x5c","\x0d","\x0d","\x15"),null(),null(),null(),null(),null());
		HX_STACK_LINE(137)
		::flixel::FlxSprite tmp2 = this->_roomFour;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		tmp2->set_x((int)350);
		HX_STACK_LINE(138)
		::flixel::FlxSprite tmp3 = this->_roomFour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp3->set_y((int)289);
		HX_STACK_LINE(139)
		::flixel::FlxSprite tmp4 = this->_roomFour;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(140)
		::flixel::FlxSprite tmp5 = this->_roomFour;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		this->add(tmp5);
		HX_STACK_LINE(142)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		this->myButton = tmp6;
		HX_STACK_LINE(143)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(144)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		this->add(tmp8);
		HX_STACK_LINE(145)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		tmp9->set_x((int)150);
		HX_STACK_LINE(146)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		tmp10->set_y((int)400);
		HX_STACK_LINE(147)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(147)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomFour,(void))

Void Castle_obj::roomFive( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomFive",0xd7797703,"Castle.roomFive","Castle.hx",151,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(152)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		this->_roomFive = tmp;
		HX_STACK_LINE(153)
		::flixel::FlxSprite tmp1 = this->_roomFive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room5.png","\xdd","\xa1","\x73","\xa8"),null(),null(),null(),null(),null());
		HX_STACK_LINE(154)
		::flixel::FlxSprite tmp2 = this->_roomFive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		tmp2->set_x((int)350);
		HX_STACK_LINE(155)
		::flixel::FlxSprite tmp3 = this->_roomFive;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		tmp3->set_y((int)289);
		HX_STACK_LINE(156)
		::flixel::FlxSprite tmp4 = this->_roomFive;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(157)
		::flixel::FlxSprite tmp5 = this->_roomFive;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		this->add(tmp5);
		HX_STACK_LINE(159)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		this->myButton = tmp6;
		HX_STACK_LINE(160)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(161)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		this->add(tmp8);
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(162)
		tmp9->set_x((int)150);
		HX_STACK_LINE(163)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		tmp10->set_y((int)400);
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomFive,(void))

Void Castle_obj::roomSix( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","roomSix",0x06bea471,"Castle.roomSix","Castle.hx",168,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(169)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		this->_roomSix = tmp;
		HX_STACK_LINE(170)
		::flixel::FlxSprite tmp1 = this->_roomSix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		tmp1->loadGraphic(HX_HCSTRING("assets/img/room6.png","\x5e","\x36","\xda","\x3b"),null(),null(),null(),null(),null());
		HX_STACK_LINE(171)
		::flixel::FlxSprite tmp2 = this->_roomSix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		tmp2->set_x((int)350);
		HX_STACK_LINE(172)
		::flixel::FlxSprite tmp3 = this->_roomSix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		tmp3->set_y((int)289);
		HX_STACK_LINE(173)
		::flixel::FlxSprite tmp4 = this->_roomSix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		tmp4->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(174)
		::flixel::FlxSprite tmp5 = this->_roomSix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		this->add(tmp5);
		HX_STACK_LINE(176)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		this->myButton = tmp6;
		HX_STACK_LINE(177)
		::flixel::FlxSprite tmp7 = this->myButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		tmp7->loadGraphic(HX_HCSTRING("assets/img/left-1.png","\xfe","\xa2","\x97","\x79"),null(),null(),null(),null(),null());
		HX_STACK_LINE(178)
		::flixel::FlxSprite tmp8 = this->myButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		this->add(tmp8);
		HX_STACK_LINE(179)
		::flixel::FlxSprite tmp9 = this->myButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		tmp9->set_x((int)150);
		HX_STACK_LINE(180)
		::flixel::FlxSprite tmp10 = this->myButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(180)
		tmp10->set_y((int)400);
		HX_STACK_LINE(181)
		::flixel::FlxSprite tmp11 = this->myButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		Dynamic tmp12 = this->smallRooms_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		::flixel::input::mouse::FlxMouseEventManager_obj::add(tmp11,tmp12,null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,roomSix,(void))

Void Castle_obj::smallRooms( ::flixel::FlxSprite sprite){
{
		HX_STACK_FRAME("Castle","smallRooms",0x80d74547,"Castle.smallRooms","Castle.hx",185,0x630262a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(186)
		::flixel::FlxSprite tmp = this->myButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		this->remove(tmp,null());
		HX_STACK_LINE(187)
		::flixel::FlxSprite tmp1 = this->_roomOne;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		this->remove(tmp1,null());
		HX_STACK_LINE(188)
		::flixel::FlxSprite tmp2 = this->_roomTwo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		this->remove(tmp2,null());
		HX_STACK_LINE(189)
		::flixel::FlxSprite tmp3 = this->_roomThree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		this->remove(tmp3,null());
		HX_STACK_LINE(190)
		::flixel::FlxSprite tmp4 = this->_roomFour;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		this->remove(tmp4,null());
		HX_STACK_LINE(191)
		::flixel::FlxSprite tmp5 = this->_roomFive;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		this->remove(tmp5,null());
		HX_STACK_LINE(192)
		::flixel::FlxSprite tmp6 = this->_roomSix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		this->remove(tmp6,null());
		HX_STACK_LINE(194)
		::flixel::FlxSprite tmp7 = this->_room1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		this->add(tmp7);
		HX_STACK_LINE(195)
		::flixel::FlxSprite tmp8 = this->_room2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		this->add(tmp8);
		HX_STACK_LINE(196)
		::flixel::FlxSprite tmp9 = this->_room3;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		this->add(tmp9);
		HX_STACK_LINE(197)
		::flixel::FlxSprite tmp10 = this->_room4;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(197)
		this->add(tmp10);
		HX_STACK_LINE(198)
		::flixel::FlxSprite tmp11 = this->_room5;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(198)
		this->add(tmp11);
		HX_STACK_LINE(199)
		::flixel::FlxSprite tmp12 = this->_room6;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(199)
		this->add(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Castle_obj,smallRooms,(void))


Castle_obj::Castle_obj()
{
}

void Castle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Castle);
	HX_MARK_MEMBER_NAME(_room1,"_room1");
	HX_MARK_MEMBER_NAME(_room2,"_room2");
	HX_MARK_MEMBER_NAME(_room3,"_room3");
	HX_MARK_MEMBER_NAME(_room4,"_room4");
	HX_MARK_MEMBER_NAME(_room5,"_room5");
	HX_MARK_MEMBER_NAME(_room6,"_room6");
	HX_MARK_MEMBER_NAME(_roomOne,"_roomOne");
	HX_MARK_MEMBER_NAME(_roomTwo,"_roomTwo");
	HX_MARK_MEMBER_NAME(_roomThree,"_roomThree");
	HX_MARK_MEMBER_NAME(_roomFour,"_roomFour");
	HX_MARK_MEMBER_NAME(_roomFive,"_roomFive");
	HX_MARK_MEMBER_NAME(_roomSix,"_roomSix");
	HX_MARK_MEMBER_NAME(myButton,"myButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Castle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_room1,"_room1");
	HX_VISIT_MEMBER_NAME(_room2,"_room2");
	HX_VISIT_MEMBER_NAME(_room3,"_room3");
	HX_VISIT_MEMBER_NAME(_room4,"_room4");
	HX_VISIT_MEMBER_NAME(_room5,"_room5");
	HX_VISIT_MEMBER_NAME(_room6,"_room6");
	HX_VISIT_MEMBER_NAME(_roomOne,"_roomOne");
	HX_VISIT_MEMBER_NAME(_roomTwo,"_roomTwo");
	HX_VISIT_MEMBER_NAME(_roomThree,"_roomThree");
	HX_VISIT_MEMBER_NAME(_roomFour,"_roomFour");
	HX_VISIT_MEMBER_NAME(_roomFive,"_roomFive");
	HX_VISIT_MEMBER_NAME(_roomSix,"_roomSix");
	HX_VISIT_MEMBER_NAME(myButton,"myButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Castle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_room1") ) { return _room1; }
		if (HX_FIELD_EQ(inName,"_room2") ) { return _room2; }
		if (HX_FIELD_EQ(inName,"_room3") ) { return _room3; }
		if (HX_FIELD_EQ(inName,"_room4") ) { return _room4; }
		if (HX_FIELD_EQ(inName,"_room5") ) { return _room5; }
		if (HX_FIELD_EQ(inName,"_room6") ) { return _room6; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roomOne") ) { return roomOne_dyn(); }
		if (HX_FIELD_EQ(inName,"roomTwo") ) { return roomTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"roomSix") ) { return roomSix_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_roomOne") ) { return _roomOne; }
		if (HX_FIELD_EQ(inName,"_roomTwo") ) { return _roomTwo; }
		if (HX_FIELD_EQ(inName,"_roomSix") ) { return _roomSix; }
		if (HX_FIELD_EQ(inName,"myButton") ) { return myButton; }
		if (HX_FIELD_EQ(inName,"roomFour") ) { return roomFour_dyn(); }
		if (HX_FIELD_EQ(inName,"roomFive") ) { return roomFive_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_roomFour") ) { return _roomFour; }
		if (HX_FIELD_EQ(inName,"_roomFive") ) { return _roomFive; }
		if (HX_FIELD_EQ(inName,"roomThree") ) { return roomThree_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_roomThree") ) { return _roomThree; }
		if (HX_FIELD_EQ(inName,"smallRooms") ) { return smallRooms_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Castle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_room1") ) { _room1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room2") ) { _room2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room3") ) { _room3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room4") ) { _room4=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room5") ) { _room5=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_room6") ) { _room6=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_roomOne") ) { _roomOne=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roomTwo") ) { _roomTwo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roomSix") ) { _roomSix=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"myButton") ) { myButton=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_roomFour") ) { _roomFour=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roomFive") ) { _roomFive=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_roomThree") ) { _roomThree=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Castle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room4","\xfa","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room5","\xfb","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_room6","\xfc","\xb0","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51"));
	outFields->push(HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51"));
	outFields->push(HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57"));
	outFields->push(HX_HCSTRING("_roomFour","\x00","\x1f","\xbf","\x1a"));
	outFields->push(HX_HCSTRING("_roomFive","\x4c","\x92","\xba","\x1a"));
	outFields->push(HX_HCSTRING("_roomSix","\x48","\x45","\xaa","\x51"));
	outFields->push(HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room1),HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room2),HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room3),HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room4),HX_HCSTRING("_room4","\xfa","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room5),HX_HCSTRING("_room5","\xfb","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_room6),HX_HCSTRING("_room6","\xfc","\xb0","\x48","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomOne),HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomTwo),HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomThree),HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomFour),HX_HCSTRING("_roomFour","\x00","\x1f","\xbf","\x1a")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomFive),HX_HCSTRING("_roomFive","\x4c","\x92","\xba","\x1a")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,_roomSix),HX_HCSTRING("_roomSix","\x48","\x45","\xaa","\x51")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Castle_obj,myButton),HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_room1","\xf7","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room2","\xf8","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room3","\xf9","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room4","\xfa","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room5","\xfb","\xb0","\x48","\xe9"),
	HX_HCSTRING("_room6","\xfc","\xb0","\x48","\xe9"),
	HX_HCSTRING("_roomOne","\x8c","\x40","\xa7","\x51"),
	HX_HCSTRING("_roomTwo","\xb2","\x13","\xab","\x51"),
	HX_HCSTRING("_roomThree","\x04","\x50","\x75","\x57"),
	HX_HCSTRING("_roomFour","\x00","\x1f","\xbf","\x1a"),
	HX_HCSTRING("_roomFive","\x4c","\x92","\xba","\x1a"),
	HX_HCSTRING("_roomSix","\x48","\x45","\xaa","\x51"),
	HX_HCSTRING("myButton","\x7e","\x8e","\x94","\x10"),
	HX_HCSTRING("roomOne","\x0b","\xe7","\xee","\x17"),
	HX_HCSTRING("roomTwo","\x31","\xba","\xf2","\x17"),
	HX_HCSTRING("roomThree","\x43","\xd4","\xd2","\xfb"),
	HX_HCSTRING("roomFour","\xa1","\x27","\x29","\xd3"),
	HX_HCSTRING("roomFive","\xed","\x9a","\x24","\xd3"),
	HX_HCSTRING("roomSix","\xc7","\xeb","\xf1","\x17"),
	HX_HCSTRING("smallRooms","\xb1","\xb7","\x82","\x18"),
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

