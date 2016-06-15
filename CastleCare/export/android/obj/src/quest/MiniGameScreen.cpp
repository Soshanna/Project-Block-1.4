#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_quest_Item
#include <quest/Item.h>
#endif
#ifndef INCLUDED_quest_JobListState
#include <quest/JobListState.h>
#endif
#ifndef INCLUDED_quest_LoseScreen
#include <quest/LoseScreen.h>
#endif
#ifndef INCLUDED_quest_MiniGameScreen
#include <quest/MiniGameScreen.h>
#endif
#ifndef INCLUDED_quest_WinScreen
#include <quest/WinScreen.h>
#endif
namespace quest{

Void MiniGameScreen_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("quest.MiniGameScreen","new",0x03ef2b13,"quest.MiniGameScreen.new","quest/MiniGameScreen.hx",23,0xdb4e069c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(38)
	this->lastCount = (int)0;
	HX_STACK_LINE(37)
	this->lastType = (int)0;
	HX_STACK_LINE(36)
	this->typeCount = (int)0;
	HX_STACK_LINE(35)
	this->maxScore = (int)50;
	HX_STACK_LINE(34)
	this->turns = (int)60;
	HX_STACK_LINE(33)
	this->score = (int)0;
	HX_STACK_LINE(32)
	this->object1 = null();
	HX_STACK_LINE(31)
	this->a = (int)0;
	HX_STACK_LINE(26)
	this->rowArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(25)
	this->itemGroup = ::flixel::group::FlxTypedSpriteGroup_obj::__new((int)0,(int)0,(int)63);
	HX_STACK_LINE(23)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
}
;
	return null();
}

//MiniGameScreen_obj::~MiniGameScreen_obj() { }

