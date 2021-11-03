#include "../../graphics/Bitmap.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../Layout.hpp"
#include "./IconMarginSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	IconMarginSpan::IconMarginSpan(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IconMarginSpan::IconMarginSpan(android::graphics::Bitmap arg0)
		: JObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	IconMarginSpan::IconMarginSpan(android::graphics::Bitmap arg0, jint arg1)
		: JObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void IconMarginSpan::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
	{
		callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void IconMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
	{
		callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.object()
		);
	}
	jint IconMarginSpan::getLeadingMargin(jboolean arg0)
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
} // namespace android::text::style

