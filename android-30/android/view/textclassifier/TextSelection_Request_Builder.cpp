#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./TextSelection_Request.hpp"
#include "../../../JString.hpp"
#include "./TextSelection_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextSelection_Request_Builder::TextSelection_Request_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextSelection_Request_Builder::TextSelection_Request_Builder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.textclassifier.TextSelection$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::view::textclassifier::TextSelection_Request TextSelection_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection$Request;"
		);
	}
	android::view::textclassifier::TextSelection_Request_Builder TextSelection_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextSelection_Request_Builder TextSelection_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

