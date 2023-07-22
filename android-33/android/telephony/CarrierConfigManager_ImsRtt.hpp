#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsRtt.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsRtt::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_RED_PAYLOAD_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_RED_PAYLOAD_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_T140_PAYLOAD_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_T140_PAYLOAD_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_AS_BANDWIDTH_KBPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_AS_BANDWIDTH_KBPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_ON_DEFAULT_BEARER_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_ON_DEFAULT_BEARER_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_QOS_PRECONDITION_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_QOS_PRECONDITION_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_RR_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_RR_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsRtt::KEY_TEXT_RS_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsRtt",
			"KEY_TEXT_RS_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
