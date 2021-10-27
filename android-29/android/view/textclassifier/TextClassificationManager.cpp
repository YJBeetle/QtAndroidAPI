#include "../../content/Context.hpp"
#include "./TextClassificationContext.hpp"
#include "./TextClassificationManager.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassificationManager::TextClassificationManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TextClassificationManager::createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0)
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
	void TextClassificationManager::setTextClassificationSessionFactory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassificationSessionFactory",
			"(Landroid/view/textclassifier/TextClassificationSessionFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextClassificationManager::setTextClassifier(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

