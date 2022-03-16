#pragma once

#include "./LightsRequest.def.hpp"
#include "./LightsManager_LightsSession.def.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void LightsManager_LightsSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void LightsManager_LightsSession::requestLights(android::hardware::lights::LightsRequest arg0) const
	{
		callMethod<void>(
			"requestLights",
			"(Landroid/hardware/lights/LightsRequest;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::lights

// Base class headers

