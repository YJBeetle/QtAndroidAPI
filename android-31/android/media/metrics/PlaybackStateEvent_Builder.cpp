#include "./PlaybackStateEvent.hpp"
#include "../../os/Bundle.hpp"
#include "./PlaybackStateEvent_Builder.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QAndroidJniObject forward
	PlaybackStateEvent_Builder::PlaybackStateEvent_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PlaybackStateEvent_Builder::PlaybackStateEvent_Builder()
		: JObject(
			"android.media.metrics.PlaybackStateEvent$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::metrics::PlaybackStateEvent PlaybackStateEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/PlaybackStateEvent;"
		);
	}
	android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setState(jint arg0) const
	{
		return callObjectMethod(
			"setState",
			"(I)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::PlaybackStateEvent_Builder PlaybackStateEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/PlaybackStateEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

