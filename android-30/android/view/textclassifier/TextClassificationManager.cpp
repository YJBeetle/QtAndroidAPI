#include "./TextClassificationContext.hpp"
#include "./TextClassificationManager.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassificationManager::TextClassificationManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject TextClassificationManager::createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0)
	{
		return callObjectMethod(
			"createTextClassificationSession",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifier;",
			arg0.object()
		);
	}
	JObject TextClassificationManager::getTextClassifier()
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	void TextClassificationManager::setTextClassificationSessionFactory(JObject arg0)
	{
		callMethod<void>(
			"setTextClassificationSessionFactory",
			"(Landroid/view/textclassifier/TextClassificationSessionFactory;)V",
			arg0.object()
		);
	}
	void TextClassificationManager::setTextClassifier(JObject arg0)
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

