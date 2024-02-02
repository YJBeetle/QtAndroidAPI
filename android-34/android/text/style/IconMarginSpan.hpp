#pragma once

#include "../../graphics/Bitmap.def.hpp"
#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../graphics/Paint_FontMetricsInt.def.hpp"
#include "../Layout.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./IconMarginSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline IconMarginSpan::IconMarginSpan(android::graphics::Bitmap arg0)
		: JObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	inline IconMarginSpan::IconMarginSpan(android::graphics::Bitmap arg0, jint arg1)
		: JObject(
			"android.text.style.IconMarginSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void IconMarginSpan::chooseHeight(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5) const
	{
		callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void IconMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
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
			arg7.object<jstring>(),
			arg8,
			arg9,
			arg10,
			arg11.object()
		);
	}
	inline android::graphics::Bitmap IconMarginSpan::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline jint IconMarginSpan::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	inline jint IconMarginSpan::getPadding() const
	{
		return callMethod<jint>(
			"getPadding",
			"()I"
		);
	}
	inline JString IconMarginSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
