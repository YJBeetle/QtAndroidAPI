#include "./LightsRequest.hpp"
#include "./LightsManager_LightsSession.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QJniObject forward
	LightsManager_LightsSession::LightsManager_LightsSession(QJniObject obj) : __JniBaseClass(obj) {}
	
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

