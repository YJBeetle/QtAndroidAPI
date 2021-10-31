#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_TextBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_TextBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_TextBuilder();
		TtsSpan_TextBuilder(jstring arg0);
		
		// Methods
		QAndroidJniObject setText(jstring arg0);
	};
} // namespace android::text::style

