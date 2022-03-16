#include "./TextLinks.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	TextLinks_Builder::TextLinks_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::view::textclassifier::TextLinks TextLinks_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	android::view::textclassifier::TextLinks_Builder TextLinks_Builder::clearTextLinks() const
	{
		return callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;"
		);
	}
} // namespace android::view::textclassifier

