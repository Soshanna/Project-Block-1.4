#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouseEventManager_ObjectMouseData
#include <flixel/input/mouse/_FlxMouseEventManager/ObjectMouseData.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouseEventManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","new",0xae332b17,"flixel.input.mouse.FlxMouseEventManager.new","flixel/input/mouse/FlxMouseEventManager.hx",321,0x750c3856)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(322)
	super::__construct();
	HX_STACK_LINE(324)
	bool tmp = (::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	if ((tmp)){
		HX_STACK_LINE(326)
		this->clearRegistry();
	}
	HX_STACK_LINE(328)
	::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(329)
	::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//FlxMouseEventManager_obj::~FlxMouseEventManager_obj() { }

Dynamic FlxMouseEventManager_obj::__CreateEmpty() { return  new FlxMouseEventManager_obj; }
hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__new()
{  hx::ObjectPtr< FlxMouseEventManager_obj > _result_ = new FlxMouseEventManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxMouseEventManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseEventManager_obj > _result_ = new FlxMouseEventManager_obj();
	_result_->__construct();
	return _result_;}

Void FlxMouseEventManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","destroy",0x1c6eaf31,"flixel.input.mouse.FlxMouseEventManager.destroy","flixel/input/mouse/FlxMouseEventManager.hx",333,0x750c3856)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		this->clearRegistry();
		HX_STACK_LINE(335)
		::flixel::math::FlxPoint tmp = ::flixel::input::mouse::FlxMouseEventManager_obj::_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		::flixel::input::mouse::FlxMouseEventManager_obj::_point = tmp1;
		HX_STACK_LINE(336)
		this->super::destroy();
	}
return null();
}


