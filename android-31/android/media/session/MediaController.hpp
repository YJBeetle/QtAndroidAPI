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

namespace android::media::session
{
	class MediaController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController(QJniObject obj);
		
		// Constructors
		MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1);
		
		// Methods
		void adjustVolume(jint arg0, jint arg1);
		jboolean dispatchMediaButtonEvent(android::view::KeyEvent arg0);
		android::os::Bundle getExtras();
		jlong getFlags();
		android::media::MediaMetadata getMetadata();
		jstring getPackageName();
		android::media::session::MediaController_PlaybackInfo getPlaybackInfo();
		android::media::session::PlaybackState getPlaybackState();
		JObject getQueue();
		jstring getQueueTitle();
		jint getRatingType();
		android::app::PendingIntent getSessionActivity();
		android::os::Bundle getSessionInfo();
		android::media::session::MediaSession_Token getSessionToken();
		jstring getTag();
		android::media::session::MediaController_TransportControls getTransportControls();
		void registerCallback(android::media::session::MediaController_Callback arg0);
		void registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1);
		void sendCommand(jstring arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2);
		void setVolumeTo(jint arg0, jint arg1);
		void unregisterCallback(android::media::session::MediaController_Callback arg0);
	};
} // namespace android::media::session

