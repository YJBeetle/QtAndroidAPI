#pragma once

#include "./Light.def.hpp"
#include "./LightState.def.hpp"
#include "./LightsManager_LightsSession.def.hpp"
#include "./LightsManager.def.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::hardware::lights::LightState LightsManager::getLightState(android::hardware::lights::Light arg0) const
	{
		return callObjectMethod(
			"getLightState",
			"(Landroid/hardware/lights/Light;)Landroid/hardware/lights/LightState;",
			arg0.object()
		);
	}
	inline JObject LightsManager::getLights() const
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	inline android::hardware::lights::LightsManager_LightsSession LightsManager::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/hardware/lights/LightsManager$LightsSession;"
		);
	}
} // namespace android::hardware::lights

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::lights;
#endif
