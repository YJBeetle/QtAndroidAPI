#include "../graphics/ColorSpace.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./AccessibilityService_ScreenshotResult.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace AccessibilityService_ScreenshotResult::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	android::hardware::HardwareBuffer AccessibilityService_ScreenshotResult::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jlong AccessibilityService_ScreenshotResult::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::accessibilityservice

