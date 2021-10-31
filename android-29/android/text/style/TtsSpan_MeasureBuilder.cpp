#include "./TtsSpan_MeasureBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$MeasureBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(jstring arg0)
	{
		return callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setDenominator(jlong arg0)
	{
		return callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setFractionalPart(jstring arg0)
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(jstring arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setIntegerPart(jlong arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(jstring arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumber(jlong arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(jstring arg0)
	{
		return callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setNumerator(jlong arg0)
	{
		return callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MeasureBuilder TtsSpan_MeasureBuilder::setUnit(jstring arg0)
	{
		return callObjectMethod(
			"setUnit",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
} // namespace android::text::style

