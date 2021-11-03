#include "./AccessibilityService.hpp"
#include "../graphics/Region.hpp"
#include "../os/Handler.hpp"
#include "../../JObject.hpp"
#include "./AccessibilityService_MagnificationController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	AccessibilityService_MagnificationController::AccessibilityService_MagnificationController(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AccessibilityService_MagnificationController::addListener(JObject arg0)
	{
		callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)V",
			arg0.object()
		);
	}
	void AccessibilityService_MagnificationController::addListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterX()
	{
		return callMethod<jfloat>(
			"getCenterX",
			"()F"
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterY()
	{
		return callMethod<jfloat>(
			"getCenterY",
			"()F"
		);
	}
	android::graphics::Region AccessibilityService_MagnificationController::getMagnificationRegion()
	{
		return callObjectMethod(
			"getMagnificationRegion",
			"()Landroid/graphics/Region;"
		);
	}
	jfloat AccessibilityService_MagnificationController::getScale()
	{
		return callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	jboolean AccessibilityService_MagnificationController::removeListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityService_MagnificationController::reset(jboolean arg0)
	{
		return callMethod<jboolean>(
			"reset",
			"(Z)Z",
			arg0
		);
	}
	jboolean AccessibilityService_MagnificationController::setCenter(jfloat arg0, jfloat arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"setCenter",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AccessibilityService_MagnificationController::setScale(jfloat arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setScale",
			"(FZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::accessibilityservice

