#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_OrdinalBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"()V"
		) {}
	inline TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(jlong arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_OrdinalBuilder TtsSpan_OrdinalBuilder::setNumber(JString arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_OrdinalBuilder TtsSpan_OrdinalBuilder::setNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$OrdinalBuilder;",
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
