#ifndef INCLUDED_sys_db_Connection
#define INCLUDED_sys_db_Connection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Connection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Connection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::sys::db::ResultSet request( ::String s)=0;
virtual Dynamic request_dyn()=0;
		virtual Void close( )=0;
virtual Dynamic close_dyn()=0;
};



template<typename IMPL>
class Connection_delegate_ : public Connection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Connection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::sys::db::ResultSet request( ::String s) { return mDelegate->request(s);}
		Dynamic request_dyn() { return mDelegate->request_dyn();}
		Void close( ) { return mDelegate->close();}
		Dynamic close_dyn() { return mDelegate->close_dyn();}
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Connection */ 
