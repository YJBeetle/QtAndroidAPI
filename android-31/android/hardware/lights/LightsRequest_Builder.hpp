#pragma once

#include "./Light.def.hpp"
#include "./LightState.def.hpp"
#include "./LightsRequest.def.hpp"
#include "./LightsRequest_Builder.def.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	inline LightsRequest_Builder::LightsRequest_Builder()
		: JObject(
			"android.hardware.lights.LightsRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::lights::LightsRequest_Builder LightsRequest_Builder::addLight(android::hardware::lights::Light arg0, android::hardware::lights::LightState arg1) const
	{
		return callObjectMethod(
			"addLight",
			"(Landroid/hardware/lights/Light;Landroid/hardware/lights/LightState;)Landroid/hardware/lights/LightsRequest$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::hardware::lights::LightsRequest LightsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/lights/LightsRequest;"
		);
	}
	inline android::hardware::lights::LightsRequest_Builder LightsRequest_Builder::clearLight(android::hardware::lights::Light arg0) const
	{
		return callObjectMethod(
			"clearLight",
			"(Landroid/hardware/lights/Light;)Landroid/hardware/lights/LightsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::hardware::lights

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::lights;
#endif
