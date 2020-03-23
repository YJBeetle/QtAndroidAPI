#pragma once

#ifndef ANDROID_TEXT_STYLE_SCALEXSPAN
#define ANDROID_TEXT_STYLE_SCALEXSPAN

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
	class ScaleXSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jfloat getScaleX();
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ScaleXSpan::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(F)V",
			arg0);
	}
	void ScaleXSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint ScaleXSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	void ScaleXSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	void ScaleXSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	jint ScaleXSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ScaleXSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jfloat ScaleXSpan::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F");
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class ScaleXSpan : public __jni_impl::android::text::style::ScaleXSpan
	{
	public:
		ScaleXSpan(QAndroidJniObject obj) { __thiz = obj; }
		ScaleXSpan(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		ScaleXSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_SCALEXSPAN

