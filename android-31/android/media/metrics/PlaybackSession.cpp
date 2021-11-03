#include "./LogSessionId.hpp"
#include "./NetworkEvent.hpp"
#include "./PlaybackErrorEvent.hpp"
#include "./PlaybackMetrics.hpp"
#include "./PlaybackStateEvent.hpp"
#include "./TrackChangeEvent.hpp"
#include "../../../JObject.hpp"
#include "./PlaybackSession.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	PlaybackSession::PlaybackSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PlaybackSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean PlaybackSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::metrics::LogSessionId PlaybackSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	jint PlaybackSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PlaybackSession::reportNetworkEvent(android::media::metrics::NetworkEvent arg0) const
	{
		callMethod<void>(
			"reportNetworkEvent",
			"(Landroid/media/metrics/NetworkEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackErrorEvent(android::media::metrics::PlaybackErrorEvent arg0) const
	{
		callMethod<void>(
			"reportPlaybackErrorEvent",
			"(Landroid/media/metrics/PlaybackErrorEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackMetrics(android::media::metrics::PlaybackMetrics arg0) const
	{
		callMethod<void>(
			"reportPlaybackMetrics",
			"(Landroid/media/metrics/PlaybackMetrics;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportPlaybackStateEvent(android::media::metrics::PlaybackStateEvent arg0) const
	{
		callMethod<void>(
			"reportPlaybackStateEvent",
			"(Landroid/media/metrics/PlaybackStateEvent;)V",
			arg0.object()
		);
	}
	void PlaybackSession::reportTrackChangeEvent(android::media::metrics::TrackChangeEvent arg0) const
	{
		callMethod<void>(
			"reportTrackChangeEvent",
			"(Landroid/media/metrics/TrackChangeEvent;)V",
			arg0.object()
		);
	}
} // namespace android::media::metrics

