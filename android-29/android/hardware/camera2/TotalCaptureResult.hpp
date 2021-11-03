#pragma once

#include "./CaptureResult.hpp"

namespace android::hardware::camera2
{
	class TotalCaptureResult : public android::hardware::camera2::CaptureResult
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TotalCaptureResult(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CaptureResult(className, sig, std::forward<Ts>(agv)...) {}
		TotalCaptureResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getPartialResults();
		JObject getPhysicalCameraResults();
	};
} // namespace android::hardware::camera2

