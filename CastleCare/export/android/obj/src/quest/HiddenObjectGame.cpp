#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
namespace quest{

Void HiddenObjectGame_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.HiddenObjectGame","new",0x4d4e14f9,"quest.HiddenObjectGame.new","quest/HiddenObjectGame.hx",15,0x5fda1136)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	this->itemCounter = (int)0;
	HX_STACK_LINE(17)
	this->PosArray = Array_obj< int >::__new();
	HX_STACK_LINE(15)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
}
;
	return null();
}

//HiddenObjectGame_obj::~HiddenObjectGame_obj() { }

Dynamic HiddenObjectGame_obj::__CreateEmpty() { return  new HiddenObjectGame_obj; }
hx::ObjectPtr< HiddenObjectGame_obj > HiddenObjectGame_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< HiddenObjectGame_obj > _result_ = new HiddenObjectGame_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic HiddenObjectGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HiddenObjectGame_obj > _result_ = new HiddenObjectGame_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void HiddenObjectGame_obj::create( ){
{
		HX_STACK_FRAME("quest.HiddenObjectGame","create",0x5ef94803,"quest.HiddenObjectGame.create","quest/HiddenObjectGame.hx",23,0x5fda1136)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::flixel::FlxSprite room = tmp;		HX_STACK_VAR(room,"room");
		HX_STACK_LINE(25)
		room->loadGraphic(HX_HCSTRING("assets/images/hiddenobjectgame3.jpg","\xa0","\xd5","\xb8","\xee"),null(),null(),null(),null(),null());
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp1 = room;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->add(tmp1);
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				bool tmp2 = (_g < (int)6);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(28)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(28)
				if ((tmp3)){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(29)
				int tmp5 = ((int)50 * i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				int tmp6 = ((int)400 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				int posx = tmp6;		HX_STACK_VAR(posx,"posx");
				HX_STACK_LINE(30)
				int posy = (int)110;		HX_STACK_VAR(posy,"posy");
				HX_STACK_LINE(31)
				int tmp7 = posx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(31)
				this->PosArray->push(tmp7);
				HX_STACK_LINE(32)
				int tmp8 = posy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(32)
				this->PosArray->push(tmp8);
			}
		}
		HX_STACK_LINE(34)
		this->displayButtons();
	}
return null();
}


Void HiddenObjectGame_obj::displayButtons( ){
{
		HX_STACK_FRAME("quest.HiddenObjectGame","displayButtons",0xa543bc26,"quest.HiddenObjectGame.displayButtons","quest/HiddenObjectGame.hx",38,0x5fda1136)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton tmp = ::flixel::ui::FlxButton_obj::__new((int)465,(int)565,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::flixel::ui::FlxButton hammer = tmp;		HX_STACK_VAR(hammer,"hammer");
		HX_STACK_LINE(40)
		hammer->loadGraphic(HX_HCSTRING("assets/images/hammer.png","\xec","\x0e","\x2a","\x6f"),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		Dynamic tmp1 = this->onClicked_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp2 = hammer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(41)
			::flixel::ui::FlxButton a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::ui::FlxButton,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","quest/HiddenObjectGame.hx",41,0x5fda1136)
				{
					HX_STACK_LINE(41)
					::flixel::ui::FlxButton tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					f(tmp4).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(41)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(41)
		hammer->onDown->callback = tmp3;
		HX_STACK_LINE(42)
		hammer->scale->set_x(((Float).77));
		HX_STACK_LINE(43)
		hammer->scale->set_y(((Float).77));
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp4 = hammer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		this->add(tmp4);
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new((int)900,(int)630,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton chisel = tmp5;		HX_STACK_VAR(chisel,"chisel");
		HX_STACK_LINE(47)
		chisel->loadGraphic(HX_HCSTRING("assets/images/Chisel.png","\xbc","\x1f","\x50","\x09"),null(),null(),null(),null(),null());
		HX_STACK_LINE(48)
		Dynamic tmp6 = this->onClicked_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp7 = chisel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(48)
			::flixel::ui::FlxButton a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::ui::FlxButton,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","quest/HiddenObjectGame.hx",48,0x5fda1136)
				{
					HX_STACK_LINE(48)
					::flixel::ui::FlxButton tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(48)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(48)
		chisel->onDown->callback = tmp8;
		HX_STACK_LINE(49)
		::flixel::ui::FlxButton tmp9 = chisel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(49)
		this->add(tmp9);
		HX_STACK_LINE(51)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new((int)500,(int)555,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		::flixel::ui::FlxButton axe = tmp10;		HX_STACK_VAR(axe,"axe");
		HX_STACK_LINE(52)
		axe->loadGraphic(HX_HCSTRING("assets/images/Axe.png","\x5e","\x0b","\xea","\xc1"),null(),null(),null(),null(),null());
		HX_STACK_LINE(53)
		Dynamic tmp11 = this->onClicked_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp12 = axe;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Dynamic f = tmp11;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(53)
			::flixel::ui::FlxButton a1 = tmp12;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::ui::FlxButton,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","quest/HiddenObjectGame.hx",53,0x5fda1136)
				{
					HX_STACK_LINE(53)
					::flixel::ui::FlxButton tmp14 = a1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(53)
					f(tmp14).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(53)
			tmp13 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(53)
		axe->onDown->callback = tmp13;
		HX_STACK_LINE(54)
		::flixel::ui::FlxButton tmp14 = axe;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		this->add(tmp14);
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new((int)268,(int)428,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton saw = tmp15;		HX_STACK_VAR(saw,"saw");
		HX_STACK_LINE(57)
		saw->loadGraphic(HX_HCSTRING("assets/images/saw.png","\x99","\x61","\x1c","\x0c"),null(),null(),null(),null(),null());
		HX_STACK_LINE(58)
		Dynamic tmp16 = this->onClicked_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp17 = saw;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(58)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Dynamic f = tmp16;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(58)
			::flixel::ui::FlxButton a1 = tmp17;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::ui::FlxButton,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","quest/HiddenObjectGame.hx",58,0x5fda1136)
				{
					HX_STACK_LINE(58)
					::flixel::ui::FlxButton tmp19 = a1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(58)
					f(tmp19).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(58)
			tmp18 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(58)
		saw->onDown->callback = tmp18;
		HX_STACK_LINE(59)
		::flixel::ui::FlxButton tmp19 = saw;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(59)
		this->add(tmp19);
		HX_STACK_LINE(61)
		::flixel::ui::FlxButton tmp20 = ::flixel::ui::FlxButton_obj::__new((int)425,(int)410,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		::flixel::ui::FlxButton shovel = tmp20;		HX_STACK_VAR(shovel,"shovel");
		HX_STACK_LINE(62)
		shovel->loadGraphic(HX_HCSTRING("assets/images/Shovel.png","\xa9","\xae","\xe6","\xe1"),null(),null(),null(),null(),null());
		HX_STACK_LINE(63)
		Dynamic tmp21 = this->onClicked_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(63)
		::flixel::ui::FlxButton tmp22 = shovel;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(63)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(63)
			::flixel::ui::FlxButton a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::ui::FlxButton,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","quest/HiddenObjectGame.hx",63,0x5fda1136)
				{
					HX_STACK_LINE(63)
					::flixel::ui::FlxButton tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(63)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(63)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(63)
		shovel->onDown->callback = tmp23;
		HX_STACK_LINE(64)
		::flixel::ui::FlxButton tmp24 = shovel;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(64)
		this->add(tmp24);
		HX_STACK_LINE(66)
		Dynamic tmp25 = this->back_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(66)
		::flixel::ui::FlxButton tmp26 = ::flixel::ui::FlxButton_obj::__new((int)1065,(int)580,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(66)
		this->button = tmp26;
		HX_STACK_LINE(67)
		::flixel::ui::FlxButton tmp27 = this->button;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(67)
		tmp27->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton tmp28 = this->button;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(68)
		this->add(tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HiddenObjectGame_obj,displayButtons,(void))

Void HiddenObjectGame_obj::onClicked( ::flixel::ui::FlxButton button){
{
		HX_STACK_FRAME("quest.HiddenObjectGame","onClicked",0xa4306ca1,"quest.HiddenObjectGame.onClicked","quest/HiddenObjectGame.hx",72,0x5fda1136)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(73)
		Dynamic tmp = this->PosArray->pop();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		button->set_y(tmp);
		HX_STACK_LINE(74)
		Dynamic tmp1 = this->PosArray->pop();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		button->set_x(tmp1);
		HX_STACK_LINE(75)
		hx::AddEq(this->itemCounter,(int)1);
		HX_STACK_LINE(76)
		int tmp2 = this->itemCounter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 == (int)5);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(78)
			this->win();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HiddenObjectGame_obj,onClicked,(void))

Void HiddenObjectGame_obj::win( ){
{
		HX_STACK_FRAME("quest.HiddenObjectGame","win",0x4d54ecb5,"quest.HiddenObjectGame.win","quest/HiddenObjectGame.hx",82,0x5fda1136)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::flixel::FlxSprite background = tmp;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(84)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		background->makeGraphic(tmp4,tmp8,(int)-16777216,null(),null());
		HX_STACK_LINE(85)
		::flixel::FlxSprite tmp9 = background;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		this->add(tmp9);
		HX_STACK_LINE(87)
		::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,(int)150,(int)0,HX_HCSTRING("Je hebt de kamer schoon gemaakt!","\xe4","\x43","\xa2","\x39"),(int)30,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		::flixel::text::FlxText winText = tmp10;		HX_STACK_VAR(winText,"winText");
		HX_STACK_LINE(88)
		winText->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(89)
		::flixel::text::FlxText tmp11 = winText;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		this->add(tmp11);
		HX_STACK_LINE(91)
		::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new((int)0,(int)200,(int)0,HX_HCSTRING("Je hebt $100 verdient","\x4a","\xea","\x07","\xcc"),(int)20,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		::flixel::text::FlxText scoreText = tmp12;		HX_STACK_VAR(scoreText,"scoreText");
		HX_STACK_LINE(92)
		scoreText->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(93)
		::flixel::text::FlxText tmp13 = scoreText;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(93)
		this->add(tmp13);
		HX_STACK_LINE(95)
		Dynamic tmp14 = this->back_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new((int)550,(int)350,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		this->button = tmp15;
		HX_STACK_LINE(96)
		::flixel::ui::FlxButton tmp16 = this->button;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(96)
		tmp16->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(97)
		::flixel::ui::FlxButton tmp17 = this->button;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(97)
		this->add(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HiddenObjectGame_obj,win,(void))

Void HiddenObjectGame_obj::back( ){
{
		HX_STACK_FRAME("quest.HiddenObjectGame","back",0x4f129b6e,"quest.HiddenObjectGame.back","quest/HiddenObjectGame.hx",100,0x5fda1136)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/HiddenObjectGame.hx",102,0x5fda1136)
			{
				HX_STACK_LINE(102)
				::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(102)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(102)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(102)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(102)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(102)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(101)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HiddenObjectGame_obj,back,(void))


HiddenObjectGame_obj::HiddenObjectGame_obj()
{
}

void HiddenObjectGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HiddenObjectGame);
	HX_MARK_MEMBER_NAME(PosArray,"PosArray");
	HX_MARK_MEMBER_NAME(itemCounter,"itemCounter");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(currency,"currency");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HiddenObjectGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(PosArray,"PosArray");
	HX_VISIT_MEMBER_NAME(itemCounter,"itemCounter");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(currency,"currency");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HiddenObjectGame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { return win_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PosArray") ) { return PosArray; }
		if (HX_FIELD_EQ(inName,"currency") ) { return currency; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onClicked") ) { return onClicked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemCounter") ) { return itemCounter; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayButtons") ) { return displayButtons_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HiddenObjectGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PosArray") ) { PosArray=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currency") ) { currency=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemCounter") ) { itemCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HiddenObjectGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PosArray","\x85","\x83","\x59","\x9b"));
	outFields->push(HX_HCSTRING("itemCounter","\x29","\x2a","\x5c","\x7b"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(HiddenObjectGame_obj,PosArray),HX_HCSTRING("PosArray","\x85","\x83","\x59","\x9b")},
	{hx::fsInt,(int)offsetof(HiddenObjectGame_obj,itemCounter),HX_HCSTRING("itemCounter","\x29","\x2a","\x5c","\x7b")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(HiddenObjectGame_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(HiddenObjectGame_obj,currency),HX_HCSTRING("currency","\x51","\x07","\x45","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("PosArray","\x85","\x83","\x59","\x9b"),
	HX_HCSTRING("itemCounter","\x29","\x2a","\x5c","\x7b"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("currency","\x51","\x07","\x45","\x9b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("displayButtons","\x1f","\xfc","\x76","\x3f"),
	HX_HCSTRING("onClicked","\x48","\x2f","\xd7","\xd1"),
	HX_HCSTRING("win","\x1c","\xa8","\x5a","\x00"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HiddenObjectGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HiddenObjectGame_obj::__mClass,"__mClass");
};

#endif

hx::Class HiddenObjectGame_obj::__mClass;

void HiddenObjectGame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.HiddenObjectGame","\x87","\x24","\x98","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HiddenObjectGame_obj >;
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

} // end namespace quest
