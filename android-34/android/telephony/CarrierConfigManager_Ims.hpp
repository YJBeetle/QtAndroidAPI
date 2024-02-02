#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_Ims.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CarrierConfigManager_Ims::E911_RTCP_INACTIVITY_ON_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"E911_RTCP_INACTIVITY_ON_CONNECTED"
		);
	}
	inline jint CarrierConfigManager_Ims::E911_RTP_INACTIVITY_ON_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"E911_RTP_INACTIVITY_ON_CONNECTED"
		);
	}
	inline jint CarrierConfigManager_Ims::GEOLOCATION_PIDF_FOR_EMERGENCY_ON_CELLULAR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"GEOLOCATION_PIDF_FOR_EMERGENCY_ON_CELLULAR"
		);
	}
	inline jint CarrierConfigManager_Ims::GEOLOCATION_PIDF_FOR_EMERGENCY_ON_WIFI()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"GEOLOCATION_PIDF_FOR_EMERGENCY_ON_WIFI"
		);
	}
	inline jint CarrierConfigManager_Ims::GEOLOCATION_PIDF_FOR_NON_EMERGENCY_ON_CELLULAR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"GEOLOCATION_PIDF_FOR_NON_EMERGENCY_ON_CELLULAR"
		);
	}
	inline jint CarrierConfigManager_Ims::GEOLOCATION_PIDF_FOR_NON_EMERGENCY_ON_WIFI()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"GEOLOCATION_PIDF_FOR_NON_EMERGENCY_ON_WIFI"
		);
	}
	inline jint CarrierConfigManager_Ims::IPSEC_AUTHENTICATION_ALGORITHM_HMAC_MD5()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"IPSEC_AUTHENTICATION_ALGORITHM_HMAC_MD5"
		);
	}
	inline jint CarrierConfigManager_Ims::IPSEC_AUTHENTICATION_ALGORITHM_HMAC_SHA1()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"IPSEC_AUTHENTICATION_ALGORITHM_HMAC_SHA1"
		);
	}
	inline jint CarrierConfigManager_Ims::IPSEC_ENCRYPTION_ALGORITHM_AES_CBC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"IPSEC_ENCRYPTION_ALGORITHM_AES_CBC"
		);
	}
	inline jint CarrierConfigManager_Ims::IPSEC_ENCRYPTION_ALGORITHM_DES_EDE3_CBC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"IPSEC_ENCRYPTION_ALGORITHM_DES_EDE3_CBC"
		);
	}
	inline jint CarrierConfigManager_Ims::IPSEC_ENCRYPTION_ALGORITHM_NULL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"IPSEC_ENCRYPTION_ALGORITHM_NULL"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_CALL_COMPOSER_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_CALL_COMPOSER_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_OPTIONS_UCE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_OPTIONS_UCE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_PRESENCE_UCE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_PRESENCE_UCE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_SMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_SMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_UT_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_UT_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_VIDEO_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_VIDEO_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_CAPABILITY_TYPE_VOICE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_CAPABILITY_TYPE_VOICE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_PUBLISH_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_PUBLISH_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_GEOLOCATION_PIDF_IN_SIP_INVITE_SUPPORT_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_GEOLOCATION_PIDF_IN_SIP_INVITE_SUPPORT_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_GEOLOCATION_PIDF_IN_SIP_REGISTER_SUPPORT_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_GEOLOCATION_PIDF_IN_SIP_REGISTER_SUPPORT_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_GRUU_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_GRUU_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IMS_PDN_ENABLED_IN_NO_VOPS_SUPPORT_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IMS_PDN_ENABLED_IN_NO_VOPS_SUPPORT_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IMS_USER_AGENT_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IMS_USER_AGENT_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IPSEC_AUTHENTICATION_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IPSEC_AUTHENTICATION_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IPSEC_ENCRYPTION_ALGORITHMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IPSEC_ENCRYPTION_ALGORITHMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IPV4_SIP_MTU_SIZE_CELLULAR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IPV4_SIP_MTU_SIZE_CELLULAR_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_IPV6_SIP_MTU_SIZE_CELLULAR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IPV6_SIP_MTU_SIZE_CELLULAR_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_KEEP_PDN_UP_IN_NO_VOPS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_KEEP_PDN_UP_IN_NO_VOPS_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_MMTEL_REQUIRES_PROVISIONING_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_MMTEL_REQUIRES_PROVISIONING_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_PHONE_CONTEXT_DOMAIN_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PHONE_CONTEXT_DOMAIN_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_RCS_REQUIRES_PROVISIONING_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_REQUIRES_PROVISIONING_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REGISTRATION_EVENT_PACKAGE_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REGISTRATION_EVENT_PACKAGE_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REGISTRATION_EXPIRY_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REGISTRATION_EXPIRY_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REGISTRATION_RETRY_BASE_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REGISTRATION_RETRY_BASE_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REGISTRATION_RETRY_MAX_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REGISTRATION_RETRY_MAX_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REGISTRATION_SUBSCRIBE_EXPIRY_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REGISTRATION_SUBSCRIBE_EXPIRY_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_REQUEST_URI_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_REQUEST_URI_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_OVER_IPSEC_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_OVER_IPSEC_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_PREFERRED_TRANSPORT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_PREFERRED_TRANSPORT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_SERVER_PORT_NUMBER_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_SERVER_PORT_NUMBER_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_B_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_B_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_C_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_C_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_D_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_D_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_F_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_F_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_H_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_H_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_J_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_J_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_T1_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_T1_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_T2_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_T2_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SIP_TIMER_T4_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SIP_TIMER_T4_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_SUPPORTED_RATS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_SUPPORTED_RATS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_USE_SIP_URI_FOR_PRESENCE_SUBSCRIBE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_USE_SIP_URI_FOR_PRESENCE_SUBSCRIBE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Ims::KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline jint CarrierConfigManager_Ims::NETWORK_TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"NETWORK_TYPE_HOME"
		);
	}
	inline jint CarrierConfigManager_Ims::NETWORK_TYPE_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"NETWORK_TYPE_ROAMING"
		);
	}
	inline jint CarrierConfigManager_Ims::PREFERRED_TRANSPORT_DYNAMIC_UDP_TCP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"PREFERRED_TRANSPORT_DYNAMIC_UDP_TCP"
		);
	}
	inline jint CarrierConfigManager_Ims::PREFERRED_TRANSPORT_TCP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"PREFERRED_TRANSPORT_TCP"
		);
	}
	inline jint CarrierConfigManager_Ims::PREFERRED_TRANSPORT_TLS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"PREFERRED_TRANSPORT_TLS"
		);
	}
	inline jint CarrierConfigManager_Ims::PREFERRED_TRANSPORT_UDP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"PREFERRED_TRANSPORT_UDP"
		);
	}
	inline jint CarrierConfigManager_Ims::REQUEST_URI_FORMAT_SIP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"REQUEST_URI_FORMAT_SIP"
		);
	}
	inline jint CarrierConfigManager_Ims::REQUEST_URI_FORMAT_TEL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"REQUEST_URI_FORMAT_TEL"
		);
	}
	inline jint CarrierConfigManager_Ims::RTCP_INACTIVITY_ON_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"RTCP_INACTIVITY_ON_CONNECTED"
		);
	}
	inline jint CarrierConfigManager_Ims::RTCP_INACTIVITY_ON_HOLD()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"RTCP_INACTIVITY_ON_HOLD"
		);
	}
	inline jint CarrierConfigManager_Ims::RTP_INACTIVITY_ON_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$Ims",
			"RTP_INACTIVITY_ON_CONNECTED"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
