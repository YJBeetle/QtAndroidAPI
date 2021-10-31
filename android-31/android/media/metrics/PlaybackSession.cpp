#include "./LogSessionId.hpp"
#include "./NetworkEvent.hpp"
#include "./PlaybackErrorEvent.hpp"
#include "./PlaybackMetrics.hpp"
#include "./PlaybackStateEvent.hpp"
#include "./TrackChangeEvent.hpp"
#include "./PlaybackSession.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	PlaybackSession::PlaybackSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PlaybackSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean PlaybackSession::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::media::metrics::LogSessionId PlaybackSession::getSessionId()
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	jint PlaybackSession::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PlaybackSession::reportNetworkEvent(android::media::metrics::NetworkEvent arg0)
	{
		callMethod<void>(
			"reportNetworkEvent",
			"(Landroid/media/metrics/NetworkEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackErrorEvent(android::media::metrics::PlaybackErrorEvent arg0)
	{
		callMethod<void>(
			"reportPlaybackErrorEvent",
			"(Landroid/media/metrics/PlaybackErrorEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackMetrics(android::media::metrics::PlaybackMetrics arg0)
	{
		callMethod<void>(
			"reportPlaybackMetrics",
			"(Landroid/media/metrics/PlaybackMetrics;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackStateEvent(android::media::metrics::PlaybackStateEvent arg0)
	{
		callMethod<void>(
			"reportPlaybackStateEvent",
			"(Landroid/media/metrics/PlaybackStateEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportTrackChangeEvent(android::media::metrics::TrackChangeEvent arg0)
	{
		callMethod<void>(
			"reportTrackChangeEvent",
			"(Landroid/media/metrics/TrackChangeEvent;)V",
			arg0.object()
		);
	}
} // namespace android::media::metrics

