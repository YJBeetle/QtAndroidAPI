#pragma once

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
	class ScaleXSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jfloat arg0);
		
		// Methods
		jint describeContents();
		jfloat getScaleX();
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ScaleXSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleXSpan::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(F)V",
			arg0
		);
	}
	
	// Methods
	jint ScaleXSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat ScaleXSpan::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jint ScaleXSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void ScaleXSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleXSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleXSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ScaleXSpan : public __jni_impl::android::text::style::ScaleXSpan
	{
	public:
		ScaleXSpan(QAndroidJniObject obj) { __thiz = obj; }
		ScaleXSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		ScaleXSpan(jfloat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

