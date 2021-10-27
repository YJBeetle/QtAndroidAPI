#include "./TtsSpan_MoneyBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_MoneyBuilder::TtsSpan_MoneyBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_MoneyBuilder::TtsSpan_MoneyBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$MoneyBuilder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_MoneyBuilder::setCurrency(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCurrency",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setCurrency(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setCurrency",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setFractionalPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setFractionalPart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setIntegerPart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setQuantity(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setQuantity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MoneyBuilder::setQuantity(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setQuantity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MoneyBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::text::style

