#pragma once

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4);
		void __constructor(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4);
		
		// Methods
		jint describeContents();
		jstring getFamily();
		jstring getFontFeatureSettings();
		jstring getFontVariationSettings();
		QAndroidJniObject getLinkTextColor();
		jint getShadowColor();
		jfloat getShadowDx();
		jfloat getShadowDy();
		jfloat getShadowRadius();
		jint getSpanTypeId();
		QAndroidJniObject getTextColor();
		jint getTextFontWeight();
		QAndroidJniObject getTextLocales();
		jint getTextSize();
		jint getTextStyle();
		QAndroidJniObject getTypeface();
		jboolean isElegantTextHeight();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../content/Context.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
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
			arg0.__jniObject().object()
		);
	}
	void TextAppearanceSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextAppearanceSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
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
			arg4.__jniObject().object()
		);
	}
	void TextAppearanceSpan::__constructor(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::content::res::ColorStateList arg3, __jni_impl::android::content::res::ColorStateList arg4)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TextAppearanceSpan",
			"(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	jint TextAppearanceSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextAppearanceSpan::getFamily()
	{
		return __thiz.callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject TextAppearanceSpan::getLinkTextColor()
	{
		return __thiz.callObjectMethod(
			"getLinkTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextAppearanceSpan::getShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getShadowColor",
			"()I"
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
	jfloat TextAppearanceSpan::getShadowRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jint TextAppearanceSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
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
	jint TextAppearanceSpan::getTextFontWeight()
	{
		return __thiz.callMethod<jint>(
			"getTextFontWeight",
			"()I"
		);
	}
	QAndroidJniObject TextAppearanceSpan::getTextLocales()
	{
		return __thiz.callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextAppearanceSpan::getTextSize()
	{
		return __thiz.callMethod<jint>(
			"getTextSize",
			"()I"
		);
	}
	jint TextAppearanceSpan::getTextStyle()
	{
		return __thiz.callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	QAndroidJniObject TextAppearanceSpan::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jboolean TextAppearanceSpan::isElegantTextHeight()
	{
		return __thiz.callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
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
	void TextAppearanceSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
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
		TextAppearanceSpan(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextAppearanceSpan(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
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
	};
} // namespace android::text::style

