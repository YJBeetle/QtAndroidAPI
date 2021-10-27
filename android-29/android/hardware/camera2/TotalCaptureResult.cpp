#include "./TotalCaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	TotalCaptureResult::TotalCaptureResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TotalCaptureResult::getPartialResults()
	{
		return __thiz.callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TotalCaptureResult::getPhysicalCameraResults()
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

