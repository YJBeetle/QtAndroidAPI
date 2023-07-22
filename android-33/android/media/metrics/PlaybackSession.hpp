#pragma once

#include "./LogSessionId.def.hpp"
#include "./NetworkEvent.def.hpp"
#include "./PlaybackErrorEvent.def.hpp"
#include "./PlaybackMetrics.def.hpp"
#include "./PlaybackStateEvent.def.hpp"
#include "./TrackChangeEvent.def.hpp"
#include "../../../JObject.hpp"
#include "./PlaybackSession.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PlaybackSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean PlaybackSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::metrics::LogSessionId PlaybackSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline jint PlaybackSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PlaybackSession::reportNetworkEvent(android::media::metrics::NetworkEvent arg0) const
	{
		callMethod<void>(
			"reportNetworkEvent",
			"(Landroid/media/metrics/NetworkEvent;)V",
			arg0.object()
		);
	}
	inline void PlaybackSession::reportPlaybackErrorEvent(android::media::metrics::PlaybackErrorEvent arg0) const
	{
		callMethod<void>(
			"reportPlaybackErrorEvent",
			"(Landroid/media/metrics/PlaybackErrorEvent;)V",
			arg0.object()
		);
	}
	inline void PlaybackSession::reportPlaybackMetrics(android::media::metrics::PlaybackMetrics arg0) const
	{
		callMethod<void>(
			"reportPlaybackMetrics",
			"(Landroid/media/metrics/PlaybackMetrics;)V",
			arg0.object()
		);
	}
	inline void PlaybackSession::reportPlaybackStateEvent(android::media::metrics::PlaybackStateEvent arg0) const
	{
		callMethod<void>(
			"reportPlaybackStateEvent",
			"(Landroid/media/metrics/PlaybackStateEvent;)V",
			arg0.object()
		);
	}
	inline void PlaybackSession::reportTrackChangeEvent(android::media::metrics::TrackChangeEvent arg0) const
	{
		callMethod<void>(
			"reportTrackChangeEvent",
			"(Landroid/media/metrics/TrackChangeEvent;)V",
			arg0.object()
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
