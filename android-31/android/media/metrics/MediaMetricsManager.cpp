#include "./PlaybackSession.hpp"
#include "./RecordingSession.hpp"
#include "./MediaMetricsManager.hpp"

namespace android::media::metrics
{
	// Fields
	jlong MediaMetricsManager::INVALID_TIMESTAMP()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaMetricsManager",
			"INVALID_TIMESTAMP"
		);
	}
	
	// QAndroidJniObject forward
	MediaMetricsManager::MediaMetricsManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::metrics::PlaybackSession MediaMetricsManager::createPlaybackSession() const
	{
		return callObjectMethod(
			"createPlaybackSession",
			"()Landroid/media/metrics/PlaybackSession;"
		);
	}
	android::media::metrics::RecordingSession MediaMetricsManager::createRecordingSession() const
	{
		return callObjectMethod(
			"createRecordingSession",
			"()Landroid/media/metrics/RecordingSession;"
		);
	}
} // namespace android::media::metrics

