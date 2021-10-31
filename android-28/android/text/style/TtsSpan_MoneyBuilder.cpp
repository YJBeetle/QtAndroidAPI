#include "./TtsSpan_MoneyBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_MoneyBuilder::TtsSpan_MoneyBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_MoneyBuilder::TtsSpan_MoneyBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$MoneyBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setCurrency(jstring arg0)
	{
		return callObjectMethod(
			"setCurrency",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setFractionalPart(jstring arg0)
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setIntegerPart(jstring arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setIntegerPart(jlong arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_MoneyBuilder TtsSpan_MoneyBuilder::setQuantity(jstring arg0)
	{
		return callObjectMethod(
			"setQuantity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
} // namespace android::text::style

