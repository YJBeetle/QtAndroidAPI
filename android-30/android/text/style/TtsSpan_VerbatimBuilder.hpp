#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_VerbatimBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"()V"
		) {}
	inline TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_VerbatimBuilder TtsSpan_VerbatimBuilder::setVerbatim(JString arg0) const
	{
		return callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

