#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_FractionBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_FractionBuilder::TtsSpan_FractionBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$FractionBuilder",
			"()V"
		) {}
	inline TtsSpan_FractionBuilder::TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$FractionBuilder",
			"(JJJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setDenominator(JString arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setDenominator(jlong arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setIntegerPart(JString arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setIntegerPart(jlong arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setNumerator(JString arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setNumerator(jlong arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
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
