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
		static JString KEY_SMS_MAX_RETRY_COUNT_INT();
		static JString KEY_SMS_MAX_RETRY_OVER_IMS_COUNT_INT();
		static JString KEY_SMS_OVER_IMS_FORMAT_INT();
		static JString KEY_SMS_OVER_IMS_SEND_RETRY_DELAY_MILLIS_INT();
		static JString KEY_SMS_OVER_IMS_SUPPORTED_BOOL();
		static JString KEY_SMS_OVER_IMS_SUPPORTED_RATS_INT_ARRAY();
		static JString KEY_SMS_RP_CAUSE_VALUES_TO_FALLBACK_INT_ARRAY();
		static JString KEY_SMS_RP_CAUSE_VALUES_TO_RETRY_OVER_IMS_INT_ARRAY();
		static JString KEY_SMS_TR1_TIMER_MILLIS_INT();
		static JString KEY_SMS_TR2_TIMER_MILLIS_INT();
		static jint SMS_FORMAT_3GPP();
		static jint SMS_FORMAT_3GPP2();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsSms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsSms(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

