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
		
		// QJniObject forward
		template<typename ...Ts> explicit Display(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getAppVsyncOffsetNanos();
		void getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1);
		android::view::DisplayCutout getCutout();
		jint getDisplayId();
		jint getFlags();
		android::view::Display_HdrCapabilities getHdrCapabilities();
		jint getHeight();
		void getMetrics(android::util::DisplayMetrics arg0);
		android::view::Display_Mode getMode();
		JString getName();
		jint getOrientation();
		jint getPixelFormat();
		android::graphics::ColorSpace getPreferredWideGamutColorSpace();
		jlong getPresentationDeadlineNanos();
		void getRealMetrics(android::util::DisplayMetrics arg0);
		void getRealSize(android::graphics::Point arg0);
		void getRectSize(android::graphics::Rect arg0);
		jfloat getRefreshRate();
		jint getRotation();
		void getSize(android::graphics::Point arg0);
		jint getState();
		JArray getSupportedModes();
		JFloatArray getSupportedRefreshRates();
		jint getWidth();
		jboolean isHdr();
		jboolean isValid();
		jboolean isWideColorGamut();
		JString toString();
	};
} // namespace android::view

