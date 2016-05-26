#ifndef INCLUDED_MoodSmiley
#define INCLUDED_MoodSmiley

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
HX_DECLARE_CLASS0(MoodSmiley)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  MoodSmiley_obj : public ::flixel::ui::FlxButton_obj{
	public:
		typedef ::flixel::ui::FlxButton_obj super;
		typedef MoodSmiley_obj OBJ_;
		MoodSmiley_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic onclick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MoodSmiley")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MoodSmiley_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic onclick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MoodSmiley_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MoodSmiley","\x28","\x55","\x5a","\x90"); }

};


#endif /* INCLUDED_MoodSmiley */ 
