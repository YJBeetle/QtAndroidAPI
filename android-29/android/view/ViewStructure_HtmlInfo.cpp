#include "./ViewStructure_HtmlInfo.hpp"

namespace android::view
{
	// Fields
	
	ViewStructure_HtmlInfo::ViewStructure_HtmlInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewStructure_HtmlInfo::ViewStructure_HtmlInfo()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStructure$HtmlInfo",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ViewStructure_HtmlInfo::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/List;"
		);
	}
	jstring ViewStructure_HtmlInfo::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view

