#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_CardinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_CardinalBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_CardinalBuilder();
		TtsSpan_CardinalBuilder(jstring arg0);
		TtsSpan_CardinalBuilder(jlong arg0);
		
		// Methods
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(jlong arg0);
	};
} // namespace android::text::style

