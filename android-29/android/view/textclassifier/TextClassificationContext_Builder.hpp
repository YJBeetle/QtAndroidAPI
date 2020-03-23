#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setWidgetVersion(jstring arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassificationContext.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassificationContext_Builder::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject TextClassificationContext_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;");
	}
	QAndroidJniObject TextClassificationContext_Builder::setWidgetVersion(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassificationContext_Builder : public __jni_impl::android::view::textclassifier::TextClassificationContext_Builder
	{
	public:
		TextClassificationContext_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassificationContext_Builder(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER

