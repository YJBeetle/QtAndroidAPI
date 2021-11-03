#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_VerbatimBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_VerbatimBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_VerbatimBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_VerbatimBuilder();
		TtsSpan_VerbatimBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_VerbatimBuilder setVerbatim(JString arg0);
	};
} // namespace android::text::style

