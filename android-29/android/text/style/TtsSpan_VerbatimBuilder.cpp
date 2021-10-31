#include "./TtsSpan_VerbatimBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"()V"
		) {}
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TtsSpan_VerbatimBuilder::setVerbatim(jstring arg0)
	{
		return callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			arg0
		);
	}
} // namespace android::text::style

