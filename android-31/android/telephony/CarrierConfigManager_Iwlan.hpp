#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Iwlan : public JObject
	{
	public:
		// Fields
		static jint AUTHENTICATION_METHOD_CERT();
		static jint AUTHENTICATION_METHOD_EAP_ONLY();
		static jint EPDG_ADDRESS_CELLULAR_LOC();
		static jint EPDG_ADDRESS_PCO();
		static jint EPDG_ADDRESS_PLMN();
		static jint EPDG_ADDRESS_STATIC();
		static jint ID_TYPE_FQDN();
		static jint ID_TYPE_KEY_ID();
		static jint ID_TYPE_RFC822_ADDR();
		static jstring KEY_ADD_KE_TO_CHILD_SESSION_REKEY_BOOL();
		static jstring KEY_CHILD_SA_REKEY_HARD_TIMER_SEC_INT();
		static jstring KEY_CHILD_SA_REKEY_SOFT_TIMER_SEC_INT();
		static jstring KEY_CHILD_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY();
		static jstring KEY_CHILD_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY();
		static jstring KEY_DIFFIE_HELLMAN_GROUPS_INT_ARRAY();
		static jstring KEY_DPD_TIMER_SEC_INT();
		static jstring KEY_EPDG_ADDRESS_PRIORITY_INT_ARRAY();
		static jstring KEY_EPDG_AUTHENTICATION_METHOD_INT();
		static jstring KEY_EPDG_PCO_ID_IPV4_INT();
		static jstring KEY_EPDG_PCO_ID_IPV6_INT();
		static jstring KEY_EPDG_STATIC_ADDRESS_ROAMING_STRING();
		static jstring KEY_EPDG_STATIC_ADDRESS_STRING();
		static jstring KEY_IKE_LOCAL_ID_TYPE_INT();
		static jstring KEY_IKE_REKEY_HARD_TIMER_SEC_INT();
		static jstring KEY_IKE_REKEY_SOFT_TIMER_SEC_INT();
		static jstring KEY_IKE_REMOTE_ID_TYPE_INT();
		static jstring KEY_IKE_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY();
		static jstring KEY_IKE_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY();
		static jstring KEY_MAX_RETRIES_INT();
		static jstring KEY_MCC_MNCS_STRING_ARRAY();
		static jstring KEY_NATT_KEEP_ALIVE_TIMER_SEC_INT();
		static jstring KEY_PREFIX();
		static jstring KEY_RETRANSMIT_TIMER_MSEC_INT_ARRAY();
		static jstring KEY_SUPPORTED_CHILD_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY();
		static jstring KEY_SUPPORTED_IKE_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY();
		static jstring KEY_SUPPORTED_INTEGRITY_ALGORITHMS_INT_ARRAY();
		static jstring KEY_SUPPORTED_PRF_ALGORITHMS_INT_ARRAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Iwlan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Iwlan(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

