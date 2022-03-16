#pragma once

#include "./MediaDrm.def.hpp"
#include "./metrics/LogSessionId.def.hpp"
#include "./MediaDrm_PlaybackComponent.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::metrics::LogSessionId MediaDrm_PlaybackComponent::getLogSessionId() const
	{
		return callObjectMethod(
			"getLogSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline void MediaDrm_PlaybackComponent::setLogSessionId(android::media::metrics::LogSessionId arg0) const
	{
		callMethod<void>(
			"setLogSessionId",
			"(Landroid/media/metrics/LogSessionId;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

