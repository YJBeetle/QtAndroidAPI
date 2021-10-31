#include "./MediaDrm.hpp"
#include "./metrics/LogSessionId.hpp"
#include "./MediaDrm_PlaybackComponent.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_PlaybackComponent::MediaDrm_PlaybackComponent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::metrics::LogSessionId MediaDrm_PlaybackComponent::getLogSessionId()
	{
		return callObjectMethod(
			"getLogSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	void MediaDrm_PlaybackComponent::setLogSessionId(android::media::metrics::LogSessionId arg0)
	{
		callMethod<void>(
			"setLogSessionId",
			"(Landroid/media/metrics/LogSessionId;)V",
			arg0.object()
		);
	}
} // namespace android::media

