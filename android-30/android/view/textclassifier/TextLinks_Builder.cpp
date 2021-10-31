#include "../../os/Bundle.hpp"
#include "./TextLinks.hpp"
#include "./TextLinks_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextLinks_Builder::TextLinks_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextLinks_Builder::TextLinks_Builder(jstring arg0)
		: __JniBaseClass(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	android::view::textclassifier::TextLinks TextLinks_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::clearTextLinks()
	{
		return callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;"
		);
	}
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

