#include "./ObbInfo.hpp"
#include "../../../JString.hpp"
#include "./ObbScanner.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	android::content::res::ObbInfo ObbScanner::getObbInfo(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::res

