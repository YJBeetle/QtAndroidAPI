#pragma once

#include "../../../JByteArray.hpp"
#include "./PlaybackMetrics.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./PlaybackMetrics_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline PlaybackMetrics_Builder::PlaybackMetrics_Builder()
		: JObject(
			"android.media.metrics.PlaybackMetrics$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::addExperimentId(jlong arg0) const
	{
		return callObjectMethod(
			"addExperimentId",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics PlaybackMetrics_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackMetrics;"
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setAudioUnderrunCount(jint arg0) const
	{
		return callObjectMethod(
			"setAudioUnderrunCount",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setContentType(jint arg0) const
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setDrmSessionId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setDrmSessionId",
			"([B)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setDrmType(jint arg0) const
	{
		return callObjectMethod(
			"setDrmType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setLocalBytesRead(jlong arg0) const
	{
		return callObjectMethod(
			"setLocalBytesRead",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setMediaDurationMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setMediaDurationMillis",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setNetworkBytesRead(jlong arg0) const
	{
		return callObjectMethod(
			"setNetworkBytesRead",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setNetworkTransferDurationMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setNetworkTransferDurationMillis",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlaybackType(jint arg0) const
	{
		return callObjectMethod(
			"setPlaybackType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlayerName(JString arg0) const
	{
		return callObjectMethod(
			"setPlayerName",
			"(Ljava/lang/String;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlayerVersion(JString arg0) const
	{
		return callObjectMethod(
			"setPlayerVersion",
			"(Ljava/lang/String;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setStreamSource(jint arg0) const
	{
		return callObjectMethod(
			"setStreamSource",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setStreamType(jint arg0) const
	{
		return callObjectMethod(
			"setStreamType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setVideoFramesDropped(jint arg0) const
	{
		return callObjectMethod(
			"setVideoFramesDropped",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setVideoFramesPlayed(jint arg0) const
	{
		return callObjectMethod(
			"setVideoFramesPlayed",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

