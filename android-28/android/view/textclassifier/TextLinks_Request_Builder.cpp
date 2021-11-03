#include "../../os/LocaleList.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./TextLinks_Request.hpp"
#include "./TextLinks_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextLinks_Request_Builder::TextLinks_Request_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextLinks_Request_Builder::TextLinks_Request_Builder(jstring arg0)
		: JObject(
			"android.view.textclassifier.TextLinks$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextLinks_Request TextLinks_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks$Request;"
		);
	}
	android::view::textclassifier::TextLinks_Request_Builder TextLinks_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextLinks_Request_Builder TextLinks_Request_Builder::setEntityConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return callObjectMethod(
			"setEntityConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

