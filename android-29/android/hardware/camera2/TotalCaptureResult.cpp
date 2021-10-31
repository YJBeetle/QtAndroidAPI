#include "./TotalCaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	TotalCaptureResult::TotalCaptureResult(QAndroidJniObject obj) : android::hardware::camera2::CaptureResult(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TotalCaptureResult::getPartialResults()
	{
		return callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TotalCaptureResult::getPhysicalCameraResults()
	{
		return callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

