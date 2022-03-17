#pragma once

#include "./LightState.def.hpp"
#include "./LightState_Builder.def.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	inline LightState_Builder::LightState_Builder()
		: JObject(
			"android.hardware.lights.LightState$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::lights::LightState LightState_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/lights/LightState;"
		);
	}
	inline android::hardware::lights::LightState_Builder LightState_Builder::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
	inline android::hardware::lights::LightState_Builder LightState_Builder::setPlayerId(jint arg0) const
	{
		return callObjectMethod(
			"setPlayerId",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
} // namespace android::hardware::lights

// Base class headers

