#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsServiceEntitlement : public JObject
	{
	public:
		// Fields
		static JString KEY_ENTITLEMENT_SERVER_URL_STRING();
		static JString KEY_FCM_SENDER_ID_STRING();
		static JString KEY_IMS_PROVISIONING_BOOL();
		static JString KEY_PREFIX();
		static JString KEY_SHOW_VOWIFI_WEBVIEW_BOOL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsServiceEntitlement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsServiceEntitlement(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

