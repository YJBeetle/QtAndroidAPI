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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession_Callback(QJniObject obj);
		
		// Constructors
		MediaSession_Callback();
		
		// Methods
		void onCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2);
		void onCustomAction(JString arg0, android::os::Bundle arg1);
		void onFastForward();
		jboolean onMediaButtonEvent(android::content::Intent arg0);
		void onPause();
		void onPlay();
		void onPlayFromMediaId(JString arg0, android::os::Bundle arg1);
		void onPlayFromSearch(JString arg0, android::os::Bundle arg1);
		void onPlayFromUri(android::net::Uri arg0, android::os::Bundle arg1);
		void onPrepare();
		void onPrepareFromMediaId(JString arg0, android::os::Bundle arg1);
		void onPrepareFromSearch(JString arg0, android::os::Bundle arg1);
		void onPrepareFromUri(android::net::Uri arg0, android::os::Bundle arg1);
		void onRewind();
		void onSeekTo(jlong arg0);
		void onSetRating(android::media::Rating arg0);
		void onSkipToNext();
		void onSkipToPrevious();
		void onSkipToQueueItem(jlong arg0);
		void onStop();
	};
} // namespace android::media::session

