#include "./LightsRequest.hpp"
#include "./LightsManager_LightsSession.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QAndroidJniObject forward
	LightsManager_LightsSession::LightsManager_LightsSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void LightsManager_LightsSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void LightsManager_LightsSession::requestLights(android::hardware::lights::LightsRequest arg0)
	{
		callMethod<void>(
			"requestLights",
			"(Landroid/hardware/lights/LightsRequest;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::lights

