#include "../../graphics/Bitmap.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../Layout.hpp"
#include "./IconMarginSpan.hpp"

namespace android::text::style
{
	// Fields
	
	IconMarginSpan::IconMarginSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IconMarginSpan::IconMarginSpan(android::graphics::Bitmap &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	IconMarginSpan::IconMarginSpan(android::graphics::Bitmap &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void IconMarginSpan::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
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
	void IconMarginSpan::chooseHeight(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
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
	void IconMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
	void IconMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
} // namespace android::text::style

