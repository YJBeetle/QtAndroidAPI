#pragma once

#include "../../JString.hpp"
#include "./TouchInteractionController.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline jint TouchInteractionController::STATE_CLEAR()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.TouchInteractionController",
			"STATE_CLEAR"
		);
	}
	inline jint TouchInteractionController::STATE_DELEGATING()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.TouchInteractionController",
			"STATE_DELEGATING"
		);
	}
	inline jint TouchInteractionController::STATE_DRAGGING()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.TouchInteractionController",
			"STATE_DRAGGING"
		);
	}
	inline jint TouchInteractionController::STATE_TOUCH_EXPLORING()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.TouchInteractionController",
			"STATE_TOUCH_EXPLORING"
		);
	}
	inline jint TouchInteractionController::STATE_TOUCH_INTERACTING()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.TouchInteractionController",
			"STATE_TOUCH_INTERACTING"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString TouchInteractionController::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.TouchInteractionController",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint TouchInteractionController::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jint TouchInteractionController::getMaxPointerCount() const
	{
		return callMethod<jint>(
			"getMaxPointerCount",
			"()I"
		);
	}
	inline jint TouchInteractionController::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline void TouchInteractionController::performClick() const
	{
		callMethod<void>(
			"performClick",
			"()V"
		);
	}
	inline void TouchInteractionController::performLongClickAndStartDrag() const
	{
		callMethod<void>(
			"performLongClickAndStartDrag",
			"()V"
		);
	}
	inline void TouchInteractionController::registerCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/accessibilityservice/TouchInteractionController$Callback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TouchInteractionController::requestDelegating() const
	{
		callMethod<void>(
			"requestDelegating",
			"()V"
		);
	}
	inline void TouchInteractionController::requestDragging(jint arg0) const
	{
		callMethod<void>(
			"requestDragging",
			"(I)V",
			arg0
		);
	}
	inline void TouchInteractionController::requestTouchExploration() const
	{
		callMethod<void>(
			"requestTouchExploration",
			"()V"
		);
	}
	inline void TouchInteractionController::unregisterAllCallbacks() const
	{
		callMethod<void>(
			"unregisterAllCallbacks",
			"()V"
		);
	}
	inline jboolean TouchInteractionController::unregisterCallback(JObject arg0) const
	{
		return callMethod<jboolean>(
			"unregisterCallback",
			"(Landroid/accessibilityservice/TouchInteractionController$Callback;)Z",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
