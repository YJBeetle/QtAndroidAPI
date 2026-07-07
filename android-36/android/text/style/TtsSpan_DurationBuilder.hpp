#pragma once

#include "./TtsSpan_DurationBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_DurationBuilder::TtsSpan_DurationBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DurationBuilder",
			"()V"
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_DurationBuilder TtsSpan_DurationBuilder::setHours(jint arg0) const
	{
		return callObjectMethod(
			"setHours",
			"(I)Landroid/text/style/TtsSpan$DurationBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_DurationBuilder TtsSpan_DurationBuilder::setMinutes(jint arg0) const
	{
		return callObjectMethod(
			"setMinutes",
			"(I)Landroid/text/style/TtsSpan$DurationBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_DurationBuilder TtsSpan_DurationBuilder::setSeconds(jint arg0) const
	{
		return callObjectMethod(
			"setSeconds",
			"(I)Landroid/text/style/TtsSpan$DurationBuilder;",
			arg0
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
