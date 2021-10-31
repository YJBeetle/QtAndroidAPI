#include "./ViewStructure_HtmlInfo.hpp"
#include "./ViewStructure_HtmlInfo_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewStructure_HtmlInfo_Builder::ViewStructure_HtmlInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ViewStructure_HtmlInfo_Builder::ViewStructure_HtmlInfo_Builder()
		: __JniBaseClass(
			"android.view.ViewStructure$HtmlInfo$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ViewStructure_HtmlInfo_Builder::addAttribute(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ViewStructure_HtmlInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
} // namespace android::view

