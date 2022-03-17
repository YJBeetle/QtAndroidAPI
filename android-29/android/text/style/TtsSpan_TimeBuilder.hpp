#pragma once

#include "./TtsSpan_TimeBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_TimeBuilder::TtsSpan_TimeBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TimeBuilder",
			"()V"
		) {}
	inline TtsSpan_TimeBuilder::TtsSpan_TimeBuilder(jint arg0, jint arg1)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TimeBuilder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_TimeBuilder TtsSpan_TimeBuilder::setHours(jint arg0) const
	{
		return callObjectMethod(
			"setHours",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_TimeBuilder TtsSpan_TimeBuilder::setMinutes(jint arg0) const
	{
		return callObjectMethod(
			"setMinutes",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

