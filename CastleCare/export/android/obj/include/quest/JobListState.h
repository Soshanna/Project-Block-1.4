#ifndef INCLUDED_quest_JobListState
#define INCLUDED_quest_JobListState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(quest,JobListState)
namespace quest{


class HXCPP_CLASS_ATTRIBUTES  JobListState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef JobListState_obj OBJ_;
		JobListState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="quest.JobListState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JobListState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JobListState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JobListState","\x36","\x29","\x67","\xba"); }

		::flixel::ui::FlxButton backButton;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxButton miniGameButton;
		virtual Void create( );

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

		virtual Void clickMiniGame( );
		Dynamic clickMiniGame_dyn();

};

} // end namespace quest

#endif /* INCLUDED_quest_JobListState */ 
