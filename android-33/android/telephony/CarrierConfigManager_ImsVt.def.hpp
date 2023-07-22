#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsVt : public JObject
	{
	public:
		// Fields
		static JString KEY_H264_PAYLOAD_DESCRIPTION_BUNDLE();
		static JString KEY_H264_PAYLOAD_TYPE_INT_ARRAY();
		static JString KEY_H264_VIDEO_CODEC_ATTRIBUTE_PROFILE_LEVEL_ID_STRING();
		static JString KEY_PREFIX();
		static JString KEY_VIDEO_AS_BANDWIDTH_KBPS_INT();
		static JString KEY_VIDEO_CODEC_ATTRIBUTE_FRAME_RATE_INT();
		static JString KEY_VIDEO_CODEC_ATTRIBUTE_PACKETIZATION_MODE_INT();
		static JString KEY_VIDEO_CODEC_ATTRIBUTE_RESOLUTION_INT_ARRAY();
		static JString KEY_VIDEO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE();
		static JString KEY_VIDEO_ON_DEFAULT_BEARER_SUPPORTED_BOOL();
		static JString KEY_VIDEO_QOS_PRECONDITION_SUPPORTED_BOOL();
		static JString KEY_VIDEO_RR_BANDWIDTH_BPS_INT();
		static JString KEY_VIDEO_RS_BANDWIDTH_BPS_INT();
		static JString KEY_VIDEO_RTCP_INACTIVITY_TIMER_MILLIS_INT();
		static JString KEY_VIDEO_RTP_DSCP_INT();
		static JString KEY_VIDEO_RTP_INACTIVITY_TIMER_MILLIS_INT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsVt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsVt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

