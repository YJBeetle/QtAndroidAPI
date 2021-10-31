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
		QAndroidJniObject build();
		QAndroidJniObject includeTypesFromTextClassifier(jboolean arg0);
		QAndroidJniObject setExcludedTypes(__JniBaseClass arg0);
		QAndroidJniObject setHints(__JniBaseClass arg0);
		QAndroidJniObject setIncludedTypes(__JniBaseClass arg0);
	};
} // namespace android::view::textclassifier

