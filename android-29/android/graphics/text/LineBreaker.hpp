#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::text
{
	class LineBreaker_ParagraphConstraints;
}
namespace android::graphics::text
{
	class LineBreaker_Result;
}
namespace android::graphics::text
{
	class MeasuredText;
}

namespace android::graphics::text
{
	class LineBreaker : public __JniBaseClass
	{
	public:
		// Fields
		static jint BREAK_STRATEGY_BALANCED();
		static jint BREAK_STRATEGY_HIGH_QUALITY();
		static jint BREAK_STRATEGY_SIMPLE();
		static jint HYPHENATION_FREQUENCY_FULL();
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		LineBreaker(QAndroidJniObject obj);
		// Constructors
		LineBreaker() = default;
		
		// Methods
		QAndroidJniObject computeLineBreaks(android::graphics::text::MeasuredText arg0, android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2);
	};
} // namespace android::graphics::text

