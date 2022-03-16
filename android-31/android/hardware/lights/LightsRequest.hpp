#pragma once

#include "./LightsRequest.def.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject LightsRequest::getLightStates() const
	{
		return callObjectMethod(
			"getLightStates",
			"()Ljava/util/List;"
		);
	}
	inline JObject LightsRequest::getLights() const
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	inline JObject LightsRequest::getLightsAndStates() const
	{
		return callObjectMethod(
			"getLightsAndStates",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::lights

// Base class headers

