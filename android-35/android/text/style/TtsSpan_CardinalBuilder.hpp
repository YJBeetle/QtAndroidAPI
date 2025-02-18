#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_CardinalBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"()V"
		) {}
	inline TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jlong arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_CardinalBuilder TtsSpan_CardinalBuilder::setNumber(JString arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_CardinalBuilder TtsSpan_CardinalBuilder::setNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$CardinalBuilder;",
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
