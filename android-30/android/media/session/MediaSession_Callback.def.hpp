#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media
{
	class Rating;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ResultReceiver;
}
class JString;

namespace android::media::session
{
	class MediaSession_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaSession_Callback();
		
		// Methods
		void onCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2) const;
		void onCustomAction(JString arg0, android::os::Bundle arg1) const;
		void onFastForward() const;
		jboolean onMediaButtonEvent(android::content::Intent arg0) const;
		void onPause() const;
		void onPlay() const;
		void onPlayFromMediaId(JString arg0, android::os::Bundle arg1) const;
		void onPlayFromSearch(JString arg0, android::os::Bundle arg1) const;
		void onPlayFromUri(android::net::Uri arg0, android::os::Bundle arg1) const;
		void onPrepare() const;
		void onPrepareFromMediaId(JString arg0, android::os::Bundle arg1) const;
		void onPrepareFromSearch(JString arg0, android::os::Bundle arg1) const;
		void onPrepareFromUri(android::net::Uri arg0, android::os::Bundle arg1) const;
		void onRewind() const;
		void onSeekTo(jlong arg0) const;
		void onSetPlaybackSpeed(jfloat arg0) const;
		void onSetRating(android::media::Rating arg0) const;
		void onSkipToNext() const;
		void onSkipToPrevious() const;
		void onSkipToQueueItem(jlong arg0) const;
		void onStop() const;
	};
} // namespace android::media::session

