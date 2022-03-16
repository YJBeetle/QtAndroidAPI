#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_color : public JObject
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
		static jint system_accent1_0();
		static jint system_accent1_10();
		static jint system_accent1_100();
		static jint system_accent1_1000();
		static jint system_accent1_200();
		static jint system_accent1_300();
		static jint system_accent1_400();
		static jint system_accent1_50();
		static jint system_accent1_500();
		static jint system_accent1_600();
		static jint system_accent1_700();
		static jint system_accent1_800();
		static jint system_accent1_900();
		static jint system_accent2_0();
		static jint system_accent2_10();
		static jint system_accent2_100();
		static jint system_accent2_1000();
		static jint system_accent2_200();
		static jint system_accent2_300();
		static jint system_accent2_400();
		static jint system_accent2_50();
		static jint system_accent2_500();
		static jint system_accent2_600();
		static jint system_accent2_700();
		static jint system_accent2_800();
		static jint system_accent2_900();
		static jint system_accent3_0();
		static jint system_accent3_10();
		static jint system_accent3_100();
		static jint system_accent3_1000();
		static jint system_accent3_200();
		static jint system_accent3_300();
		static jint system_accent3_400();
		static jint system_accent3_50();
		static jint system_accent3_500();
		static jint system_accent3_600();
		static jint system_accent3_700();
		static jint system_accent3_800();
		static jint system_accent3_900();
		static jint system_neutral1_0();
		static jint system_neutral1_10();
		static jint system_neutral1_100();
		static jint system_neutral1_1000();
		static jint system_neutral1_200();
		static jint system_neutral1_300();
		static jint system_neutral1_400();
		static jint system_neutral1_50();
		static jint system_neutral1_500();
		static jint system_neutral1_600();
		static jint system_neutral1_700();
		static jint system_neutral1_800();
		static jint system_neutral1_900();
		static jint system_neutral2_0();
		static jint system_neutral2_10();
		static jint system_neutral2_100();
		static jint system_neutral2_1000();
		static jint system_neutral2_200();
		static jint system_neutral2_300();
		static jint system_neutral2_400();
		static jint system_neutral2_50();
		static jint system_neutral2_500();
		static jint system_neutral2_600();
		static jint system_neutral2_700();
		static jint system_neutral2_800();
		static jint system_neutral2_900();
		static jint tab_indicator_text();
		static jint tertiary_text_dark();
		static jint tertiary_text_light();
		static jint transparent();
		static jint white();
		static jint widget_edittext_dark();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_color(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_color(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_color();
		
		// Methods
	};
} // namespace android

