#pragma once

#include "../TextPaint.def.hpp"
#include "./CharacterStyle.def.hpp"
#include "./MetricAffectingSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline MetricAffectingSpan::MetricAffectingSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.MetricAffectingSpan",
			"()V"
		) {}
	
	// Methods
	inline android::text::style::MetricAffectingSpan MetricAffectingSpan::getUnderlying() const
	{
		return callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/MetricAffectingSpan;"
		);
	}
	inline void MetricAffectingSpan::updateMeasureState(android::text::TextPaint arg0) const
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

