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
class JObject;

namespace android::media::metrics
{
	class PlaybackSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean equals(JObject arg0) const;
		android::media::metrics::LogSessionId getSessionId() const;
		jint hashCode() const;
		void reportNetworkEvent(android::media::metrics::NetworkEvent arg0) const;
		void reportPlaybackErrorEvent(android::media::metrics::PlaybackErrorEvent arg0) const;
		void reportPlaybackMetrics(android::media::metrics::PlaybackMetrics arg0) const;
		void reportPlaybackStateEvent(android::media::metrics::PlaybackStateEvent arg0) const;
		void reportTrackChangeEvent(android::media::metrics::TrackChangeEvent arg0) const;
	};
} // namespace android::media::metrics

