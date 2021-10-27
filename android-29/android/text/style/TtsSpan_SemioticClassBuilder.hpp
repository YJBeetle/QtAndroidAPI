#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_SemioticClassBuilder : public __jni_impl::android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject setAnimacy(jstring arg0);
		QAndroidJniObject setAnimacy(const QString &arg0);
		QAndroidJniObject setCase(jstring arg0);
		QAndroidJniObject setCase(const QString &arg0);
		QAndroidJniObject setGender(jstring arg0);
		QAndroidJniObject setGender(const QString &arg0);
		QAndroidJniObject setMultiplicity(jstring arg0);
		QAndroidJniObject setMultiplicity(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_SemioticClassBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$SemioticClassBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_SemioticClassBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$SemioticClassBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setAnimacy(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAnimacy",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setAnimacy(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setAnimacy",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setCase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCase",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setCase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setCase",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setGender(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGender",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setGender(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setGender",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setMultiplicity(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMultiplicity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setMultiplicity(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setMultiplicity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_SemioticClassBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		TtsSpan_SemioticClassBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_SemioticClassBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

