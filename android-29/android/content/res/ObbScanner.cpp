#include "./ObbInfo.hpp"
#include "./ObbScanner.hpp"

namespace android::content::res
{
	// Fields
	
	// QJniObject forward
	ObbScanner::ObbScanner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::res::ObbInfo ObbScanner::getObbInfo(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0
		);
	}
} // namespace android::content::res

