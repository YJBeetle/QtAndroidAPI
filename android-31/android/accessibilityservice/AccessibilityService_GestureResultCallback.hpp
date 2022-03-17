#pragma once

#include "./GestureDescription.def.hpp"
#include "./AccessibilityService_GestureResultCallback.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline AccessibilityService_GestureResultCallback::AccessibilityService_GestureResultCallback()
		: JObject(
			"android.accessibilityservice.AccessibilityService$GestureResultCallback",
			"()V"
		) {}
	
	// Methods
	inline void AccessibilityService_GestureResultCallback::onCancelled(android::accessibilityservice::GestureDescription arg0) const
	{
		callMethod<void>(
			"onCancelled",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.object()
		);
	}
	inline void AccessibilityService_GestureResultCallback::onCompleted(android::accessibilityservice::GestureDescription arg0) const
	{
		callMethod<void>(
			"onCompleted",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

