#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	MetricAffectingSpan::MetricAffectingSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	MetricAffectingSpan::MetricAffectingSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.MetricAffectingSpan",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject MetricAffectingSpan::getUnderlying()
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

