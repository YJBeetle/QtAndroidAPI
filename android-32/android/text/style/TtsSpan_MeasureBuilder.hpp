#pragma once

#include "../../../JString.hpp"
#include "./TtsSpan_MeasureBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$MeasureBuilder",
			"()V"
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(JString arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(jlong arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setFractionalPart(JString arg0) const
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(JString arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(jlong arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(JString arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(JString arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(jlong arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setUnit(JString arg0) const
	{
		return callObjectMethod(
			"setUnit",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
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
