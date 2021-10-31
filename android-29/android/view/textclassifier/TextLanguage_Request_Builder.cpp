#include "../../os/Bundle.hpp"
#include "./TextLanguage_Request.hpp"
#include "./TextLanguage_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextLanguage_Request_Builder::TextLanguage_Request_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextLanguage_Request_Builder::TextLanguage_Request_Builder(jstring arg0)
		: __JniBaseClass(
			"android.view.textclassifier.TextLanguage$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextLanguage_Request TextLanguage_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage$Request;"
		);
	}
	android::view::textclassifier::TextLanguage_Request_Builder TextLanguage_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

