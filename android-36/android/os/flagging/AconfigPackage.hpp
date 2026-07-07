#pragma once

#include "../../../JString.hpp"
#include "./AconfigPackage.def.hpp"

namespace android::os::flagging
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::flagging::AconfigPackage AconfigPackage::load(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.flagging.AconfigPackage",
			"load",
			"(Ljava/lang/String;)Landroid/os/flagging/AconfigPackage;",
			arg0.object<jstring>()
		);
	}
	inline jboolean AconfigPackage::getBooleanFlagValue(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBooleanFlagValue",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::os::flagging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::flagging;
#endif
