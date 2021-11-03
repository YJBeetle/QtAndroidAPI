#include "../../../JByteArray.hpp"
#include "./PlaybackMetrics.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./PlaybackMetrics_Builder.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	PlaybackMetrics_Builder::PlaybackMetrics_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PlaybackMetrics_Builder::PlaybackMetrics_Builder()
		: JObject(
			"android.media.metrics.PlaybackMetrics$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::addExperimentId(jlong arg0)
	{
		return callObjectMethod(
			"addExperimentId",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics PlaybackMetrics_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackMetrics;"
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setAudioUnderrunCount(jint arg0)
	{
		return callObjectMethod(
			"setAudioUnderrunCount",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setContentType(jint arg0)
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setDrmSessionId(JByteArray arg0)
	{
		return callObjectMethod(
			"setDrmSessionId",
			"([B)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setDrmType(jint arg0)
	{
		return callObjectMethod(
			"setDrmType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setLocalBytesRead(jlong arg0)
	{
		return callObjectMethod(
			"setLocalBytesRead",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setMediaDurationMillis(jlong arg0)
	{
		return callObjectMethod(
			"setMediaDurationMillis",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setMetricsBundle(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setNetworkBytesRead(jlong arg0)
	{
		return callObjectMethod(
			"setNetworkBytesRead",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setNetworkTransferDurationMillis(jlong arg0)
	{
		return callObjectMethod(
			"setNetworkTransferDurationMillis",
			"(J)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlaybackType(jint arg0)
	{
		return callObjectMethod(
			"setPlaybackType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlayerName(JString arg0)
	{
		return callObjectMethod(
			"setPlayerName",
			"(Ljava/lang/String;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setPlayerVersion(JString arg0)
	{
		return callObjectMethod(
			"setPlayerVersion",
			"(Ljava/lang/String;)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setStreamSource(jint arg0)
	{
		return callObjectMethod(
			"setStreamSource",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setStreamType(jint arg0)
	{
		return callObjectMethod(
			"setStreamType",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setVideoFramesDropped(jint arg0)
	{
		return callObjectMethod(
			"setVideoFramesDropped",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackMetrics_Builder PlaybackMetrics_Builder::setVideoFramesPlayed(jint arg0)
	{
		return callObjectMethod(
			"setVideoFramesPlayed",
			"(I)Landroid/media/metrics/PlaybackMetrics$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

