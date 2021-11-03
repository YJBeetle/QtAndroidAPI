#include "../../../JString.hpp"
#include "./TtsSpan_VerbatimBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"()V"
		) {}
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::style::TtsSpan_VerbatimBuilder TtsSpan_VerbatimBuilder::setVerbatim(JString arg0) const
	{
		return callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

