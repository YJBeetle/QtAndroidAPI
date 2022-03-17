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
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraMetadata.hpp"
#include "./CaptureResult.hpp"

