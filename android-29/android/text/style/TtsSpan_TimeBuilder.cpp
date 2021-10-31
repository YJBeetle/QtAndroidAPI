#include "./TtsSpan_TimeBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TimeBuilder",
			"()V"
		);
	}
	TtsSpan_TimeBuilder::TtsSpan_TimeBuilder(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TimeBuilder",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TimeBuilder::setHours(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHours",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TimeBuilder::setMinutes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMinutes",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
} // namespace android::text::style