Void FlxMouseEventManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","update",0x84b077b2,"flixel.input.mouse.FlxMouseEventManager.update","flixel/input/mouse/FlxMouseEventManager.hx",340,0x750c3856)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(341)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		this->super::update(tmp);
		HX_STACK_LINE(343)
		Array< ::Dynamic > currentOverObjects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(currentOverObjects,"currentOverObjects");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			Array< ::Dynamic > _g1 = ::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(345)
			while((true)){
				HX_STACK_LINE(345)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(345)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(345)
				if ((tmp2)){
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(345)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(345)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp3;		HX_STACK_VAR(reg,"reg");
				HX_STACK_LINE(345)
				++(_g);
				HX_STACK_LINE(348)
				::flixel::math::FlxPoint tmp4 = reg->object->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(348)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(348)
				if ((tmp5)){
					HX_STACK_LINE(350)
					::flixel::FlxObject tmp6 = reg->object;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(350)
					::flixel::input::mouse::FlxMouseEventManager_obj::remove(tmp6);
					HX_STACK_LINE(351)
					continue;
				}
				HX_STACK_LINE(354)
				bool tmp6 = reg->object->alive;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(354)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(354)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(354)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(354)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(354)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(354)
				if ((tmp10)){
					HX_STACK_LINE(354)
					bool tmp12 = reg->object->exists;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(354)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(354)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(354)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(354)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(354)
					tmp11 = !(tmp16);
				}
				else{
					HX_STACK_LINE(354)
					tmp11 = true;
				}
				HX_STACK_LINE(354)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(354)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(354)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(354)
				if ((tmp13)){
					HX_STACK_LINE(354)
					bool tmp15 = reg->object->visible;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(354)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(354)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(354)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(354)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(354)
					tmp14 = !(tmp19);
				}
				else{
					HX_STACK_LINE(354)
					tmp14 = true;
				}
				HX_STACK_LINE(354)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(354)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(354)
				if ((tmp15)){
					HX_STACK_LINE(354)
					bool tmp17 = reg->mouseEnabled;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(354)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(354)
					tmp16 = !(tmp18);
				}
				else{
					HX_STACK_LINE(354)
					tmp16 = true;
				}
				HX_STACK_LINE(354)
				if ((tmp16)){
					HX_STACK_LINE(356)
					continue;
				}
				HX_STACK_LINE(359)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp17 = reg;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(359)
				bool tmp18 = this->checkOverlap(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(359)
				if ((tmp18)){
					HX_STACK_LINE(361)
					::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp19 = reg;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(361)
					currentOverObjects->push(tmp19);
					HX_STACK_LINE(363)
					bool tmp20 = reg->mouseChildren;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(363)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(363)
					if ((tmp21)){
						HX_STACK_LINE(365)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				bool tmp1 = (_g < currentOverObjects->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(371)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				if ((tmp2)){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = currentOverObjects->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData current = tmp3;		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(373)
				bool tmp4 = (current->onMouseOver != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				if ((tmp4)){
					HX_STACK_LINE(375)
					bool tmp5 = current->object->exists;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(375)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(375)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(375)
					if ((tmp6)){
						HX_STACK_LINE(375)
						tmp7 = current->object->visible;
					}
					else{
						HX_STACK_LINE(375)
						tmp7 = false;
					}
					HX_STACK_LINE(375)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(375)
					if ((tmp7)){
						HX_STACK_LINE(375)
						::flixel::FlxObject tmp9 = current->object;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(375)
						::flixel::FlxObject tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(375)
						::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp11 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp10,::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(375)
						::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(375)
						tmp8 = (tmp12 == null());
					}
					else{
						HX_STACK_LINE(375)
						tmp8 = false;
					}
					HX_STACK_LINE(375)
					if ((tmp8)){
						HX_STACK_LINE(377)
						::flixel::FlxObject tmp9 = current->object;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(377)
						current->onMouseOver(tmp9);
					}
				}
			}
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(383)
			Array< ::Dynamic > _g1 = ::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(383)
			while((true)){
				HX_STACK_LINE(383)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(383)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				if ((tmp2)){
					HX_STACK_LINE(383)
					break;
				}
				HX_STACK_LINE(383)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData over = tmp3;		HX_STACK_VAR(over,"over");
				HX_STACK_LINE(383)
				++(_g);
				HX_STACK_LINE(385)
				bool tmp4 = (over->onMouseOut != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(385)
				if ((tmp4)){
					HX_STACK_LINE(389)
					bool tmp5 = over->object->exists;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(389)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(389)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(389)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(389)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(389)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(389)
					if ((tmp9)){
						HX_STACK_LINE(389)
						bool tmp11 = over->object->visible;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(389)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(389)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(389)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(389)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(389)
						tmp10 = !(tmp15);
					}
					else{
						HX_STACK_LINE(389)
						tmp10 = true;
					}
					HX_STACK_LINE(389)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(389)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(389)
					if ((tmp11)){
						HX_STACK_LINE(389)
						::flixel::FlxObject tmp13 = over->object;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(389)
						::flixel::FlxObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(389)
						::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp15 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp14,currentOverObjects);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(389)
						::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(389)
						tmp12 = (tmp16 == null());
					}
					else{
						HX_STACK_LINE(389)
						tmp12 = true;
					}
					HX_STACK_LINE(389)
					if ((tmp12)){
						HX_STACK_LINE(391)
						::flixel::FlxObject tmp13 = over->object;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(391)
						over->onMouseOut(tmp13);
					}
				}
			}
		}
		HX_STACK_LINE(428)
		::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects = currentOverObjects;
	}
return null();
}


Void FlxMouseEventManager_obj::clearRegistry( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","clearRegistry",0xaf4f39e1,"flixel.input.mouse.FlxMouseEventManager.clearRegistry","flixel/input/mouse/FlxMouseEventManager.hx",432,0x750c3856)
		HX_STACK_THIS(this)
		HX_STACK_LINE(433)
		::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects = null();
		HX_STACK_LINE(435)
		{
			HX_STACK_LINE(435)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			Array< ::Dynamic > _g1 = ::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			while((true)){
				HX_STACK_LINE(435)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(435)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(435)
				if ((tmp1)){
					HX_STACK_LINE(435)
					break;
				}
				HX_STACK_LINE(435)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(435)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp2;		HX_STACK_VAR(reg,"reg");
				HX_STACK_LINE(435)
				++(_g);
				HX_STACK_LINE(437)
				::flixel::FlxObject tmp3 = reg->object;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(437)
				::flixel::input::mouse::FlxMouseEventManager_obj::remove(tmp3);
			}
		}
		HX_STACK_LINE(440)
		::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,clearRegistry,(void))

bool FlxMouseEventManager_obj::checkOverlap( ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData Register){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","checkOverlap",0x58381208,"flixel.input.mouse.FlxMouseEventManager.checkOverlap","flixel/input/mouse/FlxMouseEventManager.hx",444,0x750c3856)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Register,"Register")
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(445)
		Array< ::Dynamic > _g1 = Register->object->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(445)
		while((true)){
			HX_STACK_LINE(445)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(445)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(445)
			if ((tmp1)){
				HX_STACK_LINE(445)
				break;
			}
			HX_STACK_LINE(445)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(445)
			++(_g);
			HX_STACK_LINE(457)
			{
				HX_STACK_LINE(457)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(457)
				::flixel::input::touch::FlxTouchManager tmp3 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(457)
				Array< ::Dynamic > _g3 = tmp3->list;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(457)
				while((true)){
					HX_STACK_LINE(457)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(457)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(457)
					if ((tmp5)){
						HX_STACK_LINE(457)
						break;
					}
					HX_STACK_LINE(457)
					::flixel::input::touch::FlxTouch tmp6 = _g3->__get(_g2).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(457)
					::flixel::input::touch::FlxTouch touch = tmp6;		HX_STACK_VAR(touch,"touch");
					HX_STACK_LINE(457)
					++(_g2);
					HX_STACK_LINE(459)
					::flixel::FlxCamera tmp7 = camera;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(459)
					::flixel::math::FlxPoint tmp8 = ::flixel::input::mouse::FlxMouseEventManager_obj::_point;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(459)
					::flixel::math::FlxPoint tmp9 = touch->getWorldPosition(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(459)
					::flixel::input::mouse::FlxMouseEventManager_obj::_point = tmp9;
					HX_STACK_LINE(461)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						::flixel::math::FlxPoint tmp11 = ::flixel::input::mouse::FlxMouseEventManager_obj::_point;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(461)
						::flixel::math::FlxPoint Point = tmp11;		HX_STACK_VAR(Point,"Point");
						HX_STACK_LINE(461)
						bool tmp12 = Register->pixelPerfect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(461)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(461)
						if ((tmp12)){
							HX_STACK_LINE(461)
							tmp13 = (Register->sprite != null());
						}
						else{
							HX_STACK_LINE(461)
							tmp13 = false;
						}
						HX_STACK_LINE(461)
						if ((tmp13)){
							HX_STACK_LINE(461)
							::flixel::FlxSprite Sprite = Register->sprite;		HX_STACK_VAR(Sprite,"Sprite");
							HX_STACK_LINE(461)
							bool tmp14 = (Sprite->angle != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(461)
							if ((tmp14)){
								HX_STACK_LINE(461)
								::flixel::math::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(461)
								{
									HX_STACK_LINE(461)
									::flixel::math::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(461)
									{
										HX_STACK_LINE(461)
										::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(461)
										::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(461)
										Float tmp19 = Sprite->x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(461)
										Float tmp20 = Sprite->origin->x;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(461)
										Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(461)
										Float tmp22 = Sprite->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(461)
										Float tmp23 = Sprite->origin->y;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(461)
										Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(461)
										::flixel::math::FlxPoint tmp25 = tmp18->set(tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(461)
										::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
										HX_STACK_LINE(461)
										point->_inPool = false;
										HX_STACK_LINE(461)
										tmp16 = point;
									}
									HX_STACK_LINE(461)
									::flixel::math::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
									HX_STACK_LINE(461)
									point->_weak = true;
									HX_STACK_LINE(461)
									tmp15 = point;
								}
								HX_STACK_LINE(461)
								::flixel::math::FlxPoint pivot = tmp15;		HX_STACK_VAR(pivot,"pivot");
								HX_STACK_LINE(461)
								::flixel::math::FlxPoint tmp16 = pivot;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(461)
								Float tmp17 = Sprite->angle;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(461)
								Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(461)
								Point->rotate(tmp16,tmp18);
							}
							HX_STACK_LINE(461)
							::flixel::math::FlxPoint tmp15 = Point;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(461)
							::flixel::FlxCamera tmp16 = camera;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(461)
							tmp10 = Sprite->pixelsOverlapPoint(tmp15,(int)1,tmp16);
						}
						else{
							HX_STACK_LINE(461)
							::flixel::math::FlxPoint tmp14 = Point;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(461)
							::flixel::FlxCamera tmp15 = camera;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(461)
							tmp10 = Register->object->overlapsPoint(tmp14,true,tmp15);
						}
					}
					HX_STACK_LINE(461)
					if ((tmp10)){
						HX_STACK_LINE(463)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(469)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,checkOverlap,return )

bool FlxMouseEventManager_obj::checkOverlapWithPoint( ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData Register,::flixel::math::FlxPoint Point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","checkOverlapWithPoint",0x0bd96542,"flixel.input.mouse.FlxMouseEventManager.checkOverlapWithPoint","flixel/input/mouse/FlxMouseEventManager.hx",473,0x750c3856)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Register,"Register")
	HX_STACK_ARG(Point,"Point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(474)
	bool tmp = Register->pixelPerfect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	if ((tmp)){
		HX_STACK_LINE(474)
		tmp1 = (Register->sprite != null());
	}
	else{
		HX_STACK_LINE(474)
		tmp1 = false;
	}
	HX_STACK_LINE(474)
	if ((tmp1)){
		HX_STACK_LINE(476)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			::flixel::FlxSprite Sprite = Register->sprite;		HX_STACK_VAR(Sprite,"Sprite");
			HX_STACK_LINE(476)
			bool tmp3 = (Sprite->angle != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(476)
			if ((tmp3)){
				HX_STACK_LINE(476)
				::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				{
					HX_STACK_LINE(476)
					::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(476)
						::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(476)
						Float tmp8 = Sprite->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(476)
						Float tmp9 = Sprite->origin->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(476)
						Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(476)
						Float tmp11 = Sprite->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(476)
						Float tmp12 = Sprite->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(476)
						Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(476)
						::flixel::math::FlxPoint tmp14 = tmp7->set(tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(476)
						::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(476)
						point->_inPool = false;
						HX_STACK_LINE(476)
						tmp5 = point;
					}
					HX_STACK_LINE(476)
					::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(476)
					point->_weak = true;
					HX_STACK_LINE(476)
					tmp4 = point;
				}
				HX_STACK_LINE(476)
				::flixel::math::FlxPoint pivot = tmp4;		HX_STACK_VAR(pivot,"pivot");
				HX_STACK_LINE(476)
				::flixel::math::FlxPoint tmp5 = pivot;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				Float tmp6 = Sprite->angle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(476)
				Point->rotate(tmp5,tmp7);
			}
			HX_STACK_LINE(476)
			::flixel::math::FlxPoint tmp4 = Point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(476)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(476)
			tmp2 = Sprite->pixelsOverlapPoint(tmp4,(int)1,tmp5);
		}
		HX_STACK_LINE(476)
		return tmp2;
	}
	else{
		HX_STACK_LINE(480)
		::flixel::math::FlxPoint tmp2 = Point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		bool tmp4 = Register->object->overlapsPoint(tmp2,true,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(480)
		return tmp4;
	}
	HX_STACK_LINE(474)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxMouseEventManager_obj,checkOverlapWithPoint,return )

bool FlxMouseEventManager_obj::checkPixelPerfectOverlap( ::flixel::math::FlxPoint Point,::flixel::FlxSprite Sprite,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","checkPixelPerfectOverlap",0xb8bf1721,"flixel.input.mouse.FlxMouseEventManager.checkPixelPerfectOverlap","flixel/input/mouse/FlxMouseEventManager.hx",485,0x750c3856)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(486)
	bool tmp = (Sprite->angle != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	if ((tmp)){
		HX_STACK_LINE(488)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(488)
			{
				HX_STACK_LINE(488)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(488)
				::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(488)
				Float tmp5 = Sprite->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(488)
				Float tmp6 = Sprite->origin->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(488)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(488)
				Float tmp8 = Sprite->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(488)
				Float tmp9 = Sprite->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(488)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(488)
				::flixel::math::FlxPoint tmp11 = tmp4->set(tmp7,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(488)
				::flixel::math::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(488)
				point->_inPool = false;
				HX_STACK_LINE(488)
				tmp2 = point;
			}
			HX_STACK_LINE(488)
			::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(488)
			point->_weak = true;
			HX_STACK_LINE(488)
			tmp1 = point;
		}
		HX_STACK_LINE(488)
		::flixel::math::FlxPoint pivot = tmp1;		HX_STACK_VAR(pivot,"pivot");
		HX_STACK_LINE(489)
		::flixel::math::FlxPoint tmp2 = pivot;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		Float tmp3 = Sprite->angle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(489)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		Point->rotate(tmp2,tmp4);
	}
	HX_STACK_LINE(491)
	::flixel::math::FlxPoint tmp1 = Point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(491)
	bool tmp3 = Sprite->pixelsOverlapPoint(tmp1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxMouseEventManager_obj,checkPixelPerfectOverlap,return )

Array< ::Dynamic > FlxMouseEventManager_obj::_registeredObjects;

Array< ::Dynamic > FlxMouseEventManager_obj::_mouseOverObjects;

::flixel::math::FlxPoint FlxMouseEventManager_obj::_point;

Void FlxMouseEventManager_obj::init( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","init",0xbb4b4079,"flixel.input.mouse.FlxMouseEventManager.init","flixel/input/mouse/FlxMouseEventManager.hx",48,0x750c3856)
		HX_STACK_LINE(49)
		::flixel::_system::frontEnds::PluginFrontEnd tmp = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::flixel::FlxBasic tmp1 = tmp->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(hx::ClassOf< ::flixel::input::mouse::FlxMouseEventManager >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(50)
			::flixel::_system::frontEnds::PluginFrontEnd tmp3 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::flixel::input::mouse::FlxMouseEventManager tmp4 = ::flixel::input::mouse::FlxMouseEventManager_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			tmp3->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouseEventManager","\x9a","\x2c","\x1e","\x8f"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,init,(void))

Dynamic FlxMouseEventManager_obj::add( Dynamic Object,Dynamic OnMouseDown,Dynamic OnMouseUp,Dynamic OnMouseOver,Dynamic OnMouseOut,hx::Null< bool >  __o_MouseChildren,hx::Null< bool >  __o_MouseEnabled,hx::Null< bool >  __o_PixelPerfect,Array< int > MouseButtons){
bool MouseChildren = __o_MouseChildren.Default(false);
bool MouseEnabled = __o_MouseEnabled.Default(true);
bool PixelPerfect = __o_PixelPerfect.Default(true);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","add",0xae294cd8,"flixel.input.mouse.FlxMouseEventManager.add","flixel/input/mouse/FlxMouseEventManager.hx",71,0x750c3856)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(OnMouseDown,"OnMouseDown")
	HX_STACK_ARG(OnMouseUp,"OnMouseUp")
	HX_STACK_ARG(OnMouseOver,"OnMouseOver")
	HX_STACK_ARG(OnMouseOut,"OnMouseOut")
	HX_STACK_ARG(MouseChildren,"MouseChildren")
	HX_STACK_ARG(MouseEnabled,"MouseEnabled")
	HX_STACK_ARG(PixelPerfect,"PixelPerfect")
	HX_STACK_ARG(MouseButtons,"MouseButtons")
{
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::flixel::_system::frontEnds::PluginFrontEnd tmp = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			::flixel::FlxBasic tmp1 = tmp->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(hx::ClassOf< ::flixel::input::mouse::FlxMouseEventManager >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(72)
				::flixel::_system::frontEnds::PluginFrontEnd tmp3 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				::flixel::input::mouse::FlxMouseEventManager tmp4 = ::flixel::input::mouse::FlxMouseEventManager_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				tmp3->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouseEventManager","\x9a","\x2c","\x1e","\x8f"), hx::paccDynamic )(tmp4);
			}
		}
		HX_STACK_LINE(74)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp = ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData_obj::__new(Object,OnMouseDown,OnMouseUp,OnMouseOver,OnMouseOut,MouseChildren,MouseEnabled,PixelPerfect,MouseButtons);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData newReg = tmp;		HX_STACK_VAR(newReg,"newReg");
		HX_STACK_LINE(77)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		if ((tmp2)){
			HX_STACK_LINE(79)
			newReg->sprite = ((::flixel::FlxSprite)(Object));
		}
		HX_STACK_LINE(82)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = newReg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects->unshift(tmp3);
		HX_STACK_LINE(83)
		Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxMouseEventManager_obj,add,return )

Dynamic FlxMouseEventManager_obj::remove( Dynamic Object){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","remove",0x02338ded,"flixel.input.mouse.FlxMouseEventManager.remove","flixel/input/mouse/FlxMouseEventManager.hx",90,0x750c3856)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		Array< ::Dynamic > _g1 = ::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			if ((tmp1)){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp2;		HX_STACK_VAR(reg,"reg");
			HX_STACK_LINE(91)
			++(_g);
			HX_STACK_LINE(93)
			bool tmp3 = (reg->object == Object);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			if ((tmp3)){
				HX_STACK_LINE(95)
				reg->object = null();
				HX_STACK_LINE(96)
				reg->sprite = null();
				HX_STACK_LINE(97)
				reg->onMouseDown = null();
				HX_STACK_LINE(98)
				reg->onMouseUp = null();
				HX_STACK_LINE(99)
				reg->onMouseOver = null();
				HX_STACK_LINE(100)
				reg->onMouseOut = null();
				HX_STACK_LINE(101)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp4 = reg;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects->remove(tmp4);
			}
		}
	}
	HX_STACK_LINE(104)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,remove,return )

Void FlxMouseEventManager_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","removeAll",0xef9bd534,"flixel.input.mouse.FlxMouseEventManager.removeAll","flixel/input/mouse/FlxMouseEventManager.hx",111,0x750c3856)
		HX_STACK_LINE(112)
		bool tmp = (::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		if ((tmp)){
			HX_STACK_LINE(114)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			Array< ::Dynamic > _g1 = ::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(114)
			while((true)){
				HX_STACK_LINE(114)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(114)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(114)
				if ((tmp2)){
					HX_STACK_LINE(114)
					break;
				}
				HX_STACK_LINE(114)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp3;		HX_STACK_VAR(reg,"reg");
				HX_STACK_LINE(114)
				++(_g);
				HX_STACK_LINE(116)
				::flixel::FlxObject tmp4 = reg->object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				::flixel::input::mouse::FlxMouseEventManager_obj::remove(tmp4);
			}
		}
		HX_STACK_LINE(119)
		::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(120)
		::flixel::input::mouse::FlxMouseEventManager_obj::_mouseOverObjects = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,removeAll,(void))

Void FlxMouseEventManager_obj::reorder( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","reorder",0x13a3c632,"flixel.input.mouse.FlxMouseEventManager.reorder","flixel/input/mouse/FlxMouseEventManager.hx",131,0x750c3856)
		HX_STACK_LINE(132)
		Array< ::Dynamic > orderedObjects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(orderedObjects,"orderedObjects");
		HX_STACK_LINE(133)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		Array< ::Dynamic > group = tmp->_state->members;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(135)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		::flixel::FlxState tmp2 = tmp1->_state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		::flixel::input::mouse::FlxMouseEventManager_obj::traverseFlxGroup(tmp2,orderedObjects);
		HX_STACK_LINE(137)
		orderedObjects->reverse();
		HX_STACK_LINE(138)
		::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects = orderedObjects;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,reorder,(void))

Void FlxMouseEventManager_obj::setMouseDownCallback( Dynamic Object,Dynamic OnMouseDown){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setMouseDownCallback",0xe8b31b73,"flixel.input.mouse.FlxMouseEventManager.setMouseDownCallback","flixel/input/mouse/FlxMouseEventManager.hx",147,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(OnMouseDown,"OnMouseDown")
		HX_STACK_LINE(148)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(150)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(152)
			reg->onMouseDown = OnMouseDown;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDownCallback,(void))

Void FlxMouseEventManager_obj::setMouseUpCallback( Dynamic Object,Dynamic OnMouseUp){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setMouseUpCallback",0x3b6a476c,"flixel.input.mouse.FlxMouseEventManager.setMouseUpCallback","flixel/input/mouse/FlxMouseEventManager.hx",163,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(OnMouseUp,"OnMouseUp")
		HX_STACK_LINE(164)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(166)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(168)
			reg->onMouseUp = OnMouseUp;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseUpCallback,(void))

Void FlxMouseEventManager_obj::setMouseOverCallback( Dynamic Object,Dynamic OnMouseOver){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setMouseOverCallback",0x088af665,"flixel.input.mouse.FlxMouseEventManager.setMouseOverCallback","flixel/input/mouse/FlxMouseEventManager.hx",179,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(OnMouseOver,"OnMouseOver")
		HX_STACK_LINE(180)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(182)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(184)
			reg->onMouseOver = OnMouseOver;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOverCallback,(void))

Void FlxMouseEventManager_obj::setMouseOutCallback( Dynamic Object,Dynamic OnMouseOut){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setMouseOutCallback",0x235b22c7,"flixel.input.mouse.FlxMouseEventManager.setMouseOutCallback","flixel/input/mouse/FlxMouseEventManager.hx",195,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(OnMouseOut,"OnMouseOut")
		HX_STACK_LINE(196)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(198)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(200)
			reg->onMouseOut = OnMouseOut;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOutCallback,(void))

Void FlxMouseEventManager_obj::setObjectMouseEnabled( Dynamic Object,bool MouseEnabled){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setObjectMouseEnabled",0xe24566f4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",210,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(MouseEnabled,"MouseEnabled")
		HX_STACK_LINE(211)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(213)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(215)
			reg->mouseEnabled = MouseEnabled;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseEnabled,(void))

bool FlxMouseEventManager_obj::isObjectMouseEnabled( Dynamic Object){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","isObjectMouseEnabled",0x6e5fac2e,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",223,0x750c3856)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(224)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(226)
	bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	if ((tmp2)){
		HX_STACK_LINE(228)
		bool tmp3 = reg->mouseEnabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		return tmp3;
	}
	else{
		HX_STACK_LINE(232)
		return false;
	}
	HX_STACK_LINE(226)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseEnabled,return )

Void FlxMouseEventManager_obj::setObjectMouseChildren( Dynamic Object,bool MouseChildren){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setObjectMouseChildren",0x9e2bdb6c,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",242,0x750c3856)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(MouseChildren,"MouseChildren")
		HX_STACK_LINE(243)
		Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(245)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		if ((tmp2)){
			HX_STACK_LINE(247)
			reg->mouseChildren = MouseChildren;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseChildren,(void))

bool FlxMouseEventManager_obj::isObjectMouseChildren( Dynamic Object){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","isObjectMouseChildren",0xa90e28f2,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",255,0x750c3856)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(256)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(258)
	bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(260)
		bool tmp3 = reg->mouseChildren;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		return tmp3;
	}
	else{
		HX_STACK_LINE(264)
		::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("FlxMouseEventManager , isObjectMouseChildren() : object not found","\x2c","\x1c","\x56","\xe2"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(258)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseChildren,return )

Void FlxMouseEventManager_obj::setObjectMouseButtons( Dynamic object,Array< int > mouseButtons){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","setObjectMouseButtons",0x2e89b4b4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseButtons","flixel/input/mouse/FlxMouseEventManager.hx",272,0x750c3856)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(mouseButtons,"mouseButtons")
		HX_STACK_LINE(273)
		Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp1 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp1;		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(275)
		bool tmp2 = (reg != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		if ((tmp2)){
			HX_STACK_LINE(277)
			reg->mouseButtons = mouseButtons;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseButtons,(void))

Void FlxMouseEventManager_obj::traverseFlxGroup( ::flixel::group::FlxTypedGroup Group,Array< ::Dynamic > OrderedObjects){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","traverseFlxGroup",0xb5503c28,"flixel.input.mouse.FlxMouseEventManager.traverseFlxGroup","flixel/input/mouse/FlxMouseEventManager.hx",283,0x750c3856)
		HX_STACK_ARG(Group,"Group")
		HX_STACK_ARG(OrderedObjects,"OrderedObjects")
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(283)
		cpp::ArrayBase _g1 = Group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			if ((tmp1)){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(283)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			Dynamic basic = tmp2;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			::flixel::group::FlxTypedGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::flixel::FlxBasic ObjectOrGroup = basic;		HX_STACK_VAR(ObjectOrGroup,"ObjectOrGroup");
				HX_STACK_LINE(285)
				::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(285)
				bool tmp4 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				if ((tmp4)){
					HX_STACK_LINE(285)
					bool tmp5 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(285)
					if ((tmp5)){
						HX_STACK_LINE(285)
						group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
					}
					else{
						HX_STACK_LINE(285)
						bool tmp6 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(285)
						if ((tmp6)){
							HX_STACK_LINE(285)
							::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
							HX_STACK_LINE(285)
							group = spriteGroup->group;
						}
					}
				}
				HX_STACK_LINE(285)
				tmp3 = group;
			}
			HX_STACK_LINE(285)
			::flixel::group::FlxTypedGroup group = tmp3;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(286)
			bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			if ((tmp4)){
				HX_STACK_LINE(288)
				::flixel::group::FlxTypedGroup tmp5 = group;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				::flixel::input::mouse::FlxMouseEventManager_obj::traverseFlxGroup(tmp5,OrderedObjects);
			}
			HX_STACK_LINE(290)
			Dynamic tmp5 = basic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::FlxObject >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			if ((tmp6)){
				HX_STACK_LINE(292)
				::flixel::FlxObject tmp7 = ((::flixel::FlxObject)(basic));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(292)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp8 = ::flixel::input::mouse::FlxMouseEventManager_obj::getRegister(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(292)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp8;		HX_STACK_VAR(reg,"reg");
				HX_STACK_LINE(294)
				bool tmp9 = (reg != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				if ((tmp9)){
					HX_STACK_LINE(296)
					::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp10 = reg;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(296)
					OrderedObjects->push(tmp10);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,traverseFlxGroup,(void))

::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData FlxMouseEventManager_obj::getRegister( Dynamic Object,Array< ::Dynamic > Register){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseEventManager","getRegister",0xc4eed2d0,"flixel.input.mouse.FlxMouseEventManager.getRegister","flixel/input/mouse/FlxMouseEventManager.hx",303,0x750c3856)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Register,"Register")
	HX_STACK_LINE(304)
	bool tmp = (Register == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	if ((tmp)){
		HX_STACK_LINE(306)
		Register = ::flixel::input::mouse::FlxMouseEventManager_obj::_registeredObjects;
	}
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(309)
		while((true)){
			HX_STACK_LINE(309)
			bool tmp1 = (_g < Register->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			if ((tmp2)){
				HX_STACK_LINE(309)
				break;
			}
			HX_STACK_LINE(309)
			::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp3 = Register->__get(_g).StaticCast< ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData reg = tmp3;		HX_STACK_VAR(reg,"reg");
			HX_STACK_LINE(309)
			++(_g);
			HX_STACK_LINE(311)
			bool tmp4 = (reg->object == Object);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			if ((tmp4)){
				HX_STACK_LINE(313)
				::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData tmp5 = reg;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(317)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,getRegister,return )


FlxMouseEventManager_obj::FlxMouseEventManager_obj()
{
}

Dynamic FlxMouseEventManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkOverlap") ) { return checkOverlap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { return clearRegistry_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"checkOverlapWithPoint") ) { return checkOverlapWithPoint_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"checkPixelPerfectOverlap") ) { return checkPixelPerfectOverlap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseEventManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = _point; return true;  }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reorder") ) { outValue = reorder_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { outValue = removeAll_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getRegister") ) { outValue = getRegister_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"traverseFlxGroup") ) { outValue = traverseFlxGroup_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseOverObjects") ) { outValue = _mouseOverObjects; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_registeredObjects") ) { outValue = _registeredObjects; return true;  }
		if (HX_FIELD_EQ(inName,"setMouseUpCallback") ) { outValue = setMouseUpCallback_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setMouseOutCallback") ) { outValue = setMouseOutCallback_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setMouseDownCallback") ) { outValue = setMouseDownCallback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setMouseOverCallback") ) { outValue = setMouseOverCallback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isObjectMouseEnabled") ) { outValue = isObjectMouseEnabled_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setObjectMouseEnabled") ) { outValue = setObjectMouseEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isObjectMouseChildren") ) { outValue = isObjectMouseChildren_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setObjectMouseButtons") ) { outValue = setObjectMouseButtons_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setObjectMouseChildren") ) { outValue = setObjectMouseChildren_dyn(); return true;  }
	}
	return false;
}

bool FlxMouseEventManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseOverObjects") ) { _mouseOverObjects=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_registeredObjects") ) { _registeredObjects=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxMouseEventManager_obj::_registeredObjects,HX_HCSTRING("_registeredObjects","\x33","\x2c","\xb1","\xfd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxMouseEventManager_obj::_mouseOverObjects,HX_HCSTRING("_mouseOverObjects","\x1a","\x9a","\x98","\xa8")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxMouseEventManager_obj::_point,HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clearRegistry","\x6a","\xb4","\xfc","\x03"),
	HX_HCSTRING("checkOverlap","\x9f","\xfb","\x96","\x96"),
	HX_HCSTRING("checkOverlapWithPoint","\xcb","\x10","\xc2","\x44"),
	HX_HCSTRING("checkPixelPerfectOverlap","\x38","\x87","\xe1","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseEventManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMouseEventManager_obj::_registeredObjects,"_registeredObjects");
	HX_MARK_MEMBER_NAME(FlxMouseEventManager_obj::_mouseOverObjects,"_mouseOverObjects");
	HX_MARK_MEMBER_NAME(FlxMouseEventManager_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseEventManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMouseEventManager_obj::_registeredObjects,"_registeredObjects");
	HX_VISIT_MEMBER_NAME(FlxMouseEventManager_obj::_mouseOverObjects,"_mouseOverObjects");
	HX_VISIT_MEMBER_NAME(FlxMouseEventManager_obj::_point,"_point");
};

#endif

hx::Class FlxMouseEventManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_registeredObjects","\x33","\x2c","\xb1","\xfd"),
	HX_HCSTRING("_mouseOverObjects","\x1a","\x9a","\x98","\xa8"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("reorder","\xfb","\x43","\xbb","\x1b"),
	HX_HCSTRING("setMouseDownCallback","\x0a","\xf4","\x07","\xda"),
	HX_HCSTRING("setMouseUpCallback","\x43","\xfc","\x86","\x24"),
	HX_HCSTRING("setMouseOverCallback","\xfc","\xce","\xdf","\xf9"),
	HX_HCSTRING("setMouseOutCallback","\x10","\xaa","\x5c","\x33"),
	HX_HCSTRING("setObjectMouseEnabled","\x7d","\x12","\x2e","\x1b"),
	HX_HCSTRING("isObjectMouseEnabled","\xc5","\x84","\xb4","\x5f"),
	HX_HCSTRING("setObjectMouseChildren","\xc3","\x47","\xd9","\x30"),
	HX_HCSTRING("isObjectMouseChildren","\x7b","\xd4","\xf6","\xe1"),
	HX_HCSTRING("setObjectMouseButtons","\x3d","\x60","\x72","\x67"),
	HX_HCSTRING("traverseFlxGroup","\x3f","\x3d","\x59","\xc9"),
	HX_HCSTRING("getRegister","\x19","\x69","\x93","\xf6"),
	::String(null()) };

void FlxMouseEventManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouseEventManager","\xa5","\x53","\x34","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseEventManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxMouseEventManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouseEventManager_obj >;
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

void FlxMouseEventManager_obj::__boot()
{
	_registeredObjects= Array_obj< ::Dynamic >::__new();
	_mouseOverObjects= Array_obj< ::Dynamic >::__new();
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/mouse/FlxMouseEventManager.hx",42,0x750c3856)
		{
			HX_STACK_LINE(42)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(42)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(42)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(42)
			point->_inPool = false;
			HX_STACK_LINE(42)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
