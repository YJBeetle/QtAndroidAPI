#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsSs : public JObject
	{
	public:
		// Fields
		static jint CALL_WAITING_SYNC_FIRST_CHANGE();
		static jint CALL_WAITING_SYNC_FIRST_POWER_UP();
		static jint CALL_WAITING_SYNC_IMS_ONLY();
		static jint CALL_WAITING_SYNC_NONE();
		static jint CALL_WAITING_SYNC_USER_CHANGE();
		static JString KEY_NETWORK_INITIATED_USSD_OVER_IMS_SUPPORTED_BOOL();
		static JString KEY_PREFIX();
		static JString KEY_TERMINAL_BASED_CALL_WAITING_DEFAULT_ENABLED_BOOL();
		static JString KEY_TERMINAL_BASED_CALL_WAITING_SYNC_TYPE_INT();
		static JString KEY_USE_CSFB_ON_XCAP_OVER_UT_FAILURE_BOOL();
		static JString KEY_UT_AS_SERVER_FQDN_STRING();
		static JString KEY_UT_AS_SERVER_PORT_INT();
		static JString KEY_UT_IPTYPE_HOME_INT();
		static JString KEY_UT_IPTYPE_ROAMING_INT();
		static JString KEY_UT_REQUIRES_IMS_REGISTRATION_BOOL();
		static JString KEY_UT_SERVER_BASED_SERVICES_INT_ARRAY();
		static JString KEY_UT_SUPPORTED_WHEN_PS_DATA_OFF_BOOL();
		static JString KEY_UT_SUPPORTED_WHEN_ROAMING_BOOL();
		static JString KEY_UT_TERMINAL_BASED_SERVICES_INT_ARRAY();
		static JString KEY_UT_TRANSPORT_TYPE_INT();
		static JString KEY_XCAP_OVER_UT_SUPPORTED_RATS_INT_ARRAY();
		static jint SUPPLEMENTARY_SERVICE_CB_ACR();
		static jint SUPPLEMENTARY_SERVICE_CB_ALL();
		static jint SUPPLEMENTARY_SERVICE_CB_BAIC();
		static jint SUPPLEMENTARY_SERVICE_CB_BAOC();
		static jint SUPPLEMENTARY_SERVICE_CB_BIC_ROAM();
		static jint SUPPLEMENTARY_SERVICE_CB_BIL();
		static jint SUPPLEMENTARY_SERVICE_CB_BOIC();
		static jint SUPPLEMENTARY_SERVICE_CB_BOIC_EXHC();
		static jint SUPPLEMENTARY_SERVICE_CB_IBS();
		static jint SUPPLEMENTARY_SERVICE_CB_OBS();
		static jint SUPPLEMENTARY_SERVICE_CF_ALL();
		static jint SUPPLEMENTARY_SERVICE_CF_ALL_CONDITONAL_FORWARDING();
		static jint SUPPLEMENTARY_SERVICE_CF_CFB();
		static jint SUPPLEMENTARY_SERVICE_CF_CFNL();
		static jint SUPPLEMENTARY_SERVICE_CF_CFNRC();
		static jint SUPPLEMENTARY_SERVICE_CF_CFNRY();
		static jint SUPPLEMENTARY_SERVICE_CF_CFU();
		static jint SUPPLEMENTARY_SERVICE_CW();
		static jint SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIP();
		static jint SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIR();
		static jint SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIP();
		static jint SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsSs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsSs(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

