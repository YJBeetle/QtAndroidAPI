#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsSms.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsSms::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_CSFB_RETRY_ON_FAILURE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_CSFB_RETRY_ON_FAILURE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_MAX_RETRY_COUNT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_MAX_RETRY_COUNT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_MAX_RETRY_OVER_IMS_COUNT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_MAX_RETRY_OVER_IMS_COUNT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_OVER_IMS_FORMAT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_OVER_IMS_FORMAT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_OVER_IMS_SEND_RETRY_DELAY_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_OVER_IMS_SEND_RETRY_DELAY_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_OVER_IMS_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_OVER_IMS_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_OVER_IMS_SUPPORTED_RATS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_OVER_IMS_SUPPORTED_RATS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_RP_CAUSE_VALUES_TO_FALLBACK_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_RP_CAUSE_VALUES_TO_FALLBACK_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_RP_CAUSE_VALUES_TO_RETRY_OVER_IMS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_RP_CAUSE_VALUES_TO_RETRY_OVER_IMS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_TR1_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_TR1_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsSms::KEY_SMS_TR2_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsSms",
			"KEY_SMS_TR2_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline jint CarrierConfigManager_ImsSms::SMS_FORMAT_3GPP()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSms",
			"SMS_FORMAT_3GPP"
		);
	}
	inline jint CarrierConfigManager_ImsSms::SMS_FORMAT_3GPP2()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsSms",
			"SMS_FORMAT_3GPP2"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
