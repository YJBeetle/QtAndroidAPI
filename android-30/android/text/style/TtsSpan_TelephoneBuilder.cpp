#include "./TtsSpan_TelephoneBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"()V"
		) {}
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setCountryCode(jstring arg0)
	{
		return callObjectMethod(
			"setCountryCode",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setExtension(jstring arg0)
	{
		return callObjectMethod(
			"setExtension",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setNumberParts(jstring arg0)
	{
		return callObjectMethod(
			"setNumberParts",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
} // namespace android::text::style

