#pragma once

#include "./R_color.def.hpp"

namespace android
{
	// Fields
	inline jint R_color::background_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"background_dark"
		);
	}
	inline jint R_color::background_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"background_light"
		);
	}
	inline jint R_color::black()
	{
		return getStaticField<jint>(
			"android.R$color",
			"black"
		);
	}
	inline jint R_color::darker_gray()
	{
		return getStaticField<jint>(
			"android.R$color",
			"darker_gray"
		);
	}
	inline jint R_color::holo_blue_bright()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_bright"
		);
	}
	inline jint R_color::holo_blue_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_dark"
		);
	}
	inline jint R_color::holo_blue_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_light"
		);
	}
	inline jint R_color::holo_green_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_green_dark"
		);
	}
	inline jint R_color::holo_green_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_green_light"
		);
	}
	inline jint R_color::holo_orange_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_orange_dark"
		);
	}
	inline jint R_color::holo_orange_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_orange_light"
		);
	}
	inline jint R_color::holo_purple()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_purple"
		);
	}
	inline jint R_color::holo_red_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_red_dark"
		);
	}
	inline jint R_color::holo_red_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_red_light"
		);
	}
	inline jint R_color::primary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_dark"
		);
	}
	inline jint R_color::primary_text_dark_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_dark_nodisable"
		);
	}
	inline jint R_color::primary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_light"
		);
	}
	inline jint R_color::primary_text_light_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_light_nodisable"
		);
	}
	inline jint R_color::secondary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark"
		);
	}
	inline jint R_color::secondary_text_dark_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark_nodisable"
		);
	}
	inline jint R_color::secondary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_light"
		);
	}
	inline jint R_color::secondary_text_light_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_light_nodisable"
		);
	}
	inline jint R_color::tab_indicator_text()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tab_indicator_text"
		);
	}
	inline jint R_color::tertiary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tertiary_text_dark"
		);
	}
	inline jint R_color::tertiary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tertiary_text_light"
		);
	}
	inline jint R_color::transparent()
	{
		return getStaticField<jint>(
			"android.R$color",
			"transparent"
		);
	}
	inline jint R_color::white()
	{
		return getStaticField<jint>(
			"android.R$color",
			"white"
		);
	}
	inline jint R_color::widget_edittext_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"widget_edittext_dark"
		);
	}
	
	// Constructors
	inline R_color::R_color()
		: JObject(
			"android.R$color",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
