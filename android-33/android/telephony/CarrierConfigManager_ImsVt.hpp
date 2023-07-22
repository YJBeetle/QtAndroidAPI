#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsVt.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_ImsVt::KEY_H264_PAYLOAD_DESCRIPTION_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_H264_PAYLOAD_DESCRIPTION_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_H264_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_H264_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_H264_VIDEO_CODEC_ATTRIBUTE_PROFILE_LEVEL_ID_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_H264_VIDEO_CODEC_ATTRIBUTE_PROFILE_LEVEL_ID_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_AS_BANDWIDTH_KBPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_AS_BANDWIDTH_KBPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_CODEC_ATTRIBUTE_FRAME_RATE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_CODEC_ATTRIBUTE_FRAME_RATE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_CODEC_ATTRIBUTE_PACKETIZATION_MODE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_CODEC_ATTRIBUTE_PACKETIZATION_MODE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_CODEC_ATTRIBUTE_RESOLUTION_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_CODEC_ATTRIBUTE_RESOLUTION_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_ON_DEFAULT_BEARER_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_ON_DEFAULT_BEARER_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_QOS_PRECONDITION_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_QOS_PRECONDITION_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_RR_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_RR_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_RS_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_RS_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_RTCP_INACTIVITY_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_RTCP_INACTIVITY_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_RTP_DSCP_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_RTP_DSCP_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVt::KEY_VIDEO_RTP_INACTIVITY_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVt",
			"KEY_VIDEO_RTP_INACTIVITY_TIMER_MILLIS_INT",
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
