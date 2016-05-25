#ifndef INCLUDED_openfl__legacy_utils_JNIMethod
#define INCLUDED_openfl__legacy_utils_JNIMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,JNIMethod)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIMethod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIMethod_obj OBJ_;
		JNIMethod_obj();
		Void __construct(Dynamic method);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.JNIMethod")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JNIMethod_obj > __new(Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIMethod_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JNIMethod","\xc6","\x67","\xb5","\x80"); }

		static void __boot();
		static Dynamic lime_jni_call_member;
		static Dynamic &lime_jni_call_member_dyn() { return lime_jni_call_member;}
		static Dynamic lime_jni_call_static;
		static Dynamic &lime_jni_call_static_dyn() { return lime_jni_call_static;}
		Dynamic method;
		virtual Dynamic callMember( cpp::ArrayBase args);
		Dynamic callMember_dyn();

		virtual Dynamic callStatic( cpp::ArrayBase args);
		Dynamic callStatic_dyn();

		virtual Dynamic getMemberMethod( bool useArray);
		Dynamic getMemberMethod_dyn();

		virtual Dynamic getStaticMethod( bool useArray);
		Dynamic getStaticMethod_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_JNIMethod */ 
