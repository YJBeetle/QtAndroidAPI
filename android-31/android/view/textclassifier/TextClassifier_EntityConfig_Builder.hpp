#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig_Builder(QJniObject obj);
		
		// Constructors
		TextClassifier_EntityConfig_Builder();
		
		// Methods
		android::view::textclassifier::TextClassifier_EntityConfig build();
		android::view::textclassifier::TextClassifier_EntityConfig_Builder includeTypesFromTextClassifier(jboolean arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setExcludedTypes(JObject arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setHints(JObject arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setIncludedTypes(JObject arg0);
	};
} // namespace android::view::textclassifier

