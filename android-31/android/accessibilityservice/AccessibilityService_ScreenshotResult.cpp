#include "../graphics/ColorSpace.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./AccessibilityService_ScreenshotResult.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	AccessibilityService_ScreenshotResult::AccessibilityService_ScreenshotResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace AccessibilityService_ScreenshotResult::getColorSpace()
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	android::hardware::HardwareBuffer AccessibilityService_ScreenshotResult::getHardwareBuffer()
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jlong AccessibilityService_ScreenshotResult::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::accessibilityservice

