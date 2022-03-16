#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_VerbatimBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_VerbatimBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_VerbatimBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_VerbatimBuilder();
		TtsSpan_VerbatimBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_VerbatimBuilder setVerbatim(JString arg0) const;
	};
} // namespace android::text::style

