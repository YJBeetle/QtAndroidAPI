#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_DigitsBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_DigitsBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_DigitsBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_DigitsBuilder();
		TtsSpan_DigitsBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_DigitsBuilder setDigits(JString arg0) const;
	};
} // namespace android::text::style

