#include "./PlaybackErrorEvent.hpp"
#include "../../os/Bundle.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./PlaybackErrorEvent_Builder.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	PlaybackErrorEvent_Builder::PlaybackErrorEvent_Builder()
		: JObject(
			"android.media.metrics.PlaybackErrorEvent$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::metrics::PlaybackErrorEvent PlaybackErrorEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackErrorEvent;"
		);
	}
	android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setErrorCode(jint arg0) const
	{
		return callObjectMethod(
			"setErrorCode",
			"(I)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setException(java::lang::Exception arg0) const
	{
		return callObjectMethod(
			"setException",
			"(Ljava/lang/Exception;)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setSubErrorCode(jint arg0) const
	{
		return callObjectMethod(
			"setSubErrorCode",
			"(I)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackErrorEvent_Builder PlaybackErrorEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/PlaybackErrorEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

