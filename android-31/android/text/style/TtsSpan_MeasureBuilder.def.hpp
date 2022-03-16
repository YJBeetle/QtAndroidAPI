#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_MeasureBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_MeasureBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_MeasureBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_MeasureBuilder();
		
		// Methods
		android::text::style::TtsSpan_MeasureBuilder setDenominator(JString arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setDenominator(jlong arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setFractionalPart(JString arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setIntegerPart(JString arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setIntegerPart(jlong arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setNumber(JString arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setNumber(jlong arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setNumerator(JString arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setNumerator(jlong arg0) const;
		android::text::style::TtsSpan_MeasureBuilder setUnit(JString arg0) const;
	};
} // namespace android::text::style

