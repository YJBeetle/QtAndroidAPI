#pragma once

#include "./BundleSession.def.hpp"
#include "./EditingSession.def.hpp"
#include "./PlaybackSession.def.hpp"
#include "./RecordingSession.def.hpp"
#include "./TranscodingSession.def.hpp"
#include "../../../JString.hpp"
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
	inline android::media::metrics::BundleSession MediaMetricsManager::createBundleSession() const
	{
		return callObjectMethod(
			"createBundleSession",
			"()Landroid/media/metrics/BundleSession;"
		);
	}
	inline android::media::metrics::EditingSession MediaMetricsManager::createEditingSession() const
	{
		return callObjectMethod(
			"createEditingSession",
			"()Landroid/media/metrics/EditingSession;"
		);
	}
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
	inline android::media::metrics::TranscodingSession MediaMetricsManager::createTranscodingSession() const
	{
		return callObjectMethod(
			"createTranscodingSession",
			"()Landroid/media/metrics/TranscodingSession;"
		);
	}
	inline void MediaMetricsManager::releaseSessionId(JString arg0) const
	{
		callMethod<void>(
			"releaseSessionId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
