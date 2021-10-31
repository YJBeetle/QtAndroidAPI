#include "./TtsSpan_TimeBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TimeBuilder",
			"()V"
		) {}
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder(jint arg0, jint arg1)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$TimeBuilder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::text::style::TtsSpan_TimeBuilder TtsSpan_TimeBuilder::setHours(jint arg0)
	{
		return callObjectMethod(
			"setHours",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_TimeBuilder TtsSpan_TimeBuilder::setMinutes(jint arg0)
	{
		return callObjectMethod(
			"setMinutes",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
} // namespace android::text::style

