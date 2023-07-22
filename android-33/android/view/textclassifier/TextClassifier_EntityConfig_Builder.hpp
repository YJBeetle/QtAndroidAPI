#pragma once

#include "./TextClassifier_EntityConfig.def.hpp"
#include "./TextClassifier_EntityConfig_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder()
		: JObject(
			"android.view.textclassifier.TextClassifier$EntityConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::includeTypesFromTextClassifier(jboolean arg0) const
	{
		return callObjectMethod(
			"includeTypesFromTextClassifier",
			"(Z)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setExcludedTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setExcludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setHints(JObject arg0) const
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setIncludedTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setIncludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
