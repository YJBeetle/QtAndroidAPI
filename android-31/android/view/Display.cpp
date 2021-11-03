#include "../graphics/ColorSpace.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "../hardware/display/DeviceProductInfo.hpp"
#include "../util/DisplayMetrics.hpp"
#include "./Display_HdrCapabilities.hpp"
#include "./Display_Mode.hpp"
#include "./DisplayCutout.hpp"
#include "./RoundedCorner.hpp"
#include "./Display.hpp"

namespace android::view
{
	// Fields
	jint Display::DEFAULT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"DEFAULT_DISPLAY"
		);
	}
	jint Display::FLAG_PRESENTATION()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRESENTATION"
		);
	}
	jint Display::FLAG_PRIVATE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRIVATE"
		);
	}
	jint Display::FLAG_ROUND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_ROUND"
		);
	}
	jint Display::FLAG_SECURE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_SECURE"
		);
	}
	jint Display::FLAG_SUPPORTS_PROTECTED_BUFFERS()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_SUPPORTS_PROTECTED_BUFFERS"
		);
	}
	jint Display::INVALID_DISPLAY()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"INVALID_DISPLAY"
		);
	}
	jint Display::STATE_DOZE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE"
		);
	}
	jint Display::STATE_DOZE_SUSPEND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE_SUSPEND"
		);
	}
	jint Display::STATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_OFF"
		);
	}
	jint Display::STATE_ON()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_ON"
		);
	}
	jint Display::STATE_ON_SUSPEND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_ON_SUSPEND"
		);
	}
	jint Display::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_UNKNOWN"
		);
	}
	jint Display::STATE_VR()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_VR"
		);
	}
	
	// QAndroidJniObject forward
	Display::Display(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong Display::getAppVsyncOffsetNanos()
	{
		return callMethod<jlong>(
			"getAppVsyncOffsetNanos",
			"()J"
		);
	}
	void Display::getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1)
	{
		callMethod<void>(
			"getCurrentSizeRange",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::DisplayCutout Display::getCutout()
	{
		return callObjectMethod(
			"getCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	android::hardware::display::DeviceProductInfo Display::getDeviceProductInfo()
	{
		return callObjectMethod(
			"getDeviceProductInfo",
			"()Landroid/hardware/display/DeviceProductInfo;"
		);
	}
	jint Display::getDisplayId()
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint Display::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::view::Display_HdrCapabilities Display::getHdrCapabilities()
	{
		return callObjectMethod(
			"getHdrCapabilities",
			"()Landroid/view/Display$HdrCapabilities;"
		);
	}
	jint Display::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void Display::getMetrics(android::util::DisplayMetrics arg0)
	{
		callMethod<void>(
			"getMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	android::view::Display_Mode Display::getMode()
	{
		return callObjectMethod(
			"getMode",
			"()Landroid/view/Display$Mode;"
		);
	}
	jstring Display::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Display::getOrientation()
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint Display::getPixelFormat()
	{
		return callMethod<jint>(
			"getPixelFormat",
			"()I"
		);
	}
	android::graphics::ColorSpace Display::getPreferredWideGamutColorSpace()
	{
		return callObjectMethod(
			"getPreferredWideGamutColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jlong Display::getPresentationDeadlineNanos()
	{
		return callMethod<jlong>(
			"getPresentationDeadlineNanos",
			"()J"
		);
	}
	void Display::getRealMetrics(android::util::DisplayMetrics arg0)
	{
		callMethod<void>(
			"getRealMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	void Display::getRealSize(android::graphics::Point arg0)
	{
		callMethod<void>(
			"getRealSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	void Display::getRectSize(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getRectSize",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jfloat Display::getRefreshRate()
	{
		return callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jint Display::getRotation()
	{
		return callMethod<jint>(
			"getRotation",
			"()I"
		);
	}
	android::view::RoundedCorner Display::getRoundedCorner(jint arg0)
	{
		return callObjectMethod(
			"getRoundedCorner",
			"(I)Landroid/view/RoundedCorner;",
			arg0
		);
	}
	void Display::getSize(android::graphics::Point arg0)
	{
		callMethod<void>(
			"getSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	jint Display::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jarray Display::getSupportedModes()
	{
		return callObjectMethod(
			"getSupportedModes",
			"()[Landroid/view/Display$Mode;"
		).object<jarray>();
	}
	jfloatArray Display::getSupportedRefreshRates()
	{
		return callObjectMethod(
			"getSupportedRefreshRates",
			"()[F"
		).object<jfloatArray>();
	}
	jint Display::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Display::isHdr()
	{
		return callMethod<jboolean>(
			"isHdr",
			"()Z"
		);
	}
	jboolean Display::isMinimalPostProcessingSupported()
	{
		return callMethod<jboolean>(
			"isMinimalPostProcessingSupported",
			"()Z"
		);
	}
	jboolean Display::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean Display::isWideColorGamut()
	{
		return callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	jstring Display::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view

