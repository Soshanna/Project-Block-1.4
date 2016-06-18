#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteConnection_obj::__construct(::String file)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","new",0xf8a8646e,"sys.db._Sqlite.SqliteConnection.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",28,0xf219dfa9)
HX_STACK_THIS(this)
HX_STACK_ARG(file,"file")
{
	HX_STACK_LINE(29)
	::String tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1 = ::sys::db::_Sqlite::SqliteConnection_obj::_connect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->c = tmp1;
}
;
	return null();
}

//SqliteConnection_obj::~SqliteConnection_obj() { }

Dynamic SqliteConnection_obj::__CreateEmpty() { return  new SqliteConnection_obj; }
hx::ObjectPtr< SqliteConnection_obj > SqliteConnection_obj::__new(::String file)
{  hx::ObjectPtr< SqliteConnection_obj > _result_ = new SqliteConnection_obj();
	_result_->__construct(file);
	return _result_;}

Dynamic SqliteConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteConnection_obj > _result_ = new SqliteConnection_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *SqliteConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::Connection_obj)) return operator ::sys::db::Connection_obj *();
	return super::__ToInterface(inType);
}

SqliteConnection_obj::operator ::sys::db::Connection_obj *()
	{ return new ::sys::db::Connection_delegate_< SqliteConnection_obj >(this); }
Void SqliteConnection_obj::close( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","close",0x6e0f4b46,"sys.db._Sqlite.SqliteConnection.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",32,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		Dynamic tmp = this->c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::sys::db::_Sqlite::SqliteConnection_obj::_close(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,close,(void))

::sys::db::ResultSet SqliteConnection_obj::request( ::String s){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","request",0x544f925d,"sys.db._Sqlite.SqliteConnection.request","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",37,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(37)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(38)
		Dynamic tmp = this->c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Dynamic tmp2 = ::sys::db::_Sqlite::SqliteConnection_obj::_request(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::sys::db::_Sqlite::SqliteResultSet tmp3 = ::sys::db::_Sqlite::SqliteResultSet_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		return tmp3;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(40)
				::String tmp = (HX_HCSTRING("Error while executing ","\xb5","\x68","\x57","\x8c") + s);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(40)
				::String tmp1 = (tmp + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(40)
				::String tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(40)
				::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				::String tmp4 = (tmp3 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(37)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteConnection_obj,request,return )

Dynamic SqliteConnection_obj::_connect;

Dynamic SqliteConnection_obj::_close;

Dynamic SqliteConnection_obj::_request;


SqliteConnection_obj::SqliteConnection_obj()
{
}

void SqliteConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteConnection);
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_END_CLASS();
}

void SqliteConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(c,"c");
}

Dynamic SqliteConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SqliteConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { outValue = _close; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { outValue = _connect; return true;  }
		if (HX_FIELD_EQ(inName,"_request") ) { outValue = _request; return true;  }
	}
	return false;
}

Dynamic SqliteConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SqliteConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { _close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { _connect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_request") ) { _request=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SqliteConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteConnection_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_connect,HX_HCSTRING("_connect","\x6b","\x95","\x38","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_close,HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_request,HX_HCSTRING("_request","\xd0","\x38","\x3d","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
};

#endif

hx::Class SqliteConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_connect","\x6b","\x95","\x38","\x4f"),
	HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44"),
	HX_HCSTRING("_request","\xd0","\x38","\x3d","\x7e"),
	::String(null()) };

void SqliteConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Sqlite.SqliteConnection","\x7c","\x55","\xee","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SqliteConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &SqliteConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SqliteConnection_obj >;
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

void SqliteConnection_obj::__boot()
{
	_connect= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("sqlite_connect","\x37","\x6a","\x05","\x80"),(int)1);
	_close= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),(int)1);
	_request= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),(int)2);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
