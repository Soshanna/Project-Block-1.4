#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxExtendedSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","new",0x1ee235ed,"flixel.addons.display.FlxExtendedSprite.new","flixel/addons/display/FlxExtendedSprite.hx",18,0xe2826ec4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(177)
	this->_allowVerticalDrag = true;
	HX_STACK_LINE(176)
	this->_allowHorizontalDrag = true;
	HX_STACK_LINE(166)
	this->_clickCounter = (int)0;
	HX_STACK_LINE(164)
	this->_clickPixelPerfect = false;
	HX_STACK_LINE(163)
	this->_clickOnRelease = false;
	HX_STACK_LINE(159)
	this->_snapOnRelease = false;
	HX_STACK_LINE(158)
	this->_snapOnDrag = false;
	HX_STACK_LINE(83)
	this->springOnPressed = true;
	HX_STACK_LINE(79)
	this->draggable = false;
	HX_STACK_LINE(75)
	this->isDragged = false;
	HX_STACK_LINE(47)
	this->hasGravity = false;
	HX_STACK_LINE(35)
	this->throwable = false;
	HX_STACK_LINE(31)
	this->clickable = false;
	HX_STACK_LINE(27)
	this->isPressed = false;
	HX_STACK_LINE(189)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	Dynamic tmp2 = SimpleGraphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//FlxExtendedSprite_obj::~FlxExtendedSprite_obj() { }

Dynamic FlxExtendedSprite_obj::__CreateEmpty() { return  new FlxExtendedSprite_obj; }
hx::ObjectPtr< FlxExtendedSprite_obj > FlxExtendedSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxExtendedSprite_obj > _result_ = new FlxExtendedSprite_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic);
	return _result_;}

Dynamic FlxExtendedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxExtendedSprite_obj > _result_ = new FlxExtendedSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxExtendedSprite_obj::setDragLock( hx::Null< bool >  __o_AllowHorizontalDrag,hx::Null< bool >  __o_AllowVerticalDrag){
bool AllowHorizontalDrag = __o_AllowHorizontalDrag.Default(true);
bool AllowVerticalDrag = __o_AllowVerticalDrag.Default(true);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","setDragLock",0x200b024e,"flixel.addons.display.FlxExtendedSprite.setDragLock","flixel/addons/display/FlxExtendedSprite.hx",392,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AllowHorizontalDrag,"AllowHorizontalDrag")
	HX_STACK_ARG(AllowVerticalDrag,"AllowVerticalDrag")
{
		HX_STACK_LINE(393)
		this->_allowHorizontalDrag = AllowHorizontalDrag;
		HX_STACK_LINE(394)
		this->_allowVerticalDrag = AllowVerticalDrag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedSprite_obj,setDragLock,(void))

Void FlxExtendedSprite_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","update",0x94f7569c,"flixel.addons.display.FlxExtendedSprite.update","flixel/addons/display/FlxExtendedSprite.hx",401,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(438)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		this->super::update(tmp);
	}
return null();
}


