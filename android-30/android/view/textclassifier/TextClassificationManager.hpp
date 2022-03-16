#pragma once

#include "./TextClassificationContext.def.hpp"
#include "./TextClassificationManager.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject TextClassificationManager::createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0) const
	{
		return callObjectMethod(
			"createTextClassificationSession",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifier;",
			arg0.object()
		);
	}
	inline JObject TextClassificationManager::getTextClassifier() const
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	inline void TextClassificationManager::setTextClassificationSessionFactory(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassificationSessionFactory",
			"(Landroid/view/textclassifier/TextClassificationSessionFactory;)V",
			arg0.object()
		);
	}
	inline void TextClassificationManager::setTextClassifier(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

