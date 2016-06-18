#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteResultSet_obj::__construct(Dynamic r)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","new",0x31627399,"sys.db._Sqlite.SqliteResultSet.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",108,0xf219dfa9)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
{
	HX_STACK_LINE(109)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	this->cache = tmp;
	HX_STACK_LINE(110)
	this->r = r;
	HX_STACK_LINE(111)
	this->hasNext();
}
;
	return null();
}

//SqliteResultSet_obj::~SqliteResultSet_obj() { }

Dynamic SqliteResultSet_obj::__CreateEmpty() { return  new SqliteResultSet_obj; }
hx::ObjectPtr< SqliteResultSet_obj > SqliteResultSet_obj::__new(Dynamic r)
{  hx::ObjectPtr< SqliteResultSet_obj > _result_ = new SqliteResultSet_obj();
	_result_->__construct(r);
	return _result_;}

Dynamic SqliteResultSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteResultSet_obj > _result_ = new SqliteResultSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *SqliteResultSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::ResultSet_obj)) return operator ::sys::db::ResultSet_obj *();
	return super::__ToInterface(inType);
}

SqliteResultSet_obj::operator ::sys::db::ResultSet_obj *()
	{ return new ::sys::db::ResultSet_delegate_< SqliteResultSet_obj >(this); }
bool SqliteResultSet_obj::hasNext( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","hasNext",0x0ab9d926,"sys.db._Sqlite.SqliteResultSet.hasNext","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",131,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	Dynamic tmp = this->next();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(133)
	bool tmp1 = (c == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(134)
		return false;
	}
	HX_STACK_LINE(135)
	::List tmp2 = this->cache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	Dynamic tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	tmp2->push(tmp3);
	HX_STACK_LINE(136)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,hasNext,return )

Dynamic SqliteResultSet_obj::next( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","next",0x04c2b39a,"sys.db._Sqlite.SqliteResultSet.next","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",139,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::List tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(141)
	bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	if ((tmp2)){
		HX_STACK_LINE(142)
		Dynamic tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		return tmp3;
	}
	HX_STACK_LINE(143)
	Dynamic tmp3 = this->r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	Dynamic tmp4 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_next(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,next,return )

Dynamic SqliteResultSet_obj::result_next;


SqliteResultSet_obj::SqliteResultSet_obj()
{
}

void SqliteResultSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteResultSet);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void SqliteResultSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

Dynamic SqliteResultSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SqliteResultSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { outValue = result_next; return true;  }
	}
	return false;
}

Dynamic SqliteResultSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SqliteResultSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { result_next=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SqliteResultSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteResultSet_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(SqliteResultSet_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_next,HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
};

#endif

hx::Class SqliteResultSet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),
	::String(null()) };

void SqliteResultSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Sqlite.SqliteResultSet","\x27","\xb3","\x30","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SqliteResultSet_obj::__GetStatic;
	__mClass->mSetStaticField = &SqliteResultSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SqliteResultSet_obj >;
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

void SqliteResultSet_obj::__boot()
{
	result_next= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),(int)1);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
