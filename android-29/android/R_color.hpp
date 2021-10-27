#pragma once

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
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
	
	// Constructors
	void R_color::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$color",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_color : public __jni_impl::android::R_color
	{
	public:
		R_color(QAndroidJniObject obj) { __thiz = obj; }
		R_color()
		{
			__constructor();
		}
	};
} // namespace android