Void FlxExtendedSprite_obj::updateGravity( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","updateGravity",0x1a4d8b12,"flixel.addons.display.FlxExtendedSprite.updateGravity","flixel/addons/display/FlxExtendedSprite.hx",445,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(449)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		if ((tmp2)){
			HX_STACK_LINE(451)
			::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(451)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(451)
			bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(451)
			if ((tmp5)){
				HX_STACK_LINE(454)
				int tmp6 = this->touching;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(454)
				int tmp7 = (int(tmp6) & int((int)17));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(454)
				bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(454)
				if ((tmp8)){
					HX_STACK_LINE(456)
					::flixel::math::FlxPoint tmp9 = this->drag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(456)
					Float tmp10 = this->frictionY;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(456)
					tmp9->set_y(tmp10);
					HX_STACK_LINE(458)
					int tmp11 = this->wasTouching;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(458)
					int tmp12 = (int(tmp11) & int((int)17));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(458)
					bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(458)
					if ((tmp13)){
						HX_STACK_LINE(460)
						::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(460)
						Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(460)
						Float tmp16 = this->toleranceX;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(460)
						bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(460)
						if ((tmp17)){
							HX_STACK_LINE(462)
							::flixel::math::FlxPoint tmp18 = this->velocity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(462)
							tmp18->set_x((int)0);
						}
					}
				}
				else{
					HX_STACK_LINE(468)
					::flixel::math::FlxPoint tmp9 = this->drag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(468)
					tmp9->set_y((int)0);
				}
			}
			else{
				HX_STACK_LINE(471)
				::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(471)
				Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(471)
				bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				if ((tmp8)){
					HX_STACK_LINE(474)
					int tmp9 = this->touching;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(474)
					int tmp10 = (int(tmp9) & int((int)17));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(474)
					bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(474)
					if ((tmp11)){
						HX_STACK_LINE(477)
						::flixel::math::FlxPoint tmp12 = this->drag;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(477)
						Float tmp13 = this->frictionY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(477)
						tmp12->set_y(tmp13);
						HX_STACK_LINE(479)
						int tmp14 = this->wasTouching;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(479)
						int tmp15 = (int(tmp14) & int((int)17));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(479)
						bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(479)
						if ((tmp16)){
							HX_STACK_LINE(481)
							::flixel::math::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(481)
							Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(481)
							Float tmp19 = this->toleranceX;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(481)
							Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(481)
							bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(481)
							if ((tmp21)){
								HX_STACK_LINE(483)
								::flixel::math::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(483)
								tmp22->set_x((int)0);
							}
						}
					}
					else{
						HX_STACK_LINE(489)
						::flixel::math::FlxPoint tmp12 = this->drag;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(489)
						tmp12->set_y((int)0);
					}
				}
			}
		}
		HX_STACK_LINE(495)
		::flixel::math::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		if ((tmp5)){
			HX_STACK_LINE(497)
			::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			if ((tmp8)){
				HX_STACK_LINE(500)
				int tmp9 = this->touching;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(500)
				int tmp10 = (int(tmp9) & int((int)256));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(500)
				bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				if ((tmp11)){
					HX_STACK_LINE(502)
					::flixel::math::FlxPoint tmp12 = this->drag;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(502)
					Float tmp13 = this->frictionX;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(502)
					tmp12->set_x(tmp13);
					HX_STACK_LINE(504)
					int tmp14 = this->wasTouching;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(504)
					int tmp15 = (int(tmp14) & int((int)256));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(504)
					bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(504)
					if ((tmp16)){
						HX_STACK_LINE(506)
						::flixel::math::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(506)
						Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(506)
						Float tmp19 = this->toleranceY;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(506)
						bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(506)
						if ((tmp20)){
							HX_STACK_LINE(508)
							::flixel::math::FlxPoint tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(508)
							tmp21->set_y((int)0);
						}
					}
				}
				else{
					HX_STACK_LINE(514)
					::flixel::math::FlxPoint tmp12 = this->drag;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(514)
					tmp12->set_x((int)0);
				}
			}
			else{
				HX_STACK_LINE(517)
				::flixel::math::FlxPoint tmp9 = this->acceleration;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(517)
				bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(517)
				if ((tmp11)){
					HX_STACK_LINE(520)
					int tmp12 = this->touching;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(520)
					int tmp13 = (int(tmp12) & int((int)4096));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(520)
					bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(520)
					if ((tmp14)){
						HX_STACK_LINE(523)
						::flixel::math::FlxPoint tmp15 = this->drag;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(523)
						Float tmp16 = this->frictionX;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(523)
						tmp15->set_x(tmp16);
						HX_STACK_LINE(525)
						int tmp17 = this->wasTouching;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(525)
						int tmp18 = (int(tmp17) & int((int)4096));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(525)
						bool tmp19 = (tmp18 == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(525)
						if ((tmp19)){
							HX_STACK_LINE(527)
							::flixel::math::FlxPoint tmp20 = this->velocity;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(527)
							Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(527)
							Float tmp22 = this->toleranceY;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(527)
							Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(527)
							bool tmp24 = (tmp21 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(527)
							if ((tmp24)){
								HX_STACK_LINE(529)
								::flixel::math::FlxPoint tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								tmp25->set_y((int)0);
							}
						}
					}
					else{
						HX_STACK_LINE(535)
						::flixel::math::FlxPoint tmp15 = this->drag;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(535)
						tmp15->set_x((int)0);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateGravity,(void))

Void FlxExtendedSprite_obj::updateDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","updateDrag",0x52262cb0,"flixel.addons.display.FlxExtendedSprite.updateDrag","flixel/addons/display/FlxExtendedSprite.hx",545,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		bool tmp = this->_allowHorizontalDrag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		if ((tmp1)){
		}
		HX_STACK_LINE(554)
		bool tmp2 = this->_allowVerticalDrag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(554)
		if ((tmp3)){
		}
		HX_STACK_LINE(561)
		::flixel::math::FlxRect tmp4 = this->boundsRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(561)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		if ((tmp5)){
			HX_STACK_LINE(563)
			this->checkBoundsRect();
		}
		HX_STACK_LINE(566)
		::flixel::FlxSprite tmp6 = this->boundsSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(566)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(566)
		if ((tmp7)){
			HX_STACK_LINE(568)
			this->checkBoundsSprite();
		}
		HX_STACK_LINE(571)
		bool tmp8 = this->_snapOnDrag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		if ((tmp8)){
			HX_STACK_LINE(573)
			Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(573)
			int tmp10 = this->_snapX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(573)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(573)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(573)
			int tmp13 = this->_snapX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(573)
			int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(573)
			this->set_x(tmp14);
			HX_STACK_LINE(574)
			Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(574)
			int tmp16 = this->_snapY;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(574)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(574)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(574)
			int tmp19 = this->_snapY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(574)
			int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(574)
			this->set_y(tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateDrag,(void))

Void FlxExtendedSprite_obj::checkForClick( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkForClick",0x015d1934,"flixel.addons.display.FlxExtendedSprite.checkForClick","flixel/addons/display/FlxExtendedSprite.hx",583,0xe2826ec4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkForClick,(void))

Void FlxExtendedSprite_obj::startDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","startDrag",0x579e32c3,"flixel.addons.display.FlxExtendedSprite.startDrag","flixel/addons/display/FlxExtendedSprite.hx",663,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(663)
		this->isDragged = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,startDrag,(void))

Void FlxExtendedSprite_obj::checkBoundsRect( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkBoundsRect",0x102b4a2e,"flixel.addons.display.FlxExtendedSprite.checkBoundsRect","flixel/addons/display/FlxExtendedSprite.hx",689,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(690)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(690)
		::flixel::math::FlxRect tmp1 = this->boundsRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(690)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(690)
		bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(690)
		if ((tmp3)){
			HX_STACK_LINE(692)
			::flixel::math::FlxRect tmp4 = this->boundsRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(692)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(692)
			this->set_x(tmp5);
		}
		else{
			HX_STACK_LINE(694)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(694)
			Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(694)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(694)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				::flixel::math::FlxRect tmp8 = this->boundsRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(694)
				::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(694)
				tmp7 = (_this->x + _this->width);
			}
			HX_STACK_LINE(694)
			bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(694)
			if ((tmp8)){
				HX_STACK_LINE(696)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					::flixel::math::FlxRect tmp10 = this->boundsRect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(696)
					::flixel::math::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(696)
					tmp9 = (_this->x + _this->width);
				}
				HX_STACK_LINE(696)
				Float tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(696)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(696)
				this->set_x(tmp11);
			}
		}
		HX_STACK_LINE(699)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(699)
		::flixel::math::FlxRect tmp5 = this->boundsRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(699)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(699)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(699)
		if ((tmp7)){
			HX_STACK_LINE(701)
			::flixel::math::FlxRect tmp8 = this->boundsRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(701)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(701)
			this->set_y(tmp9);
		}
		else{
			HX_STACK_LINE(703)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(703)
			{
				HX_STACK_LINE(703)
				::flixel::math::FlxRect tmp12 = this->boundsRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(703)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(703)
				tmp11 = (_this->y + _this->height);
			}
			HX_STACK_LINE(703)
			bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(703)
			if ((tmp12)){
				HX_STACK_LINE(705)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					::flixel::math::FlxRect tmp14 = this->boundsRect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(705)
					::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(705)
					tmp13 = (_this->y + _this->height);
				}
				HX_STACK_LINE(705)
				Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(705)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(705)
				this->set_y(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsRect,(void))

Void FlxExtendedSprite_obj::checkBoundsSprite( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkBoundsSprite",0xaedaaf8f,"flixel.addons.display.FlxExtendedSprite.checkBoundsSprite","flixel/addons/display/FlxExtendedSprite.hx",713,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(714)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		::flixel::FlxSprite tmp1 = this->boundsSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(714)
		bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(714)
		if ((tmp3)){
			HX_STACK_LINE(716)
			::flixel::FlxSprite tmp4 = this->boundsSprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(716)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(716)
			this->set_x(tmp5);
		}
		else{
			HX_STACK_LINE(718)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(718)
			Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(718)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(718)
			::flixel::FlxSprite tmp7 = this->boundsSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(718)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(718)
			::flixel::FlxSprite tmp9 = this->boundsSprite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(718)
			Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(718)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(718)
			bool tmp12 = (tmp6 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(718)
			if ((tmp12)){
				HX_STACK_LINE(720)
				::flixel::FlxSprite tmp13 = this->boundsSprite;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(720)
				Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(720)
				::flixel::FlxSprite tmp15 = this->boundsSprite;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(720)
				Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(720)
				Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(720)
				Float tmp18 = this->get_width();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(720)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(720)
				this->set_x(tmp19);
			}
		}
		HX_STACK_LINE(723)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(723)
		::flixel::FlxSprite tmp5 = this->boundsSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(723)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(723)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(723)
		if ((tmp7)){
			HX_STACK_LINE(725)
			::flixel::FlxSprite tmp8 = this->boundsSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(725)
			this->set_y(tmp9);
		}
		else{
			HX_STACK_LINE(727)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(727)
			Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(727)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(727)
			::flixel::FlxSprite tmp11 = this->boundsSprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(727)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(727)
			::flixel::FlxSprite tmp13 = this->boundsSprite;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(727)
			Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(727)
			Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(727)
			bool tmp16 = (tmp10 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(727)
			if ((tmp16)){
				HX_STACK_LINE(729)
				::flixel::FlxSprite tmp17 = this->boundsSprite;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(729)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(729)
				::flixel::FlxSprite tmp19 = this->boundsSprite;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(729)
				Float tmp20 = tmp19->get_height();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(729)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(729)
				Float tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(729)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(729)
				this->set_y(tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsSprite,(void))

Void FlxExtendedSprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","stopDrag",0x5f9fcc69,"flixel.addons.display.FlxExtendedSprite.stopDrag","flixel/addons/display/FlxExtendedSprite.hx",737,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(738)
		this->isDragged = false;
		HX_STACK_LINE(740)
		bool tmp = this->_snapOnRelease;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(740)
		if ((tmp)){
			HX_STACK_LINE(742)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(742)
			int tmp2 = this->_snapX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(742)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(742)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(742)
			int tmp5 = this->_snapX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(742)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(742)
			this->set_x(tmp6);
			HX_STACK_LINE(743)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(743)
			int tmp8 = this->_snapY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(743)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(743)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(743)
			int tmp11 = this->_snapY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(743)
			int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(743)
			this->set_y(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,stopDrag,(void))

Void FlxExtendedSprite_obj::setGravity( int GravityX,int GravityY,hx::Null< Float >  __o_FrictionX,hx::Null< Float >  __o_FrictionY,hx::Null< Float >  __o_ToleranceX,hx::Null< Float >  __o_ToleranceY){
Float FrictionX = __o_FrictionX.Default(500);
Float FrictionY = __o_FrictionY.Default(500);
Float ToleranceX = __o_ToleranceX.Default(10);
Float ToleranceY = __o_ToleranceY.Default(10);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","setGravity",0x21dfa8df,"flixel.addons.display.FlxExtendedSprite.setGravity","flixel/addons/display/FlxExtendedSprite.hx",766,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GravityX,"GravityX")
	HX_STACK_ARG(GravityY,"GravityY")
	HX_STACK_ARG(FrictionX,"FrictionX")
	HX_STACK_ARG(FrictionY,"FrictionY")
	HX_STACK_ARG(ToleranceX,"ToleranceX")
	HX_STACK_ARG(ToleranceY,"ToleranceY")
{
		HX_STACK_LINE(767)
		this->hasGravity = true;
		HX_STACK_LINE(769)
		this->gravityX = GravityX;
		HX_STACK_LINE(770)
		this->gravityY = GravityY;
		HX_STACK_LINE(772)
		this->frictionX = FrictionX;
		HX_STACK_LINE(773)
		this->frictionY = FrictionY;
		HX_STACK_LINE(775)
		this->toleranceX = ToleranceX;
		HX_STACK_LINE(776)
		this->toleranceY = ToleranceY;
		HX_STACK_LINE(778)
		bool tmp = (GravityX == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(778)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(778)
		if ((tmp)){
			HX_STACK_LINE(778)
			tmp1 = (GravityY == (int)0);
		}
		else{
			HX_STACK_LINE(778)
			tmp1 = false;
		}
		HX_STACK_LINE(778)
		if ((tmp1)){
			HX_STACK_LINE(780)
			this->hasGravity = false;
		}
		HX_STACK_LINE(783)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(783)
		int tmp3 = GravityX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(783)
		tmp2->set_x(tmp3);
		HX_STACK_LINE(784)
		::flixel::math::FlxPoint tmp4 = this->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(784)
		int tmp5 = GravityY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(784)
		tmp4->set_y(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxExtendedSprite_obj,setGravity,(void))

Void FlxExtendedSprite_obj::flipGravity( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","flipGravity",0x12621dae,"flixel.addons.display.FlxExtendedSprite.flipGravity","flixel/addons/display/FlxExtendedSprite.hx",792,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(793)
		int tmp = this->gravityX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(793)
		bool tmp1 = ::Math_obj::isNaN(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(793)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(793)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(793)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(793)
		if ((tmp3)){
			HX_STACK_LINE(793)
			int tmp5 = this->gravityX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(793)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(793)
			tmp4 = (tmp6 != (int)0);
		}
		else{
			HX_STACK_LINE(793)
			tmp4 = false;
		}
		HX_STACK_LINE(793)
		if ((tmp4)){
			HX_STACK_LINE(795)
			int tmp5 = this->gravityX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(795)
			int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(795)
			this->gravityX = tmp6;
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(796)
			int tmp8 = this->gravityX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(796)
			tmp7->set_x(tmp8);
		}
		HX_STACK_LINE(799)
		int tmp5 = this->gravityY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(799)
		bool tmp6 = ::Math_obj::isNaN(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(799)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(799)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(799)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(799)
		if ((tmp8)){
			HX_STACK_LINE(799)
			int tmp10 = this->gravityY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(799)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(799)
			tmp9 = (tmp11 != (int)0);
		}
		else{
			HX_STACK_LINE(799)
			tmp9 = false;
		}
		HX_STACK_LINE(799)
		if ((tmp9)){
			HX_STACK_LINE(801)
			int tmp10 = this->gravityY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(801)
			int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(801)
			this->gravityY = tmp11;
			HX_STACK_LINE(802)
			::flixel::math::FlxPoint tmp12 = this->acceleration;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(802)
			int tmp13 = this->gravityY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(802)
			tmp12->set_y(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,flipGravity,(void))

int FlxExtendedSprite_obj::get_clicks( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_clicks",0x51d6c907,"flixel.addons.display.FlxExtendedSprite.get_clicks","flixel/addons/display/FlxExtendedSprite.hx",807,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(808)
	int tmp = this->_clickCounter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(808)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_clicks,return )

int FlxExtendedSprite_obj::set_clicks( int NewValue){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","set_clicks",0x5554677b,"flixel.addons.display.FlxExtendedSprite.set_clicks","flixel/addons/display/FlxExtendedSprite.hx",812,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewValue,"NewValue")
	HX_STACK_LINE(813)
	int tmp = this->_clickCounter = NewValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(813)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_clicks,return )

int FlxExtendedSprite_obj::get_springX( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_springX",0xaf72b78f,"flixel.addons.display.FlxExtendedSprite.get_springX","flixel/addons/display/FlxExtendedSprite.hx",817,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(818)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	int tmp1 = this->springOffsetX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(818)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(818)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springX,return )

int FlxExtendedSprite_obj::get_springY( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_springY",0xaf72b790,"flixel.addons.display.FlxExtendedSprite.get_springY","flixel/addons/display/FlxExtendedSprite.hx",822,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	int tmp1 = this->springOffsetY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(823)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(823)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(823)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springY,return )

::flixel::math::FlxPoint FlxExtendedSprite_obj::get_point( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_point",0x66739df4,"flixel.addons.display.FlxExtendedSprite.get_point","flixel/addons/display/FlxExtendedSprite.hx",827,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(828)
	::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_point,return )

::flixel::math::FlxPoint FlxExtendedSprite_obj::set_point( ::flixel::math::FlxPoint NewPoint){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","set_point",0x49c48a00,"flixel.addons.display.FlxExtendedSprite.set_point","flixel/addons/display/FlxExtendedSprite.hx",832,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewPoint,"NewPoint")
	HX_STACK_LINE(833)
	::flixel::math::FlxPoint tmp = this->_point = NewPoint;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_point,return )

::flixel::math::FlxRect FlxExtendedSprite_obj::get_rect( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_rect",0x95d76400,"flixel.addons.display.FlxExtendedSprite.get_rect","flixel/addons/display/FlxExtendedSprite.hx",872,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(873)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(873)
	::flixel::math::FlxRect tmp1 = this->_rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(873)
	tmp1->x = tmp;
	HX_STACK_LINE(874)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(874)
	::flixel::math::FlxRect tmp3 = this->_rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(874)
	tmp3->y = tmp2;
	HX_STACK_LINE(875)
	Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(875)
	::flixel::math::FlxRect tmp5 = this->_rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(875)
	tmp5->width = tmp4;
	HX_STACK_LINE(876)
	Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(876)
	::flixel::math::FlxRect tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(876)
	tmp7->height = tmp6;
	HX_STACK_LINE(878)
	::flixel::math::FlxRect tmp8 = this->_rect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(878)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_rect,return )


FlxExtendedSprite_obj::FlxExtendedSprite_obj()
{
}

void FlxExtendedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxExtendedSprite);
	HX_MARK_MEMBER_NAME(priorityID,"priorityID");
	HX_MARK_MEMBER_NAME(isPressed,"isPressed");
	HX_MARK_MEMBER_NAME(clickable,"clickable");
	HX_MARK_MEMBER_NAME(throwable,"throwable");
	HX_MARK_MEMBER_NAME(boundsRect,"boundsRect");
	HX_MARK_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_MARK_MEMBER_NAME(hasGravity,"hasGravity");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(frictionX,"frictionX");
	HX_MARK_MEMBER_NAME(frictionY,"frictionY");
	HX_MARK_MEMBER_NAME(toleranceX,"toleranceX");
	HX_MARK_MEMBER_NAME(toleranceY,"toleranceY");
	HX_MARK_MEMBER_NAME(isDragged,"isDragged");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_MARK_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_MARK_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_MARK_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_MARK_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_MARK_MEMBER_NAME(_snapX,"_snapX");
	HX_MARK_MEMBER_NAME(_snapY,"_snapY");
	HX_MARK_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_MARK_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_MARK_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_MARK_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_MARK_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_MARK_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_MARK_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_MARK_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_MARK_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_MARK_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_MARK_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxExtendedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priorityID,"priorityID");
	HX_VISIT_MEMBER_NAME(isPressed,"isPressed");
	HX_VISIT_MEMBER_NAME(clickable,"clickable");
	HX_VISIT_MEMBER_NAME(throwable,"throwable");
	HX_VISIT_MEMBER_NAME(boundsRect,"boundsRect");
	HX_VISIT_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_VISIT_MEMBER_NAME(hasGravity,"hasGravity");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(frictionX,"frictionX");
	HX_VISIT_MEMBER_NAME(frictionY,"frictionY");
	HX_VISIT_MEMBER_NAME(toleranceX,"toleranceX");
	HX_VISIT_MEMBER_NAME(toleranceY,"toleranceY");
	HX_VISIT_MEMBER_NAME(isDragged,"isDragged");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_VISIT_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_VISIT_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_VISIT_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_VISIT_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_VISIT_MEMBER_NAME(_snapX,"_snapX");
	HX_VISIT_MEMBER_NAME(_snapY,"_snapY");
	HX_VISIT_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_VISIT_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_VISIT_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_VISIT_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_VISIT_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_VISIT_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_VISIT_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxExtendedSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { if (inCallProp == hx::paccAlways) return get_rect(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == hx::paccAlways) return get_point(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == hx::paccAlways) return get_clicks(); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { return _snapX; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { return _snapY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"springX") ) { if (inCallProp == hx::paccAlways) return get_springX(); }
		if (HX_FIELD_EQ(inName,"springY") ) { if (inCallProp == hx::paccAlways) return get_springY(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { return isPressed; }
		if (HX_FIELD_EQ(inName,"clickable") ) { return clickable; }
		if (HX_FIELD_EQ(inName,"throwable") ) { return throwable; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { return frictionX; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { return frictionY; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { return isDragged; }
		if (HX_FIELD_EQ(inName,"draggable") ) { return draggable; }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_point") ) { return get_point_dyn(); }
		if (HX_FIELD_EQ(inName,"set_point") ) { return set_point_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { return priorityID; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { return boundsRect; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { return hasGravity; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { return toleranceX; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { return toleranceY; }
		if (HX_FIELD_EQ(inName,"updateDrag") ) { return updateDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clicks") ) { return get_clicks_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clicks") ) { return set_clicks_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { return _snapOnDrag; }
		if (HX_FIELD_EQ(inName,"setDragLock") ) { return setDragLock_dyn(); }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_springX") ) { return get_springX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_springY") ) { return get_springY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { return boundsSprite; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { return _dragOffsetX; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { return _dragOffsetY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { return springOffsetX; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { return springOffsetY; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { return _clickCounter; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { return _throwXFactor; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { return _throwYFactor; }
		if (HX_FIELD_EQ(inName,"updateGravity") ) { return updateGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"checkForClick") ) { return checkForClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { return _snapOnRelease; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { return _dragFromPoint; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { return springOnPressed; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { return _clickOnRelease; }
		if (HX_FIELD_EQ(inName,"checkBoundsRect") ) { return checkBoundsRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { return _dragPixelPerfect; }
		if (HX_FIELD_EQ(inName,"checkBoundsSprite") ) { return checkBoundsSprite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { return _clickPixelPerfect; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { return _allowVerticalDrag; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { return _allowHorizontalDrag; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { return _dragPixelPerfectAlpha; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { return _clickPixelPerfectAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxExtendedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == hx::paccAlways) return set_point(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == hx::paccAlways) return set_clicks(inValue); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { _snapX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { _snapY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { isPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickable") ) { clickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throwable") ) { throwable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { frictionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { frictionY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { isDragged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { priorityID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { boundsRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { hasGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { toleranceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { toleranceY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { _snapOnDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { boundsSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { _dragOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { _dragOffsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { springOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { springOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { _clickCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { _throwXFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { _throwYFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { _snapOnRelease=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { _dragFromPoint=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { springOnPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { _clickOnRelease=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { _dragPixelPerfect=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { _clickPixelPerfect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { _allowVerticalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { _allowHorizontalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { _dragPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { _clickPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxExtendedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("priorityID","\x3f","\x5c","\x5f","\xe4"));
	outFields->push(HX_HCSTRING("isPressed","\xd8","\x4f","\xe5","\x3d"));
	outFields->push(HX_HCSTRING("clickable","\xe2","\xad","\x8e","\x34"));
	outFields->push(HX_HCSTRING("throwable","\xc0","\x55","\x25","\x7d"));
	outFields->push(HX_HCSTRING("boundsRect","\x39","\xde","\xba","\x7e"));
	outFields->push(HX_HCSTRING("boundsSprite","\x5a","\x9c","\x7f","\x8f"));
	outFields->push(HX_HCSTRING("hasGravity","\x14","\x56","\xb3","\x02"));
	outFields->push(HX_HCSTRING("gravityX","\x4a","\x16","\x81","\x87"));
	outFields->push(HX_HCSTRING("gravityY","\x4b","\x16","\x81","\x87"));
	outFields->push(HX_HCSTRING("frictionX","\x1e","\x62","\x80","\x38"));
	outFields->push(HX_HCSTRING("frictionY","\x1f","\x62","\x80","\x38"));
	outFields->push(HX_HCSTRING("toleranceX","\xab","\x2e","\x39","\xd9"));
	outFields->push(HX_HCSTRING("toleranceY","\xac","\x2e","\x39","\xd9"));
	outFields->push(HX_HCSTRING("isDragged","\x48","\xc2","\x51","\xf5"));
	outFields->push(HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d"));
	outFields->push(HX_HCSTRING("springOnPressed","\xb6","\xd2","\x05","\x91"));
	outFields->push(HX_HCSTRING("springOffsetX","\x18","\x7e","\x8c","\xa6"));
	outFields->push(HX_HCSTRING("springOffsetY","\x19","\x7e","\x8c","\xa6"));
	outFields->push(HX_HCSTRING("clicks","\x2b","\x43","\x4e","\x0a"));
	outFields->push(HX_HCSTRING("springX","\xeb","\x1c","\x86","\x5f"));
	outFields->push(HX_HCSTRING("springY","\xec","\x1c","\x86","\x5f"));
	outFields->push(HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("_snapOnDrag","\xbc","\x9f","\xc8","\xce"));
	outFields->push(HX_HCSTRING("_snapOnRelease","\xff","\x9e","\x51","\x9b"));
	outFields->push(HX_HCSTRING("_snapX","\x0f","\x72","\xfb","\x7b"));
	outFields->push(HX_HCSTRING("_snapY","\x10","\x72","\xfb","\x7b"));
	outFields->push(HX_HCSTRING("_clickOnRelease","\x9f","\x21","\xaf","\xfe"));
	outFields->push(HX_HCSTRING("_clickPixelPerfect","\x50","\xdc","\x03","\x38"));
	outFields->push(HX_HCSTRING("_clickPixelPerfectAlpha","\xee","\x98","\xcf","\x11"));
	outFields->push(HX_HCSTRING("_clickCounter","\x73","\x86","\xf2","\xf1"));
	outFields->push(HX_HCSTRING("_throwXFactor","\xc0","\xa5","\xd3","\x19"));
	outFields->push(HX_HCSTRING("_throwYFactor","\x81","\x1c","\x69","\x43"));
	outFields->push(HX_HCSTRING("_dragPixelPerfect","\x9a","\xa7","\x19","\xc0"));
	outFields->push(HX_HCSTRING("_dragPixelPerfectAlpha","\x64","\xa1","\x42","\x26"));
	outFields->push(HX_HCSTRING("_dragOffsetX","\xd2","\xd9","\x8f","\xf3"));
	outFields->push(HX_HCSTRING("_dragOffsetY","\xd3","\xd9","\x8f","\xf3"));
	outFields->push(HX_HCSTRING("_dragFromPoint","\x33","\x24","\xea","\x13"));
	outFields->push(HX_HCSTRING("_allowHorizontalDrag","\x62","\x64","\x99","\x55"));
	outFields->push(HX_HCSTRING("_allowVerticalDrag","\x74","\x46","\xda","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,priorityID),HX_HCSTRING("priorityID","\x3f","\x5c","\x5f","\xe4")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isPressed),HX_HCSTRING("isPressed","\xd8","\x4f","\xe5","\x3d")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,clickable),HX_HCSTRING("clickable","\xe2","\xad","\x8e","\x34")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,throwable),HX_HCSTRING("throwable","\xc0","\x55","\x25","\x7d")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxExtendedSprite_obj,boundsRect),HX_HCSTRING("boundsRect","\x39","\xde","\xba","\x7e")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxExtendedSprite_obj,boundsSprite),HX_HCSTRING("boundsSprite","\x5a","\x9c","\x7f","\x8f")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,hasGravity),HX_HCSTRING("hasGravity","\x14","\x56","\xb3","\x02")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityX),HX_HCSTRING("gravityX","\x4a","\x16","\x81","\x87")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityY),HX_HCSTRING("gravityY","\x4b","\x16","\x81","\x87")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionX),HX_HCSTRING("frictionX","\x1e","\x62","\x80","\x38")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionY),HX_HCSTRING("frictionY","\x1f","\x62","\x80","\x38")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceX),HX_HCSTRING("toleranceX","\xab","\x2e","\x39","\xd9")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceY),HX_HCSTRING("toleranceY","\xac","\x2e","\x39","\xd9")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isDragged),HX_HCSTRING("isDragged","\x48","\xc2","\x51","\xf5")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,draggable),HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,springOnPressed),HX_HCSTRING("springOnPressed","\xb6","\xd2","\x05","\x91")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetX),HX_HCSTRING("springOffsetX","\x18","\x7e","\x8c","\xa6")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetY),HX_HCSTRING("springOffsetY","\x19","\x7e","\x8c","\xa6")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnDrag),HX_HCSTRING("_snapOnDrag","\xbc","\x9f","\xc8","\xce")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnRelease),HX_HCSTRING("_snapOnRelease","\xff","\x9e","\x51","\x9b")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapX),HX_HCSTRING("_snapX","\x0f","\x72","\xfb","\x7b")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapY),HX_HCSTRING("_snapY","\x10","\x72","\xfb","\x7b")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickOnRelease),HX_HCSTRING("_clickOnRelease","\x9f","\x21","\xaf","\xfe")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfect),HX_HCSTRING("_clickPixelPerfect","\x50","\xdc","\x03","\x38")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfectAlpha),HX_HCSTRING("_clickPixelPerfectAlpha","\xee","\x98","\xcf","\x11")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickCounter),HX_HCSTRING("_clickCounter","\x73","\x86","\xf2","\xf1")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwXFactor),HX_HCSTRING("_throwXFactor","\xc0","\xa5","\xd3","\x19")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwYFactor),HX_HCSTRING("_throwYFactor","\x81","\x1c","\x69","\x43")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfect),HX_HCSTRING("_dragPixelPerfect","\x9a","\xa7","\x19","\xc0")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfectAlpha),HX_HCSTRING("_dragPixelPerfectAlpha","\x64","\xa1","\x42","\x26")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetX),HX_HCSTRING("_dragOffsetX","\xd2","\xd9","\x8f","\xf3")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetY),HX_HCSTRING("_dragOffsetY","\xd3","\xd9","\x8f","\xf3")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragFromPoint),HX_HCSTRING("_dragFromPoint","\x33","\x24","\xea","\x13")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowHorizontalDrag),HX_HCSTRING("_allowHorizontalDrag","\x62","\x64","\x99","\x55")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowVerticalDrag),HX_HCSTRING("_allowVerticalDrag","\x74","\x46","\xda","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("priorityID","\x3f","\x5c","\x5f","\xe4"),
	HX_HCSTRING("isPressed","\xd8","\x4f","\xe5","\x3d"),
	HX_HCSTRING("clickable","\xe2","\xad","\x8e","\x34"),
	HX_HCSTRING("throwable","\xc0","\x55","\x25","\x7d"),
	HX_HCSTRING("boundsRect","\x39","\xde","\xba","\x7e"),
	HX_HCSTRING("boundsSprite","\x5a","\x9c","\x7f","\x8f"),
	HX_HCSTRING("hasGravity","\x14","\x56","\xb3","\x02"),
	HX_HCSTRING("gravityX","\x4a","\x16","\x81","\x87"),
	HX_HCSTRING("gravityY","\x4b","\x16","\x81","\x87"),
	HX_HCSTRING("frictionX","\x1e","\x62","\x80","\x38"),
	HX_HCSTRING("frictionY","\x1f","\x62","\x80","\x38"),
	HX_HCSTRING("toleranceX","\xab","\x2e","\x39","\xd9"),
	HX_HCSTRING("toleranceY","\xac","\x2e","\x39","\xd9"),
	HX_HCSTRING("isDragged","\x48","\xc2","\x51","\xf5"),
	HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d"),
	HX_HCSTRING("springOnPressed","\xb6","\xd2","\x05","\x91"),
	HX_HCSTRING("springOffsetX","\x18","\x7e","\x8c","\xa6"),
	HX_HCSTRING("springOffsetY","\x19","\x7e","\x8c","\xa6"),
	HX_HCSTRING("_snapOnDrag","\xbc","\x9f","\xc8","\xce"),
	HX_HCSTRING("_snapOnRelease","\xff","\x9e","\x51","\x9b"),
	HX_HCSTRING("_snapX","\x0f","\x72","\xfb","\x7b"),
	HX_HCSTRING("_snapY","\x10","\x72","\xfb","\x7b"),
	HX_HCSTRING("_clickOnRelease","\x9f","\x21","\xaf","\xfe"),
	HX_HCSTRING("_clickPixelPerfect","\x50","\xdc","\x03","\x38"),
	HX_HCSTRING("_clickPixelPerfectAlpha","\xee","\x98","\xcf","\x11"),
	HX_HCSTRING("_clickCounter","\x73","\x86","\xf2","\xf1"),
	HX_HCSTRING("_throwXFactor","\xc0","\xa5","\xd3","\x19"),
	HX_HCSTRING("_throwYFactor","\x81","\x1c","\x69","\x43"),
	HX_HCSTRING("_dragPixelPerfect","\x9a","\xa7","\x19","\xc0"),
	HX_HCSTRING("_dragPixelPerfectAlpha","\x64","\xa1","\x42","\x26"),
	HX_HCSTRING("_dragOffsetX","\xd2","\xd9","\x8f","\xf3"),
	HX_HCSTRING("_dragOffsetY","\xd3","\xd9","\x8f","\xf3"),
	HX_HCSTRING("_dragFromPoint","\x33","\x24","\xea","\x13"),
	HX_HCSTRING("_allowHorizontalDrag","\x62","\x64","\x99","\x55"),
	HX_HCSTRING("_allowVerticalDrag","\x74","\x46","\xda","\xfd"),
	HX_HCSTRING("setDragLock","\xc1","\xc7","\x18","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateGravity","\x45","\xd3","\x6d","\x43"),
	HX_HCSTRING("updateDrag","\x9d","\x16","\x25","\xfb"),
	HX_HCSTRING("checkForClick","\x67","\x61","\x7d","\x2a"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("checkBoundsRect","\x21","\x45","\x14","\xf8"),
	HX_HCSTRING("checkBoundsSprite","\x42","\x8d","\x2e","\x1f"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("setGravity","\xcc","\x92","\xde","\xca"),
	HX_HCSTRING("flipGravity","\x21","\xe3","\x6f","\x48"),
	HX_HCSTRING("get_clicks","\xf4","\xb2","\xd5","\xfa"),
	HX_HCSTRING("set_clicks","\x68","\x51","\x53","\xfe"),
	HX_HCSTRING("get_springX","\x02","\x7d","\x80","\xe5"),
	HX_HCSTRING("get_springY","\x03","\x7d","\x80","\xe5"),
	HX_HCSTRING("get_point","\xa7","\x10","\x39","\x0a"),
	HX_HCSTRING("set_point","\xb3","\xfc","\x89","\xed"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxExtendedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxExtendedSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxExtendedSprite_obj::__mClass;

void FlxExtendedSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.FlxExtendedSprite","\x7b","\xbb","\xe3","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxExtendedSprite_obj >;
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

} // end namespace flixel
} // end namespace addons
} // end namespace display
