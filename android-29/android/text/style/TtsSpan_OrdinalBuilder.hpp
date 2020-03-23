#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_ORDINALBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_ORDINALBUILDER

#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_OrdinalBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jlong arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject setNumber(jlong arg0);
		QAndroidJniObject setNumber(jstring arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_OrdinalBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TtsSpan_OrdinalBuilder::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"(J)V",
			arg0);
	}
	void TtsSpan_OrdinalBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$OrdinalBuilder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_OrdinalBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$OrdinalBuilder;",
			arg0);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_OrdinalBuilder : public __jni_impl::android::text::style::TtsSpan_OrdinalBuilder
	{
	public:
		TtsSpan_OrdinalBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_OrdinalBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TtsSpan_OrdinalBuilder(jlong arg0)
		{
			__constructor(
				arg0);
		}
		TtsSpan_OrdinalBuilder()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_ORDINALBUILDER

