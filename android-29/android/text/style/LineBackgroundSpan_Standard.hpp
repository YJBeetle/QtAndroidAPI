#pragma once

#ifndef ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_STANDARD
#define ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_STANDARD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::text::style
{
	class LineBackgroundSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint getSpanTypeId();
		void drawBackground(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jint arg10);
		jint getColor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void LineBackgroundSpan_Standard::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(I)V",
			arg0);
	}
	void LineBackgroundSpan_Standard::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint LineBackgroundSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	void LineBackgroundSpan_Standard::drawBackground(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jint arg10)
	{
		__thiz.callMethod<void>(
			"drawBackground",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	jint LineBackgroundSpan_Standard::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I");
	}
	jint LineBackgroundSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void LineBackgroundSpan_Standard::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class LineBackgroundSpan_Standard : public __jni_impl::android::text::style::LineBackgroundSpan_Standard
	{
	public:
		LineBackgroundSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
		LineBackgroundSpan_Standard(jint arg0)
		{
			__constructor(
				arg0);
		}
		LineBackgroundSpan_Standard(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_STANDARD

