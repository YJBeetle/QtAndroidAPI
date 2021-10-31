#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../TextPaint.hpp"
#include "./ReplacementSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	ReplacementSpan::ReplacementSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	ReplacementSpan::ReplacementSpan()
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ReplacementSpan",
			"()V"
		) {}
	
	// Methods
	void ReplacementSpan::draw(android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	jstring ReplacementSpan::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ReplacementSpan::getSize(android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4)
	{
		return callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void ReplacementSpan::setContentDescription(jstring arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ReplacementSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void ReplacementSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

