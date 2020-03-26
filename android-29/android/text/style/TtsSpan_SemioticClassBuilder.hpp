#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_SEMIOTICCLASSBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_SEMIOTICCLASSBUILDER

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_SemioticClassBuilder : public __jni_impl::android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject setGender(jstring arg0);
		QAndroidJniObject setAnimacy(jstring arg0);
		QAndroidJniObject setMultiplicity(jstring arg0);
		QAndroidJniObject setCase(jstring arg0);
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
			arg0);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setGender(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGender",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setAnimacy(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAnimacy",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
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
	QAndroidJniObject TtsSpan_SemioticClassBuilder::setCase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCase",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
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

#endif // ANDROID_TEXT_STYLE_TTSSPAN_SEMIOTICCLASSBUILDER

