#include "./Light.hpp"
#include "./LightState.hpp"
#include "./LightsManager_LightsSession.hpp"
#include "./LightsManager.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QAndroidJniObject forward
	LightsManager::LightsManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::hardware::lights::LightState LightsManager::getLightState(android::hardware::lights::Light arg0)
	{
		return callObjectMethod(
			"getLightState",
			"(Landroid/hardware/lights/Light;)Landroid/hardware/lights/LightState;",
			arg0.object()
		);
	}
	JObject LightsManager::getLights()
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	android::hardware::lights::LightsManager_LightsSession LightsManager::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/hardware/lights/LightsManager$LightsSession;"
		);
	}
} // namespace android::hardware::lights

