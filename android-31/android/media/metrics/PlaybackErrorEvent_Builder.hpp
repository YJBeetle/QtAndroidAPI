#pragma once

#include "./PlaybackErrorEvent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../java/lang/Exception.def.hpp"
#include "./PlaybackErrorEvent_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline PlaybackErrorEvent_Builder::PlaybackErrorEvent_Builder()
		: JObject(
			"android.media.metrics.PlaybackErrorEvent$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::metrics::PlaybackErrorEvent PlaybackErrorEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackErrorEvent;"
		);
	}
	inline android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setErrorCode(jint arg0) const
	{
		return callObjectMethod(
			"setErrorCode",
			"(I)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setException(java::lang::Exception arg0) const
	{
		return callObjectMethod(
			"setException",
			"(Ljava/lang/Exception;)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setSubErrorCode(jint arg0) const
	{
		return callObjectMethod(
			"setSubErrorCode",
			"(I)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

