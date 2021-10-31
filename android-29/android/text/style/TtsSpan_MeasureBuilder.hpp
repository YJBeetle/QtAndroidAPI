#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_MeasureBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_MeasureBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_MeasureBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_MeasureBuilder();
		
		// Methods
		QAndroidJniObject setDenominator(jstring arg0);
		QAndroidJniObject setDenominator(jlong arg0);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(jlong arg0);
		QAndroidJniObject setNumerator(jstring arg0);
		QAndroidJniObject setNumerator(jlong arg0);
		QAndroidJniObject setUnit(jstring arg0);
	};
} // namespace android::text::style

