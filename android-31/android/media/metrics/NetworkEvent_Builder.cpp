#include "./NetworkEvent.hpp"
#include "../../os/Bundle.hpp"
#include "./NetworkEvent_Builder.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	NetworkEvent_Builder::NetworkEvent_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkEvent_Builder::NetworkEvent_Builder()
		: __JniBaseClass(
			"android.media.metrics.NetworkEvent$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::metrics::NetworkEvent NetworkEvent_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/NetworkEvent;"
		);
	}
	android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setMetricsBundle(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setNetworkType(jint arg0)
	{
		return callObjectMethod(
			"setNetworkType",
			"(I)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setTimeSinceCreatedMillis(jlong arg0)
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

