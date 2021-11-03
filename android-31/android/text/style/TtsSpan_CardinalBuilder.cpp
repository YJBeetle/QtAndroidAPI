#include "../../../JString.hpp"
#include "./TtsSpan_CardinalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"()V"
		) {}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(JString arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jlong arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	android::text::style::TtsSpan_CardinalBuilder TtsSpan_CardinalBuilder::setNumber(JString arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_CardinalBuilder TtsSpan_CardinalBuilder::setNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

