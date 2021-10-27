#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_TelephoneBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject setCountryCode(jstring arg0);
		QAndroidJniObject setCountryCode(const QString &arg0);
		QAndroidJniObject setExtension(jstring arg0);
		QAndroidJniObject setExtension(const QString &arg0);
		QAndroidJniObject setNumberParts(jstring arg0);
		QAndroidJniObject setNumberParts(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_TelephoneBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"()V"
		);
	}
	void TtsSpan_TelephoneBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_TelephoneBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TelephoneBuilder::setCountryCode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCountryCode",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setCountryCode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setCountryCode",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setExtension(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setExtension(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setNumberParts(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumberParts",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setNumberParts(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setNumberParts",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_TelephoneBuilder : public __jni_impl::android::text::style::TtsSpan_TelephoneBuilder
	{
	public:
		TtsSpan_TelephoneBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_TelephoneBuilder()
		{
			__constructor();
		}
		TtsSpan_TelephoneBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

