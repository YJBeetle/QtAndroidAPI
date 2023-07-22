#pragma once

#include "./TotalCaptureResult.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject TotalCaptureResult::getPartialResults() const
	{
		return callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	inline JObject TotalCaptureResult::getPhysicalCameraResults() const
	{
		return callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
	inline JObject TotalCaptureResult::getPhysicalCameraTotalResults() const
	{
		return callObjectMethod(
			"getPhysicalCameraTotalResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraMetadata.hpp"
#include "./CaptureResult.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
