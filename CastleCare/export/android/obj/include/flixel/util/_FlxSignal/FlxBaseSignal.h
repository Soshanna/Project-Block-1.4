#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#define INCLUDED_flixel_util__FlxSignal_FlxBaseSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalHandler)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxBaseSignal_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBaseSignal_obj OBJ_;
		FlxBaseSignal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxBaseSignal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBaseSignal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBaseSignal_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		operator ::flixel::util::IFlxSignal_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxBaseSignal","\x4b","\x48","\x0e","\xbb"); }

		Dynamic dispatch;
		Array< ::Dynamic > handlers;
		Array< ::Dynamic > pendingRemove;
		bool processingListeners;
		virtual Void add( Dynamic listener);
		Dynamic add_dyn();

		virtual Void addOnce( Dynamic listener);
		Dynamic addOnce_dyn();

		virtual Void remove( Dynamic listener);
		Dynamic remove_dyn();

		virtual bool has( Dynamic listener);
		Dynamic has_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::_FlxSignal::FlxSignalHandler registerListener( Dynamic listener,bool dispatchOnce);
		Dynamic registerListener_dyn();

		virtual ::flixel::util::_FlxSignal::FlxSignalHandler getHandler( Dynamic listener);
		Dynamic getHandler_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxBaseSignal */ 
