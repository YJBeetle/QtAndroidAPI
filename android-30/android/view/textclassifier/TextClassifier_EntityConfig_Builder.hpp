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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassifier_EntityConfig_Builder();
		
		// Methods
		android::view::textclassifier::TextClassifier_EntityConfig build() const;
		android::view::textclassifier::TextClassifier_EntityConfig_Builder includeTypesFromTextClassifier(jboolean arg0) const;
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setExcludedTypes(JObject arg0) const;
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setHints(JObject arg0) const;
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setIncludedTypes(JObject arg0) const;
	};
} // namespace android::view::textclassifier

