#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_MoneyBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setCurrency(jstring arg0);
		QAndroidJniObject setCurrency(const QString &arg0);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setFractionalPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setQuantity(jstring arg0);
		QAndroidJniObject setQuantity(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_MoneyBuilder::__constructor()
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
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_MoneyBuilder : public __jni_impl::android::text::style::TtsSpan_MoneyBuilder
	{
	public:
		TtsSpan_MoneyBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_MoneyBuilder()
		{
			__constructor();
		}
	};
} // namespace android::text::style

