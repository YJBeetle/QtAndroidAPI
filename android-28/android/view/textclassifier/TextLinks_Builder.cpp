#include "./TextLinks.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextLinks_Builder::TextLinks_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextLinks_Builder::TextLinks_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, JObject arg2)
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object()
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
} // namespace android::view::textclassifier

