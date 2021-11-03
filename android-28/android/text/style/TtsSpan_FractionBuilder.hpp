#pragma once

#include "../../../JObject.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_FractionBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_FractionBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_FractionBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_FractionBuilder();
		TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
		android::text::style::TtsSpan_FractionBuilder setDenominator(jstring arg0);
		android::text::style::TtsSpan_FractionBuilder setDenominator(jlong arg0);
		android::text::style::TtsSpan_FractionBuilder setIntegerPart(jstring arg0);
		android::text::style::TtsSpan_FractionBuilder setIntegerPart(jlong arg0);
		android::text::style::TtsSpan_FractionBuilder setNumerator(jstring arg0);
		android::text::style::TtsSpan_FractionBuilder setNumerator(jlong arg0);
	};
} // namespace android::text::style

