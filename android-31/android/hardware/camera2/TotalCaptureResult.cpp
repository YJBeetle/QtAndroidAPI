#include "./TotalCaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	TotalCaptureResult::TotalCaptureResult(QJniObject obj) : android::hardware::camera2::CaptureResult(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass TotalCaptureResult::getPartialResults()
	{
		return callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass TotalCaptureResult::getPhysicalCameraResults()
	{
		return callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass TotalCaptureResult::getPhysicalCameraTotalResults()
	{
		return callObjectMethod(
			"getPhysicalCameraTotalResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

