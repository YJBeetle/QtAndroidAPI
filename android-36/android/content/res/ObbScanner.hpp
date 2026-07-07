#pragma once

#include "./ObbInfo.def.hpp"
#include "../../../JString.hpp"
#include "./ObbScanner.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::res::ObbInfo ObbScanner::getObbInfo(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::res

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
