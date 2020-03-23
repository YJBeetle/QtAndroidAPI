#pragma once

#ifndef ANDROID_TEXT_STYLE_STYLESPAN
#define ANDROID_TEXT_STYLE_STYLESPAN

#include "MetricAffectingSpan.hpp"

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
	class StyleSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		jint getStyle();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void StyleSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StyleSpan",
			"(I)V",
			arg0);
	}
	void StyleSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StyleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint StyleSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	void StyleSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	void StyleSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	jint StyleSpan::getStyle()
	{
		return __thiz.callMethod<jint>(
			"getStyle",
			"()I");
	}
	jint StyleSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void StyleSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class StyleSpan : public __jni_impl::android::text::style::StyleSpan
	{
	public:
		StyleSpan(QAndroidJniObject obj) { __thiz = obj; }
		StyleSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
		StyleSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_STYLESPAN

