#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsServiceEntitlement.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsServiceEntitlement::KEY_ENTITLEMENT_SERVER_URL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_ENTITLEMENT_SERVER_URL_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsServiceEntitlement::KEY_FCM_SENDER_ID_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_FCM_SENDER_ID_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsServiceEntitlement::KEY_IMS_PROVISIONING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_IMS_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsServiceEntitlement::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsServiceEntitlement::KEY_SHOW_VOWIFI_WEBVIEW_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_SHOW_VOWIFI_WEBVIEW_BOOL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

