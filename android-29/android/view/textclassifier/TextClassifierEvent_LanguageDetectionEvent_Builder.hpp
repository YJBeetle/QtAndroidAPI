#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_LANGUAGEDETECTIONEVENT_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_LANGUAGEDETECTIONEVENT_BUILDER

#include "TextClassifierEvent_Builder.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassifierEvent_LanguageDetectionEvent.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifierEvent_LanguageDetectionEvent_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent$Builder",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_LanguageDetectionEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$LanguageDetectionEvent;");
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_LanguageDetectionEvent_Builder
	{
	public:
		TextClassifierEvent_LanguageDetectionEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_LanguageDetectionEvent_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_LANGUAGEDETECTIONEVENT_BUILDER

