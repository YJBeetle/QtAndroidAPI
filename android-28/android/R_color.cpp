#include "./R_color.hpp"

namespace android
{
	// Fields
	jint R_color::background_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"background_dark"
		);
	}
	jint R_color::background_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"background_light"
		);
	}
	jint R_color::black()
	{
		return getStaticField<jint>(
			"android.R$color",
			"black"
		);
	}
	jint R_color::darker_gray()
	{
		return getStaticField<jint>(
			"android.R$color",
			"darker_gray"
		);
	}
	jint R_color::holo_blue_bright()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_bright"
		);
	}
	jint R_color::holo_blue_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_dark"
		);
	}
	jint R_color::holo_blue_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_blue_light"
		);
	}
	jint R_color::holo_green_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_green_dark"
		);
	}
	jint R_color::holo_green_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_green_light"
		);
	}
	jint R_color::holo_orange_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_orange_dark"
		);
	}
	jint R_color::holo_orange_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_orange_light"
		);
	}
	jint R_color::holo_purple()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_purple"
		);
	}
	jint R_color::holo_red_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_red_dark"
		);
	}
	jint R_color::holo_red_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"holo_red_light"
		);
	}
	jint R_color::primary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_dark"
		);
	}
	jint R_color::primary_text_dark_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_dark_nodisable"
		);
	}
	jint R_color::primary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_light"
		);
	}
	jint R_color::primary_text_light_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"primary_text_light_nodisable"
		);
	}
	jint R_color::secondary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark"
		);
	}
	jint R_color::secondary_text_dark_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark_nodisable"
		);
	}
	jint R_color::secondary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_light"
		);
	}
	jint R_color::secondary_text_light_nodisable()
	{
		return getStaticField<jint>(
			"android.R$color",
			"secondary_text_light_nodisable"
		);
	}
	jint R_color::tab_indicator_text()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tab_indicator_text"
		);
	}
	jint R_color::tertiary_text_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tertiary_text_dark"
		);
	}
	jint R_color::tertiary_text_light()
	{
		return getStaticField<jint>(
			"android.R$color",
			"tertiary_text_light"
		);
	}
	jint R_color::transparent()
	{
		return getStaticField<jint>(
			"android.R$color",
			"transparent"
		);
	}
	jint R_color::white()
	{
		return getStaticField<jint>(
			"android.R$color",
			"white"
		);
	}
	jint R_color::widget_edittext_dark()
	{
		return getStaticField<jint>(
			"android.R$color",
			"widget_edittext_dark"
		);
	}
	
	// QJniObject forward
	R_color::R_color(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_color::R_color()
		: JObject(
			"android.R$color",
			"()V"
		) {}
	
	// Methods
} // namespace android

