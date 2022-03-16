#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_TextBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_TextBuilder::TtsSpan_TextBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"()V"
		) {}
	inline TtsSpan_TextBuilder::TtsSpan_TextBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_TextBuilder TtsSpan_TextBuilder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

