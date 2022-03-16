#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_FractionBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_FractionBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_FractionBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_FractionBuilder();
		TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
		android::text::style::TtsSpan_FractionBuilder setDenominator(JString arg0) const;
		android::text::style::TtsSpan_FractionBuilder setDenominator(jlong arg0) const;
		android::text::style::TtsSpan_FractionBuilder setIntegerPart(JString arg0) const;
		android::text::style::TtsSpan_FractionBuilder setIntegerPart(jlong arg0) const;
		android::text::style::TtsSpan_FractionBuilder setNumerator(JString arg0) const;
		android::text::style::TtsSpan_FractionBuilder setNumerator(jlong arg0) const;
	};
} // namespace android::text::style

