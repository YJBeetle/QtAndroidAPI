#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CameraMetadata.hpp"
#include "./CaptureResult.hpp"


namespace android::hardware::camera2
{
	class TotalCaptureResult : public android::hardware::camera2::CaptureResult
	{
	public:
		// Fields
		
		TotalCaptureResult(QAndroidJniObject obj);
		// Constructors
		TotalCaptureResult() = default;
		
		// Methods
		QAndroidJniObject getPartialResults();
		QAndroidJniObject getPhysicalCameraResults();
	};
} // namespace android::hardware::camera2

