#pragma once

#ifndef ANDROID_TEXT_STYLE_QUOTESPAN
#define ANDROID_TEXT_STYLE_QUOTESPAN

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
	class QuoteSpan : public __JniBaseClass
	{
	public:
		// Fields
		static jint STANDARD_COLOR();
		static jint STANDARD_GAP_WIDTH_PX();
		static jint STANDARD_STRIPE_WIDTH_PX();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jint getSpanTypeId();
		jint getLeadingMargin(jboolean arg0);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		jint getGapWidth();
		jint getStripeWidth();
		jint getColor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../Layout.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	jint QuoteSpan::STANDARD_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_COLOR");
	}
	jint QuoteSpan::STANDARD_GAP_WIDTH_PX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_GAP_WIDTH_PX");
	}
	jint QuoteSpan::STANDARD_STRIPE_WIDTH_PX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_STRIPE_WIDTH_PX");
	}
	
	// Constructors
	void QuoteSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.QuoteSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void QuoteSpan::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.QuoteSpan",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void QuoteSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.QuoteSpan",
			"(I)V",
			arg0);
	}
	void QuoteSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.QuoteSpan",
			"()V");
	}
	
	// Methods
	jint QuoteSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	jint QuoteSpan::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0);
	}
	void QuoteSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
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
			arg11.__jniObject().object());
	}
	jint QuoteSpan::getGapWidth()
	{
		return __thiz.callMethod<jint>(
			"getGapWidth",
			"()I");
	}
	jint QuoteSpan::getStripeWidth()
	{
		return __thiz.callMethod<jint>(
			"getStripeWidth",
			"()I");
	}
	jint QuoteSpan::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I");
	}
	jint QuoteSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void QuoteSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class QuoteSpan : public __jni_impl::android::text::style::QuoteSpan
	{
	public:
		QuoteSpan(QAndroidJniObject obj) { __thiz = obj; }
		QuoteSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		QuoteSpan(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		QuoteSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
		QuoteSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_QUOTESPAN

