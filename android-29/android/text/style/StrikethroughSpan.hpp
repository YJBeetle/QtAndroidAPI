#pragma once

#ifndef ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN
#define ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN

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
	class StrikethroughSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
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
	void StrikethroughSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StrikethroughSpan",
			"()V");
	}
	void StrikethroughSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StrikethroughSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint StrikethroughSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	void StrikethroughSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	jint StrikethroughSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void StrikethroughSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class StrikethroughSpan : public __jni_impl::android::text::style::StrikethroughSpan
	{
	public:
		StrikethroughSpan(QAndroidJniObject obj) { __thiz = obj; }
		StrikethroughSpan()
		{
			__constructor();
		}
		StrikethroughSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN

