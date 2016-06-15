#ifndef INCLUDED_flixel_input_mouse__FlxMouseEventManager_ObjectMouseData
#define INCLUDED_flixel_input_mouse__FlxMouseEventManager_ObjectMouseData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,input,mouse,_FlxMouseEventManager,ObjectMouseData)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace mouse{
namespace _FlxMouseEventManager{


class HXCPP_CLASS_ATTRIBUTES  ObjectMouseData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectMouseData_obj OBJ_;
		ObjectMouseData_obj();
		Void __construct(Dynamic object,Dynamic onMouseDown,Dynamic onMouseUp,Dynamic onMouseOver,Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,Array< int > mouseButtons);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse._FlxMouseEventManager.ObjectMouseData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectMouseData_obj > __new(Dynamic object,Dynamic onMouseDown,Dynamic onMouseUp,Dynamic onMouseOver,Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,Array< int > mouseButtons);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectMouseData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectMouseData","\x10","\x28","\x87","\xda"); }

		::flixel::FlxObject object;
		Dynamic onMouseDown;
		Dynamic &onMouseDown_dyn() { return onMouseDown;}
		Dynamic onMouseUp;
		Dynamic &onMouseUp_dyn() { return onMouseUp;}
		Dynamic onMouseOver;
		Dynamic &onMouseOver_dyn() { return onMouseOver;}
		Dynamic onMouseOut;
		Dynamic &onMouseOut_dyn() { return onMouseOut;}
		bool mouseChildren;
		bool mouseEnabled;
		bool pixelPerfect;
		::flixel::FlxSprite sprite;
		Array< int > mouseButtons;
		Dynamic currentMouseButton;
};

} // end namespace flixel
} // end namespace input
} // end namespace mouse
} // end namespace _FlxMouseEventManager

#endif /* INCLUDED_flixel_input_mouse__FlxMouseEventManager_ObjectMouseData */ 
