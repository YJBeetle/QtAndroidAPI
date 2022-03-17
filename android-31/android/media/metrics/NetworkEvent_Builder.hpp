#pragma once

#include "./NetworkEvent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./NetworkEvent_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline NetworkEvent_Builder::NetworkEvent_Builder()
		: JObject(
			"android.media.metrics.NetworkEvent$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::metrics::NetworkEvent NetworkEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/NetworkEvent;"
		);
	}
	inline android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setNetworkType(jint arg0) const
	{
		return callObjectMethod(
			"setNetworkType",
			"(I)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::NetworkEvent_Builder NetworkEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/NetworkEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

