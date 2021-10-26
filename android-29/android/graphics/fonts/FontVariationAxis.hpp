#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_FONTVARIATIONAXIS
#define ANDROID_GRAPHICS_FONTS_FONTVARIATIONAXIS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics::fonts
{
	class FontVariationAxis : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jfloat arg1);
		void __constructor(const QString &arg0, jfloat arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getTag();
		jfloat getStyleValue();
		static jarray fromFontVariationSettings(jstring arg0);
		static jarray fromFontVariationSettings(const QString &arg0);
		static jstring toFontVariationSettings(jarray arg0);
	};
} // namespace __jni_impl::android::graphics::fonts


namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void FontVariationAxis::__constructor(jstring arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void FontVariationAxis::__constructor(const QString &arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean FontVariationAxis::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring FontVariationAxis::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FontVariationAxis::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring FontVariationAxis::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat FontVariationAxis::getStyleValue()
	{
		return __thiz.callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	jarray FontVariationAxis::fromFontVariationSettings(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			arg0
		).object<jarray>();
	}
	jarray FontVariationAxis::fromFontVariationSettings(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jstring FontVariationAxis::toFontVariationSettings(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"toFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class FontVariationAxis : public __jni_impl::android::graphics::fonts::FontVariationAxis
	{
	public:
		FontVariationAxis(QAndroidJniObject obj) { __thiz = obj; }
		FontVariationAxis(jstring arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_FONTVARIATIONAXIS

