#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../graphics/Paint_FontMetricsInt.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./ReplacementSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline ReplacementSpan::ReplacementSpan()
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ReplacementSpan",
			"()V"
		) {}
	
	// Methods
	inline void ReplacementSpan::draw(android::graphics::Canvas arg0, JString arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	inline jint ReplacementSpan::getSize(android::graphics::Paint arg0, JString arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4) const
	{
		return callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void ReplacementSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void ReplacementSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

