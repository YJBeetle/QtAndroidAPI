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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TotalCaptureResult(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CaptureResult(className, sig, std::forward<Ts>(agv)...) {}
		TotalCaptureResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getPartialResults();
		QAndroidJniObject getPhysicalCameraResults();
	};
} // namespace android::hardware::camera2

