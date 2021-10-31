#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_DigitsBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_DigitsBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_DigitsBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_DigitsBuilder();
		TtsSpan_DigitsBuilder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan_DigitsBuilder setDigits(jstring arg0);
	};
} // namespace android::text::style

