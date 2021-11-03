#include "../../JFloatArray.hpp"
#include "../../JArray.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "../util/DisplayMetrics.hpp"
#include "./Display_HdrCapabilities.hpp"
#include "./Display_Mode.hpp"
#include "../../JString.hpp"
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
	jlong Display::getAppVsyncOffsetNanos() const
	{
		return callMethod<jlong>(
			"getAppVsyncOffsetNanos",
			"()J"
		);
	}
	void Display::getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1) const
	{
		callMethod<void>(
			"getCurrentSizeRange",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint Display::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint Display::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::view::Display_HdrCapabilities Display::getHdrCapabilities() const
	{
		return callObjectMethod(
			"getHdrCapabilities",
			"()Landroid/view/Display$HdrCapabilities;"
		);
	}
	jint Display::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void Display::getMetrics(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"getMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	android::view::Display_Mode Display::getMode() const
	{
		return callObjectMethod(
			"getMode",
			"()Landroid/view/Display$Mode;"
		);
	}
	JString Display::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Display::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint Display::getPixelFormat() const
	{
		return callMethod<jint>(
			"getPixelFormat",
			"()I"
		);
	}
	jlong Display::getPresentationDeadlineNanos() const
	{
		return callMethod<jlong>(
			"getPresentationDeadlineNanos",
			"()J"
		);
	}
	void Display::getRealMetrics(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"getRealMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	void Display::getRealSize(android::graphics::Point arg0) const
	{
		callMethod<void>(
			"getRealSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	void Display::getRectSize(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getRectSize",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jfloat Display::getRefreshRate() const
	{
		return callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jint Display::getRotation() const
	{
		return callMethod<jint>(
			"getRotation",
			"()I"
		);
	}
	void Display::getSize(android::graphics::Point arg0) const
	{
		callMethod<void>(
			"getSize",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		);
	}
	jint Display::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	JArray Display::getSupportedModes() const
	{
		return callObjectMethod(
			"getSupportedModes",
			"()[Landroid/view/Display$Mode;"
		);
	}
	JFloatArray Display::getSupportedRefreshRates() const
	{
		return callObjectMethod(
			"getSupportedRefreshRates",
			"()[F"
		);
	}
	jint Display::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Display::isHdr() const
	{
		return callMethod<jboolean>(
			"isHdr",
			"()Z"
		);
	}
	jboolean Display::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean Display::isWideColorGamut() const
	{
		return callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	JString Display::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

