#include "./TotalCaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	TotalCaptureResult::TotalCaptureResult(QAndroidJniObject obj) : android::hardware::camera2::CaptureResult(obj) {}
	
	// Constructors
	
	// Methods
	JObject TotalCaptureResult::getPartialResults() const
	{
		return callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	JObject TotalCaptureResult::getPhysicalCameraResults() const
	{
		return callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

