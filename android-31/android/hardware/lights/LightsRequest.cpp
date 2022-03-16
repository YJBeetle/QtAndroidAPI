#include "./LightsRequest.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject LightsRequest::getLightStates() const
	{
		return callObjectMethod(
			"getLightStates",
			"()Ljava/util/List;"
		);
	}
	JObject LightsRequest::getLights() const
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	JObject LightsRequest::getLightsAndStates() const
	{
		return callObjectMethod(
			"getLightsAndStates",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::lights