Dynamic MiniGameScreen_obj::__CreateEmpty() { return  new MiniGameScreen_obj; }
hx::ObjectPtr< MiniGameScreen_obj > MiniGameScreen_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MiniGameScreen_obj > _result_ = new MiniGameScreen_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MiniGameScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MiniGameScreen_obj > _result_ = new MiniGameScreen_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MiniGameScreen_obj::create( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","create",0x5ed97e29,"quest.MiniGameScreen.create","quest/MiniGameScreen.hx",40,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::create();
		HX_STACK_LINE(43)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Minigame/Minigame Background.png","\x52","\xe2","\xd9","\xeb"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::flixel::FlxSprite backGround = tmp;		HX_STACK_VAR(backGround,"backGround");
		HX_STACK_LINE(44)
		::flixel::FlxSprite tmp1 = backGround;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		this->add(tmp1);
		HX_STACK_LINE(46)
		int tmp2 = this->score;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::String tmp3 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new((int)1010,(int)80,(int)0,tmp3,(int)32,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		this->_txtScore = tmp4;
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp5 = this->_txtScore;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		this->add(tmp5);
		HX_STACK_LINE(49)
		int tmp6 = this->turns;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		::String tmp7 = (HX_HCSTRING("Turns: ","\x5c","\x3e","\x87","\x59") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		::flixel::text::FlxText tmp8 = ::flixel::text::FlxText_obj::__new((int)1010,(int)260,(int)0,tmp7,(int)32,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		this->_txtTurns = tmp8;
		HX_STACK_LINE(50)
		::flixel::text::FlxText tmp9 = this->_txtTurns;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		this->add(tmp9);
		HX_STACK_LINE(52)
		int tmp10 = this->maxScore;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(52)
		::String tmp11 = (HX_HCSTRING("Goal: ","\x99","\xda","\x40","\x8d") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new((int)1010,(int)370,(int)0,tmp11,(int)32,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		this->_txtMaxScore = tmp12;
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp13 = this->_txtMaxScore;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		this->add(tmp13);
		HX_STACK_LINE(55)
		Dynamic tmp14 = this->buttonPress_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(55)
		::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new((int)1065,(int)580,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(55)
		this->backButton = tmp15;
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp16 = this->backButton;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(56)
		tmp16->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(57)
		::flixel::ui::FlxButton tmp17 = this->backButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		this->add(tmp17);
		HX_STACK_LINE(59)
		this->makeItems();
		HX_STACK_LINE(61)
		this->itemCheck();
		HX_STACK_LINE(62)
		this->itemCheck();
	}
return null();
}


Void MiniGameScreen_obj::itemCheck( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","itemCheck",0x0ebee1a8,"quest.MiniGameScreen.itemCheck","quest/MiniGameScreen.hx",65,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(66)
			int tmp = this->rowArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(66)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(66)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(67)
				::quest::Item tmp4 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				this->checkItemHor(tmp4,tmp5);
			}
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			int tmp = this->rowArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(68)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				if ((tmp2)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(69)
				bool tmp4 = (i <= (int)3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				if ((tmp4)){
					HX_STACK_LINE(70)
					int tmp5 = (i * (int)5);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					::quest::Item tmp6 = this->rowArray->__get(tmp5).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(70)
					this->checkItemVer(tmp6,tmp7);
				}
				else{
					HX_STACK_LINE(71)
					bool tmp5 = (i <= (int)7);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(72)
						int tmp6 = (i - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(72)
						int tmp7 = (tmp6 * (int)5);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						::quest::Item tmp9 = this->rowArray->__get(tmp8).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(72)
						this->checkItemVer(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(73)
						bool tmp6 = (i <= (int)11);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						if ((tmp6)){
							HX_STACK_LINE(74)
							int tmp7 = (i - (int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(74)
							int tmp8 = (tmp7 * (int)5);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(74)
							int tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(74)
							::quest::Item tmp10 = this->rowArray->__get(tmp9).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(74)
							int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(74)
							this->checkItemVer(tmp10,tmp11);
						}
						else{
							HX_STACK_LINE(75)
							bool tmp7 = (i <= (int)15);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(75)
							if ((tmp7)){
								HX_STACK_LINE(76)
								int tmp8 = (i - (int)12);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(76)
								int tmp9 = (tmp8 * (int)5);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(76)
								int tmp10 = (tmp9 + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(76)
								::quest::Item tmp11 = this->rowArray->__get(tmp10).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(76)
								int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(76)
								this->checkItemVer(tmp11,tmp12);
							}
							else{
								HX_STACK_LINE(77)
								bool tmp8 = (i <= (int)19);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(77)
								if ((tmp8)){
									HX_STACK_LINE(78)
									int tmp9 = (i - (int)16);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(78)
									int tmp10 = (tmp9 * (int)5);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(78)
									int tmp11 = (tmp10 + (int)4);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(78)
									::quest::Item tmp12 = this->rowArray->__get(tmp11).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(78)
									int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(78)
									this->checkItemVer(tmp12,tmp13);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			int tmp = this->rowArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(80)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(80)
				if ((tmp2)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				::quest::Item tmp4 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				this->removeMarked(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,itemCheck,(void))

Void MiniGameScreen_obj::makeItems( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","makeItems",0x5ec20625,"quest.MiniGameScreen.makeItems","quest/MiniGameScreen.hx",86,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g < (int)20);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			Float tmp4 = (tmp3 * (int)100);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			int random = tmp5;		HX_STACK_VAR(random,"random");
			HX_STACK_LINE(88)
			::quest::Item tmp6 = ::quest::Item_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::quest::Item item1 = tmp6;		HX_STACK_VAR(item1,"item1");
			HX_STACK_LINE(89)
			Dynamic tmp7 = this->itemClicked_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			::quest::Item tmp8 = item1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(89)
				::quest::Item a1 = tmp8;		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::quest::Item,a1,Dynamic,f)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","quest/MiniGameScreen.hx",89,0xdb4e069c)
					{
						HX_STACK_LINE(89)
						::quest::Item tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(89)
						f(tmp10).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(89)
				tmp9 =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(89)
			item1->onDown->callback = tmp9;
			HX_STACK_LINE(90)
			bool tmp10 = (random <= (int)25);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			if ((tmp10)){
				HX_STACK_LINE(91)
				item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/AppleButton.png","\xf9","\xf9","\x5c","\x68"),null(),null(),null(),null(),null());
				HX_STACK_LINE(92)
				item1->type = (int)1;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp11 = (random <= (int)50);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(93)
				if ((tmp11)){
					HX_STACK_LINE(94)
					item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BananaButton.png","\xe0","\x24","\xe2","\xc3"),null(),null(),null(),null(),null());
					HX_STACK_LINE(95)
					item1->type = (int)2;
				}
				else{
					HX_STACK_LINE(96)
					bool tmp12 = (random <= (int)75);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(96)
					if ((tmp12)){
						HX_STACK_LINE(97)
						item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BurgerButton.png","\x30","\x23","\xcd","\x53"),null(),null(),null(),null(),null());
						HX_STACK_LINE(98)
						item1->type = (int)3;
					}
					else{
						HX_STACK_LINE(99)
						bool tmp13 = (random <= (int)100);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(99)
						if ((tmp13)){
							HX_STACK_LINE(100)
							item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/WaterMelonButton.png","\xd7","\x6a","\x8b","\xc7"),null(),null(),null(),null(),null());
							HX_STACK_LINE(101)
							item1->type = (int)4;
						}
					}
				}
			}
			HX_STACK_LINE(102)
			bool tmp11 = (i < (int)5);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			if ((tmp11)){
				HX_STACK_LINE(103)
				int tmp12 = ((int)175 * i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				int tmp13 = ((int)60 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(103)
				item1->set_x(tmp13);
				HX_STACK_LINE(104)
				item1->set_y((int)60);
			}
			HX_STACK_LINE(105)
			bool tmp12 = (i >= (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(105)
			if ((tmp12)){
				HX_STACK_LINE(106)
				int tmp13 = (i - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				int tmp14 = ((int)175 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				int tmp15 = ((int)60 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				item1->set_x(tmp15);
				HX_STACK_LINE(107)
				item1->set_y((int)220);
			}
			HX_STACK_LINE(108)
			bool tmp13 = (i >= (int)10);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			if ((tmp13)){
				HX_STACK_LINE(109)
				int tmp14 = (i - (int)10);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				int tmp15 = ((int)175 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				int tmp16 = ((int)60 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				item1->set_x(tmp16);
				HX_STACK_LINE(110)
				item1->set_y((int)380);
			}
			HX_STACK_LINE(111)
			bool tmp14 = (i >= (int)15);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			if ((tmp14)){
				HX_STACK_LINE(112)
				int tmp15 = (i - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(112)
				int tmp16 = ((int)175 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				int tmp17 = ((int)60 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(112)
				item1->set_x(tmp17);
				HX_STACK_LINE(113)
				item1->set_y((int)540);
			}
			HX_STACK_LINE(115)
			item1->arrayID = i;
			HX_STACK_LINE(116)
			::quest::Item tmp15 = item1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			this->rowArray->push(tmp15);
			HX_STACK_LINE(117)
			::flixel::group::FlxTypedSpriteGroup tmp16 = this->itemGroup;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			::quest::Item tmp17 = item1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			tmp16->add(tmp17);
			HX_STACK_LINE(118)
			::flixel::group::FlxTypedSpriteGroup tmp18 = this->itemGroup;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			this->add(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,makeItems,(void))

Void MiniGameScreen_obj::itemClicked( ::quest::Item button){
{
		HX_STACK_FRAME("quest.MiniGameScreen","itemClicked",0x4c80b787,"quest.MiniGameScreen.itemClicked","quest/MiniGameScreen.hx",122,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(123)
		hx::AddEq(this->a,(int)1);
		HX_STACK_LINE(124)
		int tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(125)
			this->object1 = button;
			HX_STACK_LINE(126)
			::quest::Item tmp2 = this->object1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			tmp2->onDown->callback = null();
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(127)
				int tmp3 = this->rowArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(127)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(127)
				while((true)){
					HX_STACK_LINE(127)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(127)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(127)
					if ((tmp5)){
						HX_STACK_LINE(127)
						break;
					}
					HX_STACK_LINE(127)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(127)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(128)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					::quest::Item tmp8 = this->object1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(128)
					int tmp9 = tmp8->arrayID;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(128)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(128)
					bool tmp11 = (tmp7 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(128)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(128)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(128)
					if ((tmp12)){
						HX_STACK_LINE(128)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(128)
						::quest::Item tmp15 = this->object1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(128)
						::quest::Item tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(128)
						::quest::Item tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(128)
						int tmp18 = tmp17->arrayID;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(128)
						int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(128)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(128)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						tmp13 = (tmp14 != tmp21);
					}
					else{
						HX_STACK_LINE(128)
						tmp13 = false;
					}
					HX_STACK_LINE(128)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(128)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(128)
					if ((tmp14)){
						HX_STACK_LINE(128)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(128)
						::quest::Item tmp17 = this->object1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(128)
						::quest::Item tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(128)
						::quest::Item tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(128)
						int tmp20 = tmp19->arrayID;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(128)
						int tmp21 = (tmp20 - (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(128)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(128)
						tmp15 = (tmp16 != tmp23);
					}
					else{
						HX_STACK_LINE(128)
						tmp15 = false;
					}
					HX_STACK_LINE(128)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(128)
					if ((tmp15)){
						HX_STACK_LINE(128)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(128)
						::quest::Item tmp18 = this->object1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(128)
						::quest::Item tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(128)
						int tmp20 = tmp19->arrayID;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(128)
						int tmp21 = (tmp20 + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(128)
						tmp16 = (tmp17 != tmp22);
					}
					else{
						HX_STACK_LINE(128)
						tmp16 = false;
					}
					HX_STACK_LINE(128)
					if ((tmp16)){
						HX_STACK_LINE(129)
						::quest::Item tmp17 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(129)
						tmp17->onDown->callback = null();
					}
					else{
					}
				}
			}
		}
		HX_STACK_LINE(134)
		int tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		if ((tmp3)){
			HX_STACK_LINE(135)
			::quest::Item object2 = button;		HX_STACK_VAR(object2,"object2");
			HX_STACK_LINE(136)
			::String tmp4 = object2->graphic->key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::String graph = tmp4;		HX_STACK_VAR(graph,"graph");
			HX_STACK_LINE(137)
			::quest::Item tmp5 = this->object1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			::String tmp6 = tmp5->graphic->key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			object2->loadGraphic(tmp6,null(),null(),null(),null(),null());
			HX_STACK_LINE(138)
			::quest::Item tmp7 = this->object1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			::String tmp8 = graph;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			tmp7->loadGraphic(tmp8,null(),null(),null(),null(),null());
			HX_STACK_LINE(139)
			int typ = object2->type;		HX_STACK_VAR(typ,"typ");
			HX_STACK_LINE(140)
			::quest::Item tmp9 = this->object1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			object2->type = tmp9->type;
			HX_STACK_LINE(141)
			::quest::Item tmp10 = this->object1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			tmp10->type = typ;
			HX_STACK_LINE(142)
			this->a = (int)0;
			HX_STACK_LINE(143)
			hx::SubEq(this->turns,(int)1);
			HX_STACK_LINE(144)
			::flixel::text::FlxText tmp11 = this->_txtTurns;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			int tmp12 = this->turns;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			::String tmp13 = (HX_HCSTRING("Turns: ","\x5c","\x3e","\x87","\x59") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			tmp11->set_text(tmp13);
			HX_STACK_LINE(145)
			this->itemCheck();
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(146)
				int tmp14 = this->rowArray->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(146)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(146)
				while((true)){
					HX_STACK_LINE(146)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(146)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(146)
					if ((tmp16)){
						HX_STACK_LINE(146)
						break;
					}
					HX_STACK_LINE(146)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(146)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(147)
					Dynamic tmp18 = this->itemClicked_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(147)
					::quest::Item tmp19 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(147)
					Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(147)
						::quest::Item a1 = tmp19;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,::quest::Item,a1,Dynamic,f)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","quest/MiniGameScreen.hx",147,0xdb4e069c)
							{
								HX_STACK_LINE(147)
								::quest::Item tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(147)
								f(tmp21).Cast< Void >();
								HX_STACK_LINE(147)
								return null();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(147)
						tmp20 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(147)
					::quest::Item tmp21 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(147)
					tmp21->onDown->callback = tmp20;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MiniGameScreen_obj,itemClicked,(void))

Void MiniGameScreen_obj::checkItemHor( ::quest::Item item,int i){
{
		HX_STACK_FRAME("quest.MiniGameScreen","checkItemHor",0xa0315b3d,"quest.MiniGameScreen.checkItemHor","quest/MiniGameScreen.hx",152,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(153)
		bool tmp = (i == (int)5);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(153)
			tmp3 = (i == (int)10);
		}
		else{
			HX_STACK_LINE(153)
			tmp3 = true;
		}
		HX_STACK_LINE(153)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		if ((tmp4)){
			HX_STACK_LINE(153)
			tmp5 = (i == (int)15);
		}
		else{
			HX_STACK_LINE(153)
			tmp5 = true;
		}
		HX_STACK_LINE(153)
		if ((tmp5)){
			HX_STACK_LINE(154)
			this->typeCount = (int)0;
		}
		else{
			HX_STACK_LINE(157)
			int tmp6 = (item->arrayID - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(157)
			::quest::Item tmp7 = this->rowArray->__get(tmp6).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(157)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(157)
			if ((tmp8)){
				HX_STACK_LINE(158)
				int tmp9 = (item->arrayID - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(158)
				::quest::Item tmp10 = this->rowArray->__get(tmp9).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(158)
				this->lastType = tmp10->type;
			}
			HX_STACK_LINE(160)
			int tmp9 = this->lastType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			int tmp10 = item->type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(160)
			if ((tmp11)){
				HX_STACK_LINE(161)
				int tmp12 = this->typeCount;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(161)
				this->lastCount = tmp12;
				HX_STACK_LINE(162)
				int tmp13 = this->lastCount;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(162)
				bool tmp14 = (tmp13 >= (int)3);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(162)
				if ((tmp14)){
					HX_STACK_LINE(163)
					int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(163)
					int tmp15 = this->typeCount;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(163)
					int tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(163)
					int _g = tmp16;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(163)
					while((true)){
						HX_STACK_LINE(163)
						bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(163)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(163)
						if ((tmp18)){
							HX_STACK_LINE(163)
							break;
						}
						HX_STACK_LINE(163)
						int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(163)
						int i1 = tmp19;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(164)
						int tmp20 = (item->arrayID - i1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(164)
						::quest::Item tmp21 = this->rowArray->__get(tmp20).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(164)
						bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(164)
						if ((tmp22)){
							HX_STACK_LINE(165)
							int tmp23 = (item->arrayID - i1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(165)
							::quest::Item tmp24 = this->rowArray->__get(tmp23).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(165)
							tmp24->name = HX_HCSTRING("MARKED","\xac","\x21","\xf3","\x6c");
						}
					}
				}
				HX_STACK_LINE(169)
				this->typeCount = (int)1;
			}
			else{
				HX_STACK_LINE(170)
				int tmp12 = this->lastType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				int tmp13 = item->type;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(170)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(170)
				if ((tmp14)){
					HX_STACK_LINE(171)
					(this->typeCount)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,checkItemHor,(void))

Void MiniGameScreen_obj::checkItemVer( ::quest::Item item,int i){
{
		HX_STACK_FRAME("quest.MiniGameScreen","checkItemVer",0xa03bf215,"quest.MiniGameScreen.checkItemVer","quest/MiniGameScreen.hx",176,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(177)
		bool tmp = (i == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		if ((tmp2)){
			HX_STACK_LINE(177)
			tmp3 = (i == (int)2);
		}
		else{
			HX_STACK_LINE(177)
			tmp3 = true;
		}
		HX_STACK_LINE(177)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		if ((tmp5)){
			HX_STACK_LINE(177)
			tmp6 = (i == (int)3);
		}
		else{
			HX_STACK_LINE(177)
			tmp6 = true;
		}
		HX_STACK_LINE(177)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		if ((tmp7)){
			HX_STACK_LINE(177)
			tmp8 = (i == (int)4);
		}
		else{
			HX_STACK_LINE(177)
			tmp8 = true;
		}
		HX_STACK_LINE(177)
		if ((tmp8)){
			HX_STACK_LINE(178)
			this->typeCount = (int)0;
		}
		else{
			HX_STACK_LINE(181)
			int tmp9 = (item->arrayID - (int)5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			::quest::Item tmp10 = this->rowArray->__get(tmp9).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(181)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(181)
			if ((tmp11)){
				HX_STACK_LINE(182)
				int tmp12 = (item->arrayID - (int)5);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				::quest::Item tmp13 = this->rowArray->__get(tmp12).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(182)
				this->lastType = tmp13->type;
			}
			HX_STACK_LINE(184)
			int tmp12 = this->lastType;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(184)
			int tmp13 = item->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(184)
			if ((tmp14)){
				HX_STACK_LINE(185)
				int tmp15 = this->typeCount;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(185)
				this->lastCount = tmp15;
				HX_STACK_LINE(186)
				int tmp16 = this->lastCount;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(186)
				bool tmp17 = (tmp16 >= (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(186)
				if ((tmp17)){
					HX_STACK_LINE(187)
					int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(187)
					int tmp18 = this->typeCount;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(187)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(187)
					int _g = tmp19;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(187)
					while((true)){
						HX_STACK_LINE(187)
						bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(187)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(187)
						if ((tmp21)){
							HX_STACK_LINE(187)
							break;
						}
						HX_STACK_LINE(187)
						int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(187)
						int i1 = tmp22;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(188)
						int tmp23 = item->arrayID;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						int tmp24 = (i1 * (int)5);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						int tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						::quest::Item tmp26 = this->rowArray->__get(tmp25).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(188)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(188)
						if ((tmp27)){
							HX_STACK_LINE(189)
							int tmp28 = item->arrayID;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(189)
							int tmp29 = (i1 * (int)5);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(189)
							int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(189)
							::quest::Item tmp31 = this->rowArray->__get(tmp30).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(189)
							tmp31->name = HX_HCSTRING("MARKED","\xac","\x21","\xf3","\x6c");
						}
					}
				}
				HX_STACK_LINE(193)
				this->typeCount = (int)1;
			}
			else{
				HX_STACK_LINE(194)
				int tmp15 = this->lastType;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(194)
				int tmp16 = item->type;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(194)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(194)
				if ((tmp17)){
					HX_STACK_LINE(195)
					(this->typeCount)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,checkItemVer,(void))

Void MiniGameScreen_obj::removeMarked( ::quest::Item item){
{
		HX_STACK_FRAME("quest.MiniGameScreen","removeMarked",0xfcd947fd,"quest.MiniGameScreen.removeMarked","quest/MiniGameScreen.hx",200,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(201)
		bool tmp = (item->name == HX_HCSTRING("MARKED","\xac","\x21","\xf3","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		if ((tmp)){
			HX_STACK_LINE(202)
			::String tmp1 = (item->arrayID + HX_HCSTRING(" = MARKED","\x4f","\x4b","\xd4","\x9e"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("MiniGameScreen.hx","\x49","\xff","\xff","\xca"),202,HX_HCSTRING("quest.MiniGameScreen","\xa1","\xa5","\x79","\x63"),HX_HCSTRING("removeMarked","\x10","\x11","\x9e","\x29"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::haxe::Log_obj::trace(tmp1,tmp2);
			HX_STACK_LINE(203)
			::quest::Item tmp3 = item;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			Float tmp5 = (tmp4 * (int)100);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			this->replaceItem(tmp3,tmp6);
			HX_STACK_LINE(204)
			hx::AddEq(this->score,(int)1);
			HX_STACK_LINE(205)
			::flixel::text::FlxText tmp7 = this->_txtScore;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			int tmp8 = this->score;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			::String tmp9 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			tmp7->set_text(tmp9);
			HX_STACK_LINE(206)
			item->name = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MiniGameScreen_obj,removeMarked,(void))

Void MiniGameScreen_obj::replaceItem( ::quest::Item item1,int random){
{
		HX_STACK_FRAME("quest.MiniGameScreen","replaceItem",0x4ead291a,"quest.MiniGameScreen.replaceItem","quest/MiniGameScreen.hx",210,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item1,"item1")
		HX_STACK_ARG(random,"random")
		HX_STACK_LINE(211)
		bool tmp = (random <= (int)25);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		if ((tmp)){
			HX_STACK_LINE(212)
			item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/AppleButton.png","\xf9","\xf9","\x5c","\x68"),null(),null(),null(),null(),null());
			HX_STACK_LINE(213)
			item1->type = (int)1;
		}
		else{
			HX_STACK_LINE(214)
			bool tmp1 = (random <= (int)50);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(214)
			if ((tmp1)){
				HX_STACK_LINE(215)
				item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BananaButton.png","\xe0","\x24","\xe2","\xc3"),null(),null(),null(),null(),null());
				HX_STACK_LINE(216)
				item1->type = (int)2;
			}
			else{
				HX_STACK_LINE(217)
				bool tmp2 = (random <= (int)75);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				if ((tmp2)){
					HX_STACK_LINE(218)
					item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BurgerButton.png","\x30","\x23","\xcd","\x53"),null(),null(),null(),null(),null());
					HX_STACK_LINE(219)
					item1->type = (int)3;
				}
				else{
					HX_STACK_LINE(220)
					bool tmp3 = (random <= (int)100);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(220)
					if ((tmp3)){
						HX_STACK_LINE(221)
						item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/WaterMelonButton.png","\xd7","\x6a","\x8b","\xc7"),null(),null(),null(),null(),null());
						HX_STACK_LINE(222)
						item1->type = (int)4;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,replaceItem,(void))

Void MiniGameScreen_obj::winScreen( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","winScreen",0xa730379b,"quest.MiniGameScreen.winScreen","quest/MiniGameScreen.hx",226,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",228,0xdb4e069c)
			{
				HX_STACK_LINE(228)
				::quest::WinScreen tmp1 = ::quest::WinScreen_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(228)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(228)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(228)
				if ((tmp4)){
					HX_STACK_LINE(228)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(227)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,winScreen,(void))

Void MiniGameScreen_obj::loseScreen( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","loseScreen",0x5bd398ce,"quest.MiniGameScreen.loseScreen","quest/MiniGameScreen.hx",232,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",234,0xdb4e069c)
			{
				HX_STACK_LINE(234)
				::quest::LoseScreen tmp1 = ::quest::LoseScreen_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(234)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(234)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				if ((tmp4)){
					HX_STACK_LINE(234)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(233)
		tmp->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,loseScreen,(void))

Void MiniGameScreen_obj::buttonPress( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","buttonPress",0x0a84d9e4,"quest.MiniGameScreen.buttonPress","quest/MiniGameScreen.hx",238,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::flixel::ui::FlxButton tmp = this->backButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		tmp->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-4.png","\x8f","\x0a","\x1f","\xc9"),null(),null(),null(),null(),null());
		HX_STACK_LINE(240)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",241,0xdb4e069c)
			{
				HX_STACK_LINE(241)
				::quest::JobListState tmp2 = ::quest::JobListState_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(241)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				if ((tmp5)){
					HX_STACK_LINE(241)
					::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(241)
					tmp6->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(240)
		tmp1->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,buttonPress,(void))

Void MiniGameScreen_obj::update( Float elapsed){
{
		HX_STACK_FRAME("quest.MiniGameScreen","update",0x69cf9d36,"quest.MiniGameScreen.update","quest/MiniGameScreen.hx",245,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(246)
		int tmp = this->score;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int tmp1 = this->maxScore;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		if ((tmp2)){
			HX_STACK_LINE(247)
			this->winScreen();
		}
		HX_STACK_LINE(249)
		int tmp3 = this->turns;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		if ((tmp4)){
			HX_STACK_LINE(250)
			this->loseScreen();
		}
		HX_STACK_LINE(252)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		this->super::update(tmp5);
	}
return null();
}



MiniGameScreen_obj::MiniGameScreen_obj()
{
}

void MiniGameScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MiniGameScreen);
	HX_MARK_MEMBER_NAME(itemGroup,"itemGroup");
	HX_MARK_MEMBER_NAME(rowArray,"rowArray");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(_txtScore,"_txtScore");
	HX_MARK_MEMBER_NAME(_txtTurns,"_txtTurns");
	HX_MARK_MEMBER_NAME(_txtMaxScore,"_txtMaxScore");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(object1,"object1");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(turns,"turns");
	HX_MARK_MEMBER_NAME(maxScore,"maxScore");
	HX_MARK_MEMBER_NAME(typeCount,"typeCount");
	HX_MARK_MEMBER_NAME(lastType,"lastType");
	HX_MARK_MEMBER_NAME(lastCount,"lastCount");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MiniGameScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemGroup,"itemGroup");
	HX_VISIT_MEMBER_NAME(rowArray,"rowArray");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(_txtScore,"_txtScore");
	HX_VISIT_MEMBER_NAME(_txtTurns,"_txtTurns");
	HX_VISIT_MEMBER_NAME(_txtMaxScore,"_txtMaxScore");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(object1,"object1");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(turns,"turns");
	HX_VISIT_MEMBER_NAME(maxScore,"maxScore");
	HX_VISIT_MEMBER_NAME(typeCount,"typeCount");
	HX_VISIT_MEMBER_NAME(lastType,"lastType");
	HX_VISIT_MEMBER_NAME(lastCount,"lastCount");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MiniGameScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"turns") ) { return turns; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"object1") ) { return object1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowArray") ) { return rowArray; }
		if (HX_FIELD_EQ(inName,"maxScore") ) { return maxScore; }
		if (HX_FIELD_EQ(inName,"lastType") ) { return lastType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { return itemGroup; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { return _txtScore; }
		if (HX_FIELD_EQ(inName,"_txtTurns") ) { return _txtTurns; }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount; }
		if (HX_FIELD_EQ(inName,"lastCount") ) { return lastCount; }
		if (HX_FIELD_EQ(inName,"itemCheck") ) { return itemCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"makeItems") ) { return makeItems_dyn(); }
		if (HX_FIELD_EQ(inName,"winScreen") ) { return winScreen_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return backButton; }
		if (HX_FIELD_EQ(inName,"loseScreen") ) { return loseScreen_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemClicked") ) { return itemClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceItem") ) { return replaceItem_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonPress") ) { return buttonPress_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_txtMaxScore") ) { return _txtMaxScore; }
		if (HX_FIELD_EQ(inName,"checkItemHor") ) { return checkItemHor_dyn(); }
		if (HX_FIELD_EQ(inName,"checkItemVer") ) { return checkItemVer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMarked") ) { return removeMarked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MiniGameScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"turns") ) { turns=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"object1") ) { object1=inValue.Cast< ::quest::Item >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowArray") ) { rowArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScore") ) { maxScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastType") ) { lastType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { itemGroup=inValue.Cast< ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtTurns") ) { _txtTurns=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeCount") ) { typeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCount") ) { lastCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_txtMaxScore") ) { _txtMaxScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MiniGameScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("itemGroup","\x2c","\x19","\xe0","\x99"));
	outFields->push(HX_HCSTRING("rowArray","\x1f","\x1d","\x7a","\xcd"));
	outFields->push(HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"));
	outFields->push(HX_HCSTRING("_txtScore","\x21","\x16","\xee","\x1d"));
	outFields->push(HX_HCSTRING("_txtTurns","\x25","\xc5","\x3c","\xbd"));
	outFields->push(HX_HCSTRING("_txtMaxScore","\x9f","\x8e","\xc6","\x7f"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("object1","\x92","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"));
	outFields->push(HX_HCSTRING("turns","\x56","\x22","\x28","\x18"));
	outFields->push(HX_HCSTRING("maxScore","\x0e","\xc6","\xf6","\x22"));
	outFields->push(HX_HCSTRING("typeCount","\xb5","\x9f","\x3b","\x0f"));
	outFields->push(HX_HCSTRING("lastType","\x30","\x0c","\x52","\xe0"));
	outFields->push(HX_HCSTRING("lastCount","\x99","\x72","\x10","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedSpriteGroup*/ ,(int)offsetof(MiniGameScreen_obj,itemGroup),HX_HCSTRING("itemGroup","\x2c","\x19","\xe0","\x99")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MiniGameScreen_obj,rowArray),HX_HCSTRING("rowArray","\x1f","\x1d","\x7a","\xcd")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MiniGameScreen_obj,backButton),HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MiniGameScreen_obj,_txtScore),HX_HCSTRING("_txtScore","\x21","\x16","\xee","\x1d")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MiniGameScreen_obj,_txtTurns),HX_HCSTRING("_txtTurns","\x25","\xc5","\x3c","\xbd")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MiniGameScreen_obj,_txtMaxScore),HX_HCSTRING("_txtMaxScore","\x9f","\x8e","\xc6","\x7f")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::quest::Item*/ ,(int)offsetof(MiniGameScreen_obj,object1),HX_HCSTRING("object1","\x92","\x68","\x4f","\x82")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,score),HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,turns),HX_HCSTRING("turns","\x56","\x22","\x28","\x18")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,maxScore),HX_HCSTRING("maxScore","\x0e","\xc6","\xf6","\x22")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,typeCount),HX_HCSTRING("typeCount","\xb5","\x9f","\x3b","\x0f")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,lastType),HX_HCSTRING("lastType","\x30","\x0c","\x52","\xe0")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,lastCount),HX_HCSTRING("lastCount","\x99","\x72","\x10","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("itemGroup","\x2c","\x19","\xe0","\x99"),
	HX_HCSTRING("rowArray","\x1f","\x1d","\x7a","\xcd"),
	HX_HCSTRING("backButton","\x79","\x47","\x6a","\x18"),
	HX_HCSTRING("_txtScore","\x21","\x16","\xee","\x1d"),
	HX_HCSTRING("_txtTurns","\x25","\xc5","\x3c","\xbd"),
	HX_HCSTRING("_txtMaxScore","\x9f","\x8e","\xc6","\x7f"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("object1","\x92","\x68","\x4f","\x82"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("turns","\x56","\x22","\x28","\x18"),
	HX_HCSTRING("maxScore","\x0e","\xc6","\xf6","\x22"),
	HX_HCSTRING("typeCount","\xb5","\x9f","\x3b","\x0f"),
	HX_HCSTRING("lastType","\x30","\x0c","\x52","\xe0"),
	HX_HCSTRING("lastCount","\x99","\x72","\x10","\x97"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("itemCheck","\xb5","\xfe","\xa1","\x45"),
	HX_HCSTRING("makeItems","\x32","\x23","\xa5","\x95"),
	HX_HCSTRING("itemClicked","\xd4","\xf1","\x2e","\x58"),
	HX_HCSTRING("checkItemHor","\x50","\x24","\xf6","\xcc"),
	HX_HCSTRING("checkItemVer","\x28","\xbb","\x00","\xcd"),
	HX_HCSTRING("removeMarked","\x10","\x11","\x9e","\x29"),
	HX_HCSTRING("replaceItem","\x67","\x63","\x5b","\x5a"),
	HX_HCSTRING("winScreen","\xa8","\x54","\x13","\xde"),
	HX_HCSTRING("loseScreen","\x21","\xe7","\xa9","\x2b"),
	HX_HCSTRING("buttonPress","\x31","\x14","\x33","\x16"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MiniGameScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MiniGameScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class MiniGameScreen_obj::__mClass;

void MiniGameScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("quest.MiniGameScreen","\xa1","\xa5","\x79","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MiniGameScreen_obj >;
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
