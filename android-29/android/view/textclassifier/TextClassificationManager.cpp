#include "../../content/Context.hpp"
#include "./TextClassificationContext.hpp"
#include "./TextClassificationManager.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassificationManager::TextClassificationManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass TextClassificationManager::createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0)
	{
		return callObjectMethod(
			"createTextClassificationSession",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifier;",
			arg0.object()
		);
	}
	__JniBaseClass TextClassificationManager::getTextClassifier()
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	void TextClassificationManager::setTextClassificationSessionFactory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTextClassificationSessionFactory",
			"(Landroid/view/textclassifier/TextClassificationSessionFactory;)V",
			arg0.object()
		);
	}
	void TextClassificationManager::setTextClassifier(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

