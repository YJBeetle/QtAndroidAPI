#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_DecimalBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"()V"
		) {}
	inline TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(JString arg0, JString arg1)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(DII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setArgumentsFromDouble",
			"(DII)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setFractionalPart(JString arg0) const
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setIntegerPart(JString arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setIntegerPart(jlong arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

