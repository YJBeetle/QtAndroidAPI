#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::view
{
	class Display : public __JniBaseClass
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
		
		Display(QAndroidJniObject obj);
		// Constructors
		Display() = default;
		
		// Methods
		jlong getAppVsyncOffsetNanos();
		void getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1);
		QAndroidJniObject getCutout();
		jint getDisplayId();
		jint getFlags();
		QAndroidJniObject getHdrCapabilities();
		jint getHeight();
		void getMetrics(android::util::DisplayMetrics arg0);
		QAndroidJniObject getMode();
		jstring getName();
		jint getOrientation();
		jint getPixelFormat();
		QAndroidJniObject getPreferredWideGamutColorSpace();
		jlong getPresentationDeadlineNanos();
		void getRealMetrics(android::util::DisplayMetrics arg0);
		void getRealSize(android::graphics::Point arg0);
		void getRectSize(android::graphics::Rect arg0);
		jfloat getRefreshRate();
		jint getRotation();
		void getSize(android::graphics::Point arg0);
		jint getState();
		jarray getSupportedModes();
		jfloatArray getSupportedRefreshRates();
		jint getWidth();
		jboolean isHdr();
		jboolean isValid();
		jboolean isWideColorGamut();
		jstring toString();
	};
} // namespace android::view

