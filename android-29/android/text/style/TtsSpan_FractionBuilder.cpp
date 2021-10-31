#include "./TtsSpan_FractionBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$FractionBuilder",
			"()V"
		);
	}
	TtsSpan_FractionBuilder::TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$FractionBuilder",
			"(JJJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_FractionBuilder::setDenominator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_FractionBuilder::setDenominator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_FractionBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_FractionBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_FractionBuilder::setNumerator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_FractionBuilder::setNumerator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$FractionBuilder;",
			arg0
		);
	}
} // namespace android::text::style

