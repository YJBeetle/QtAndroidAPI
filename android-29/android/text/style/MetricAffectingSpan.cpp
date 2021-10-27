#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::text::style
{
	// Fields
	
	MetricAffectingSpan::MetricAffectingSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MetricAffectingSpan::MetricAffectingSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.MetricAffectingSpan",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MetricAffectingSpan::getUnderlying()
	{
		return __thiz.callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/MetricAffectingSpan;"
		);
	}
	void MetricAffectingSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text::style

