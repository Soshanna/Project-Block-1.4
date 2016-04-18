#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{

Void ConsoleUtil_obj::__construct()
{
	return null();
}

//ConsoleUtil_obj::~ConsoleUtil_obj() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return  new ConsoleUtil_obj; }
hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{  hx::ObjectPtr< ConsoleUtil_obj > _result_ = new ConsoleUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleUtil_obj > _result_ = new ConsoleUtil_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > ConsoleUtil_obj::getFields( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","getFields",0x604f9dfb,"flixel.system.debug.console.ConsoleUtil.getFields","flixel/system/debug/console/ConsoleUtil.hx",91,0x2e8bcde6)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(92)
	Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(93)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(94)
		Dynamic tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		fields = ::Type_obj::getClassFields(tmp2);
	}
	else{
		HX_STACK_LINE(95)
		Dynamic tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		bool tmp3 = ::Reflect_obj::isObject(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp3)){
			HX_STACK_LINE(96)
			Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			fields = ::Type_obj::getInstanceFields(tmp5);
		}
	}
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			bool tmp2 = (_g < fields->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			if ((tmp3)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::String tmp4 = fields->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::String field = tmp4;		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			bool tmp7 = ::StringTools_obj::startsWith(tmp6,HX_HCSTRING("get_","\x09","\x03","\x62","\x44"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			if ((tmp8)){
				HX_STACK_LINE(101)
				::String tmp10 = field;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				tmp9 = ::StringTools_obj::startsWith(tmp11,HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c"));
			}
			else{
				HX_STACK_LINE(101)
				tmp9 = true;
			}
			HX_STACK_LINE(101)
			if ((tmp9)){
				HX_STACK_LINE(103)
				::String tmp10 = field.substr((int)4,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				::String name = tmp10;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(104)
				::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				int tmp12 = fields->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(104)
				bool tmp13 = (tmp12 != (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(104)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(104)
				if ((tmp14)){
					HX_STACK_LINE(105)
					::String tmp15 = name;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(105)
					fields->push(tmp15);
				}
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	bool run(::String field){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/console/ConsoleUtil.hx",111,0x2e8bcde6)
		HX_STACK_ARG(field,"field")
		{
			HX_STACK_LINE(112)
			::String tmp2 = field;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			bool tmp3 = ::StringTools_obj::startsWith(tmp2,HX_HCSTRING("get_","\x09","\x03","\x62","\x44"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			if ((tmp5)){
				HX_STACK_LINE(112)
				::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(112)
				::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(112)
				bool tmp9 = ::StringTools_obj::startsWith(tmp8,HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(112)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(112)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(112)
				tmp6 = !(tmp11);
			}
			else{
				HX_STACK_LINE(112)
				tmp6 = false;
			}
			HX_STACK_LINE(112)
			return tmp6;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(110)
	fields = fields->filter( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(115)
	return ::flixel::_system::debug::console::ConsoleUtil_obj::sortFields(fields);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getFields,return )

Array< ::String > ConsoleUtil_obj::sortFields( Array< ::String > fields){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",119,0x2e8bcde6)
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(120)
	Array< ::String > underscoreList = Array_obj< ::String >::__new();		HX_STACK_VAR(underscoreList,"underscoreList");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,underscoreList)
	int __ArgCount() const { return 1; }
	bool run(::String field){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/console/ConsoleUtil.hx",123,0x2e8bcde6)
		HX_STACK_ARG(field,"field")
		{
			HX_STACK_LINE(124)
			::String tmp = field;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			if ((tmp1)){
				HX_STACK_LINE(126)
				::String tmp2 = field;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				underscoreList->push(tmp2);
				HX_STACK_LINE(127)
				return false;
			}
			HX_STACK_LINE(129)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(122)
	fields = fields->filter( Dynamic(new _Function_1_1(underscoreList)));
	HX_STACK_LINE(132)
	::flixel::util::FlxStringUtil_obj::sortAlphabetically(fields);
	HX_STACK_LINE(133)
	::flixel::util::FlxStringUtil_obj::sortAlphabetically(underscoreList);
	HX_STACK_LINE(135)
	return fields->concat(underscoreList);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,sortFields,return )

Void ConsoleUtil_obj::log( Dynamic Text){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","log",0x2bebd9d0,"flixel.system.debug.console.ConsoleUtil.log","flixel/system/debug/console/ConsoleUtil.hx",144,0x2e8bcde6)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(145)
		::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		::flixel::_system::debug::log::LogStyle tmp1 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp1,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortFields") ) { outValue = sortFields_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getFields","\xaf","\x17","\xe5","\xfc"),
	HX_HCSTRING("sortFields","\x77","\x04","\x74","\xdd"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	::String(null()) };

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleUtil","\xba","\x4f","\xd6","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConsoleUtil_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
