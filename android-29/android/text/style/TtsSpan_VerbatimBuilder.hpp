#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_VERBATIMBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_VERBATIMBUILDER

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_VerbatimBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject setVerbatim(jstring arg0);
		QAndroidJniObject setVerbatim(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_VerbatimBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"()V"
		);
	}
	void TtsSpan_VerbatimBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_VerbatimBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$VerbatimBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_VerbatimBuilder::setVerbatim(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_VerbatimBuilder::setVerbatim(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setVerbatim",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$VerbatimBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_VerbatimBuilder : public __jni_impl::android::text::style::TtsSpan_VerbatimBuilder
	{
	public:
		TtsSpan_VerbatimBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_VerbatimBuilder()
		{
			__constructor();
		}
		TtsSpan_VerbatimBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_VERBATIMBUILDER

