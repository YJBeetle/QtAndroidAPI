#pragma once

#include "../../../JObject.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_TextBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_TextBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_TextBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_TextBuilder();
		TtsSpan_TextBuilder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan_TextBuilder setText(jstring arg0);
	};
} // namespace android::text::style

