#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONMANAGER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createTextClassificationSession(__jni_impl::android::view::textclassifier::TextClassificationContext arg0);
		QAndroidJniObject getTextClassifier();
		void setTextClassificationSessionFactory(__jni_impl::__JniBaseClass arg0);
		void setTextClassifier(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../content/Context.hpp"
#include "TextClassificationContext.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassificationManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextClassificationManager::createTextClassificationSession(__jni_impl::android::view::textclassifier::TextClassificationContext arg0)
	{
		return __thiz.callObjectMethod(
			"createTextClassificationSession",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifier;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassificationManager::getTextClassifier()
	{
		return __thiz.callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	void TextClassificationManager::setTextClassificationSessionFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassificationSessionFactory",
			"(Landroid/view/textclassifier/TextClassificationSessionFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextClassificationManager::setTextClassifier(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassificationManager : public __jni_impl::android::view::textclassifier::TextClassificationManager
	{
	public:
		TextClassificationManager(QAndroidJniObject obj) { __thiz = obj; }
		TextClassificationManager()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONMANAGER

