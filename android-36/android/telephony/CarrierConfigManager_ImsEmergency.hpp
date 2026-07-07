#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsEmergency.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CarrierConfigManager_ImsEmergency::DOMAIN_CS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"DOMAIN_CS"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::DOMAIN_PS_3GPP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"DOMAIN_PS_3GPP"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::DOMAIN_PS_NON_3GPP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"DOMAIN_PS_NON_3GPP"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_CROSS_STACK_REDIAL_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_CROSS_STACK_REDIAL_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_CALLBACK_MODE_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_CALLBACK_MODE_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_CALL_SETUP_TIMER_ON_CURRENT_NETWORK_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_CALL_SETUP_TIMER_ON_CURRENT_NETWORK_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_CDMA_PREFERRED_NUMBERS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_CDMA_PREFERRED_NUMBERS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_DOMAIN_PREFERENCE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_DOMAIN_PREFERENCE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_DOMAIN_PREFERENCE_ROAMING_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_DOMAIN_PREFERENCE_ROAMING_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_LTE_PREFERRED_AFTER_NR_FAILED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_LTE_PREFERRED_AFTER_NR_FAILED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_NETWORK_SCAN_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_NETWORK_SCAN_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_CS_ROAMING_SUPPORTED_ACCESS_NETWORK_TYPES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_CS_ROAMING_SUPPORTED_ACCESS_NETWORK_TYPES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_CS_SUPPORTED_ACCESS_NETWORK_TYPES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_CS_SUPPORTED_ACCESS_NETWORK_TYPES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_IMS_ROAMING_SUPPORTED_3GPP_NETWORK_TYPES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_IMS_ROAMING_SUPPORTED_3GPP_NETWORK_TYPES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_IMS_SUPPORTED_3GPP_NETWORK_TYPES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_IMS_SUPPORTED_3GPP_NETWORK_TYPES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_OVER_IMS_SUPPORTED_RATS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_OVER_IMS_SUPPORTED_RATS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_QOS_PRECONDITION_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_QOS_PRECONDITION_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_REGISTRATION_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_REGISTRATION_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_REQUIRES_IMS_REGISTRATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_REQUIRES_IMS_REGISTRATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_REQUIRES_VOLTE_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_REQUIRES_VOLTE_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_SCAN_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_SCAN_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_EMERGENCY_VOWIFI_REQUIRES_CONDITION_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_EMERGENCY_VOWIFI_REQUIRES_CONDITION_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_MAXIMUM_CELLULAR_SEARCH_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_MAXIMUM_CELLULAR_SEARCH_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_MAXIMUM_NUMBER_OF_EMERGENCY_TRIES_OVER_VOWIFI_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_MAXIMUM_NUMBER_OF_EMERGENCY_TRIES_OVER_VOWIFI_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_PREFER_IMS_EMERGENCY_WHEN_VOICE_CALLS_ON_CS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_PREFER_IMS_EMERGENCY_WHEN_VOICE_CALLS_ON_CS_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_QUICK_CROSS_STACK_REDIAL_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_QUICK_CROSS_STACK_REDIAL_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_REFRESH_GEOLOCATION_TIMEOUT_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_REFRESH_GEOLOCATION_TIMEOUT_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_RETRY_EMERGENCY_ON_IMS_PDN_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_RETRY_EMERGENCY_ON_IMS_PDN_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_SCAN_LIMITED_SERVICE_AFTER_VOLTE_FAILURE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_SCAN_LIMITED_SERVICE_AFTER_VOLTE_FAILURE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsEmergency::KEY_START_QUICK_CROSS_STACK_REDIAL_TIMER_WHEN_REGISTERED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"KEY_START_QUICK_CROSS_STACK_REDIAL_TIMER_WHEN_REGISTERED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::REDIAL_TIMER_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"REDIAL_TIMER_DISABLED"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::SCAN_TYPE_FULL_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"SCAN_TYPE_FULL_SERVICE"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::SCAN_TYPE_FULL_SERVICE_FOLLOWED_BY_LIMITED_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"SCAN_TYPE_FULL_SERVICE_FOLLOWED_BY_LIMITED_SERVICE"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::SCAN_TYPE_NO_PREFERENCE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"SCAN_TYPE_NO_PREFERENCE"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::VOWIFI_REQUIRES_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"VOWIFI_REQUIRES_NONE"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::VOWIFI_REQUIRES_SETTING_ENABLED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"VOWIFI_REQUIRES_SETTING_ENABLED"
		);
	}
	inline jint CarrierConfigManager_ImsEmergency::VOWIFI_REQUIRES_VALID_EID()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsEmergency",
			"VOWIFI_REQUIRES_VALID_EID"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
