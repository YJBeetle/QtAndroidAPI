#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_TextBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_TextBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_TextBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_TextBuilder();
		TtsSpan_TextBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_TextBuilder setText(JString arg0) const;
	};
} // namespace android::text::style

