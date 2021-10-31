#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../Layout.hpp"
#include "./DrawableMarginSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	DrawableMarginSpan::DrawableMarginSpan(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrawableMarginSpan::DrawableMarginSpan(android::graphics::drawable::Drawable arg0)
		: __JniBaseClass(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		) {}
	DrawableMarginSpan::DrawableMarginSpan(android::graphics::drawable::Drawable arg0, jint arg1)
		: __JniBaseClass(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void DrawableMarginSpan::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
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
	void DrawableMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
	jint DrawableMarginSpan::getLeadingMargin(jboolean arg0)
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
} // namespace android::text::style

