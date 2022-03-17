#pragma once

#include "./RcsUceAdapter.def.hpp"
#include "../../../JString.hpp"
#include "./ImsRcsManager.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline JString ImsRcsManager::ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRcsManager",
			"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::ims::RcsUceAdapter ImsRcsManager::getUceAdapter() const
	{
		return callObjectMethod(
			"getUceAdapter",
			"()Landroid/telephony/ims/RcsUceAdapter;"
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif
