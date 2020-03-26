#pragma once

#ifndef ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_STANDARD
#define ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_STANDARD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}

namespace __jni_impl::android::text::style
{
	class LineHeightSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSpanTypeId();
		void chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5);
		jint getHeight();
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void LineHeightSpan_Standard::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineHeightSpan$Standard",
			"(I)V",
			arg0);
	}
	void LineHeightSpan_Standard::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineHeightSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint LineHeightSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void LineHeightSpan_Standard::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint LineHeightSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LineHeightSpan_Standard::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5)
	{
		__thiz.callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jint LineHeightSpan_Standard::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class LineHeightSpan_Standard : public __jni_impl::android::text::style::LineHeightSpan_Standard
	{
	public:
		LineHeightSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
		LineHeightSpan_Standard(jint arg0)
		{
			__constructor(
				arg0);
		}
		LineHeightSpan_Standard(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_STANDARD

