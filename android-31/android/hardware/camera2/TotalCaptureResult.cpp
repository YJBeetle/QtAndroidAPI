#include "./TotalCaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	TotalCaptureResult::TotalCaptureResult(QJniObject obj) : android::hardware::camera2::CaptureResult(obj) {}
	
	// Constructors
	
	// Methods
	JObject TotalCaptureResult::getPartialResults()
	{
		return callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	JObject TotalCaptureResult::getPhysicalCameraResults()
	{
		return callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
	JObject TotalCaptureResult::getPhysicalCameraTotalResults()
	{
		return callObjectMethod(
			"getPhysicalCameraTotalResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

