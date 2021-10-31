#include "./LineBreaker_ParagraphConstraints.hpp"
#include "./LineBreaker_Result.hpp"
#include "./MeasuredText.hpp"
#include "./LineBreaker.hpp"

namespace android::graphics::text
{
	// Fields
	jint LineBreaker::BREAK_STRATEGY_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_BALANCED"
		);
	}
	jint LineBreaker::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_HIGH_QUALITY"
		);
	}
	jint LineBreaker::BREAK_STRATEGY_SIMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_SIMPLE"
		);
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_FULL"
		);
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NONE"
		);
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NORMAL"
		);
	}
	jint LineBreaker::JUSTIFICATION_MODE_INTER_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_INTER_WORD"
		);
	}
	jint LineBreaker::JUSTIFICATION_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_NONE"
		);
	}
	
	// QAndroidJniObject forward
	LineBreaker::LineBreaker(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LineBreaker::computeLineBreaks(android::graphics::text::MeasuredText arg0, android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2)
	{
		return callObjectMethod(
			"computeLineBreaks",
			"(Landroid/graphics/text/MeasuredText;Landroid/graphics/text/LineBreaker$ParagraphConstraints;I)Landroid/graphics/text/LineBreaker$Result;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::graphics::text

