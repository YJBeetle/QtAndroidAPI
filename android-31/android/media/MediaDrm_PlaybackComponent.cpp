#include "./MediaDrm.hpp"
#include "./metrics/LogSessionId.hpp"
#include "./MediaDrm_PlaybackComponent.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	android::media::metrics::LogSessionId MediaDrm_PlaybackComponent::getLogSessionId() const
	{
		return callObjectMethod(
			"getLogSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	void MediaDrm_PlaybackComponent::setLogSessionId(android::media::metrics::LogSessionId arg0) const
	{
		callMethod<void>(
			"setLogSessionId",
			"(Landroid/media/metrics/LogSessionId;)V",
			arg0.object()
		);
	}
} // namespace android::media

