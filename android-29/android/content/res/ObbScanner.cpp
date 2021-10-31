#include "./ObbInfo.hpp"
#include "./ObbScanner.hpp"

namespace android::content::res
{
	// Fields
	
	ObbScanner::ObbScanner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ObbScanner::getObbInfo(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0
		);
	}
} // namespace android::content::res

