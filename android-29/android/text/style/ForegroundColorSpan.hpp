#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

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
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		
		// Methods
		jint describeContents();
		jint getForegroundColor();
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
	void ForegroundColorSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ForegroundColorSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint ForegroundColorSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ForegroundColorSpan::getForegroundColor()
	{
		return __thiz.callMethod<jint>(
			"getForegroundColor",
			"()I"
		);
	}
	jint ForegroundColorSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
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
	void ForegroundColorSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ForegroundColorSpan : public __jni_impl::android::text::style::ForegroundColorSpan
	{
	public:
		ForegroundColorSpan(QAndroidJniObject obj) { __thiz = obj; }
		ForegroundColorSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		ForegroundColorSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

