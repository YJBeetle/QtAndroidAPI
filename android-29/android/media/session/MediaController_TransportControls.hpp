#pragma once

#include "../../../JObject.hpp"

namespace android::media
{
	class Rating;
}
namespace android::media::session
{
	class MediaController;
}
namespace android::media::session
{
	class PlaybackState_CustomAction;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::session
{
	class MediaController_TransportControls : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController_TransportControls(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_TransportControls(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void fastForward();
		void pause();
		void play();
		void playFromMediaId(jstring arg0, android::os::Bundle arg1);
		void playFromSearch(jstring arg0, android::os::Bundle arg1);
		void playFromUri(android::net::Uri arg0, android::os::Bundle arg1);
		void prepare();
		void prepareFromMediaId(jstring arg0, android::os::Bundle arg1);
		void prepareFromSearch(jstring arg0, android::os::Bundle arg1);
		void prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1);
		void rewind();
		void seekTo(jlong arg0);
		void sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1);
		void sendCustomAction(jstring arg0, android::os::Bundle arg1);
		void setPlaybackSpeed(jfloat arg0);
		void setRating(android::media::Rating arg0);
		void skipToNext();
		void skipToPrevious();
		void skipToQueueItem(jlong arg0);
		void stop();
	};
} // namespace android::media::session

