#include "./TtsSpan_MeasureBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_MeasureBuilder::TtsSpan_MeasureBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$MeasureBuilder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_MeasureBuilder::setDenominator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setDenominator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setFractionalPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumerator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumerator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setUnit(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUnit",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
} // namespace android::text::style

