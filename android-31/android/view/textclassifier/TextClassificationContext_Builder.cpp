#include "./TextClassificationContext.hpp"
#include "./TextClassificationContext_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassificationContext_Builder::TextClassificationContext_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextClassificationContext_Builder::TextClassificationContext_Builder(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::view::textclassifier::TextClassificationContext TextClassificationContext_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	android::view::textclassifier::TextClassificationContext_Builder TextClassificationContext_Builder::setWidgetVersion(jstring arg0)
	{
		return callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier
