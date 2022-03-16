#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	MetricAffectingSpan::MetricAffectingSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.MetricAffectingSpan",
			"()V"
		) {}
	
	// Methods
	android::text::style::MetricAffectingSpan MetricAffectingSpan::getUnderlying() const
	{
		return callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/MetricAffectingSpan;"
		);
	}
	void MetricAffectingSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

