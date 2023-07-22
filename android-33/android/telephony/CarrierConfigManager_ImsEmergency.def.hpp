#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsEmergency : public JObject
	{
	public:
		// Fields
		static JString KEY_EMERGENCY_CALLBACK_MODE_SUPPORTED_BOOL();
		static JString KEY_EMERGENCY_OVER_IMS_SUPPORTED_RATS_INT_ARRAY();
		static JString KEY_EMERGENCY_QOS_PRECONDITION_SUPPORTED_BOOL();
		static JString KEY_EMERGENCY_REGISTRATION_TIMER_MILLIS_INT();
		static JString KEY_PREFIX();
		static JString KEY_REFRESH_GEOLOCATION_TIMEOUT_MILLIS_INT();
		static JString KEY_RETRY_EMERGENCY_ON_IMS_PDN_BOOL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsEmergency(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsEmergency(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

