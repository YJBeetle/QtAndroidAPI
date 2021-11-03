#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class CarrierConfigManager_ImsServiceEntitlement : public JObject
	{
	public:
		// Fields
		static jstring KEY_ENTITLEMENT_SERVER_URL_STRING();
		static jstring KEY_FCM_SENDER_ID_STRING();
		static jstring KEY_IMS_PROVISIONING_BOOL();
		static jstring KEY_PREFIX();
		static jstring KEY_SHOW_VOWIFI_WEBVIEW_BOOL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsServiceEntitlement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsServiceEntitlement(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

