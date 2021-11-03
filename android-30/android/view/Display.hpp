#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JArray;
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace android::view
{
	class Display_HdrCapabilities;
}
namespace android::view
{
	class Display_Mode;
}
namespace android::view
{
	class DisplayCutout;
}
class JString;

namespace android::view
{
	class Display : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_DISPLAY();
		static jint FLAG_PRESENTATION();
		static jint FLAG_PRIVATE();
		static jint FLAG_ROUND();
		static jint FLAG_SECURE();
		static jint FLAG_SUPPORTS_PROTECTED_BUFFERS();
		static jint INVALID_DISPLAY();
		static jint STATE_DOZE();
		static jint STATE_DOZE_SUSPEND();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_ON_SUSPEND();
		static jint STATE_UNKNOWN();
		static jint STATE_VR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Display(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getAppVsyncOffsetNanos() const;
		void getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1) const;
		android::view::DisplayCutout getCutout() const;
		jint getDisplayId() const;
		jint getFlags() const;
		android::view::Display_HdrCapabilities getHdrCapabilities() const;
		jint getHeight() const;
		void getMetrics(android::util::DisplayMetrics arg0) const;
		android::view::Display_Mode getMode() const;
		JString getName() const;
		jint getOrientation() const;
		jint getPixelFormat() const;
		android::graphics::ColorSpace getPreferredWideGamutColorSpace() const;
		jlong getPresentationDeadlineNanos() const;
		void getRealMetrics(android::util::DisplayMetrics arg0) const;
		void getRealSize(android::graphics::Point arg0) const;
		void getRectSize(android::graphics::Rect arg0) const;
		jfloat getRefreshRate() const;
		jint getRotation() const;
		void getSize(android::graphics::Point arg0) const;
		jint getState() const;
		JArray getSupportedModes() const;
		JFloatArray getSupportedRefreshRates() const;
		jint getWidth() const;
		jboolean isHdr() const;
		jboolean isMinimalPostProcessingSupported() const;
		jboolean isValid() const;
		jboolean isWideColorGamut() const;
		JString toString() const;
	};
} // namespace android::view

