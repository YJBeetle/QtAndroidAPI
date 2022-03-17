#pragma once

#include "../../../JIntArray.hpp"
#include "./LineBreaker_ParagraphConstraints.def.hpp"
#include "./LineBreaker_Result.def.hpp"
#include "./MeasuredText.def.hpp"
#include "./LineBreaker.def.hpp"

namespace android::graphics::text
{
	// Fields
	inline jint LineBreaker::BREAK_STRATEGY_BALANCED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_BALANCED"
		);
	}
	inline jint LineBreaker::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_HIGH_QUALITY"
		);
	}
	inline jint LineBreaker::BREAK_STRATEGY_SIMPLE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_SIMPLE"
		);
	}
	inline jint LineBreaker::HYPHENATION_FREQUENCY_FULL()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_FULL"
		);
	}
	inline jint LineBreaker::HYPHENATION_FREQUENCY_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NONE"
		);
	}
	inline jint LineBreaker::HYPHENATION_FREQUENCY_NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NORMAL"
		);
	}
	inline jint LineBreaker::JUSTIFICATION_MODE_INTER_WORD()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_INTER_WORD"
		);
	}
	inline jint LineBreaker::JUSTIFICATION_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::text::LineBreaker_Result LineBreaker::computeLineBreaks(android::graphics::text::MeasuredText arg0, android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
