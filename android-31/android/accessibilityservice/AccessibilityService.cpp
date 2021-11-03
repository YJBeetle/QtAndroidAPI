#include "./AccessibilityButtonController.hpp"
#include "./AccessibilityGestureEvent.hpp"
#include "./AccessibilityService_GestureResultCallback.hpp"
#include "./AccessibilityService_MagnificationController.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"
#include "./AccessibilityServiceInfo.hpp"
#include "./FingerprintGestureController.hpp"
#include "./GestureDescription.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Region.hpp"
#include "../os/Handler.hpp"
#include "../util/SparseArray.hpp"
#include "../view/Display.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AccessibilityService.hpp"

namespace android::accessibilityservice
{
	// Fields
	jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INTERNAL_ERROR"
		);
	}
	jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INTERVAL_TIME_SHORT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INTERVAL_TIME_SHORT"
		);
	}
	jint AccessibilityService::ERROR_TAKE_SCREENSHOT_INVALID_DISPLAY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_INVALID_DISPLAY"
		);
	}
	jint AccessibilityService::ERROR_TAKE_SCREENSHOT_NO_ACCESSIBILITY_ACCESS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"ERROR_TAKE_SCREENSHOT_NO_ACCESSIBILITY_ACCESS"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_DOUBLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SINGLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_SWIPE_UP"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_TRIPLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_2_FINGER_TRIPLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_2_FINGER_TRIPLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_DOUBLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SINGLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SINGLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SINGLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_SWIPE_UP"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_TRIPLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_3_FINGER_TRIPLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_3_FINGER_TRIPLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_DOUBLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_DOUBLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_SINGLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SINGLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_SWIPE_UP"
		);
	}
	jint AccessibilityService::GESTURE_4_FINGER_TRIPLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_4_FINGER_TRIPLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_DOUBLE_TAP"
		);
	}
	jint AccessibilityService::GESTURE_DOUBLE_TAP_AND_HOLD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_DOUBLE_TAP_AND_HOLD"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_UNKNOWN"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_ALL_APPS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_ALL_APPS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_BUTTON()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_BUTTON"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_BUTTON_CHOOSER()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_BUTTON_CHOOSER"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_ACCESSIBILITY_SHORTCUT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_ACCESSIBILITY_SHORTCUT"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_BACK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_BACK"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_DISMISS_NOTIFICATION_SHADE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_DISMISS_NOTIFICATION_SHADE"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_HOME()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_HOME"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_KEYCODE_HEADSETHOOK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_KEYCODE_HEADSETHOOK"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_LOCK_SCREEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_LOCK_SCREEN"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_NOTIFICATIONS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_POWER_DIALOG()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_POWER_DIALOG"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_QUICK_SETTINGS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_QUICK_SETTINGS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_RECENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_RECENTS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_TAKE_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TAKE_SCREENSHOT"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN"
		);
	}
	JString AccessibilityService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	jint AccessibilityService::SHOW_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_AUTO"
		);
	}
	jint AccessibilityService::SHOW_MODE_HIDDEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_HIDDEN"
		);
	}
	jint AccessibilityService::SHOW_MODE_IGNORE_HARD_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_IGNORE_HARD_KEYBOARD"
		);
	}
	
	// QJniObject forward
	AccessibilityService::AccessibilityService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	AccessibilityService::AccessibilityService()
		: android::app::Service(
			"android.accessibilityservice.AccessibilityService",
			"()V"
		) {}
	
	// Methods
	android::content::Context AccessibilityService::createDisplayContext(android::view::Display arg0) const
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	void AccessibilityService::disableSelf() const
	{
		callMethod<void>(
			"disableSelf",
			"()V"
		);
	}
	jboolean AccessibilityService::dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jboolean>(
			"dispatchGesture",
			"(Landroid/accessibilityservice/GestureDescription;Landroid/accessibilityservice/AccessibilityService$GestureResultCallback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityService::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	android::accessibilityservice::AccessibilityButtonController AccessibilityService::getAccessibilityButtonController() const
	{
		return callObjectMethod(
			"getAccessibilityButtonController",
			"()Landroid/accessibilityservice/AccessibilityButtonController;"
		);
	}
	android::accessibilityservice::AccessibilityButtonController AccessibilityService::getAccessibilityButtonController(jint arg0) const
	{
		return callObjectMethod(
			"getAccessibilityButtonController",
			"(I)Landroid/accessibilityservice/AccessibilityButtonController;",
			arg0
		);
	}
	android::accessibilityservice::FingerprintGestureController AccessibilityService::getFingerprintGestureController() const
	{
		return callObjectMethod(
			"getFingerprintGestureController",
			"()Landroid/accessibilityservice/FingerprintGestureController;"
		);
	}
	android::accessibilityservice::AccessibilityService_MagnificationController AccessibilityService::getMagnificationController() const
	{
		return callObjectMethod(
			"getMagnificationController",
			"()Landroid/accessibilityservice/AccessibilityService$MagnificationController;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityService::getRootInActiveWindow() const
	{
		return callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::accessibilityservice::AccessibilityServiceInfo AccessibilityService::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	android::accessibilityservice::AccessibilityService_SoftKeyboardController AccessibilityService::getSoftKeyboardController() const
	{
		return callObjectMethod(
			"getSoftKeyboardController",
			"()Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController;"
		);
	}
	JObject AccessibilityService::getSystemActions() const
	{
		return callObjectMethod(
			"getSystemActions",
			"()Ljava/util/List;"
		);
	}
	JObject AccessibilityService::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject AccessibilityService::getWindows() const
	{
		return callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	android::util::SparseArray AccessibilityService::getWindowsOnAllDisplays() const
	{
		return callObjectMethod(
			"getWindowsOnAllDisplays",
			"()Landroid/util/SparseArray;"
		);
	}
	void AccessibilityService::onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	JObject AccessibilityService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	jboolean AccessibilityService::onGesture(android::accessibilityservice::AccessibilityGestureEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGesture",
			"(Landroid/accessibilityservice/AccessibilityGestureEvent;)Z",
			arg0.object()
		);
	}
	void AccessibilityService::onInterrupt() const
	{
		callMethod<void>(
			"onInterrupt",
			"()V"
		);
	}
	void AccessibilityService::onSystemActionsChanged() const
	{
		callMethod<void>(
			"onSystemActionsChanged",
			"()V"
		);
	}
	jboolean AccessibilityService::performGlobalAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	void AccessibilityService::setAccessibilityFocusAppearance(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAccessibilityFocusAppearance",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AccessibilityService::setGestureDetectionPassthroughRegion(jint arg0, android::graphics::Region arg1) const
	{
		callMethod<void>(
			"setGestureDetectionPassthroughRegion",
			"(ILandroid/graphics/Region;)V",
			arg0,
			arg1.object()
		);
	}
	void AccessibilityService::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const
	{
		callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityService::setTouchExplorationPassthroughRegion(jint arg0, android::graphics::Region arg1) const
	{
		callMethod<void>(
			"setTouchExplorationPassthroughRegion",
			"(ILandroid/graphics/Region;)V",
			arg0,
			arg1.object()
		);
	}
	void AccessibilityService::takeScreenshot(jint arg0, JObject arg1, JObject arg2) const
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

