#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::hardware
{
	class HardwareBuffer;
}

namespace android::accessibilityservice
{
	class AccessibilityService_ScreenshotResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService_ScreenshotResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_ScreenshotResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::ColorSpace getColorSpace();
		android::hardware::HardwareBuffer getHardwareBuffer();
		jlong getTimestamp();
	};
} // namespace android::accessibilityservice

