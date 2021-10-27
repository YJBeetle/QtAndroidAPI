#pragma once

#ifndef ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN
#define ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN

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
	class BackgroundColorSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		
		// Methods
		jint describeContents();
		jint getBackgroundColor();
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void BackgroundColorSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BackgroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void BackgroundColorSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BackgroundColorSpan",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint BackgroundColorSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BackgroundColorSpan::getBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	jint BackgroundColorSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BackgroundColorSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void BackgroundColorSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class BackgroundColorSpan : public __jni_impl::android::text::style::BackgroundColorSpan
	{
	public:
		BackgroundColorSpan(QAndroidJniObject obj) { __thiz = obj; }
		BackgroundColorSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		BackgroundColorSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN

