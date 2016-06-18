#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#define INCLUDED_flixel_input_mouse_FlxMouseEventManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEventManager)
HX_DECLARE_CLASS4(flixel,input,mouse,_FlxMouseEventManager,ObjectMouseData)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseEventManager_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxMouseEventManager_obj OBJ_;
		FlxMouseEventManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouseEventManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMouseEventManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouseEventManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxMouseEventManager","\x86","\x56","\x10","\xfd"); }

		static void __boot();
		static Array< ::Dynamic > _registeredObjects;
		static Array< ::Dynamic > _mouseOverObjects;
		static ::flixel::math::FlxPoint _point;
		static Void init( );
		static Dynamic init_dyn();

		static Dynamic add( Dynamic Object,Dynamic OnMouseDown,Dynamic OnMouseUp,Dynamic OnMouseOver,Dynamic OnMouseOut,hx::Null< bool >  MouseChildren,hx::Null< bool >  MouseEnabled,hx::Null< bool >  PixelPerfect,Array< int > MouseButtons);
		static Dynamic add_dyn();

		static Dynamic remove( Dynamic Object);
		static Dynamic remove_dyn();

		static Void removeAll( );
		static Dynamic removeAll_dyn();

		static Void reorder( );
		static Dynamic reorder_dyn();

		static Void setMouseDownCallback( Dynamic Object,Dynamic OnMouseDown);
		static Dynamic setMouseDownCallback_dyn();

		static Void setMouseUpCallback( Dynamic Object,Dynamic OnMouseUp);
		static Dynamic setMouseUpCallback_dyn();

		static Void setMouseOverCallback( Dynamic Object,Dynamic OnMouseOver);
		static Dynamic setMouseOverCallback_dyn();

		static Void setMouseOutCallback( Dynamic Object,Dynamic OnMouseOut);
		static Dynamic setMouseOutCallback_dyn();

		static Void setObjectMouseEnabled( Dynamic Object,bool MouseEnabled);
		static Dynamic setObjectMouseEnabled_dyn();

		static bool isObjectMouseEnabled( Dynamic Object);
		static Dynamic isObjectMouseEnabled_dyn();

		static Void setObjectMouseChildren( Dynamic Object,bool MouseChildren);
		static Dynamic setObjectMouseChildren_dyn();

		static bool isObjectMouseChildren( Dynamic Object);
		static Dynamic isObjectMouseChildren_dyn();

		static Void setObjectMouseButtons( Dynamic object,Array< int > mouseButtons);
		static Dynamic setObjectMouseButtons_dyn();

		static Void traverseFlxGroup( ::flixel::group::FlxTypedGroup Group,Array< ::Dynamic > OrderedObjects);
		static Dynamic traverseFlxGroup_dyn();

		static ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData getRegister( Dynamic Object,Array< ::Dynamic > Register);
		static Dynamic getRegister_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void clearRegistry( );
		Dynamic clearRegistry_dyn();

		virtual bool checkOverlap( ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData Register);
		Dynamic checkOverlap_dyn();

		virtual bool checkOverlapWithPoint( ::flixel::input::mouse::_FlxMouseEventManager::ObjectMouseData Register,::flixel::math::FlxPoint Point,::flixel::FlxCamera Camera);
		Dynamic checkOverlapWithPoint_dyn();

		virtual bool checkPixelPerfectOverlap( ::flixel::math::FlxPoint Point,::flixel::FlxSprite Sprite,::flixel::FlxCamera Camera);
		Dynamic checkPixelPerfectOverlap_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouseEventManager */ 
