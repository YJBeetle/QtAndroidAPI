#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::media::metrics
{
	class PlaybackMetrics;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::metrics
{
	class PlaybackMetrics_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackMetrics_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackMetrics_Builder(QJniObject obj);
		
		// Constructors
		PlaybackMetrics_Builder();
		
		// Methods
		android::media::metrics::PlaybackMetrics_Builder addExperimentId(jlong arg0) const;
		android::media::metrics::PlaybackMetrics build() const;
		android::media::metrics::PlaybackMetrics_Builder setAudioUnderrunCount(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setContentType(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setDrmSessionId(JByteArray arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setDrmType(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setLocalBytesRead(jlong arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setMediaDurationMillis(jlong arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setMetricsBundle(android::os::Bundle arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setNetworkBytesRead(jlong arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setNetworkTransferDurationMillis(jlong arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setPlaybackType(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setPlayerName(JString arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setPlayerVersion(JString arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setStreamSource(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setStreamType(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setVideoFramesDropped(jint arg0) const;
		android::media::metrics::PlaybackMetrics_Builder setVideoFramesPlayed(jint arg0) const;
	};
} // namespace android::media::metrics

