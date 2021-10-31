#include "./ObbInfo.hpp"
#include "./ObbScanner.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	ObbScanner::ObbScanner(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::res::ObbInfo ObbScanner::getObbInfo(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0
		);
	}
} // namespace android::content::res

