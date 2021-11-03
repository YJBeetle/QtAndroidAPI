#include "../../../JString.hpp"
#include "./TtsSpan_TextBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_TextBuilder::TtsSpan_TextBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"()V"
		) {}
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::style::TtsSpan_TextBuilder TtsSpan_TextBuilder::setText(JString arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

