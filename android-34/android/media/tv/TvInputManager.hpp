#pragma once

#include "./TvContentRating.def.hpp"
#include "./TvInputInfo.def.hpp"
#include "./TvInputManager_TvInputCallback.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputManager.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString TvInputManager::ACTION_BLOCKED_RATINGS_CHANGED()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_BLOCKED_RATINGS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::ACTION_QUERY_CONTENT_RATING_SYSTEMS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_QUERY_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::ACTION_SETUP_INPUTS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_SETUP_INPUTS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::ACTION_VIEW_RECORDING_SCHEDULES()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_VIEW_RECORDING_SCHEDULES",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_STREAM_EVENT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_STREAM_EVENT"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_COMMAND()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_COMMAND"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_DSMCC()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_DSMCC"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_PES()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_PES"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_SECTION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_SECTION"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_TABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_TABLE"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_TIMELINE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_TIMELINE"
		);
	}
	inline jint TvInputManager::BROADCAST_INFO_TYPE_TS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"BROADCAST_INFO_TYPE_TS"
		);
	}
	inline jint TvInputManager::INPUT_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED"
		);
	}
	inline jint TvInputManager::INPUT_STATE_CONNECTED_STANDBY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED_STANDBY"
		);
	}
	inline jint TvInputManager::INPUT_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_DISCONNECTED"
		);
	}
	inline JString TvInputManager::META_DATA_CONTENT_RATING_SYSTEMS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"META_DATA_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInputManager::RECORDING_ERROR_INSUFFICIENT_SPACE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_INSUFFICIENT_SPACE"
		);
	}
	inline jint TvInputManager::RECORDING_ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_RESOURCE_BUSY"
		);
	}
	inline jint TvInputManager::RECORDING_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_UNKNOWN"
		);
	}
	inline jint TvInputManager::SIGNAL_STRENGTH_LOST()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"SIGNAL_STRENGTH_LOST"
		);
	}
	inline jint TvInputManager::SIGNAL_STRENGTH_STRONG()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"SIGNAL_STRENGTH_STRONG"
		);
	}
	inline jint TvInputManager::SIGNAL_STRENGTH_WEAK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"SIGNAL_STRENGTH_WEAK"
		);
	}
	inline jlong TvInputManager::TIME_SHIFT_INVALID_TIME()
	{
		return getStaticField<jlong>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_INVALID_TIME"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_MODE_AUTO"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_MODE_LOCAL()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_MODE_LOCAL"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_MODE_NETWORK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_MODE_NETWORK"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_MODE_OFF"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_STATUS_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_AVAILABLE"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_STATUS_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNAVAILABLE"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNKNOWN"
		);
	}
	inline jint TvInputManager::TIME_SHIFT_STATUS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNSUPPORTED"
		);
	}
	inline jlong TvInputManager::TV_MESSAGE_GROUP_ID_NONE()
	{
		return getStaticField<jlong>(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_GROUP_ID_NONE"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_KEY_GROUP_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_KEY_GROUP_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_KEY_RAW_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_KEY_RAW_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_KEY_STREAM_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_KEY_STREAM_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_KEY_SUBTYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_KEY_SUBTYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_SUBTYPE_CC_608E()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_SUBTYPE_CC_608E",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputManager::TV_MESSAGE_SUBTYPE_WATERMARKING_A335()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_SUBTYPE_WATERMARKING_A335",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInputManager::TV_MESSAGE_TYPE_CLOSED_CAPTION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_TYPE_CLOSED_CAPTION"
		);
	}
	inline jint TvInputManager::TV_MESSAGE_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_TYPE_OTHER"
		);
	}
	inline jint TvInputManager::TV_MESSAGE_TYPE_WATERMARK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TV_MESSAGE_TYPE_WATERMARK"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_BUFFERING"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_BLACKOUT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_BLACKOUT"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_CARD_INVALID()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_CARD_INVALID"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_CARD_MUTE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_CARD_MUTE"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_LICENSE_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_LICENSE_EXPIRED"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NEED_ACTIVATION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NEED_ACTIVATION"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NEED_PAIRING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NEED_PAIRING"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NO_CARD()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NO_CARD"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_PVR_RECORDING_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_PVR_RECORDING_NOT_ALLOWED"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_REBOOTING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_REBOOTING"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_UNKNOWN"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_INSUFFICIENT_RESOURCE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_INSUFFICIENT_RESOURCE"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_NOT_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_NOT_CONNECTED"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_TUNING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_TUNING"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_UNKNOWN"
		);
	}
	inline jint TvInputManager::VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject TvInputManager::getBlockedRatings() const
	{
		return callObjectMethod(
			"getBlockedRatings",
			"()Ljava/util/List;"
		);
	}
	inline jint TvInputManager::getInputState(JString arg0) const
	{
		return callMethod<jint>(
			"getInputState",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvInputInfo TvInputManager::getTvInputInfo(JString arg0) const
	{
		return callObjectMethod(
			"getTvInputInfo",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputInfo;",
			arg0.object<jstring>()
		);
	}
	inline JObject TvInputManager::getTvInputList() const
	{
		return callObjectMethod(
			"getTvInputList",
			"()Ljava/util/List;"
		);
	}
	inline jboolean TvInputManager::isParentalControlsEnabled() const
	{
		return callMethod<jboolean>(
			"isParentalControlsEnabled",
			"()Z"
		);
	}
	inline jboolean TvInputManager::isRatingBlocked(android::media::tv::TvContentRating arg0) const
	{
		return callMethod<jboolean>(
			"isRatingBlocked",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.object()
		);
	}
	inline void TvInputManager::registerCallback(android::media::tv::TvInputManager_TvInputCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInputManager::unregisterCallback(android::media::tv::TvInputManager_TvInputCallback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;)V",
			arg0.object()
		);
	}
	inline void TvInputManager::updateTvInputInfo(android::media::tv::TvInputInfo arg0) const
	{
		callMethod<void>(
			"updateTvInputInfo",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
