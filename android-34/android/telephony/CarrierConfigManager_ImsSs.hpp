#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsSs.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CarrierConfigManager_ImsSs::CALL_WAITING_SYNC_FIRST_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"CALL_WAITING_SYNC_FIRST_CHANGE"
		);
	}
	inline jint CarrierConfigManager_ImsSs::CALL_WAITING_SYNC_FIRST_POWER_UP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"CALL_WAITING_SYNC_FIRST_POWER_UP"
		);
	}
	inline jint CarrierConfigManager_ImsSs::CALL_WAITING_SYNC_IMS_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"CALL_WAITING_SYNC_IMS_ONLY"
		);
	}
	inline jint CarrierConfigManager_ImsSs::CALL_WAITING_SYNC_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"CALL_WAITING_SYNC_NONE"
		);
	}
	inline jint CarrierConfigManager_ImsSs::CALL_WAITING_SYNC_USER_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"CALL_WAITING_SYNC_USER_CHANGE"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_NETWORK_INITIATED_USSD_OVER_IMS_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_NETWORK_INITIATED_USSD_OVER_IMS_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_TERMINAL_BASED_CALL_WAITING_DEFAULT_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_TERMINAL_BASED_CALL_WAITING_DEFAULT_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_TERMINAL_BASED_CALL_WAITING_SYNC_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_TERMINAL_BASED_CALL_WAITING_SYNC_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_USE_CSFB_ON_XCAP_OVER_UT_FAILURE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_USE_CSFB_ON_XCAP_OVER_UT_FAILURE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_AS_SERVER_FQDN_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_AS_SERVER_FQDN_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_AS_SERVER_PORT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_AS_SERVER_PORT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_IPTYPE_HOME_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_IPTYPE_HOME_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_IPTYPE_ROAMING_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_IPTYPE_ROAMING_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_REQUIRES_IMS_REGISTRATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_REQUIRES_IMS_REGISTRATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_SERVER_BASED_SERVICES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_SERVER_BASED_SERVICES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_SUPPORTED_WHEN_PS_DATA_OFF_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_SUPPORTED_WHEN_PS_DATA_OFF_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_SUPPORTED_WHEN_ROAMING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_SUPPORTED_WHEN_ROAMING_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_TERMINAL_BASED_SERVICES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_TERMINAL_BASED_SERVICES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_UT_TRANSPORT_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_UT_TRANSPORT_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSs::KEY_XCAP_OVER_UT_SUPPORTED_RATS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSs",
			"KEY_XCAP_OVER_UT_SUPPORTED_RATS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_ACR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_ACR"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_ALL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_ALL"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BAIC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BAIC"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BAOC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BAOC"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BIC_ROAM()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BIC_ROAM"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BIL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BIL"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BOIC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BOIC"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_BOIC_EXHC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_BOIC_EXHC"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_IBS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_IBS"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CB_OBS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CB_OBS"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_ALL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_ALL"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_ALL_CONDITONAL_FORWARDING()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_ALL_CONDITONAL_FORWARDING"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_CFB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_CFB"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_CFNL()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_CFNL"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_CFNRC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_CFNRC"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_CFNRY()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_CFNRY"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CF_CFU()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CF_CFU"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_CW()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_CW"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIP"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_IDENTIFICATION_OIR"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIP"
		);
	}
	inline jint CarrierConfigManager_ImsSs::SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIR()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSs",
			"SUPPLEMENTARY_SERVICE_IDENTIFICATION_TIR"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
