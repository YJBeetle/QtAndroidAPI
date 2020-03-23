#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_FONTSTYLE
#define ANDROID_GRAPHICS_FONTS_FONTSTYLE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics::fonts
{
	class FontStyle : public __JniBaseClass
	{
	public:
		// Fields
		static jint FONT_SLANT_ITALIC();
		static jint FONT_SLANT_UPRIGHT();
		static jint FONT_WEIGHT_BLACK();
		static jint FONT_WEIGHT_BOLD();
		static jint FONT_WEIGHT_EXTRA_BOLD();
		static jint FONT_WEIGHT_EXTRA_LIGHT();
		static jint FONT_WEIGHT_LIGHT();
		static jint FONT_WEIGHT_MAX();
		static jint FONT_WEIGHT_MEDIUM();
		static jint FONT_WEIGHT_MIN();
		static jint FONT_WEIGHT_NORMAL();
		static jint FONT_WEIGHT_SEMI_BOLD();
		static jint FONT_WEIGHT_THIN();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getSlant();
		jint getWeight();
	};
} // namespace __jni_impl::android::graphics::fonts


namespace __jni_impl::android::graphics::fonts
{
	// Fields
	jint FontStyle::FONT_SLANT_ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_ITALIC");
	}
	jint FontStyle::FONT_SLANT_UPRIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_UPRIGHT");
	}
	jint FontStyle::FONT_WEIGHT_BLACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BLACK");
	}
	jint FontStyle::FONT_WEIGHT_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BOLD");
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_BOLD");
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_LIGHT");
	}
	jint FontStyle::FONT_WEIGHT_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_LIGHT");
	}
	jint FontStyle::FONT_WEIGHT_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MAX");
	}
	jint FontStyle::FONT_WEIGHT_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MEDIUM");
	}
	jint FontStyle::FONT_WEIGHT_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MIN");
	}
	jint FontStyle::FONT_WEIGHT_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_NORMAL");
	}
	jint FontStyle::FONT_WEIGHT_SEMI_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_SEMI_BOLD");
	}
	jint FontStyle::FONT_WEIGHT_THIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_THIN");
	}
	
	// Constructors
	void FontStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontStyle",
			"()V");
	}
	void FontStyle::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontStyle",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean FontStyle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject FontStyle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint FontStyle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint FontStyle::getSlant()
	{
		return __thiz.callMethod<jint>(
			"getSlant",
			"()I");
	}
	jint FontStyle::getWeight()
	{
		return __thiz.callMethod<jint>(
			"getWeight",
			"()I");
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class FontStyle : public __jni_impl::android::graphics::fonts::FontStyle
	{
	public:
		FontStyle(QAndroidJniObject obj) { __thiz = obj; }
		FontStyle()
		{
			__constructor();
		}
		FontStyle(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_FONTSTYLE

