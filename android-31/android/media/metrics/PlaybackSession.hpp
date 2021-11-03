#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class LogSessionId;
}
namespace android::media::metrics
{
	class NetworkEvent;
}
namespace android::media::metrics
{
	class PlaybackErrorEvent;
}
namespace android::media::metrics
{
	class PlaybackMetrics;
}
namespace android::media::metrics
{
	class PlaybackStateEvent;
}
namespace android::media::metrics
{
	class TrackChangeEvent;
}

namespace android::media::metrics
{
	class PlaybackSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean equals(jobject arg0);
		android::media::metrics::LogSessionId getSessionId();
		jint hashCode();
		void reportNetworkEvent(android::media::metrics::NetworkEvent arg0);
		void reportPlaybackErrorEvent(android::media::metrics::PlaybackErrorEvent arg0);
		void reportPlaybackMetrics(android::media::metrics::PlaybackMetrics arg0);
		void reportPlaybackStateEvent(android::media::metrics::PlaybackStateEvent arg0);
		void reportTrackChangeEvent(android::media::metrics::TrackChangeEvent arg0);
	};
} // namespace android::media::metrics

