#pragma once

#ifndef ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_STANDARD
#define ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_STANDARD

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
namespace __jni_impl::android::text
{
	class Layout;
}

namespace __jni_impl::android::text::style
{
	class LeadingMarginSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getLeadingMargin(jboolean arg0);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../Layout.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void LeadingMarginSpan_Standard::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void LeadingMarginSpan_Standard::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(I)V",
			arg0
		);
	}
	void LeadingMarginSpan_Standard::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint LeadingMarginSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jint LeadingMarginSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void LeadingMarginSpan_Standard::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint LeadingMarginSpan_Standard::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	void LeadingMarginSpan_Standard::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
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
			arg10,
			arg11.__jniObject().object()
		);
	}
	void LeadingMarginSpan_Standard::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			QAndroidJniObject::fromString(arg7).object<jstring>(),
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class LeadingMarginSpan_Standard : public __jni_impl::android::text::style::LeadingMarginSpan_Standard
	{
	public:
		LeadingMarginSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
		LeadingMarginSpan_Standard(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		LeadingMarginSpan_Standard(jint arg0)
		{
			__constructor(
				arg0);
		}
		LeadingMarginSpan_Standard(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_STANDARD

