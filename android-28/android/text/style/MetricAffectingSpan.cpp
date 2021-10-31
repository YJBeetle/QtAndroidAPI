#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	MetricAffectingSpan::MetricAffectingSpan(QJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	MetricAffectingSpan::MetricAffectingSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.MetricAffectingSpan",
			"()V"
		) {}
	
	// Methods
	android::text::style::MetricAffectingSpan MetricAffectingSpan::getUnderlying()
	{
		return callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/MetricAffectingSpan;"
		);
	}
	void MetricAffectingSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

