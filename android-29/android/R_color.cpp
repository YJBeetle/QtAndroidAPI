#include "./R_color.hpp"

namespace android
{
	// Fields
	jint R_color::background_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"background_dark"
		);
	}
	jint R_color::background_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"background_light"
		);
	}
	jint R_color::black()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"black"
		);
	}
	jint R_color::darker_gray()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"darker_gray"
		);
	}
	jint R_color::holo_blue_bright()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_blue_bright"
		);
	}
	jint R_color::holo_blue_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_blue_dark"
		);
	}
	jint R_color::holo_blue_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_blue_light"
		);
	}
	jint R_color::holo_green_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_green_dark"
		);
	}
	jint R_color::holo_green_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_green_light"
		);
	}
	jint R_color::holo_orange_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_orange_dark"
		);
	}
	jint R_color::holo_orange_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_orange_light"
		);
	}
	jint R_color::holo_purple()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_purple"
		);
	}
	jint R_color::holo_red_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_red_dark"
		);
	}
	jint R_color::holo_red_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"holo_red_light"
		);
	}
	jint R_color::primary_text_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"primary_text_dark"
		);
	}
	jint R_color::primary_text_dark_nodisable()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"primary_text_dark_nodisable"
		);
	}
	jint R_color::primary_text_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"primary_text_light"
		);
	}
	jint R_color::primary_text_light_nodisable()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"primary_text_light_nodisable"
		);
	}
	jint R_color::secondary_text_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark"
		);
	}
	jint R_color::secondary_text_dark_nodisable()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"secondary_text_dark_nodisable"
		);
	}
	jint R_color::secondary_text_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"secondary_text_light"
		);
	}
	jint R_color::secondary_text_light_nodisable()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"secondary_text_light_nodisable"
		);
	}
	jint R_color::tab_indicator_text()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"tab_indicator_text"
		);
	}
	jint R_color::tertiary_text_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"tertiary_text_dark"
		);
	}
	jint R_color::tertiary_text_light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"tertiary_text_light"
		);
	}
	jint R_color::transparent()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"transparent"
		);
	}
	jint R_color::white()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"white"
		);
	}
	jint R_color::widget_edittext_dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$color",
			"widget_edittext_dark"
		);
	}
	
	// QAndroidJniObject forward
	R_color::R_color(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_color::R_color()
		: __JniBaseClass(
			"android.R$color",
			"()V"
		) {}
	
	// Methods
} // namespace android

