#pragma once

#ifndef ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN
#define ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"

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
	class ForegroundColorSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint getForegroundColor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		jint getSpanTypeId();
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ForegroundColorSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(I)V",
			arg0);
	}
	void ForegroundColorSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint ForegroundColorSpan::getForegroundColor()
	{
		return __thiz.callMethod<jint>(
			"getForegroundColor",
			"()I"
		);
	}
	jint ForegroundColorSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ForegroundColorSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ForegroundColorSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	jint ForegroundColorSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class ForegroundColorSpan : public __jni_impl::android::text::style::ForegroundColorSpan
	{
	public:
		ForegroundColorSpan(QAndroidJniObject obj) { __thiz = obj; }
		ForegroundColorSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
		ForegroundColorSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN

