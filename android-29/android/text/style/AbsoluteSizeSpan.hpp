#pragma once

#ifndef ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN
#define ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN

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
	class AbsoluteSizeSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jboolean arg1);
		
		// Methods
		jint describeContents();
		jboolean getDip();
		jint getSize();
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
	void AbsoluteSizeSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteSizeSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(I)V",
			arg0
		);
	}
	void AbsoluteSizeSpan::__constructor(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint AbsoluteSizeSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AbsoluteSizeSpan::getDip()
	{
		return __thiz.callMethod<jboolean>(
			"getDip",
			"()Z"
		);
	}
	jint AbsoluteSizeSpan::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	jint AbsoluteSizeSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AbsoluteSizeSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteSizeSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteSizeSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class AbsoluteSizeSpan : public __jni_impl::android::text::style::AbsoluteSizeSpan
	{
	public:
		AbsoluteSizeSpan(QAndroidJniObject obj) { __thiz = obj; }
		AbsoluteSizeSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		AbsoluteSizeSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
		AbsoluteSizeSpan(jint arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN

