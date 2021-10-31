#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_FractionBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_FractionBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_FractionBuilder();
		TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
		QAndroidJniObject setDenominator(jstring arg0);
		QAndroidJniObject setDenominator(jlong arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setNumerator(jstring arg0);
		QAndroidJniObject setNumerator(jlong arg0);
	};
} // namespace android::text::style

