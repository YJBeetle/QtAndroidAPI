#include "./TtsSpan_DigitsBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"()V"
		) {}
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::text::style::TtsSpan_DigitsBuilder TtsSpan_DigitsBuilder::setDigits(jstring arg0)
	{
		return callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			arg0
		);
	}
} // namespace android::text::style

