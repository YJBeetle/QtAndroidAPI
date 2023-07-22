#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsSms : public JObject
	{
	public:
		// Fields
		static JString KEY_PREFIX();
		static JString KEY_SMS_CSFB_RETRY_ON_FAILURE_BOOL();
		static JString KEY_SMS_OVER_IMS_FORMAT_INT();
		static JString KEY_SMS_OVER_IMS_SUPPORTED_BOOL();
		static JString KEY_SMS_OVER_IMS_SUPPORTED_RATS_INT_ARRAY();
		static jint SMS_FORMAT_3GPP();
		static jint SMS_FORMAT_3GPP2();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsSms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsSms(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

