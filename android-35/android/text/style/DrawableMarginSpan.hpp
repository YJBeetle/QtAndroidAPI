#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../graphics/Paint_FontMetricsInt.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../Layout.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DrawableMarginSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline DrawableMarginSpan::DrawableMarginSpan(android::graphics::drawable::Drawable arg0)
		: JObject(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		) {}
	inline DrawableMarginSpan::DrawableMarginSpan(android::graphics::drawable::Drawable arg0, jint arg1)
		: JObject(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void DrawableMarginSpan::chooseHeight(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5) const
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
	inline void DrawableMarginSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
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
	inline android::graphics::drawable::Drawable DrawableMarginSpan::getDrawable() const
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint DrawableMarginSpan::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	inline jint DrawableMarginSpan::getPadding() const
	{
		return callMethod<jint>(
			"getPadding",
			"()I"
		);
	}
	inline JString DrawableMarginSpan::toString() const
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
