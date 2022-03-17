#pragma once

#include "./PlaybackStateEvent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./PlaybackStateEvent_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline PlaybackStateEvent_Builder::PlaybackStateEvent_Builder()
		: JObject(
			"android.media.metrics.PlaybackStateEvent$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::metrics::PlaybackStateEvent PlaybackStateEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackStateEvent;"
		);
	}
	inline android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setState(jint arg0) const
	{
		return callObjectMethod(
			"setState",
			"(I)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

