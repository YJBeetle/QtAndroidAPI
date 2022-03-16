#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_Iwlan.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CarrierConfigManager_Iwlan::AUTHENTICATION_METHOD_CERT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"AUTHENTICATION_METHOD_CERT"
		);
	}
	inline jint CarrierConfigManager_Iwlan::AUTHENTICATION_METHOD_EAP_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"AUTHENTICATION_METHOD_EAP_ONLY"
		);
	}
	inline jint CarrierConfigManager_Iwlan::EPDG_ADDRESS_CELLULAR_LOC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"EPDG_ADDRESS_CELLULAR_LOC"
		);
	}
	inline jint CarrierConfigManager_Iwlan::EPDG_ADDRESS_PCO()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"EPDG_ADDRESS_PCO"
		);
	}
	inline jint CarrierConfigManager_Iwlan::EPDG_ADDRESS_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"EPDG_ADDRESS_PLMN"
		);
	}
	inline jint CarrierConfigManager_Iwlan::EPDG_ADDRESS_STATIC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"EPDG_ADDRESS_STATIC"
		);
	}
	inline jint CarrierConfigManager_Iwlan::ID_TYPE_FQDN()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"ID_TYPE_FQDN"
		);
	}
	inline jint CarrierConfigManager_Iwlan::ID_TYPE_KEY_ID()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"ID_TYPE_KEY_ID"
		);
	}
	inline jint CarrierConfigManager_Iwlan::ID_TYPE_RFC822_ADDR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Iwlan",
			"ID_TYPE_RFC822_ADDR"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_ADD_KE_TO_CHILD_SESSION_REKEY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_ADD_KE_TO_CHILD_SESSION_REKEY_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_CHILD_SA_REKEY_HARD_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_CHILD_SA_REKEY_HARD_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_CHILD_SA_REKEY_SOFT_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_CHILD_SA_REKEY_SOFT_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_CHILD_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_CHILD_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_CHILD_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_CHILD_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_DIFFIE_HELLMAN_GROUPS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_DIFFIE_HELLMAN_GROUPS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_DPD_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_DPD_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_ADDRESS_PRIORITY_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_ADDRESS_PRIORITY_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_AUTHENTICATION_METHOD_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_AUTHENTICATION_METHOD_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_PCO_ID_IPV4_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_PCO_ID_IPV4_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_PCO_ID_IPV6_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_PCO_ID_IPV6_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_STATIC_ADDRESS_ROAMING_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_STATIC_ADDRESS_ROAMING_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_EPDG_STATIC_ADDRESS_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_EPDG_STATIC_ADDRESS_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_LOCAL_ID_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_LOCAL_ID_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_REKEY_HARD_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_REKEY_HARD_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_REKEY_SOFT_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_REKEY_SOFT_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_REMOTE_ID_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_REMOTE_ID_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_SESSION_AES_CBC_KEY_SIZE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_IKE_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_IKE_SESSION_AES_CTR_KEY_SIZE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_MAX_RETRIES_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_MAX_RETRIES_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_MCC_MNCS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_MCC_MNCS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_NATT_KEEP_ALIVE_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_NATT_KEEP_ALIVE_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_RETRANSMIT_TIMER_MSEC_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_RETRANSMIT_TIMER_MSEC_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_SUPPORTED_CHILD_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_SUPPORTED_CHILD_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_SUPPORTED_IKE_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_SUPPORTED_IKE_SESSION_ENCRYPTION_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_SUPPORTED_INTEGRITY_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_SUPPORTED_INTEGRITY_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Iwlan::KEY_SUPPORTED_PRF_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Iwlan",
			"KEY_SUPPORTED_PRF_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

