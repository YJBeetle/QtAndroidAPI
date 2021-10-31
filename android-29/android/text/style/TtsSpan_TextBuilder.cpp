#include "./TtsSpan_TextBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_TextBuilder::TtsSpan_TextBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TextBuilder",
			"()V"
		);
	}
	TtsSpan_TextBuilder::TtsSpan_TextBuilder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TextBuilder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			arg0
		);
	}
} // namespace android::text::style

