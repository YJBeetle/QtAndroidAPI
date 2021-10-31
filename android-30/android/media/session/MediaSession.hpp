#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class MediaMetadata;
}
namespace android::media
{
	class VolumeProvider;
}
namespace android::media::session
{
	class MediaController;
}
namespace android::media::session
{
	class MediaSession_Callback;
}
namespace android::media::session
{
	class MediaSession_Token;
}
namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace android::media::session
{
	class PlaybackState;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}

namespace android::media::session
{
	class MediaSession : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_HANDLES_MEDIA_BUTTONS();
		static jint FLAG_HANDLES_TRANSPORT_CONTROLS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession(QAndroidJniObject obj);
		
		// Constructors
		MediaSession(android::content::Context arg0, jstring arg1);
		MediaSession(android::content::Context arg0, jstring arg1, android::os::Bundle arg2);
		
		// Methods
		android::media::session::MediaController getController();
		android::media::session::MediaSessionManager_RemoteUserInfo getCurrentControllerInfo();
		android::media::session::MediaSession_Token getSessionToken();
		jboolean isActive();
		void release();
		void sendSessionEvent(jstring arg0, android::os::Bundle arg1);
		void setActive(jboolean arg0);
		void setCallback(android::media::session::MediaSession_Callback arg0);
		void setCallback(android::media::session::MediaSession_Callback arg0, android::os::Handler arg1);
		void setExtras(android::os::Bundle arg0);
		void setFlags(jint arg0);
		void setMediaButtonReceiver(android::app::PendingIntent arg0);
		void setMetadata(android::media::MediaMetadata arg0);
		void setPlaybackState(android::media::session::PlaybackState arg0);
		void setPlaybackToLocal(android::media::AudioAttributes arg0);
		void setPlaybackToRemote(android::media::VolumeProvider arg0);
		void setQueue(__JniBaseClass arg0);
		void setQueueTitle(jstring arg0);
		void setRatingType(jint arg0);
		void setSessionActivity(android::app::PendingIntent arg0);
	};
} // namespace android::media::session

