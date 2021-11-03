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
	class MediaMetadata;
}
namespace android::media::session
{
	class MediaController_Callback;
}
namespace android::media::session
{
	class MediaController_PlaybackInfo;
}
namespace android::media::session
{
	class MediaController_TransportControls;
}
namespace android::media::session
{
	class MediaSession_Token;
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
namespace android::os
{
	class ResultReceiver;
}
namespace android::view
{
	class KeyEvent;
}
class JString;
class JString;

namespace android::media::session
{
	class MediaController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController(QAndroidJniObject obj);
		
		// Constructors
		MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1);
		
		// Methods
		void adjustVolume(jint arg0, jint arg1) const;
		jboolean dispatchMediaButtonEvent(android::view::KeyEvent arg0) const;
		android::os::Bundle getExtras() const;
		jlong getFlags() const;
		android::media::MediaMetadata getMetadata() const;
		JString getPackageName() const;
		android::media::session::MediaController_PlaybackInfo getPlaybackInfo() const;
		android::media::session::PlaybackState getPlaybackState() const;
		JObject getQueue() const;
		JString getQueueTitle() const;
		jint getRatingType() const;
		android::app::PendingIntent getSessionActivity() const;
		android::media::session::MediaSession_Token getSessionToken() const;
		android::media::session::MediaController_TransportControls getTransportControls() const;
		void registerCallback(android::media::session::MediaController_Callback arg0) const;
		void registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1) const;
		void sendCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2) const;
		void setVolumeTo(jint arg0, jint arg1) const;
		void unregisterCallback(android::media::session::MediaController_Callback arg0) const;
	};
} // namespace android::media::session

