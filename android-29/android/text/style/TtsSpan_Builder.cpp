#include "./TtsSpan.hpp"
#include "./TtsSpan_Builder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_Builder::TtsSpan_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_Builder::TtsSpan_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/style/TtsSpan;"
		);
	}
	QAndroidJniObject TtsSpan_Builder::setIntArgument(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setIntArgument",
			"(Ljava/lang/String;I)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TtsSpan_Builder::setLongArgument(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setLongArgument",
			"(Ljava/lang/String;J)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TtsSpan_Builder::setStringArgument(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setStringArgument",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::text::style

