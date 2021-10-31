#include "./TtsSpan_OrdinalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"()V"
		);
	}
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TtsSpan_OrdinalBuilder::TtsSpan_OrdinalBuilder(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

