#include "./TtsSpan_CardinalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"()V"
		);
	}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	TtsSpan_CardinalBuilder::TtsSpan_CardinalBuilder(jlong &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

