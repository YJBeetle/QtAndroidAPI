#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_DecimalBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jdouble arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setFractionalPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_DecimalBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"()V"
		);
	}
	void TtsSpan_DecimalBuilder::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TtsSpan_DecimalBuilder::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void TtsSpan_DecimalBuilder::__constructor(jdouble arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(DII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DecimalBuilder::setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setArgumentsFromDouble",
			"(DII)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setFractionalPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setFractionalPart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setIntegerPart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_DecimalBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_DecimalBuilder : public __jni_impl::android::text::style::TtsSpan_DecimalBuilder
	{
	public:
		TtsSpan_DecimalBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_DecimalBuilder()
		{
			__constructor();
		}
		TtsSpan_DecimalBuilder(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::style

