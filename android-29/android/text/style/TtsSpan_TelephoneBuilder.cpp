#include "../../../JString.hpp"
#include "./TtsSpan_TelephoneBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"()V"
		) {}
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setCountryCode(JString arg0) const
	{
		return callObjectMethod(
			"setCountryCode",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setExtension(JString arg0) const
	{
		return callObjectMethod(
			"setExtension",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_TelephoneBuilder TtsSpan_TelephoneBuilder::setNumberParts(JString arg0) const
	{
		return callObjectMethod(
			"setNumberParts",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

