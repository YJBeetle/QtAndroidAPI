#pragma once

#ifndef ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN
#define ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class TextAppearanceSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		
		// Methods
		jstring getFamily();
		QAndroidJniObject getTypeface();
		QAndroidJniObject getTextLocales();
		jboolean isElegantTextHeight();
		jint getTextSize();
		jstring getFontFeatureSettings();
		jstring getFontVariationSettings();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		jfloat getShadowRadius();
		jfloat getShadowDx();
		jfloat getShadowDy();
		jint getShadowColor();
		QAndroidJniObject getTextColor();
		QAndroidJniObject getLinkTextColor();
		jint getTextStyle();
		jint getTextFontWeight();
		jint getSpanTypeId();
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/Context.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../os/LocaleList.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TextAppearanceSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void TextAppearanceSpan::__constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void TextAppearanceSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void TextAppearanceSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jstring TextAppearanceSpan::getFamily()
	{
		return __thiz.callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextAppearanceSpan::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject TextAppearanceSpan::getTextLocales()
	{
		return __thiz.callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jboolean TextAppearanceSpan::isElegantTextHeight()
	{
		return __thiz.callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jint TextAppearanceSpan::getTextSize()
	{
		return __thiz.callMethod<jint>(
			"getTextSize",
			"()I"
		);
	}
	jstring TextAppearanceSpan::getFontFeatureSettings()
	{
		return __thiz.callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextAppearanceSpan::getFontVariationSettings()
	{
		return __thiz.callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextAppearanceSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextAppearanceSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextAppearanceSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void TextAppearanceSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat TextAppearanceSpan::getShadowRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jfloat TextAppearanceSpan::getShadowDx()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	jfloat TextAppearanceSpan::getShadowDy()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	jint TextAppearanceSpan::getShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	QAndroidJniObject TextAppearanceSpan::getTextColor()
	{
		return __thiz.callObjectMethod(
			"getTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject TextAppearanceSpan::getLinkTextColor()
	{
		return __thiz.callObjectMethod(
			"getLinkTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextAppearanceSpan::getTextStyle()
	{
		return __thiz.callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	jint TextAppearanceSpan::getTextFontWeight()
	{
		return __thiz.callMethod<jint>(
			"getTextFontWeight",
			"()I"
		);
	}
	jint TextAppearanceSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TextAppearanceSpan : public __jni_impl::android::text::style::TextAppearanceSpan
	{
	public:
		TextAppearanceSpan(QAndroidJniObject obj) { __thiz = obj; }
		TextAppearanceSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		TextAppearanceSpan(jstring arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		TextAppearanceSpan(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextAppearanceSpan(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN

