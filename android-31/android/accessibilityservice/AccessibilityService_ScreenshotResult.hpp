#pragma once

#include "../graphics/ColorSpace.def.hpp"
#include "../hardware/HardwareBuffer.def.hpp"
#include "./AccessibilityService_ScreenshotResult.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace AccessibilityService_ScreenshotResult::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline android::hardware::HardwareBuffer AccessibilityService_ScreenshotResult::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	inline jlong AccessibilityService_ScreenshotResult::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::accessibilityservice

// Base class headers

