#include "./TtsSpan_DigitsBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DigitsBuilder",
			"()V"
		);
	}
	TtsSpan_DigitsBuilder::TtsSpan_DigitsBuilder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DigitsBuilder::setDigits(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			arg0
		);
	}
} // namespace android::text::style

