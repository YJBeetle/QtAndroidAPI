#pragma once

#ifndef ANDROID_TEXT_STYLE_ICONMARGINSPAN
#define ANDROID_TEXT_STYLE_ICONMARGINSPAN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}
namespace __jni_impl::android::text
{
	class Layout;
}

namespace __jni_impl::android::text::style
{
	class IconMarginSpan : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Bitmap arg0);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jint arg1);
		
		// Methods
		void chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5);
		void chooseHeight(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		jint getLeadingMargin(jboolean arg0);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/Bitmap.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../Layout.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void IconMarginSpan::__constructor(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void IconMarginSpan::__constructor(__jni_impl::android::graphics::Bitmap arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void IconMarginSpan::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5)
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
	void IconMarginSpan::chooseHeight(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5)
	{
		__thiz.callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void IconMarginSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
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
	void IconMarginSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
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
	jint IconMarginSpan::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class IconMarginSpan : public __jni_impl::android::text::style::IconMarginSpan
	{
	public:
		IconMarginSpan(QAndroidJniObject obj) { __thiz = obj; }
		IconMarginSpan(__jni_impl::android::graphics::Bitmap arg0)
		{
			__constructor(
				arg0);
		}
		IconMarginSpan(__jni_impl::android::graphics::Bitmap arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_ICONMARGINSPAN

