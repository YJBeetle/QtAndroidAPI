#pragma once

#include "../../JFloatArray.hpp"
#include "../../JArray.hpp"
#include "../graphics/ColorSpace.def.hpp"
#include "../graphics/Point.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../hardware/display/DeviceProductInfo.def.hpp"
#include "../util/DisplayMetrics.def.hpp"
#include "./Display_HdrCapabilities.def.hpp"
#include "./Display_Mode.def.hpp"
#include "./DisplayCutout.def.hpp"
#include "./RoundedCorner.def.hpp"
#include "../../JString.hpp"
#include "./Display.def.hpp"

namespace android::view
{
	// Fields
	inline jint Display::DEFAULT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"DEFAULT_DISPLAY"
		);
	}
	inline jint Display::FLAG_PRESENTATION()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRESENTATION"
		);
	}
	inline jint Display::FLAG_PRIVATE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRIVATE"
		);
	}
	inline jint Display::FLAG_ROUND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_ROUND"
		);
	}
	inline jint Display::FLAG_SECURE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_SECURE"
		);
	}
	inline jint Display::FLAG_SUPPORTS_PROTECTED_BUFFERS()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"FLAG_SUPPORTS_PROTECTED_BUFFERS"
		);
	}
	inline jint Display::INVALID_DISPLAY()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"INVALID_DISPLAY"
		);
	}
	inline jint Display::STATE_DOZE()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE"
		);
	}
	inline jint Display::STATE_DOZE_SUSPEND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE_SUSPEND"
		);
	}
	inline jint Display::STATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_OFF"
		);
	}
	inline jint Display::STATE_ON()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_ON"
		);
	}
	inline jint Display::STATE_ON_SUSPEND()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_ON_SUSPEND"
		);
	}
	inline jint Display::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_UNKNOWN"
		);
	}
	inline jint Display::STATE_VR()
	{
		return getStaticField<jint>(
			"android.view.Display",
			"STATE_VR"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong Display::getAppVsyncOffsetNanos() const
	{
		return callMethod<jlong>(
			"getAppVsyncOffsetNanos",
			"()J"
		);
	}
	inline void Display::getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1) const
	{
		callMethod<void>(
			"getCurrentSizeRange",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::DisplayCutout Display::getCutout() const
	{
		return callObjectMethod(
			"getCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	inline android::hardware::display::DeviceProductInfo Display::getDeviceProductInfo() const
	{
		return callObjectMethod(
			"getDeviceProductInfo",
			"()Landroid/hardware/display/DeviceProductInfo;"
		);
	}
	inline jint Display::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jint Display::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::view::Display_HdrCapabilities Display::getHdrCapabilities() const
	{
		return callObjectMethod(
			"getHdrCapabilities",
			"()Landroid/view/Display$HdrCapabilities;"
		);
	}
	inline jint Display::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline void Display::getMetrics(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"getMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	inline android::view::Display_Mode Display::getMode() const
	{
		return callObjectMethod(
			"getMode",
			"()Landroid/view/Display$Mode;"
		);
	}
	inline JString Display::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Display::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	inline jint Display::getPixelFormat() const
	{
		return callMethod<jint>(
			"getPixelFormat",
			"()I"
		);
	}
	inline android::graphics::ColorSpace Display::getPreferredWideGamutColorSpace() const
	{
		return callObjectMethod(
			"getPreferredWideGamutColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline jlong Display::getPresentationDeadlineNanos() const
	{
		return callMethod<jlong>(
			"getPresentationDeadlineNanos",
			"()J"
		);
	}
	inline void Display::getRealMetrics(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"getRealMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	inline void Display::getRealSize(android::graphics::Point arg0) const
	{
		callMethod<void>(
			"getRealSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	inline void Display::getRectSize(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getRectSize",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jfloat Display::getRefreshRate() const
	{
		return callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	inline jint Display::getRotation() const
	{
		return callMethod<jint>(
			"getRotation",
			"()I"
		);
	}
	inline android::view::RoundedCorner Display::getRoundedCorner(jint arg0) const
	{
		return callObjectMethod(
			"getRoundedCorner",
			"(I)Landroid/view/RoundedCorner;",
			arg0
		);
	}
	inline void Display::getSize(android::graphics::Point arg0) const
	{
		callMethod<void>(
			"getSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	inline jint Display::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline JArray Display::getSupportedModes() const
	{
		return callObjectMethod(
			"getSupportedModes",
			"()[Landroid/view/Display$Mode;"
		);
	}
	inline JFloatArray Display::getSupportedRefreshRates() const
	{
		return callObjectMethod(
			"getSupportedRefreshRates",
			"()[F"
		);
	}
	inline jint Display::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean Display::isHdr() const
	{
		return callMethod<jboolean>(
			"isHdr",
			"()Z"
		);
	}
	inline jboolean Display::isMinimalPostProcessingSupported() const
	{
		return callMethod<jboolean>(
			"isMinimalPostProcessingSupported",
			"()Z"
		);
	}
	inline jboolean Display::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline jboolean Display::isWideColorGamut() const
	{
		return callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	inline JString Display::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

