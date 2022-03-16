#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_SemioticClassBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_SemioticClassBuilder::TtsSpan_SemioticClassBuilder(JString arg0)
		: android::text::style::TtsSpan_Builder(
			"android.text.style.TtsSpan$SemioticClassBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setAnimacy(JString arg0) const
	{
		return callObjectMethod(
			"setAnimacy",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setCase(JString arg0) const
	{
		return callObjectMethod(
			"setCase",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setGender(JString arg0) const
	{
		return callObjectMethod(
			"setGender",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setMultiplicity(JString arg0) const
	{
		return callObjectMethod(
			"setMultiplicity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"

