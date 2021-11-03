#include "./LightsRequest.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QJniObject forward
	LightsRequest::LightsRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject LightsRequest::getLightStates()
	{
		return callObjectMethod(
			"getLightStates",
			"()Ljava/util/List;"
		);
	}
	JObject LightsRequest::getLights()
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	JObject LightsRequest::getLightsAndStates()
	{
		return callObjectMethod(
			"getLightsAndStates",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::lights

