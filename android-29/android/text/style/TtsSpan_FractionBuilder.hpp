#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_FractionBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
		QAndroidJniObject setDenominator(jstring arg0);
		QAndroidJniObject setDenominator(const QString &arg0);
		QAndroidJniObject setDenominator(jlong arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setNumerator(jstring arg0);
		QAndroidJniObject setNumerator(const QString &arg0);
		QAndroidJniObject setNumerator(jlong arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_FractionBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$FractionBuilder",
			"()V"
		);
	}
	void TtsSpan_FractionBuilder::__constructor(jlong arg0, jlong arg1, jlong arg2)
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
	QAndroidJniObject TtsSpan_FractionBuilder::setDenominator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject TtsSpan_FractionBuilder::setIntegerPart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject TtsSpan_FractionBuilder::setNumerator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$FractionBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_FractionBuilder : public __jni_impl::android::text::style::TtsSpan_FractionBuilder
	{
	public:
		TtsSpan_FractionBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_FractionBuilder()
		{
			__constructor();
		}
		TtsSpan_FractionBuilder(jlong arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::style

