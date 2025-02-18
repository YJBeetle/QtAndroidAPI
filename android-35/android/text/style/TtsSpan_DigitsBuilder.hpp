#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_DigitsBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"()V"
		) {}
	inline TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_DigitsBuilder TtsSpan_DigitsBuilder::setDigits(JString arg0) const
	{
		return callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
