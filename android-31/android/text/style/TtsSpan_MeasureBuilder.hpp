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
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_MeasureBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_MeasureBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_MeasureBuilder();
		
		// Methods
		android::text::style::TtsSpan_MeasureBuilder setDenominator(jstring arg0);
		android::text::style::TtsSpan_MeasureBuilder setDenominator(jlong arg0);
		android::text::style::TtsSpan_MeasureBuilder setFractionalPart(jstring arg0);
		android::text::style::TtsSpan_MeasureBuilder setIntegerPart(jstring arg0);
		android::text::style::TtsSpan_MeasureBuilder setIntegerPart(jlong arg0);
		android::text::style::TtsSpan_MeasureBuilder setNumber(jstring arg0);
		android::text::style::TtsSpan_MeasureBuilder setNumber(jlong arg0);
		android::text::style::TtsSpan_MeasureBuilder setNumerator(jstring arg0);
		android::text::style::TtsSpan_MeasureBuilder setNumerator(jlong arg0);
		android::text::style::TtsSpan_MeasureBuilder setUnit(jstring arg0);
	};
} // namespace android::text::style

