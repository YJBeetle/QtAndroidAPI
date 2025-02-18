#pragma once

#include "../../../JObject.hpp"

namespace android::media::tv
{
	class TvContentRating;
}
namespace android::media::tv
{
	class TvInputInfo;
}
namespace android::media::tv
{
	class TvInputManager_TvInputCallback;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::media::tv
{
	class TvInputManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_BLOCKED_RATINGS_CHANGED();
		static JString ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED();
		static JString ACTION_QUERY_CONTENT_RATING_SYSTEMS();
		static JString ACTION_SETUP_INPUTS();
		static JString ACTION_VIEW_RECORDING_SCHEDULES();
		static jint BROADCAST_INFO_STREAM_EVENT();
		static jint BROADCAST_INFO_TYPE_COMMAND();
		static jint BROADCAST_INFO_TYPE_DSMCC();
		static jint BROADCAST_INFO_TYPE_PES();
		static jint BROADCAST_INFO_TYPE_SECTION();
		static jint BROADCAST_INFO_TYPE_TABLE();
		static jint BROADCAST_INFO_TYPE_TIMELINE();
		static jint BROADCAST_INFO_TYPE_TS();
		static jint INPUT_STATE_CONNECTED();
		static jint INPUT_STATE_CONNECTED_STANDBY();
		static jint INPUT_STATE_DISCONNECTED();
		static JString META_DATA_CONTENT_RATING_SYSTEMS();
		static jint RECORDING_ERROR_INSUFFICIENT_SPACE();
		static jint RECORDING_ERROR_RESOURCE_BUSY();
		static jint RECORDING_ERROR_UNKNOWN();
		static jint SIGNAL_STRENGTH_LOST();
		static jint SIGNAL_STRENGTH_STRONG();
		static jint SIGNAL_STRENGTH_WEAK();
		static jlong TIME_SHIFT_INVALID_TIME();
		static jint TIME_SHIFT_MODE_AUTO();
		static jint TIME_SHIFT_MODE_LOCAL();
		static jint TIME_SHIFT_MODE_NETWORK();
		static jint TIME_SHIFT_MODE_OFF();
		static jint TIME_SHIFT_STATUS_AVAILABLE();
		static jint TIME_SHIFT_STATUS_UNAVAILABLE();
		static jint TIME_SHIFT_STATUS_UNKNOWN();
		static jint TIME_SHIFT_STATUS_UNSUPPORTED();
		static jlong TV_MESSAGE_GROUP_ID_NONE();
		static JString TV_MESSAGE_KEY_GROUP_ID();
		static JString TV_MESSAGE_KEY_RAW_DATA();
		static JString TV_MESSAGE_KEY_STREAM_ID();
		static JString TV_MESSAGE_KEY_SUBTYPE();
		static JString TV_MESSAGE_SUBTYPE_CC_608E();
		static JString TV_MESSAGE_SUBTYPE_WATERMARKING_A335();
		static jint TV_MESSAGE_TYPE_CLOSED_CAPTION();
		static jint TV_MESSAGE_TYPE_OTHER();
		static jint TV_MESSAGE_TYPE_WATERMARK();
		static jint VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY();
		static jint VIDEO_UNAVAILABLE_REASON_BUFFERING();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_BLACKOUT();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_CARD_INVALID();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_CARD_MUTE();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_INSUFFICIENT_OUTPUT_PROTECTION();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_LICENSE_EXPIRED();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_NEED_ACTIVATION();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_NEED_PAIRING();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_NO_CARD();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_PVR_RECORDING_NOT_ALLOWED();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_REBOOTING();
		static jint VIDEO_UNAVAILABLE_REASON_CAS_UNKNOWN();
		static jint VIDEO_UNAVAILABLE_REASON_INSUFFICIENT_RESOURCE();
		static jint VIDEO_UNAVAILABLE_REASON_NOT_CONNECTED();
		static jint VIDEO_UNAVAILABLE_REASON_TUNING();
		static jint VIDEO_UNAVAILABLE_REASON_UNKNOWN();
		static jint VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getBlockedRatings() const;
		jint getInputState(JString arg0) const;
		android::media::tv::TvInputInfo getTvInputInfo(JString arg0) const;
		JObject getTvInputList() const;
		jboolean isParentalControlsEnabled() const;
		jboolean isRatingBlocked(android::media::tv::TvContentRating arg0) const;
		void registerCallback(android::media::tv::TvInputManager_TvInputCallback arg0, android::os::Handler arg1) const;
		void unregisterCallback(android::media::tv::TvInputManager_TvInputCallback arg0) const;
		void updateTvInputInfo(android::media::tv::TvInputInfo arg0) const;
	};
} // namespace android::media::tv

