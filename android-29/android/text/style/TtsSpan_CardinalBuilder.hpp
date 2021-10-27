#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_CardinalBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jlong arg0);
		
		// Methods
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(const QString &arg0);
		QAndroidJniObject setNumber(jlong arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_CardinalBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"()V"
		);
	}
	void TtsSpan_CardinalBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_CardinalBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TtsSpan_CardinalBuilder::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$CardinalBuilder",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$CardinalBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_CardinalBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$CardinalBuilder;",
			arg0
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_CardinalBuilder : public __jni_impl::android::text::style::TtsSpan_CardinalBuilder
	{
	public:
		TtsSpan_CardinalBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_CardinalBuilder()
		{
			__constructor();
		}
		TtsSpan_CardinalBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TtsSpan_CardinalBuilder(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

