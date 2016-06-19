#ifndef INCLUDED_quest_Item
#define INCLUDED_quest_Item

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(quest,Item)
namespace quest{


class HXCPP_CLASS_ATTRIBUTES  Item_obj : public ::flixel::ui::FlxButton_obj{
	public:
		typedef ::flixel::ui::FlxButton_obj super;
		typedef Item_obj OBJ_;
		Item_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="quest.Item")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Item_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Item_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Item","\x33","\xf1","\x98","\x30"); }

		int type;
		::String name;
		int arrayID;
		virtual Void setName( ::String string);
		Dynamic setName_dyn();

};

} // end namespace quest

#endif /* INCLUDED_quest_Item */ 
