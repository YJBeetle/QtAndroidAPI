#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::media::session
{
	class PlaybackState : public JObject
	{
	public:
		// Fields
		static jlong ACTION_FAST_FORWARD();
		static jlong ACTION_PAUSE();
		static jlong ACTION_PLAY();
		static jlong ACTION_PLAY_FROM_MEDIA_ID();
		static jlong ACTION_PLAY_FROM_SEARCH();
		static jlong ACTION_PLAY_FROM_URI();
		static jlong ACTION_PLAY_PAUSE();
		static jlong ACTION_PREPARE();
		static jlong ACTION_PREPARE_FROM_MEDIA_ID();
		static jlong ACTION_PREPARE_FROM_SEARCH();
		static jlong ACTION_PREPARE_FROM_URI();
		static jlong ACTION_REWIND();
		static jlong ACTION_SEEK_TO();
		static jlong ACTION_SET_RATING();
		static jlong ACTION_SKIP_TO_NEXT();
		static jlong ACTION_SKIP_TO_PREVIOUS();
		static jlong ACTION_SKIP_TO_QUEUE_ITEM();
		static jlong ACTION_STOP();
		static JObject CREATOR();
		static jlong PLAYBACK_POSITION_UNKNOWN();
		static jint STATE_BUFFERING();
		static jint STATE_CONNECTING();
		static jint STATE_ERROR();
		static jint STATE_FAST_FORWARDING();
		static jint STATE_NONE();
		static jint STATE_PAUSED();
		static jint STATE_PLAYING();
		static jint STATE_REWINDING();
		static jint STATE_SKIPPING_TO_NEXT();
		static jint STATE_SKIPPING_TO_PREVIOUS();
		static jint STATE_SKIPPING_TO_QUEUE_ITEM();
		static jint STATE_STOPPED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getActions() const;
		jlong getActiveQueueItemId() const;
		jlong getBufferedPosition() const;
		JObject getCustomActions() const;
		JString getErrorMessage() const;
		android::os::Bundle getExtras() const;
		jlong getLastPositionUpdateTime() const;
		jfloat getPlaybackSpeed() const;
		jlong getPosition() const;
		jint getState() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::session

