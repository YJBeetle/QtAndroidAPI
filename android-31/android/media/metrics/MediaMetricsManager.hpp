#pragma once

#include "./PlaybackSession.def.hpp"
#include "./RecordingSession.def.hpp"
#include "./MediaMetricsManager.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline jlong MediaMetricsManager::INVALID_TIMESTAMP()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaMetricsManager",
			"INVALID_TIMESTAMP"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::metrics::PlaybackSession MediaMetricsManager::createPlaybackSession() const
	{
		return callObjectMethod(
			"createPlaybackSession",
			"()Landroid/media/metrics/PlaybackSession;"
		);
	}
	inline android::media::metrics::RecordingSession MediaMetricsManager::createRecordingSession() const
	{
		return callObjectMethod(
			"createRecordingSession",
			"()Landroid/media/metrics/RecordingSession;"
		);
	}
} // namespace android::media::metrics

// Base class headers

