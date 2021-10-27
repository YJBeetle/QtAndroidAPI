#include "./AccessibilityService.hpp"
#include "../graphics/Region.hpp"
#include "../os/Handler.hpp"
#include "./AccessibilityService_MagnificationController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	AccessibilityService_MagnificationController::AccessibilityService_MagnificationController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AccessibilityService_MagnificationController::addListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_MagnificationController::addListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"getCenterX",
			"()F"
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"getCenterY",
			"()F"
		);
	}
	QAndroidJniObject AccessibilityService_MagnificationController::getMagnificationRegion()
	{
		return __thiz.callObjectMethod(
			"getMagnificationRegion",
			"()Landroid/graphics/Region;"
		);
	}
	jfloat AccessibilityService_MagnificationController::getScale()
	{
		return __thiz.callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	jboolean AccessibilityService_MagnificationController::removeListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityService_MagnificationController::reset(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"reset",
			"(Z)Z",
			arg0
		);
	}
	jboolean AccessibilityService_MagnificationController::setCenter(jfloat arg0, jfloat arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setCenter",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AccessibilityService_MagnificationController::setScale(jfloat arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setScale",
			"(FZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::accessibilityservice

