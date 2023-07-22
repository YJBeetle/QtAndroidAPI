#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsEmergency.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_CALLBACK_MODE_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_CALLBACK_MODE_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_IMS_SUPPORTED_RATS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_IMS_SUPPORTED_RATS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_QOS_PRECONDITION_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_QOS_PRECONDITION_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_REGISTRATION_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_REGISTRATION_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_REFRESH_GEOLOCATION_TIMEOUT_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_REFRESH_GEOLOCATION_TIMEOUT_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_RETRY_EMERGENCY_ON_IMS_PDN_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_RETRY_EMERGENCY_ON_IMS_PDN_BOOL",
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
