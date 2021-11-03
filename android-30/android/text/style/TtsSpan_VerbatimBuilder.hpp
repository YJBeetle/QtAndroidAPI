#pragma once

#include "../../../JObject.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_VerbatimBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_VerbatimBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_VerbatimBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_VerbatimBuilder();
		TtsSpan_VerbatimBuilder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan_VerbatimBuilder setVerbatim(jstring arg0);
	};
} // namespace android::text::style

