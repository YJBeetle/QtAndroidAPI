#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_Ims.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_PUBLISH_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_PUBLISH_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
