#pragma once

#include "../../../JObject.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


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
		TtsSpan_TelephoneBuilder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan_TelephoneBuilder setCountryCode(jstring arg0);
		android::text::style::TtsSpan_TelephoneBuilder setExtension(jstring arg0);
		android::text::style::TtsSpan_TelephoneBuilder setNumberParts(jstring arg0);
	};
} // namespace android::text::style

