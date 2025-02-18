#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsWfc.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsWfc::KEY_EMERGENCY_CALL_OVER_EMERGENCY_PDN_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsWfc",
			"KEY_EMERGENCY_CALL_OVER_EMERGENCY_PDN_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsWfc::KEY_PIDF_SHORT_CODE_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsWfc",
			"KEY_PIDF_SHORT_CODE_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsWfc::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsWfc",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
