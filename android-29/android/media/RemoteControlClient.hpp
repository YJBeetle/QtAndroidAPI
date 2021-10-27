#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::media
{
	class RemoteControlClient_MetadataEditor;
}
namespace android::media::session
{
	class MediaSession;
}
namespace android::os
{
	class Looper;
}

namespace android::media
{
	class RemoteControlClient : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_KEY_MEDIA_FAST_FORWARD();
		static jint FLAG_KEY_MEDIA_NEXT();
		static jint FLAG_KEY_MEDIA_PAUSE();
		static jint FLAG_KEY_MEDIA_PLAY();
		static jint FLAG_KEY_MEDIA_PLAY_PAUSE();
		static jint FLAG_KEY_MEDIA_POSITION_UPDATE();
		static jint FLAG_KEY_MEDIA_PREVIOUS();
		static jint FLAG_KEY_MEDIA_RATING();
		static jint FLAG_KEY_MEDIA_REWIND();
		static jint FLAG_KEY_MEDIA_STOP();
		static jint PLAYSTATE_BUFFERING();
		static jint PLAYSTATE_ERROR();
		static jint PLAYSTATE_FAST_FORWARDING();
		static jint PLAYSTATE_PAUSED();
		static jint PLAYSTATE_PLAYING();
		static jint PLAYSTATE_REWINDING();
		static jint PLAYSTATE_SKIPPING_BACKWARDS();
		static jint PLAYSTATE_SKIPPING_FORWARDS();
		static jint PLAYSTATE_STOPPED();
		
		RemoteControlClient(QAndroidJniObject obj);
		// Constructors
		RemoteControlClient(android::app::PendingIntent &arg0);
		RemoteControlClient(android::app::PendingIntent &arg0, android::os::Looper &arg1);
		RemoteControlClient() = default;
		
		// Methods
		QAndroidJniObject editMetadata(jboolean arg0);
		QAndroidJniObject getMediaSession();
		void setMetadataUpdateListener(__JniBaseClass arg0);
		void setOnGetPlaybackPositionListener(__JniBaseClass arg0);
		void setPlaybackPositionUpdateListener(__JniBaseClass arg0);
		void setPlaybackState(jint arg0);
		void setPlaybackState(jint arg0, jlong arg1, jfloat arg2);
		void setTransportControlFlags(jint arg0);
	};
} // namespace android::media

