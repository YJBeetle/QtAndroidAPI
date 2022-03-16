#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_Ims.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

