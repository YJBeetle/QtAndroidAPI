#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_TelephoneBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_TelephoneBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_TelephoneBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_TelephoneBuilder();
		TtsSpan_TelephoneBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_TelephoneBuilder setCountryCode(JString arg0) const;
		android::text::style::TtsSpan_TelephoneBuilder setExtension(JString arg0) const;
		android::text::style::TtsSpan_TelephoneBuilder setNumberParts(JString arg0) const;
	};
} // namespace android::text::style

