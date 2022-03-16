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
class JString;

namespace android::media::session
{
	class MediaController_TransportControls : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController_TransportControls(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_TransportControls(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void fastForward() const;
		void pause() const;
		void play() const;
		void playFromMediaId(JString arg0, android::os::Bundle arg1) const;
		void playFromSearch(JString arg0, android::os::Bundle arg1) const;
		void playFromUri(android::net::Uri arg0, android::os::Bundle arg1) const;
		void prepare() const;
		void prepareFromMediaId(JString arg0, android::os::Bundle arg1) const;
		void prepareFromSearch(JString arg0, android::os::Bundle arg1) const;
		void prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1) const;
		void rewind() const;
		void seekTo(jlong arg0) const;
		void sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1) const;
		void sendCustomAction(JString arg0, android::os::Bundle arg1) const;
		void setRating(android::media::Rating arg0) const;
		void skipToNext() const;
		void skipToPrevious() const;
		void skipToQueueItem(jlong arg0) const;
		void stop() const;
	};
} // namespace android::media::session

