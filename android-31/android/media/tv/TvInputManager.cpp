#include "./TvContentRating.hpp"
#include "./TvInputInfo.hpp"
#include "./TvInputManager_TvInputCallback.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "./TvInputManager.hpp"

namespace android::media::tv
{
	// Fields
	JString TvInputManager::ACTION_BLOCKED_RATINGS_CHANGED()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_BLOCKED_RATINGS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TvInputManager::ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TvInputManager::ACTION_QUERY_CONTENT_RATING_SYSTEMS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_QUERY_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		);
	}
	JString TvInputManager::ACTION_SETUP_INPUTS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_SETUP_INPUTS",
			"Ljava/lang/String;"
		);
	}
	JString TvInputManager::ACTION_VIEW_RECORDING_SCHEDULES()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_VIEW_RECORDING_SCHEDULES",
			"Ljava/lang/String;"
		);
	}
	jint TvInputManager::INPUT_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED"
		);
	}
	jint TvInputManager::INPUT_STATE_CONNECTED_STANDBY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED_STANDBY"
		);
	}
	jint TvInputManager::INPUT_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_DISCONNECTED"
		);
	}
	JString TvInputManager::META_DATA_CONTENT_RATING_SYSTEMS()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputManager",
			"META_DATA_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		);
	}
	jint TvInputManager::RECORDING_ERROR_INSUFFICIENT_SPACE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_INSUFFICIENT_SPACE"
		);
	}
	jint TvInputManager::RECORDING_ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_RESOURCE_BUSY"
		);
	}
	jint TvInputManager::RECORDING_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_UNKNOWN"
		);
	}
	jlong TvInputManager::TIME_SHIFT_INVALID_TIME()
	{
		return getStaticField<jlong>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_INVALID_TIME"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_AVAILABLE"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNAVAILABLE"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNKNOWN"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNSUPPORTED"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_BUFFERING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_BLACKOUT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_BLACKOUT"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_CARD_INVALID()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_CARD_INVALID"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_CARD_MUTE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_CARD_MUTE"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_LICENSE_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_LICENSE_EXPIRED"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NEED_ACTIVATION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NEED_ACTIVATION"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NEED_PAIRING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NEED_PAIRING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_NO_CARD()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_NO_CARD"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_PVR_RECORDING_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_PVR_RECORDING_NOT_ALLOWED"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_REBOOTING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_REBOOTING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_CAS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_CAS_UNKNOWN"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_INSUFFICIENT_RESOURCE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_INSUFFICIENT_RESOURCE"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_NOT_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_NOT_CONNECTED"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_TUNING()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_TUNING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_UNKNOWN"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL"
		);
	}
	
	// QAndroidJniObject forward
	TvInputManager::TvInputManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject TvInputManager::getBlockedRatings()
	{
		return callObjectMethod(
			"getBlockedRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvInputManager::getInputState(JString arg0)
	{
		return callMethod<jint>(
			"getInputState",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	android::media::tv::TvInputInfo TvInputManager::getTvInputInfo(JString arg0)
	{
		return callObjectMethod(
			"getTvInputInfo",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputInfo;",
			arg0.object<jstring>()
		);
	}
	JObject TvInputManager::getTvInputList()
	{
		return callObjectMethod(
			"getTvInputList",
			"()Ljava/util/List;"
		);
	}
	jboolean TvInputManager::isParentalControlsEnabled()
	{
		return callMethod<jboolean>(
			"isParentalControlsEnabled",
			"()Z"
		);
	}
	jboolean TvInputManager::isRatingBlocked(android::media::tv::TvContentRating arg0)
	{
		return callMethod<jboolean>(
			"isRatingBlocked",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.object()
		);
	}
	void TvInputManager::registerCallback(android::media::tv::TvInputManager_TvInputCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TvInputManager::unregisterCallback(android::media::tv::TvInputManager_TvInputCallback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;)V",
			arg0.object()
		);
	}
	void TvInputManager::updateTvInputInfo(android::media::tv::TvInputInfo arg0)
	{
		callMethod<void>(
			"updateTvInputInfo",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

