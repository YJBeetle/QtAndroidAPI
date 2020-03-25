#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER

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
		QAndroidJniObject setEmailArguments(jstring arg0, jstring arg1);
		QAndroidJniObject setProtocol(jstring arg0);
		QAndroidJniObject setUsername(jstring arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setDomain(jstring arg0);
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setPath(jstring arg0);
		QAndroidJniObject setQueryString(jstring arg0);
		QAndroidJniObject setFragmentId(jstring arg0);
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
			"()V");
	}
	
	// Methods
	QAndroidJniObject TtsSpan_ElectronicBuilder::setEmailArguments(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0,
			arg1);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setProtocol(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setUsername(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setDomain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPort",
			"(I)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setQueryString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_ElectronicBuilder::setFragmentId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0);
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

#endif // ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER

