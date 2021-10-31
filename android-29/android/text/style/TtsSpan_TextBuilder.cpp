#include "./TtsSpan_TextBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_TextBuilder::TtsSpan_TextBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"()V"
		) {}
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TtsSpan_TextBuilder::setText(jstring arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			arg0
		);
	}
} // namespace android::text::style

