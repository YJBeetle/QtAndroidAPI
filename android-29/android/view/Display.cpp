#include "../graphics/ColorSpace.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "../util/DisplayMetrics.hpp"
#include "./Display_HdrCapabilities.hpp"
#include "./Display_Mode.hpp"
#include "./DisplayCutout.hpp"
#include "./Display.hpp"

namespace android::view
{
	// Fields
	jint Display::DEFAULT_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"DEFAULT_DISPLAY"
		);
	}
	jint Display::FLAG_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRESENTATION"
		);
	}
	jint Display::FLAG_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRIVATE"
		);
	}
	jint Display::FLAG_ROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_ROUND"
		);
	}
	jint Display::FLAG_SECURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_SECURE"
		);
	}
	jint Display::FLAG_SUPPORTS_PROTECTED_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_SUPPORTS_PROTECTED_BUFFERS"
		);
	}
	jint Display::INVALID_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"INVALID_DISPLAY"
		);
	}
	jint Display::STATE_DOZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE"
		);
	}
	jint Display::STATE_DOZE_SUSPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE_SUSPEND"
		);
	}
	jint Display::STATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_OFF"
		);
	}
	jint Display::STATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_ON"
		);
	}
	jint Display::STATE_ON_SUSPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_ON_SUSPEND"
		);
	}
	jint Display::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_UNKNOWN"
		);
	}
	jint Display::STATE_VR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_VR"
		);
	}
	
	Display::Display(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong Display::getAppVsyncOffsetNanos()
	{
		return __thiz.callMethod<jlong>(
			"getAppVsyncOffsetNanos",
			"()J"
		);
	}
	void Display::getCurrentSizeRange(android::graphics::Point arg0, android::graphics::Point arg1)
	{
		__thiz.callMethod<void>(
			"getCurrentSizeRange",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Display::getCutout()
	{
		return __thiz.callObjectMethod(
			"getCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	jint Display::getDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint Display::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject Display::getHdrCapabilities()
	{
		return __thiz.callObjectMethod(
			"getHdrCapabilities",
			"()Landroid/view/Display$HdrCapabilities;"
		);
	}
	jint Display::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void Display::getMetrics(android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"getMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Display::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Landroid/view/Display$Mode;"
		);
	}
	jstring Display::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Display::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint Display::getPixelFormat()
	{
		return __thiz.callMethod<jint>(
			"getPixelFormat",
			"()I"
		);
	}
	QAndroidJniObject Display::getPreferredWideGamutColorSpace()
	{
		return __thiz.callObjectMethod(
			"getPreferredWideGamutColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jlong Display::getPresentationDeadlineNanos()
	{
		return __thiz.callMethod<jlong>(
			"getPresentationDeadlineNanos",
			"()J"
		);
	}
	void Display::getRealMetrics(android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"getRealMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	void Display::getRealSize(android::graphics::Point arg0)
	{
		__thiz.callMethod<void>(
			"getRealSize",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	void Display::getRectSize(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getRectSize",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat Display::getRefreshRate()
	{
		return __thiz.callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jint Display::getRotation()
	{
		return __thiz.callMethod<jint>(
			"getRotation",
			"()I"
		);
	}
	void Display::getSize(android::graphics::Point arg0)
	{
		__thiz.callMethod<void>(
			"getSize",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	jint Display::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jarray Display::getSupportedModes()
	{
		return __thiz.callObjectMethod(
			"getSupportedModes",
			"()[Landroid/view/Display$Mode;"
		).object<jarray>();
	}
	jfloatArray Display::getSupportedRefreshRates()
	{
		return __thiz.callObjectMethod(
			"getSupportedRefreshRates",
			"()[F"
		).object<jfloatArray>();
	}
	jint Display::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Display::isHdr()
	{
		return __thiz.callMethod<jboolean>(
			"isHdr",
			"()Z"
		);
	}
	jboolean Display::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean Display::isWideColorGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	jstring Display::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view

