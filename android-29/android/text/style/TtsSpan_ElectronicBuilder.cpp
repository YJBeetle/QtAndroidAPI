#include "./TtsSpan_ElectronicBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$ElectronicBuilder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_ElectronicBuilder::setDomain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setDomain(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setEmailArguments(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setEmailArguments(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setFragmentId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setFragmentId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPassword(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPort",
			"(I)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setProtocol(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setProtocol(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setQueryString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setQueryString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setUsername(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setUsername(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::text::style

