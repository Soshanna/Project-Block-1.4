#ifndef INCLUDED_hxcpp_StaticSqlite
#define INCLUDED_hxcpp_StaticSqlite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxcpp,StaticSqlite)
namespace hxcpp{


class HXCPP_CLASS_ATTRIBUTES  StaticSqlite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticSqlite_obj OBJ_;
		StaticSqlite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hxcpp.StaticSqlite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticSqlite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticSqlite_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("StaticSqlite","\x3a","\x7c","\x8b","\x39"); }

};

} // end namespace hxcpp

#endif /* INCLUDED_hxcpp_StaticSqlite */ 
