#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::metrics
{
	class PlaybackMetrics;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class PlaybackMetrics_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackMetrics_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackMetrics_Builder(QAndroidJniObject obj);
		
		// Constructors
		PlaybackMetrics_Builder();
		
		// Methods
		android::media::metrics::PlaybackMetrics_Builder addExperimentId(jlong arg0);
		android::media::metrics::PlaybackMetrics build();
		android::media::metrics::PlaybackMetrics_Builder setAudioUnderrunCount(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setContentType(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setDrmSessionId(jbyteArray arg0);
		android::media::metrics::PlaybackMetrics_Builder setDrmType(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setLocalBytesRead(jlong arg0);
		android::media::metrics::PlaybackMetrics_Builder setMediaDurationMillis(jlong arg0);
		android::media::metrics::PlaybackMetrics_Builder setMetricsBundle(android::os::Bundle arg0);
		android::media::metrics::PlaybackMetrics_Builder setNetworkBytesRead(jlong arg0);
		android::media::metrics::PlaybackMetrics_Builder setNetworkTransferDurationMillis(jlong arg0);
		android::media::metrics::PlaybackMetrics_Builder setPlaybackType(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setPlayerName(jstring arg0);
		android::media::metrics::PlaybackMetrics_Builder setPlayerVersion(jstring arg0);
		android::media::metrics::PlaybackMetrics_Builder setStreamSource(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setStreamType(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setVideoFramesDropped(jint arg0);
		android::media::metrics::PlaybackMetrics_Builder setVideoFramesPlayed(jint arg0);
	};
} // namespace android::media::metrics

