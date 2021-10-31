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
	MediaMetricsManager::MediaMetricsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::metrics::PlaybackSession MediaMetricsManager::createPlaybackSession()
	{
		return callObjectMethod(
			"createPlaybackSession",
			"()Landroid/media/metrics/PlaybackSession;"
		);
	}
	android::media::metrics::RecordingSession MediaMetricsManager::createRecordingSession()
	{
		return callObjectMethod(
			"createRecordingSession",
			"()Landroid/media/metrics/RecordingSession;"
		);
	}
} // namespace android::media::metrics

