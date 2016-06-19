#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
HX_STACK_FRAME("quest.MiniGameScreen","new",0x03ef2b13,"quest.MiniGameScreen.new","quest/MiniGameScreen.hx",24,0xdb4e069c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(42)
	this->lastCount = (int)0;
	HX_STACK_LINE(41)
	this->lastType = (int)0;
	HX_STACK_LINE(40)
	this->typeCount = (int)0;
	HX_STACK_LINE(39)
	this->maxScore = (int)200;
	HX_STACK_LINE(38)
	this->turns = (int)60;
	HX_STACK_LINE(37)
	this->score = (int)0;
	HX_STACK_LINE(36)
	this->object1 = null();
	HX_STACK_LINE(35)
	this->a = (int)0;
	HX_STACK_LINE(29)
	this->markedArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	this->lastArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	this->rowArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(26)
	this->itemGroup = ::flixel::group::FlxTypedSpriteGroup_obj::__new((int)0,(int)0,(int)63);
	HX_STACK_LINE(24)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
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
		HX_STACK_FRAME("quest.MiniGameScreen","create",0x5ed97e29,"quest.MiniGameScreen.create","quest/MiniGameScreen.hx",44,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::create();
		HX_STACK_LINE(47)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(48)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(49)
		this->energy = save->data->__Field(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"), hx::paccDynamic );
		HX_STACK_LINE(50)
		save->close(null(),null());
		HX_STACK_LINE(52)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/img/Minigame/Minigame Background.png","\x52","\xe2","\xd9","\xeb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::flixel::FlxSprite backGround = tmp1;		HX_STACK_VAR(backGround,"backGround");
		HX_STACK_LINE(53)
		::flixel::FlxSprite tmp2 = backGround;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		this->add(tmp2);
		HX_STACK_LINE(55)
		int tmp3 = this->score;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		::String tmp4 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		::flixel::text::FlxText tmp5 = ::flixel::text::FlxText_obj::__new((int)1010,(int)80,(int)0,tmp4,(int)32,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		this->_txtScore = tmp5;
		HX_STACK_LINE(56)
		::flixel::text::FlxText tmp6 = this->_txtScore;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		this->add(tmp6);
		HX_STACK_LINE(58)
		int tmp7 = this->turns;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		::String tmp8 = (HX_HCSTRING("Turns: ","\x5c","\x3e","\x87","\x59") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		::flixel::text::FlxText tmp9 = ::flixel::text::FlxText_obj::__new((int)1010,(int)260,(int)0,tmp8,(int)32,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		this->_txtTurns = tmp9;
		HX_STACK_LINE(59)
		::flixel::text::FlxText tmp10 = this->_txtTurns;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		this->add(tmp10);
		HX_STACK_LINE(61)
		int tmp11 = this->maxScore;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::String tmp12 = (HX_HCSTRING("Goal: ","\x99","\xda","\x40","\x8d") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		::flixel::text::FlxText tmp13 = ::flixel::text::FlxText_obj::__new((int)1010,(int)370,(int)0,tmp12,(int)32,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		this->_txtMaxScore = tmp13;
		HX_STACK_LINE(62)
		::flixel::text::FlxText tmp14 = this->_txtMaxScore;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(62)
		this->add(tmp14);
		HX_STACK_LINE(64)
		Dynamic tmp15 = this->buttonPress_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new((int)1065,(int)580,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		this->backButton = tmp16;
		HX_STACK_LINE(65)
		::flixel::ui::FlxButton tmp17 = this->backButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(65)
		tmp17->loadGraphic(HX_HCSTRING("assets/img/Buttons/terug-3.png","\x0e","\x76","\xb8","\x35"),null(),null(),null(),null(),null());
		HX_STACK_LINE(66)
		::flixel::ui::FlxButton tmp18 = this->backButton;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(66)
		this->add(tmp18);
		HX_STACK_LINE(68)
		this->makeItems();
		HX_STACK_LINE(69)
		this->itemCheck();
	}
return null();
}


Void MiniGameScreen_obj::itemCheck( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","itemCheck",0x0ebee1a8,"quest.MiniGameScreen.itemCheck","quest/MiniGameScreen.hx",72,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->typeCount = (int)0;
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			int tmp = this->rowArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(74)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				if ((tmp2)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(75)
				::quest::Item tmp4 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				this->checkItemHor(tmp4,tmp5);
				HX_STACK_LINE(76)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				int tmp7 = this->rowArray->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				if ((tmp9)){
					HX_STACK_LINE(77)
					this->checkForRemove();
				}
			}
		}
		HX_STACK_LINE(80)
		this->typeCount = (int)0;
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(81)
			int tmp = this->rowArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(81)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(81)
				if ((tmp2)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(82)
				bool tmp4 = (i <= (int)3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				if ((tmp4)){
					HX_STACK_LINE(83)
					int tmp5 = (i * (int)5);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					::quest::Item tmp6 = this->rowArray->__get(tmp5).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					int tmp7 = (i * (int)5);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(83)
					this->checkItemVer(tmp6,tmp7);
				}
				else{
					HX_STACK_LINE(84)
					bool tmp5 = (i <= (int)7);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(84)
					if ((tmp5)){
						HX_STACK_LINE(85)
						int tmp6 = (i - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(85)
						int tmp7 = (tmp6 * (int)5);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(85)
						int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(85)
						::quest::Item tmp9 = this->rowArray->__get(tmp8).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(85)
						int tmp10 = (i - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(85)
						int tmp11 = (tmp10 * (int)5);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(85)
						int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(85)
						this->checkItemVer(tmp9,tmp12);
					}
					else{
						HX_STACK_LINE(86)
						bool tmp6 = (i <= (int)11);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						if ((tmp6)){
							HX_STACK_LINE(87)
							int tmp7 = (i - (int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(87)
							int tmp8 = (tmp7 * (int)5);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							int tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							::quest::Item tmp10 = this->rowArray->__get(tmp9).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(87)
							int tmp11 = (i - (int)8);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							int tmp12 = (tmp11 * (int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(87)
							int tmp13 = (tmp12 + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(87)
							this->checkItemVer(tmp10,tmp13);
						}
						else{
							HX_STACK_LINE(88)
							bool tmp7 = (i <= (int)15);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(88)
							if ((tmp7)){
								HX_STACK_LINE(89)
								int tmp8 = (i - (int)12);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(89)
								int tmp9 = (tmp8 * (int)5);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(89)
								int tmp10 = (tmp9 + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(89)
								::quest::Item tmp11 = this->rowArray->__get(tmp10).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(89)
								int tmp12 = (i - (int)12);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(89)
								int tmp13 = (tmp12 * (int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(89)
								int tmp14 = (tmp13 + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(89)
								this->checkItemVer(tmp11,tmp14);
							}
							else{
								HX_STACK_LINE(90)
								bool tmp8 = (i <= (int)19);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(90)
								if ((tmp8)){
									HX_STACK_LINE(91)
									int tmp9 = (i - (int)16);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(91)
									int tmp10 = (tmp9 * (int)5);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(91)
									int tmp11 = (tmp10 + (int)4);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(91)
									::quest::Item tmp12 = this->rowArray->__get(tmp11).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(91)
									int tmp13 = (i - (int)16);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(91)
									int tmp14 = (tmp13 * (int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(91)
									int tmp15 = (tmp14 + (int)4);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(91)
									this->checkItemVer(tmp12,tmp15);
								}
							}
						}
					}
				}
				HX_STACK_LINE(93)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				int tmp6 = this->rowArray->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				if ((tmp8)){
					HX_STACK_LINE(94)
					this->checkForRemove();
				}
			}
		}
		HX_STACK_LINE(97)
		this->typeCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,itemCheck,(void))

Void MiniGameScreen_obj::makeItems( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","makeItems",0x5ec20625,"quest.MiniGameScreen.makeItems","quest/MiniGameScreen.hx",101,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			bool tmp = (_g < (int)20);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			if ((tmp1)){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(101)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(102)
			Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			Float tmp4 = (tmp3 * (int)100);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			int random = tmp5;		HX_STACK_VAR(random,"random");
			HX_STACK_LINE(103)
			::quest::Item tmp6 = ::quest::Item_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			::quest::Item item1 = tmp6;		HX_STACK_VAR(item1,"item1");
			HX_STACK_LINE(104)
			Dynamic tmp7 = this->itemClicked_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::quest::Item tmp8 = item1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(104)
				::quest::Item a1 = tmp8;		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::quest::Item,a1,Dynamic,f)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","quest/MiniGameScreen.hx",104,0xdb4e069c)
					{
						HX_STACK_LINE(104)
						::quest::Item tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(104)
						f(tmp10).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(104)
				tmp9 =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(104)
			item1->onDown->callback = tmp9;
			HX_STACK_LINE(105)
			bool tmp10 = (random <= (int)25);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			if ((tmp10)){
				HX_STACK_LINE(106)
				item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/AppleButton.png","\xf9","\xf9","\x5c","\x68"),null(),null(),null(),null(),null());
				HX_STACK_LINE(107)
				item1->type = (int)1;
			}
			else{
				HX_STACK_LINE(108)
				bool tmp11 = (random <= (int)50);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				if ((tmp11)){
					HX_STACK_LINE(109)
					item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BananaButton.png","\xe0","\x24","\xe2","\xc3"),null(),null(),null(),null(),null());
					HX_STACK_LINE(110)
					item1->type = (int)2;
				}
				else{
					HX_STACK_LINE(111)
					bool tmp12 = (random <= (int)75);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(111)
					if ((tmp12)){
						HX_STACK_LINE(112)
						item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BurgerButton.png","\x30","\x23","\xcd","\x53"),null(),null(),null(),null(),null());
						HX_STACK_LINE(113)
						item1->type = (int)3;
					}
					else{
						HX_STACK_LINE(114)
						bool tmp13 = (random <= (int)100);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(114)
						if ((tmp13)){
							HX_STACK_LINE(115)
							item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/WaterMelonButton.png","\xd7","\x6a","\x8b","\xc7"),null(),null(),null(),null(),null());
							HX_STACK_LINE(116)
							item1->type = (int)4;
						}
					}
				}
			}
			HX_STACK_LINE(117)
			bool tmp11 = (i < (int)5);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			if ((tmp11)){
				HX_STACK_LINE(118)
				int tmp12 = ((int)175 * i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				int tmp13 = ((int)60 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				item1->set_x(tmp13);
				HX_STACK_LINE(119)
				item1->set_y((int)60);
			}
			HX_STACK_LINE(120)
			bool tmp12 = (i >= (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			if ((tmp12)){
				HX_STACK_LINE(121)
				int tmp13 = (i - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				int tmp14 = ((int)175 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				int tmp15 = ((int)60 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				item1->set_x(tmp15);
				HX_STACK_LINE(122)
				item1->set_y((int)220);
			}
			HX_STACK_LINE(123)
			bool tmp13 = (i >= (int)10);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(123)
			if ((tmp13)){
				HX_STACK_LINE(124)
				int tmp14 = (i - (int)10);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(124)
				int tmp15 = ((int)175 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				int tmp16 = ((int)60 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(124)
				item1->set_x(tmp16);
				HX_STACK_LINE(125)
				item1->set_y((int)380);
			}
			HX_STACK_LINE(126)
			bool tmp14 = (i >= (int)15);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			if ((tmp14)){
				HX_STACK_LINE(127)
				int tmp15 = (i - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(127)
				int tmp16 = ((int)175 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(127)
				int tmp17 = ((int)60 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				item1->set_x(tmp17);
				HX_STACK_LINE(128)
				item1->set_y((int)540);
			}
			HX_STACK_LINE(130)
			item1->arrayID = i;
			HX_STACK_LINE(131)
			::quest::Item tmp15 = item1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			this->rowArray->push(tmp15);
			HX_STACK_LINE(132)
			::flixel::group::FlxTypedSpriteGroup tmp16 = this->itemGroup;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(132)
			::quest::Item tmp17 = item1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(132)
			tmp16->add(tmp17);
			HX_STACK_LINE(133)
			::flixel::group::FlxTypedSpriteGroup tmp18 = this->itemGroup;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(133)
			this->add(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,makeItems,(void))

Void MiniGameScreen_obj::itemClicked( ::quest::Item button){
{
		HX_STACK_FRAME("quest.MiniGameScreen","itemClicked",0x4c80b787,"quest.MiniGameScreen.itemClicked","quest/MiniGameScreen.hx",137,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(138)
		hx::AddEq(this->a,(int)1);
		HX_STACK_LINE(139)
		int tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		if ((tmp1)){
			HX_STACK_LINE(140)
			this->object1 = button;
			HX_STACK_LINE(141)
			::quest::Item tmp2 = this->object1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			tmp2->onDown->callback = null();
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(142)
				int tmp3 = this->rowArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(142)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(142)
				while((true)){
					HX_STACK_LINE(142)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(142)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(142)
					if ((tmp5)){
						HX_STACK_LINE(142)
						break;
					}
					HX_STACK_LINE(142)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(142)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(143)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(143)
					::quest::Item tmp8 = this->object1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(143)
					int tmp9 = tmp8->arrayID;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					bool tmp11 = (tmp7 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(143)
					if ((tmp12)){
						HX_STACK_LINE(143)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(143)
						::quest::Item tmp15 = this->object1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(143)
						::quest::Item tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(143)
						::quest::Item tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(143)
						int tmp18 = tmp17->arrayID;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(143)
						int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(143)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(143)
						tmp13 = (tmp14 != tmp21);
					}
					else{
						HX_STACK_LINE(143)
						tmp13 = false;
					}
					HX_STACK_LINE(143)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(143)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(143)
					if ((tmp14)){
						HX_STACK_LINE(143)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(143)
						::quest::Item tmp17 = this->object1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(143)
						::quest::Item tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(143)
						::quest::Item tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						int tmp20 = tmp19->arrayID;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(143)
						int tmp21 = (tmp20 - (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(143)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(143)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(143)
						tmp15 = (tmp16 != tmp23);
					}
					else{
						HX_STACK_LINE(143)
						tmp15 = false;
					}
					HX_STACK_LINE(143)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(143)
					if ((tmp15)){
						HX_STACK_LINE(143)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(143)
						::quest::Item tmp18 = this->object1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(143)
						::quest::Item tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						int tmp20 = tmp19->arrayID;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(143)
						int tmp21 = (tmp20 + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(143)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(143)
						tmp16 = (tmp17 != tmp22);
					}
					else{
						HX_STACK_LINE(143)
						tmp16 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp16)){
						HX_STACK_LINE(144)
						::quest::Item tmp17 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(144)
						tmp17->onDown->callback = null();
					}
					else{
					}
				}
			}
		}
		HX_STACK_LINE(149)
		int tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(150)
			::quest::Item object2 = button;		HX_STACK_VAR(object2,"object2");
			HX_STACK_LINE(151)
			::String tmp4 = object2->graphic->key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			::String graph = tmp4;		HX_STACK_VAR(graph,"graph");
			HX_STACK_LINE(152)
			::quest::Item tmp5 = this->object1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			::String tmp6 = tmp5->graphic->key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			object2->loadGraphic(tmp6,null(),null(),null(),null(),null());
			HX_STACK_LINE(153)
			::quest::Item tmp7 = this->object1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			::String tmp8 = graph;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			tmp7->loadGraphic(tmp8,null(),null(),null(),null(),null());
			HX_STACK_LINE(154)
			int typ = object2->type;		HX_STACK_VAR(typ,"typ");
			HX_STACK_LINE(155)
			::quest::Item tmp9 = this->object1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			object2->type = tmp9->type;
			HX_STACK_LINE(156)
			::quest::Item tmp10 = this->object1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			tmp10->type = typ;
			HX_STACK_LINE(157)
			this->a = (int)0;
			HX_STACK_LINE(158)
			hx::SubEq(this->turns,(int)1);
			HX_STACK_LINE(159)
			this->itemCheck();
			HX_STACK_LINE(160)
			::flixel::text::FlxText tmp11 = this->_txtTurns;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(160)
			int tmp12 = this->turns;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(160)
			::String tmp13 = (HX_HCSTRING("Turns: ","\x5c","\x3e","\x87","\x59") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(160)
			tmp11->set_text(tmp13);
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(161)
				int tmp14 = this->rowArray->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(161)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				while((true)){
					HX_STACK_LINE(161)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(161)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(161)
					if ((tmp16)){
						HX_STACK_LINE(161)
						break;
					}
					HX_STACK_LINE(161)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(161)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(162)
					Dynamic tmp18 = this->itemClicked_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(162)
					::quest::Item tmp19 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(162)
					Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(162)
						::quest::Item a1 = tmp19;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,::quest::Item,a1,Dynamic,f)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","quest/MiniGameScreen.hx",162,0xdb4e069c)
							{
								HX_STACK_LINE(162)
								::quest::Item tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(162)
								f(tmp21).Cast< Void >();
								HX_STACK_LINE(162)
								return null();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(162)
						tmp20 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(162)
					::quest::Item tmp21 = this->rowArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(162)
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
		HX_STACK_FRAME("quest.MiniGameScreen","checkItemHor",0xa0315b3d,"quest.MiniGameScreen.checkItemHor","quest/MiniGameScreen.hx",167,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(168)
		bool tmp = (i == (int)5);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(168)
			tmp3 = (i == (int)10);
		}
		else{
			HX_STACK_LINE(168)
			tmp3 = true;
		}
		HX_STACK_LINE(168)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		if ((tmp4)){
			HX_STACK_LINE(168)
			tmp5 = (i == (int)15);
		}
		else{
			HX_STACK_LINE(168)
			tmp5 = true;
		}
		HX_STACK_LINE(168)
		if ((tmp5)){
			HX_STACK_LINE(169)
			this->checkForRemove();
			HX_STACK_LINE(170)
			this->typeCount = (int)0;
		}
		HX_STACK_LINE(172)
		::quest::Item tmp6 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		if ((tmp7)){
			HX_STACK_LINE(173)
			::quest::Item tmp8 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			this->lastType = tmp8->type;
		}
		HX_STACK_LINE(175)
		int tmp8 = this->lastType;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		int tmp9 = item->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		if ((tmp10)){
			HX_STACK_LINE(176)
			this->checkForRemove();
			HX_STACK_LINE(177)
			this->typeCount = (int)0;
		}
		else{
			HX_STACK_LINE(178)
			int tmp11 = this->lastType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			int tmp12 = item->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(178)
			if ((tmp13)){
				HX_STACK_LINE(179)
				(this->typeCount)++;
				HX_STACK_LINE(180)
				::quest::Item tmp14 = this->markedArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(180)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				if ((tmp15)){
					HX_STACK_LINE(181)
					::quest::Item tmp16 = item;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(181)
					this->markedArray->push(tmp16);
				}
				else{
					HX_STACK_LINE(182)
					::quest::Item tmp16 = this->markedArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					if ((tmp17)){
						HX_STACK_LINE(183)
						::quest::Item tmp18 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(183)
						this->markedArray->push(tmp18);
						HX_STACK_LINE(184)
						::quest::Item tmp19 = item;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(184)
						this->markedArray->push(tmp19);
					}
				}
			}
		}
		HX_STACK_LINE(187)
		::quest::Item tmp11 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(187)
		if ((tmp12)){
			HX_STACK_LINE(188)
			::quest::Item tmp13 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(188)
			this->lastArray->remove(tmp13);
			HX_STACK_LINE(189)
			::quest::Item tmp14 = item;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(189)
			this->lastArray->push(tmp14);
		}
		else{
			HX_STACK_LINE(190)
			::quest::Item tmp13 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(190)
			if ((tmp14)){
				HX_STACK_LINE(191)
				::quest::Item tmp15 = item;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(191)
				this->lastArray->push(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,checkItemHor,(void))

Void MiniGameScreen_obj::checkItemVer( ::quest::Item item,int i){
{
		HX_STACK_FRAME("quest.MiniGameScreen","checkItemVer",0xa03bf215,"quest.MiniGameScreen.checkItemVer","quest/MiniGameScreen.hx",195,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(196)
		bool tmp = (i == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(196)
			tmp3 = (i == (int)2);
		}
		else{
			HX_STACK_LINE(196)
			tmp3 = true;
		}
		HX_STACK_LINE(196)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		if ((tmp5)){
			HX_STACK_LINE(196)
			tmp6 = (i == (int)3);
		}
		else{
			HX_STACK_LINE(196)
			tmp6 = true;
		}
		HX_STACK_LINE(196)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		if ((tmp7)){
			HX_STACK_LINE(196)
			tmp8 = (i == (int)4);
		}
		else{
			HX_STACK_LINE(196)
			tmp8 = true;
		}
		HX_STACK_LINE(196)
		if ((tmp8)){
			HX_STACK_LINE(197)
			this->checkForRemove();
			HX_STACK_LINE(198)
			this->typeCount = (int)0;
		}
		HX_STACK_LINE(200)
		::quest::Item tmp9 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		if ((tmp10)){
			HX_STACK_LINE(201)
			::quest::Item tmp11 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(201)
			this->lastType = tmp11->type;
		}
		HX_STACK_LINE(203)
		int tmp11 = this->lastType;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(203)
		int tmp12 = item->type;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(203)
		bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(203)
		if ((tmp13)){
			HX_STACK_LINE(204)
			this->checkForRemove();
			HX_STACK_LINE(205)
			this->typeCount = (int)0;
		}
		else{
			HX_STACK_LINE(206)
			int tmp14 = this->lastType;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			int tmp15 = item->type;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			if ((tmp16)){
				HX_STACK_LINE(207)
				(this->typeCount)++;
				HX_STACK_LINE(208)
				::quest::Item tmp17 = this->markedArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(208)
				bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(208)
				if ((tmp18)){
					HX_STACK_LINE(209)
					::quest::Item tmp19 = item;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					this->markedArray->push(tmp19);
				}
				else{
					HX_STACK_LINE(210)
					::quest::Item tmp19 = this->markedArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(210)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(210)
					if ((tmp20)){
						HX_STACK_LINE(211)
						::quest::Item tmp21 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(211)
						this->markedArray->push(tmp21);
						HX_STACK_LINE(212)
						::quest::Item tmp22 = item;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(212)
						this->markedArray->push(tmp22);
					}
				}
			}
		}
		HX_STACK_LINE(215)
		::quest::Item tmp14 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(215)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(215)
		if ((tmp15)){
			HX_STACK_LINE(216)
			::quest::Item tmp16 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			this->lastArray->remove(tmp16);
			HX_STACK_LINE(217)
			::quest::Item tmp17 = item;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(217)
			this->lastArray->push(tmp17);
		}
		else{
			HX_STACK_LINE(218)
			::quest::Item tmp16 = this->lastArray->__get((int)0).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(218)
			bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(218)
			if ((tmp17)){
				HX_STACK_LINE(219)
				::quest::Item tmp18 = item;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(219)
				this->lastArray->push(tmp18);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,checkItemVer,(void))

Void MiniGameScreen_obj::checkForRemove( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","checkForRemove",0x7f1abe72,"quest.MiniGameScreen.checkForRemove","quest/MiniGameScreen.hx",223,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		int tmp = this->typeCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		this->lastCount = tmp;
		HX_STACK_LINE(225)
		int tmp1 = this->lastCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		if ((tmp2)){
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(226)
				int tmp3 = this->lastCount;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(226)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				while((true)){
					HX_STACK_LINE(226)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(226)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(226)
					if ((tmp5)){
						HX_STACK_LINE(226)
						break;
					}
					HX_STACK_LINE(226)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(227)
					::quest::Item tmp7 = this->markedArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(227)
					Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("MiniGameScreen.hx","\x49","\xff","\xff","\xca"),227,HX_HCSTRING("quest.MiniGameScreen","\xa1","\xa5","\x79","\x63"),HX_HCSTRING("checkForRemove","\x45","\x32","\x72","\xfd"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(227)
					::haxe::Log_obj::trace(tmp7,tmp8);
					HX_STACK_LINE(228)
					::quest::Item tmp9 = this->markedArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(228)
					Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					Float tmp11 = (tmp10 * (int)100);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(228)
					int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(228)
					this->replaceItem(tmp9,tmp12);
				}
			}
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(230)
				int tmp3 = this->markedArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(230)
				while((true)){
					HX_STACK_LINE(230)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(230)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					if ((tmp5)){
						HX_STACK_LINE(230)
						break;
					}
					HX_STACK_LINE(230)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(230)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(231)
					::quest::Item tmp7 = this->markedArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(231)
					this->markedArray->remove(tmp7);
				}
			}
			HX_STACK_LINE(233)
			this->itemCheck();
		}
		else{
			HX_STACK_LINE(235)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			int tmp3 = this->markedArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(235)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(235)
				if ((tmp5)){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				::quest::Item tmp7 = this->markedArray->__get(i).StaticCast< ::quest::Item >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(236)
				this->markedArray->remove(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,checkForRemove,(void))

Void MiniGameScreen_obj::removeMarked( ::quest::Item item){
{
		HX_STACK_FRAME("quest.MiniGameScreen","removeMarked",0xfcd947fd,"quest.MiniGameScreen.removeMarked","quest/MiniGameScreen.hx",241,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MiniGameScreen_obj,removeMarked,(void))

Void MiniGameScreen_obj::replaceItem( ::quest::Item item1,int random){
{
		HX_STACK_FRAME("quest.MiniGameScreen","replaceItem",0x4ead291a,"quest.MiniGameScreen.replaceItem","quest/MiniGameScreen.hx",251,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item1,"item1")
		HX_STACK_ARG(random,"random")
		HX_STACK_LINE(252)
		bool tmp = (random <= (int)25);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(253)
			item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/AppleButton.png","\xf9","\xf9","\x5c","\x68"),null(),null(),null(),null(),null());
			HX_STACK_LINE(254)
			item1->type = (int)1;
		}
		else{
			HX_STACK_LINE(255)
			bool tmp1 = (random <= (int)50);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(255)
			if ((tmp1)){
				HX_STACK_LINE(256)
				item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BananaButton.png","\xe0","\x24","\xe2","\xc3"),null(),null(),null(),null(),null());
				HX_STACK_LINE(257)
				item1->type = (int)2;
			}
			else{
				HX_STACK_LINE(258)
				bool tmp2 = (random <= (int)75);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(258)
				if ((tmp2)){
					HX_STACK_LINE(259)
					item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/BurgerButton.png","\x30","\x23","\xcd","\x53"),null(),null(),null(),null(),null());
					HX_STACK_LINE(260)
					item1->type = (int)3;
				}
				else{
					HX_STACK_LINE(261)
					bool tmp3 = (random <= (int)100);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(261)
					if ((tmp3)){
						HX_STACK_LINE(262)
						item1->loadGraphic(HX_HCSTRING("assets/img/Minigame/WaterMelonButton.png","\xd7","\x6a","\x8b","\xc7"),null(),null(),null(),null(),null());
						HX_STACK_LINE(263)
						item1->type = (int)4;
					}
				}
			}
		}
		HX_STACK_LINE(265)
		hx::AddEq(this->score,(int)1);
		HX_STACK_LINE(266)
		::flixel::text::FlxText tmp1 = this->_txtScore;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		int tmp2 = this->score;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		::String tmp3 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		tmp1->set_text(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MiniGameScreen_obj,replaceItem,(void))

Void MiniGameScreen_obj::winScreen( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","winScreen",0xa730379b,"quest.MiniGameScreen.winScreen","quest/MiniGameScreen.hx",269,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(271)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(272)
		int tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		int tmp2 = (tmp1 - (int)25);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		save->data->__FieldRef(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")) = tmp2;
		HX_STACK_LINE(273)
		save->flush(null(),null());
		HX_STACK_LINE(274)
		save->close(null(),null());
		HX_STACK_LINE(275)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",276,0xdb4e069c)
			{
				HX_STACK_LINE(276)
				::quest::WinScreen tmp4 = ::quest::WinScreen_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(276)
				::flixel::FlxState nextState = tmp4;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(276)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				::flixel::FlxState tmp6 = nextState;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				bool tmp7 = tmp5->_state->switchTo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				if ((tmp7)){
					HX_STACK_LINE(276)
					::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(276)
					tmp8->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(275)
		tmp3->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,winScreen,(void))

Void MiniGameScreen_obj::loseScreen( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","loseScreen",0x5bd398ce,"quest.MiniGameScreen.loseScreen","quest/MiniGameScreen.hx",280,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(282)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(283)
		int tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		int tmp2 = (tmp1 - (int)25);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		save->data->__FieldRef(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")) = tmp2;
		HX_STACK_LINE(284)
		save->flush(null(),null());
		HX_STACK_LINE(285)
		save->close(null(),null());
		HX_STACK_LINE(286)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",287,0xdb4e069c)
			{
				HX_STACK_LINE(287)
				::quest::LoseScreen tmp4 = ::quest::LoseScreen_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				::flixel::FlxState nextState = tmp4;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(287)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				::flixel::FlxState tmp6 = nextState;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				bool tmp7 = tmp5->_state->switchTo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				if ((tmp7)){
					HX_STACK_LINE(287)
					::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(287)
					tmp8->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(286)
		tmp3->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,loseScreen,(void))

Void MiniGameScreen_obj::buttonPress( ){
{
		HX_STACK_FRAME("quest.MiniGameScreen","buttonPress",0x0a84d9e4,"quest.MiniGameScreen.buttonPress","quest/MiniGameScreen.hx",291,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		::flixel::util::FlxSave save = tmp;		HX_STACK_VAR(save,"save");
		HX_STACK_LINE(293)
		save->bind(HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"));
		HX_STACK_LINE(294)
		int tmp1 = this->energy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		int tmp2 = (tmp1 - (int)25);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		save->data->__FieldRef(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")) = tmp2;
		HX_STACK_LINE(295)
		save->flush(null(),null());
		HX_STACK_LINE(296)
		save->close(null(),null());
		HX_STACK_LINE(297)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","quest/MiniGameScreen.hx",298,0xdb4e069c)
			{
				HX_STACK_LINE(298)
				::PlayState tmp4 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				::flixel::FlxState nextState = tmp4;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(298)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				::flixel::FlxState tmp6 = nextState;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(298)
				bool tmp7 = tmp5->_state->switchTo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(298)
				if ((tmp7)){
					HX_STACK_LINE(298)
					::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(298)
					tmp8->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(297)
		tmp3->fade((int)-16777216,((Float).20),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MiniGameScreen_obj,buttonPress,(void))

Void MiniGameScreen_obj::update( Float elapsed){
{
		HX_STACK_FRAME("quest.MiniGameScreen","update",0x69cf9d36,"quest.MiniGameScreen.update","quest/MiniGameScreen.hx",302,0xdb4e069c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(303)
		int tmp = this->score;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		int tmp1 = this->maxScore;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		if ((tmp2)){
			HX_STACK_LINE(304)
			this->winScreen();
		}
		HX_STACK_LINE(306)
		int tmp3 = this->turns;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		if ((tmp4)){
			HX_STACK_LINE(307)
			this->loseScreen();
		}
		HX_STACK_LINE(309)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
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
	HX_MARK_MEMBER_NAME(lastArray,"lastArray");
	HX_MARK_MEMBER_NAME(markedArray,"markedArray");
	HX_MARK_MEMBER_NAME(energy,"energy");
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
	HX_VISIT_MEMBER_NAME(lastArray,"lastArray");
	HX_VISIT_MEMBER_NAME(markedArray,"markedArray");
	HX_VISIT_MEMBER_NAME(energy,"energy");
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
		if (HX_FIELD_EQ(inName,"energy") ) { return energy; }
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
		if (HX_FIELD_EQ(inName,"lastArray") ) { return lastArray; }
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
		if (HX_FIELD_EQ(inName,"markedArray") ) { return markedArray; }
		if (HX_FIELD_EQ(inName,"itemClicked") ) { return itemClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceItem") ) { return replaceItem_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonPress") ) { return buttonPress_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_txtMaxScore") ) { return _txtMaxScore; }
		if (HX_FIELD_EQ(inName,"checkItemHor") ) { return checkItemHor_dyn(); }
		if (HX_FIELD_EQ(inName,"checkItemVer") ) { return checkItemVer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMarked") ) { return removeMarked_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkForRemove") ) { return checkForRemove_dyn(); }
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
	case 6:
		if (HX_FIELD_EQ(inName,"energy") ) { energy=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"lastArray") ) { lastArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtTurns") ) { _txtTurns=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeCount") ) { typeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCount") ) { lastCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"markedArray") ) { markedArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
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
	outFields->push(HX_HCSTRING("lastArray","\x63","\x9b","\x3c","\x72"));
	outFields->push(HX_HCSTRING("markedArray","\x4d","\x58","\xe6","\xae"));
	outFields->push(HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"));
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MiniGameScreen_obj,lastArray),HX_HCSTRING("lastArray","\x63","\x9b","\x3c","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MiniGameScreen_obj,markedArray),HX_HCSTRING("markedArray","\x4d","\x58","\xe6","\xae")},
	{hx::fsInt,(int)offsetof(MiniGameScreen_obj,energy),HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb")},
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
	HX_HCSTRING("lastArray","\x63","\x9b","\x3c","\x72"),
	HX_HCSTRING("markedArray","\x4d","\x58","\xe6","\xae"),
	HX_HCSTRING("energy","\xc8","\xa8","\x38","\xfb"),
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
	HX_HCSTRING("checkForRemove","\x45","\x32","\x72","\xfd"),
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
