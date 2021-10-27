#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_DigitsBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject setDigits(jstring arg0);
		QAndroidJniObject setDigits(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_DigitsBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DigitsBuilder",
			"()V"
		);
	}
	void TtsSpan_DigitsBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_DigitsBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DigitsBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DigitsBuilder::setDigits(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DigitsBuilder::setDigits(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDigits",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DigitsBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_DigitsBuilder : public __jni_impl::android::text::style::TtsSpan_DigitsBuilder
	{
	public:
		TtsSpan_DigitsBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_DigitsBuilder()
		{
			__constructor();
		}
		TtsSpan_DigitsBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

