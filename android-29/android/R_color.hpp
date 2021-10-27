#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_color : public __JniBaseClass
	{
	public:
		// Fields
		static jint background_dark();
		static jint background_light();
		static jint black();
		static jint darker_gray();
		static jint holo_blue_bright();
		static jint holo_blue_dark();
		static jint holo_blue_light();
		static jint holo_green_dark();
		static jint holo_green_light();
		static jint holo_orange_dark();
		static jint holo_orange_light();
		static jint holo_purple();
		static jint holo_red_dark();
		static jint holo_red_light();
		static jint primary_text_dark();
		static jint primary_text_dark_nodisable();
		static jint primary_text_light();
		static jint primary_text_light_nodisable();
		static jint secondary_text_dark();
		static jint secondary_text_dark_nodisable();
		static jint secondary_text_light();
		static jint secondary_text_light_nodisable();
		static jint tab_indicator_text();
		static jint tertiary_text_dark();
		static jint tertiary_text_light();
		static jint transparent();
		static jint white();
		static jint widget_edittext_dark();
		
		R_color(QAndroidJniObject obj);
		// Constructors
		R_color();
		
		// Methods
	};
} // namespace android

