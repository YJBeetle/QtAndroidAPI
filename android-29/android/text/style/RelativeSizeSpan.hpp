#pragma once

#ifndef ANDROID_TEXT_STYLE_RELATIVESIZESPAN
#define ANDROID_TEXT_STYLE_RELATIVESIZESPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
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
	class RelativeSizeSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jfloat getSizeChange();
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void RelativeSizeSpan::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.RelativeSizeSpan",
			"(F)V",
			arg0
		);
	}
	void RelativeSizeSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.RelativeSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void RelativeSizeSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	jint RelativeSizeSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jint RelativeSizeSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RelativeSizeSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat RelativeSizeSpan::getSizeChange()
	{
		return __thiz.callMethod<jfloat>(
			"getSizeChange",
			"()F"
		);
	}
	void RelativeSizeSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class RelativeSizeSpan : public __jni_impl::android::text::style::RelativeSizeSpan
	{
	public:
		RelativeSizeSpan(QAndroidJniObject obj) { __thiz = obj; }
		RelativeSizeSpan(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		RelativeSizeSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_RELATIVESIZESPAN

