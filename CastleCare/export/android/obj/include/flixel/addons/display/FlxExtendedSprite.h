#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#define INCLUDED_flixel_addons_display_FlxExtendedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FlxExtendedSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxExtendedSprite_obj OBJ_;
		FlxExtendedSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxExtendedSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxExtendedSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxExtendedSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxExtendedSprite","\x90","\x31","\x20","\x48"); }

		int priorityID;
		bool isPressed;
		bool clickable;
		bool throwable;
		::flixel::math::FlxRect boundsRect;
		::flixel::FlxSprite boundsSprite;
		bool hasGravity;
		int gravityX;
		int gravityY;
		Float frictionX;
		Float frictionY;
		Float toleranceX;
		Float toleranceY;
		bool isDragged;
		bool draggable;
		bool springOnPressed;
		int springOffsetX;
		int springOffsetY;
		bool _snapOnDrag;
		bool _snapOnRelease;
		int _snapX;
		int _snapY;
		bool _clickOnRelease;
		bool _clickPixelPerfect;
		int _clickPixelPerfectAlpha;
		int _clickCounter;
		int _throwXFactor;
		int _throwYFactor;
		bool _dragPixelPerfect;
		int _dragPixelPerfectAlpha;
		int _dragOffsetX;
		int _dragOffsetY;
		bool _dragFromPoint;
		bool _allowHorizontalDrag;
		bool _allowVerticalDrag;
		virtual Void setDragLock( hx::Null< bool >  AllowHorizontalDrag,hx::Null< bool >  AllowVerticalDrag);
		Dynamic setDragLock_dyn();

		virtual Void update( Float elapsed);

		virtual Void updateGravity( );
		Dynamic updateGravity_dyn();

		virtual Void updateDrag( );
		Dynamic updateDrag_dyn();

		virtual Void checkForClick( );
		Dynamic checkForClick_dyn();

		virtual Void startDrag( );
		Dynamic startDrag_dyn();

		virtual Void checkBoundsRect( );
		Dynamic checkBoundsRect_dyn();

		virtual Void checkBoundsSprite( );
		Dynamic checkBoundsSprite_dyn();

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual Void setGravity( int GravityX,int GravityY,hx::Null< Float >  FrictionX,hx::Null< Float >  FrictionY,hx::Null< Float >  ToleranceX,hx::Null< Float >  ToleranceY);
		Dynamic setGravity_dyn();

		virtual Void flipGravity( );
		Dynamic flipGravity_dyn();

		virtual int get_clicks( );
		Dynamic get_clicks_dyn();

		virtual int set_clicks( int NewValue);
		Dynamic set_clicks_dyn();

		virtual int get_springX( );
		Dynamic get_springX_dyn();

		virtual int get_springY( );
		Dynamic get_springY_dyn();

		virtual ::flixel::math::FlxPoint get_point( );
		Dynamic get_point_dyn();

		virtual ::flixel::math::FlxPoint set_point( ::flixel::math::FlxPoint NewPoint);
		Dynamic set_point_dyn();

		virtual ::flixel::math::FlxRect get_rect( );
		Dynamic get_rect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxExtendedSprite */ 
