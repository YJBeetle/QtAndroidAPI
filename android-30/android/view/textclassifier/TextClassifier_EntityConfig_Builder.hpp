#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassifier_EntityConfig_Builder();
		
		// Methods
		android::view::textclassifier::TextClassifier_EntityConfig build();
		android::view::textclassifier::TextClassifier_EntityConfig_Builder includeTypesFromTextClassifier(jboolean arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setExcludedTypes(__JniBaseClass arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setHints(__JniBaseClass arg0);
		android::view::textclassifier::TextClassifier_EntityConfig_Builder setIncludedTypes(__JniBaseClass arg0);
	};
} // namespace android::view::textclassifier

