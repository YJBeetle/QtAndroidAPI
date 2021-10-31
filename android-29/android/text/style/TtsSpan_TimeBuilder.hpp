#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_TimeBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_TimeBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_TimeBuilder();
		TtsSpan_TimeBuilder(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject setHours(jint arg0);
		QAndroidJniObject setMinutes(jint arg0);
	};
} // namespace android::text::style

