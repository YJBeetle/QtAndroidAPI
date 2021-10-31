#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_VerbatimBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_VerbatimBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_VerbatimBuilder();
		TtsSpan_VerbatimBuilder(jstring arg0);
		
		// Methods
		QAndroidJniObject setVerbatim(jstring arg0);
	};
} // namespace android::text::style

