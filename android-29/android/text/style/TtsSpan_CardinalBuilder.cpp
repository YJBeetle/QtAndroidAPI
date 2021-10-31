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
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jstring arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jlong arg0)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jstring arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jlong arg0)
	{
		return callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

