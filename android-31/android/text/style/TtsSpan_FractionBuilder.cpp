#include "../../../JString.hpp"
#include "./TtsSpan_FractionBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$FractionBuilder",
			"()V"
		) {}
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$FractionBuilder",
			"(JJJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setDenominator(JString arg0)
	{
		return callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setDenominator(jlong arg0)
	{
		return callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setIntegerPart(JString arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setIntegerPart(jlong arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setNumerator(JString arg0)
	{
		return callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_FractionBuilder TtsSpan_FractionBuilder::setNumerator(jlong arg0)
	{
		return callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
} // namespace android::text::style

