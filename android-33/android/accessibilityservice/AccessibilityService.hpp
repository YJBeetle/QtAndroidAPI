#pragma once

#include "./AccessibilityButtonController.def.hpp"
#include "./AccessibilityGestureEvent.def.hpp"
#include "./AccessibilityService_GestureResultCallback.def.hpp"
#include "./AccessibilityService_MagnificationController.def.hpp"
#include "./AccessibilityService_SoftKeyboardController.def.hpp"
#include "./AccessibilityServiceInfo.def.hpp"
#include "./FingerprintGestureController.def.hpp"
#include "./GestureDescription.def.hpp"
#include "./InputMethod.def.hpp"
#include "./TouchInteractionController.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../graphics/Region.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/Display.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/accessibility/AccessibilityEvent.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AccessibilityService.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INTERNAL_ERROR"
		);
	}
	inline jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INTERVAL_TIME_SHORT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INTERVAL_TIME_SHORT"
		);
	}
	inline jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INVALID_DISPLAY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INVALID_DISPLAY"
		);
	}
	inline jint AccessibilityService::ERROR_TAKE_SCREENSHOT_NO_ACCESSIBILITY_ACCESS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_NO_ACCESSIBILITY_ACCESS"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_DOUBLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SINGLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_TRIPLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_2_FINGER_TRIPLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_TRIPLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_DOUBLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SINGLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SINGLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SINGLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_TRIPLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_3_FINGER_TRIPLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_TRIPLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_DOUBLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SINGLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_4_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_TRIPLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_DOUBLE_TAP"
		);
	}
	inline jint AccessibilityService::GESTURE_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_DOUBLE_TAP_AND_HOLD"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_UP_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_DOWN"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_UP_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_LEFT"
		);
	}
	inline jint AccessibilityService::GESTURE_SWIPE_UP_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_RIGHT"
		);
	}
	inline jint AccessibilityService::GESTURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_UNKNOWN"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_ALL_APPS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_ALL_APPS"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_BUTTON()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_BUTTON"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_BUTTON_CHOOSER()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_BUTTON_CHOOSER"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_SHORTCUT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_SHORTCUT"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_BACK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_BACK"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DISMISS_NOTIFICATION_SHADE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DISMISS_NOTIFICATION_SHADE"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DPAD_CENTER()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DPAD_CENTER"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DPAD_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DPAD_DOWN"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DPAD_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DPAD_LEFT"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DPAD_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DPAD_RIGHT"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_DPAD_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DPAD_UP"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_HOME()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_HOME"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_KEYCODE_HEADSETHOOK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_KEYCODE_HEADSETHOOK"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_LOCK_SCREEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_LOCK_SCREEN"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_NOTIFICATIONS"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_POWER_DIALOG()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_POWER_DIALOG"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_QUICK_SETTINGS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_QUICK_SETTINGS"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_RECENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_RECENTS"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_TAKE_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TAKE_SCREENSHOT"
		);
	}
	inline jint AccessibilityService::GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN"
		);
	}
	inline JString AccessibilityService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	inline jint AccessibilityService::SHOW_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_AUTO"
		);
	}
	inline jint AccessibilityService::SHOW_MODE_HIDDEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_HIDDEN"
		);
	}
	inline jint AccessibilityService::SHOW_MODE_IGNORE_HARD_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_IGNORE_HARD_KEYBOARD"
		);
	}
	
	// Constructors
	inline AccessibilityService::AccessibilityService()
		: android::app::Service(
			"android.accessibilityservice.AccessibilityService",
			"()V"
		) {}
	
	// Methods
	inline jboolean AccessibilityService::clearCache() const
	{
		return callMethod<jboolean>(
			"clearCache",
			"()Z"
		);
	}
	inline jboolean AccessibilityService::clearCachedSubtree(android::view::accessibility::AccessibilityNodeInfo arg0) const
	{
		return callMethod<jboolean>(
			"clearCachedSubtree",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Z",
			arg0.object()
		);
	}
	inline android::content::Context AccessibilityService::createDisplayContext(android::view::Display arg0) const
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	inline android::content::Context AccessibilityService::createWindowContext(jint arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"createWindowContext",
			"(ILandroid/os/Bundle;)Landroid/content/Context;",
			arg0,
			arg1.object()
		);
	}
	inline android::content::Context AccessibilityService::createWindowContext(android::view::Display arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"createWindowContext",
			"(Landroid/view/Display;ILandroid/os/Bundle;)Landroid/content/Context;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void AccessibilityService::disableSelf() const
	{
		callMethod<void>(
			"disableSelf",
			"()V"
		);
	}
	inline jboolean AccessibilityService::dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jboolean>(
			"dispatchGesture",
			"(Landroid/accessibilityservice/GestureDescription;Landroid/accessibilityservice/AccessibilityService$GestureResultCallback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityService::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::accessibilityservice::AccessibilityButtonController AccessibilityService::getAccessibilityButtonController() const
	{
		return callObjectMethod(
			"getAccessibilityButtonController",
			"()Landroid/accessibilityservice/AccessibilityButtonController;"
		);
	}
	inline android::accessibilityservice::AccessibilityButtonController AccessibilityService::getAccessibilityButtonController(jint arg0) const
	{
		return callObjectMethod(
			"getAccessibilityButtonController",
			"(I)Landroid/accessibilityservice/AccessibilityButtonController;",
			arg0
		);
	}
	inline android::accessibilityservice::FingerprintGestureController AccessibilityService::getFingerprintGestureController() const
	{
		return callObjectMethod(
			"getFingerprintGestureController",
			"()Landroid/accessibilityservice/FingerprintGestureController;"
		);
	}
	inline android::accessibilityservice::InputMethod AccessibilityService::getInputMethod() const
	{
		return callObjectMethod(
			"getInputMethod",
			"()Landroid/accessibilityservice/InputMethod;"
		);
	}
	inline android::accessibilityservice::AccessibilityService_MagnificationController AccessibilityService::getMagnificationController() const
	{
		return callObjectMethod(
			"getMagnificationController",
			"()Landroid/accessibilityservice/AccessibilityService$MagnificationController;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityService::getRootInActiveWindow() const
	{
		return callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityService::getRootInActiveWindow(jint arg0) const
	{
		return callObjectMethod(
			"getRootInActiveWindow",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::accessibilityservice::AccessibilityServiceInfo AccessibilityService::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	inline android::accessibilityservice::AccessibilityService_SoftKeyboardController AccessibilityService::getSoftKeyboardController() const
	{
		return callObjectMethod(
			"getSoftKeyboardController",
			"()Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController;"
		);
	}
	inline JObject AccessibilityService::getSystemActions() const
	{
		return callObjectMethod(
			"getSystemActions",
			"()Ljava/util/List;"
		);
	}
	inline JObject AccessibilityService::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline android::accessibilityservice::TouchInteractionController AccessibilityService::getTouchInteractionController(jint arg0) const
	{
		return callObjectMethod(
			"getTouchInteractionController",
			"(I)Landroid/accessibilityservice/TouchInteractionController;",
			arg0
		);
	}
	inline JObject AccessibilityService::getWindows() const
	{
		return callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	inline android::util::SparseArray AccessibilityService::getWindowsOnAllDisplays() const
	{
		return callObjectMethod(
			"getWindowsOnAllDisplays",
			"()Landroid/util/SparseArray;"
		);
	}
	inline jboolean AccessibilityService::isCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isCacheEnabled",
			"()Z"
		);
	}
	inline jboolean AccessibilityService::isNodeInCache(android::view::accessibility::AccessibilityNodeInfo arg0) const
	{
		return callMethod<jboolean>(
			"isNodeInCache",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityService::onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	inline JObject AccessibilityService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::accessibilityservice::InputMethod AccessibilityService::onCreateInputMethod() const
	{
		return callObjectMethod(
			"onCreateInputMethod",
			"()Landroid/accessibilityservice/InputMethod;"
		);
	}
	inline jboolean AccessibilityService::onGesture(android::accessibilityservice::AccessibilityGestureEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGesture",
			"(Landroid/accessibilityservice/AccessibilityGestureEvent;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityService::onInterrupt() const
	{
		callMethod<void>(
			"onInterrupt",
			"()V"
		);
	}
	inline void AccessibilityService::onSystemActionsChanged() const
	{
		callMethod<void>(
			"onSystemActionsChanged",
			"()V"
		);
	}
	inline jboolean AccessibilityService::performGlobalAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	inline void AccessibilityService::setAccessibilityFocusAppearance(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAccessibilityFocusAppearance",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AccessibilityService::setAnimationScale(jfloat arg0) const
	{
		callMethod<void>(
			"setAnimationScale",
			"(F)V",
			arg0
		);
	}
	inline jboolean AccessibilityService::setCacheEnabled(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setCacheEnabled",
			"(Z)Z",
			arg0
		);
	}
	inline void AccessibilityService::setGestureDetectionPassthroughRegion(jint arg0, android::graphics::Region arg1) const
	{
		callMethod<void>(
			"setGestureDetectionPassthroughRegion",
			"(ILandroid/graphics/Region;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AccessibilityService::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const
	{
		callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.object()
		);
	}
	inline void AccessibilityService::setTouchExplorationPassthroughRegion(jint arg0, android::graphics::Region arg1) const
	{
		callMethod<void>(
			"setTouchExplorationPassthroughRegion",
			"(ILandroid/graphics/Region;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AccessibilityService::takeScreenshot(jint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"takeScreenshot",
			"(ILjava/util/concurrent/Executor;Landroid/accessibilityservice/AccessibilityService$TakeScreenshotCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
