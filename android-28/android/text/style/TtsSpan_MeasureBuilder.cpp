#include "../../../JString.hpp"
#include "./TtsSpan_MeasureBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$MeasureBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(JString arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(jlong arg0) const
	{
		return callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setFractionalPart(JString arg0) const
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(JString arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(jlong arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(JString arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(JString arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(jlong arg0) const
	{
		return callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setUnit(JString arg0) const
	{
		return callObjectMethod(
			"setUnit",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

