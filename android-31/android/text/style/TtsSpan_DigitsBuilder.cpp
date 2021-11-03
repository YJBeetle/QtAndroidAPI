#include "../../../JString.hpp"
#include "./TtsSpan_DigitsBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"()V"
		) {}
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::style::TtsSpan_DigitsBuilder TtsSpan_DigitsBuilder::setDigits(JString arg0) const
	{
		return callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

