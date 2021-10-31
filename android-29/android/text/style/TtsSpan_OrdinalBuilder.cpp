#include "./TtsSpan_OrdinalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"()V"
		) {}
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(jlong arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jstring arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jlong arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

