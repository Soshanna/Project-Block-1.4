#ifndef INCLUDED_openfl__legacy_utils_JNI
#define INCLUDED_openfl__legacy_utils_JNI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,utils,JNI)
HX_DECLARE_CLASS3(openfl,_legacy,utils,JNIMemberField)
HX_DECLARE_CLASS3(openfl,_legacy,utils,JNIStaticField)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNI_obj OBJ_;
		JNI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.utils.JNI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JNI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JNI","\x05","\x6b","\x38","\x00"); }

		static void __boot();
		static ::haxe::ds::StringMap alreadyCreated;
		static ::String base64;
		static bool initialized;
		static Dynamic callMember( Dynamic method,Dynamic jobject,cpp::ArrayBase a);
		static Dynamic callMember_dyn();

		static Dynamic callStatic( Dynamic method,cpp::ArrayBase a);
		static Dynamic callStatic_dyn();

		static Dynamic createInterface( Dynamic haxeClass,::String className,::String classDef);
		static Dynamic createInterface_dyn();

		static ::openfl::_legacy::utils::JNIMemberField createMemberField( ::String className,::String memberName,::String signature);
		static Dynamic createMemberField_dyn();

		static Dynamic createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createMemberMethod_dyn();

		static ::openfl::_legacy::utils::JNIStaticField createStaticField( ::String className,::String memberName,::String signature);
		static Dynamic createStaticField_dyn();

		static Dynamic createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createStaticMethod_dyn();

		static Dynamic getEnv( );
		static Dynamic getEnv_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static Dynamic onCallback( Dynamic object,Dynamic method,Dynamic args);
		static Dynamic onCallback_dyn();

		static Dynamic lime_jni_create_field;
		static Dynamic &lime_jni_create_field_dyn() { return lime_jni_create_field;}
		static Dynamic lime_jni_create_method;
		static Dynamic &lime_jni_create_method_dyn() { return lime_jni_create_method;}
		static Dynamic lime_jni_get_env;
		static Dynamic &lime_jni_get_env_dyn() { return lime_jni_get_env;}
		static Dynamic lime_jni_call_member;
		static Dynamic lime_jni_call_static;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_JNI */ 
