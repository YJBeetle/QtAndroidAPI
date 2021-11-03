#include "./LightsRequest.hpp"
#include "./LightsManager_LightsSession.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QJniObject forward
	LightsManager_LightsSession::LightsManager_LightsSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void LightsManager_LightsSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void LightsManager_LightsSession::requestLights(android::hardware::lights::LightsRequest arg0) const
	{
		callMethod<void>(
			"requestLights",
			"(Landroid/hardware/lights/LightsRequest;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::lights

