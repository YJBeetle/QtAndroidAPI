#include "./TextClassifier_EntityConfig.hpp"
#include "./TextClassifier_EntityConfig_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder()
		: JObject(
			"android.view.textclassifier.TextClassifier$EntityConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::includeTypesFromTextClassifier(jboolean arg0) const
	{
		return callObjectMethod(
			"includeTypesFromTextClassifier",
			"(Z)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setExcludedTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setExcludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setHints(JObject arg0) const
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setIncludedTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setIncludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

