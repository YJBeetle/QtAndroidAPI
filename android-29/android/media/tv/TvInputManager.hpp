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
	inline jlong TvInputManager::TIME_SHIFT_INVALID_TIME()
	{
		return getStaticField<jlong>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_INVALID_TIME"
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

