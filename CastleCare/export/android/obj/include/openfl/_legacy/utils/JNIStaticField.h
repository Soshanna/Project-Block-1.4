#ifndef INCLUDED_openfl__legacy_utils_JNIStaticField
#define INCLUDED_openfl__legacy_utils_JNIStaticField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,JNIStaticField)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIStaticField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIStaticField_obj OBJ_;
		JNIStaticField_obj();
		Void __construct(Dynamic field);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.JNIStaticField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JNIStaticField_obj > __new(Dynamic field);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIStaticField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JNIStaticField","\x27","\xa2","\xe9","\x3f"); }

		static void __boot();
		static Dynamic lime_jni_get_static;
		static Dynamic &lime_jni_get_static_dyn() { return lime_jni_get_static;}
		static Dynamic lime_jni_set_static;
		static Dynamic &lime_jni_set_static_dyn() { return lime_jni_set_static;}
		Dynamic field;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic value);
		Dynamic set_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_JNIStaticField */ 