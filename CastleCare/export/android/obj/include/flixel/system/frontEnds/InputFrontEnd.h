#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#define INCLUDED_flixel_system_frontEnds_InputFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeys)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  InputFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputFrontEnd_obj OBJ_;
		InputFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.InputFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InputFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InputFrontEnd","\xbc","\x9c","\xcc","\x29"); }

		virtual ::flixel::input::android::FlxAndroidKeys add_flixel_input_android_FlxAndroidKeys( ::flixel::input::android::FlxAndroidKeys Input);
		Dynamic add_flixel_input_android_FlxAndroidKeys_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadManager add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input);
		Dynamic add_flixel_input_gamepad_FlxGamepadManager_dyn();

		virtual ::flixel::input::touch::FlxTouchManager add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input);
		Dynamic add_flixel_input_touch_FlxTouchManager_dyn();

		Array< ::flixel::input::IFlxInputManager > list;
		bool resetOnStateSwitch;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onStateSwitch( );
		Dynamic onStateSwitch_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_InputFrontEnd */ 
