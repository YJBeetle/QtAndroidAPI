#include "./LightsRequest.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QJniObject forward
	LightsRequest::LightsRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass LightsRequest::getLightStates()
	{
		return callObjectMethod(
			"getLightStates",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass LightsRequest::getLights()
	{
		return callObjectMethod(
			"getLights",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass LightsRequest::getLightsAndStates()
	{
		return callObjectMethod(
			"getLightsAndStates",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::lights

