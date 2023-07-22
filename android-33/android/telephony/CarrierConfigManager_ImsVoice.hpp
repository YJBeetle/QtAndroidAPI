#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsVoice.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CarrierConfigManager_ImsVoice::ALERTING_SRVCC_SUPPORT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"ALERTING_SRVCC_SUPPORT"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::BANDWIDTH_EFFICIENT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"BANDWIDTH_EFFICIENT"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::BASIC_SRVCC_SUPPORT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"BASIC_SRVCC_SUPPORT"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::CONFERENCE_SUBSCRIBE_TYPE_IN_DIALOG()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"CONFERENCE_SUBSCRIBE_TYPE_IN_DIALOG"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::CONFERENCE_SUBSCRIBE_TYPE_OUT_OF_DIALOG()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"CONFERENCE_SUBSCRIBE_TYPE_OUT_OF_DIALOG"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_FB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_FB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_NB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_NB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_NB_WB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_NB_WB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_NB_WB_SWB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_NB_WB_SWB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_NB_WB_SWB_FB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_NB_WB_SWB_FB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_SWB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_SWB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_WB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_WB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_WB_SWB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_WB_SWB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_ENCODED_BW_TYPE_WB_SWB_FB()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_ENCODED_BW_TYPE_WB_SWB_FB"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_OPERATIONAL_MODE_AMRWB_IO()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_OPERATIONAL_MODE_AMRWB_IO"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_OPERATIONAL_MODE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_OPERATIONAL_MODE_PRIMARY"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_128_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_128_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_13_2_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_13_2_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_16_4_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_16_4_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_24_4_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_24_4_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_32_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_32_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_48_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_48_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_5_9_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_5_9_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_64_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_64_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_7_2_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_7_2_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_8_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_8_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_96_0_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_96_0_KBPS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::EVS_PRIMARY_MODE_BITRATE_9_6_KBPS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"EVS_PRIMARY_MODE_BITRATE_9_6_KBPS"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMRNB_PAYLOAD_DESCRIPTION_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMRNB_PAYLOAD_DESCRIPTION_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMRNB_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMRNB_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMRWB_PAYLOAD_DESCRIPTION_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMRWB_PAYLOAD_DESCRIPTION_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMRWB_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMRWB_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMR_CODEC_ATTRIBUTE_MODESET_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMR_CODEC_ATTRIBUTE_MODESET_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AMR_CODEC_ATTRIBUTE_PAYLOAD_FORMAT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AMR_CODEC_ATTRIBUTE_PAYLOAD_FORMAT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_AS_BANDWIDTH_KBPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_AS_BANDWIDTH_KBPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_INACTIVITY_CALL_END_REASONS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_INACTIVITY_CALL_END_REASONS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_RR_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_RR_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_RS_BANDWIDTH_BPS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_RS_BANDWIDTH_BPS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_RTCP_INACTIVITY_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_RTCP_INACTIVITY_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_AUDIO_RTP_INACTIVITY_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_AUDIO_RTP_INACTIVITY_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CARRIER_VOLTE_ROAMING_AVAILABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CARRIER_VOLTE_ROAMING_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CODEC_ATTRIBUTE_MODE_CHANGE_CAPABILITY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CODEC_ATTRIBUTE_MODE_CHANGE_CAPABILITY_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CODEC_ATTRIBUTE_MODE_CHANGE_NEIGHBOR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CODEC_ATTRIBUTE_MODE_CHANGE_NEIGHBOR_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CODEC_ATTRIBUTE_MODE_CHANGE_PERIOD_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CODEC_ATTRIBUTE_MODE_CHANGE_PERIOD_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CONFERENCE_FACTORY_URI_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CONFERENCE_FACTORY_URI_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_CONFERENCE_SUBSCRIBE_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_CONFERENCE_SUBSCRIBE_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_DEDICATED_BEARER_WAIT_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_DEDICATED_BEARER_WAIT_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_DTMFNB_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_DTMFNB_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_DTMFWB_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_DTMFWB_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_BANDWIDTH_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_BANDWIDTH_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_BITRATE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_BITRATE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_CHANNELS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_CHANNELS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_CH_AW_RECV_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_CH_AW_RECV_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_CMR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_CMR_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_DTX_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_DTX_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_DTX_RECV_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_DTX_RECV_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_HF_ONLY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_HF_ONLY_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_CODEC_ATTRIBUTE_MODE_SWITCH_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_CODEC_ATTRIBUTE_MODE_SWITCH_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_PAYLOAD_DESCRIPTION_BUNDLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_PAYLOAD_DESCRIPTION_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_EVS_PAYLOAD_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_EVS_PAYLOAD_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_INCLUDE_CALLER_ID_SERVICE_CODES_IN_SIP_INVITE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_INCLUDE_CALLER_ID_SERVICE_CODES_IN_SIP_INVITE_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_MINIMUM_SESSION_EXPIRES_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_MINIMUM_SESSION_EXPIRES_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_MO_CALL_REQUEST_TIMEOUT_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_MO_CALL_REQUEST_TIMEOUT_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_MULTIENDPOINT_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_MULTIENDPOINT_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_OIP_SOURCE_FROM_HEADER_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_OIP_SOURCE_FROM_HEADER_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_PRACK_SUPPORTED_FOR_18X_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_PRACK_SUPPORTED_FOR_18X_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_RINGBACK_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_RINGBACK_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_RINGING_TIMER_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_RINGING_TIMER_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SESSION_EXPIRES_TIMER_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SESSION_EXPIRES_TIMER_SEC_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SESSION_PRIVACY_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SESSION_PRIVACY_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SESSION_REFRESHER_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SESSION_REFRESHER_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SESSION_REFRESH_METHOD_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SESSION_REFRESH_METHOD_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SESSION_TIMER_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SESSION_TIMER_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_SRVCC_TYPE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_SRVCC_TYPE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_VOICE_ON_DEFAULT_BEARER_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_VOICE_ON_DEFAULT_BEARER_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_ImsVoice::KEY_VOICE_QOS_PRECONDITION_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"KEY_VOICE_QOS_PRECONDITION_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::MIDCALL_SRVCC_SUPPORT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"MIDCALL_SRVCC_SUPPORT"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::OCTET_ALIGNED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"OCTET_ALIGNED"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::PREALERTING_SRVCC_SUPPORT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"PREALERTING_SRVCC_SUPPORT"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_PRIVACY_TYPE_HEADER()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_PRIVACY_TYPE_HEADER"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_PRIVACY_TYPE_ID()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_PRIVACY_TYPE_ID"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_PRIVACY_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_PRIVACY_TYPE_NONE"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_REFRESHER_TYPE_UAC()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_REFRESHER_TYPE_UAC"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_REFRESHER_TYPE_UAS()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_REFRESHER_TYPE_UAS"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_REFRESHER_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_REFRESHER_TYPE_UNKNOWN"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_REFRESH_METHOD_INVITE()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_REFRESH_METHOD_INVITE"
		);
	}
	inline jint CarrierConfigManager_ImsVoice::SESSION_REFRESH_METHOD_UPDATE_PREFERRED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager$ImsVoice",
			"SESSION_REFRESH_METHOD_UPDATE_PREFERRED"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
