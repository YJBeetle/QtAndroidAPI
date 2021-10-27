#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_ElectronicBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setDomain(jstring arg0);
		QAndroidJniObject setDomain(const QString &arg0);
		QAndroidJniObject setEmailArguments(jstring arg0, jstring arg1);
		QAndroidJniObject setEmailArguments(const QString &arg0, const QString &arg1);
		QAndroidJniObject setFragmentId(jstring arg0);
		QAndroidJniObject setFragmentId(const QString &arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPassword(const QString &arg0);
		QAndroidJniObject setPath(jstring arg0);
		QAndroidJniObject setPath(const QString &arg0);
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setProtocol(jstring arg0);
		QAndroidJniObject setProtocol(const QString &arg0);
		QAndroidJniObject setQueryString(jstring arg0);
		QAndroidJniObject setQueryString(const QString &arg0);
		QAndroidJniObject setUsername(jstring arg0);
		QAndroidJniObject setUsername(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_ElectronicBuilder::__constructor()
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
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_ElectronicBuilder : public __jni_impl::android::text::style::TtsSpan_ElectronicBuilder
	{
	public:
		TtsSpan_ElectronicBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_ElectronicBuilder()
		{
			__constructor();
		}
	};
} // namespace android::text::style

