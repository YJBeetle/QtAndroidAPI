#include "./TextClassificationContext.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationContext_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	TextClassificationContext_Builder::TextClassificationContext_Builder(JString arg0, JString arg1)
		: JObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::view::textclassifier::TextClassificationContext TextClassificationContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	android::view::textclassifier::TextClassificationContext_Builder TextClassificationContext_Builder::setWidgetVersion(JString arg0) const
	{
		return callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

