#include "./TtsSpan_DecimalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"()V"
		);
	}
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(DII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DecimalBuilder::setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setArgumentsFromDouble",
			"(DII)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setFractionalPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

