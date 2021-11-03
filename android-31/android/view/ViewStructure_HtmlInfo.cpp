#include "../../JString.hpp"
#include "./ViewStructure_HtmlInfo.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewStructure_HtmlInfo::ViewStructure_HtmlInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ViewStructure_HtmlInfo::ViewStructure_HtmlInfo()
		: JObject(
			"android.view.ViewStructure$HtmlInfo",
			"()V"
		) {}
	
	// Methods
	JObject ViewStructure_HtmlInfo::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/List;"
		);
	}
	JString ViewStructure_HtmlInfo::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

