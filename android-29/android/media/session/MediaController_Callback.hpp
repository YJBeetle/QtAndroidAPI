#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaMetadata;
}
namespace android::media::session
{
	class MediaController_PlaybackInfo;
}
namespace android::media::session
{
	class PlaybackState;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::session
{
	class MediaController_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaController_Callback(QAndroidJniObject obj);
		// Constructors
		MediaController_Callback();
		
		// Methods
		void onAudioInfoChanged(android::media::session::MediaController_PlaybackInfo arg0);
		void onExtrasChanged(android::os::Bundle arg0);
		void onMetadataChanged(android::media::MediaMetadata arg0);
		void onPlaybackStateChanged(android::media::session::PlaybackState arg0);
		void onQueueChanged(__JniBaseClass arg0);
		void onQueueTitleChanged(jstring arg0);
		void onSessionDestroyed();
		void onSessionEvent(jstring arg0, android::os::Bundle arg1);
	};
} // namespace android::media::session

