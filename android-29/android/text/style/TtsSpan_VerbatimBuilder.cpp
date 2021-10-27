#include "./TtsSpan_VerbatimBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"()V"
		);
	}
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TtsSpan_VerbatimBuilder::TtsSpan_VerbatimBuilder(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_VerbatimBuilder::setVerbatim(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_VerbatimBuilder::setVerbatim(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::text::style

