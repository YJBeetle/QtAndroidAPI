#pragma once

#include "./CaptureResult.hpp"

namespace android::hardware::camera2
{
	class TotalCaptureResult : public android::hardware::camera2::CaptureResult
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TotalCaptureResult(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CaptureResult(className, sig, std::forward<Ts>(agv)...) {}
		TotalCaptureResult(QAndroidJniObject obj) : android::hardware::camera2::CaptureResult(obj) {}
		
		// Constructors
		
		// Methods
		JObject getPartialResults() const;
		JObject getPhysicalCameraResults() const;
	};
} // namespace android::hardware::camera2

