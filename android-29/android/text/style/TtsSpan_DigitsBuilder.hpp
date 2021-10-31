#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_DigitsBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_DigitsBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_DigitsBuilder();
		TtsSpan_DigitsBuilder(jstring arg0);
		
		// Methods
		QAndroidJniObject setDigits(jstring arg0);
	};
} // namespace android::text::style

