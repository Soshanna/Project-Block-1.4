#ifndef INCLUDED_quest_QuestState
#define INCLUDED_quest_QuestState

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
HX_DECLARE_CLASS1(quest,QuestState)
namespace quest{


class HXCPP_CLASS_ATTRIBUTES  QuestState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef QuestState_obj OBJ_;
		QuestState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="quest.QuestState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QuestState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuestState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("QuestState","\xef","\x0a","\x8f","\xf7"); }

		::flixel::ui::FlxButton jobListButton;
		::flixel::ui::FlxButton contactListButton;
		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxButton backButton;
		virtual Void create( );

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

		virtual Void clickJobList( );
		Dynamic clickJobList_dyn();

		virtual Void clickcontactList( );
		Dynamic clickcontactList_dyn();

};

} // end namespace quest

#endif /* INCLUDED_quest_QuestState */ 
