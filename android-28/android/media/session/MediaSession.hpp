#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JString;

namespace android::media::session
{
	class MediaSession : public JObject
	{
	public:
		// Fields
		static jint FLAG_HANDLES_MEDIA_BUTTONS();
		static jint FLAG_HANDLES_TRANSPORT_CONTROLS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession(QJniObject obj);
		
		// Constructors
		MediaSession(android::content::Context arg0, JString arg1);
		
		// Methods
		android::media::session::MediaController getController() const;
		android::media::session::MediaSessionManager_RemoteUserInfo getCurrentControllerInfo() const;
		android::media::session::MediaSession_Token getSessionToken() const;
		jboolean isActive() const;
		void release() const;
		void sendSessionEvent(JString arg0, android::os::Bundle arg1) const;
		void setActive(jboolean arg0) const;
		void setCallback(android::media::session::MediaSession_Callback arg0) const;
		void setCallback(android::media::session::MediaSession_Callback arg0, android::os::Handler arg1) const;
		void setExtras(android::os::Bundle arg0) const;
		void setFlags(jint arg0) const;
		void setMediaButtonReceiver(android::app::PendingIntent arg0) const;
		void setMetadata(android::media::MediaMetadata arg0) const;
		void setPlaybackState(android::media::session::PlaybackState arg0) const;
		void setPlaybackToLocal(android::media::AudioAttributes arg0) const;
		void setPlaybackToRemote(android::media::VolumeProvider arg0) const;
		void setQueue(JObject arg0) const;
		void setQueueTitle(JString arg0) const;
		void setRatingType(jint arg0) const;
		void setSessionActivity(android::app::PendingIntent arg0) const;
	};
} // namespace android::media::session

