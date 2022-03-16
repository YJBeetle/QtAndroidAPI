#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_Ims : public JObject
	{
	public:
		// Fields
		static JString KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL();
		static JString KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL();
		static JString KEY_ENABLE_PRESENCE_PUBLISH_BOOL();
		static JString KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL();
		static JString KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT();
		static JString KEY_PREFIX();
		static JString KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL();
		static JString KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY();
		static JString KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Ims(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Ims(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

