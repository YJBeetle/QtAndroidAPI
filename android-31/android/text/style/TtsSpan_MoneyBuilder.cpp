#include "../../../JString.hpp"
#include "./TtsSpan_MoneyBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	TtsSpan_MoneyBuilder::TtsSpan_MoneyBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$MoneyBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setCurrency(JString arg0) const
	{
		return callObjectMethod(
			"setCurrency",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setFractionalPart(JString arg0) const
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setIntegerPart(JString arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setIntegerPart(jlong arg0) const
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setQuantity(JString arg0) const
	{
		return callObjectMethod(
			"setQuantity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

