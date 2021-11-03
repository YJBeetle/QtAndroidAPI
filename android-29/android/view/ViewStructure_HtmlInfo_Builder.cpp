#include "./ViewStructure_HtmlInfo.hpp"
#include "../../JString.hpp"
#include "./ViewStructure_HtmlInfo_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewStructure_HtmlInfo_Builder::ViewStructure_HtmlInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ViewStructure_HtmlInfo_Builder::ViewStructure_HtmlInfo_Builder()
		: JObject(
			"android.view.ViewStructure$HtmlInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::ViewStructure_HtmlInfo_Builder ViewStructure_HtmlInfo_Builder::addAttribute(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::view::ViewStructure_HtmlInfo ViewStructure_HtmlInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
} // namespace android::view

