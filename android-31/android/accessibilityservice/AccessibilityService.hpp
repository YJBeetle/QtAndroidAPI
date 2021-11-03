#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::accessibilityservice
{
	class AccessibilityButtonController;
}
namespace android::accessibilityservice
{
	class AccessibilityGestureEvent;
}
namespace android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback;
}
namespace android::accessibilityservice
{
	class AccessibilityService_MagnificationController;
}
namespace android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController;
}
namespace android::accessibilityservice
{
	class AccessibilityServiceInfo;
}
namespace android::accessibilityservice
{
	class FingerprintGestureController;
}
namespace android::accessibilityservice
{
	class GestureDescription;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Handler;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class Display;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::accessibilityservice
{
	class AccessibilityService : public android::app::Service
	{
	public:
		// Fields
		static jint ERROR_TAKE_SCREENSHOT_INTERNAL_ERROR();
		static jint ERROR_TAKE_SCREENSHOT_INTERVAL_TIME_SHORT();
		static jint ERROR_TAKE_SCREENSHOT_INVALID_DISPLAY();
		static jint ERROR_TAKE_SCREENSHOT_NO_ACCESSIBILITY_ACCESS();
		static jint GESTURE_2_FINGER_DOUBLE_TAP();
		static jint GESTURE_2_FINGER_DOUBLE_TAP_AND_HOLD();
		static jint GESTURE_2_FINGER_SINGLE_TAP();
		static jint GESTURE_2_FINGER_SWIPE_DOWN();
		static jint GESTURE_2_FINGER_SWIPE_LEFT();
		static jint GESTURE_2_FINGER_SWIPE_RIGHT();
		static jint GESTURE_2_FINGER_SWIPE_UP();
		static jint GESTURE_2_FINGER_TRIPLE_TAP();
		static jint GESTURE_2_FINGER_TRIPLE_TAP_AND_HOLD();
		static jint GESTURE_3_FINGER_DOUBLE_TAP();
		static jint GESTURE_3_FINGER_DOUBLE_TAP_AND_HOLD();
		static jint GESTURE_3_FINGER_SINGLE_TAP();
		static jint GESTURE_3_FINGER_SINGLE_TAP_AND_HOLD();
		static jint GESTURE_3_FINGER_SWIPE_DOWN();
		static jint GESTURE_3_FINGER_SWIPE_LEFT();
		static jint GESTURE_3_FINGER_SWIPE_RIGHT();
		static jint GESTURE_3_FINGER_SWIPE_UP();
		static jint GESTURE_3_FINGER_TRIPLE_TAP();
		static jint GESTURE_3_FINGER_TRIPLE_TAP_AND_HOLD();
		static jint GESTURE_4_FINGER_DOUBLE_TAP();
		static jint GESTURE_4_FINGER_DOUBLE_TAP_AND_HOLD();
		static jint GESTURE_4_FINGER_SINGLE_TAP();
		static jint GESTURE_4_FINGER_SWIPE_DOWN();
		static jint GESTURE_4_FINGER_SWIPE_LEFT();
		static jint GESTURE_4_FINGER_SWIPE_RIGHT();
		static jint GESTURE_4_FINGER_SWIPE_UP();
		static jint GESTURE_4_FINGER_TRIPLE_TAP();
		static jint GESTURE_DOUBLE_TAP();
		static jint GESTURE_DOUBLE_TAP_AND_HOLD();
		static jint GESTURE_SWIPE_DOWN();
		static jint GESTURE_SWIPE_DOWN_AND_LEFT();
		static jint GESTURE_SWIPE_DOWN_AND_RIGHT();
		static jint GESTURE_SWIPE_DOWN_AND_UP();
		static jint GESTURE_SWIPE_LEFT();
		static jint GESTURE_SWIPE_LEFT_AND_DOWN();
		static jint GESTURE_SWIPE_LEFT_AND_RIGHT();
		static jint GESTURE_SWIPE_LEFT_AND_UP();
		static jint GESTURE_SWIPE_RIGHT();
		static jint GESTURE_SWIPE_RIGHT_AND_DOWN();
		static jint GESTURE_SWIPE_RIGHT_AND_LEFT();
		static jint GESTURE_SWIPE_RIGHT_AND_UP();
		static jint GESTURE_SWIPE_UP();
		static jint GESTURE_SWIPE_UP_AND_DOWN();
		static jint GESTURE_SWIPE_UP_AND_LEFT();
		static jint GESTURE_SWIPE_UP_AND_RIGHT();
		static jint GESTURE_UNKNOWN();
		static jint GLOBAL_ACTION_ACCESSIBILITY_ALL_APPS();
		static jint GLOBAL_ACTION_ACCESSIBILITY_BUTTON();
		static jint GLOBAL_ACTION_ACCESSIBILITY_BUTTON_CHOOSER();
		static jint GLOBAL_ACTION_ACCESSIBILITY_SHORTCUT();
		static jint GLOBAL_ACTION_BACK();
		static jint GLOBAL_ACTION_DISMISS_NOTIFICATION_SHADE();
		static jint GLOBAL_ACTION_HOME();
		static jint GLOBAL_ACTION_KEYCODE_HEADSETHOOK();
		static jint GLOBAL_ACTION_LOCK_SCREEN();
		static jint GLOBAL_ACTION_NOTIFICATIONS();
		static jint GLOBAL_ACTION_POWER_DIALOG();
		static jint GLOBAL_ACTION_QUICK_SETTINGS();
		static jint GLOBAL_ACTION_RECENTS();
		static jint GLOBAL_ACTION_TAKE_SCREENSHOT();
		static jint GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		static jint SHOW_MODE_AUTO();
		static jint SHOW_MODE_HIDDEN();
		static jint SHOW_MODE_IGNORE_HARD_KEYBOARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService(QJniObject obj);
		
		// Constructors
		AccessibilityService();
		
		// Methods
		android::content::Context createDisplayContext(android::view::Display arg0);
		void disableSelf();
		jboolean dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		android::accessibilityservice::AccessibilityButtonController getAccessibilityButtonController();
		android::accessibilityservice::AccessibilityButtonController getAccessibilityButtonController(jint arg0);
		android::accessibilityservice::FingerprintGestureController getFingerprintGestureController();
		android::accessibilityservice::AccessibilityService_MagnificationController getMagnificationController();
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow();
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo();
		android::accessibilityservice::AccessibilityService_SoftKeyboardController getSoftKeyboardController();
		JObject getSystemActions();
		jobject getSystemService(jstring arg0);
		JObject getWindows();
		android::util::SparseArray getWindowsOnAllDisplays();
		void onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		JObject onBind(android::content::Intent arg0);
		jboolean onGesture(android::accessibilityservice::AccessibilityGestureEvent arg0);
		void onInterrupt();
		void onSystemActionsChanged();
		jboolean performGlobalAction(jint arg0);
		void setAccessibilityFocusAppearance(jint arg0, jint arg1);
		void setGestureDetectionPassthroughRegion(jint arg0, android::graphics::Region arg1);
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0);
		void setTouchExplorationPassthroughRegion(jint arg0, android::graphics::Region arg1);
		void takeScreenshot(jint arg0, JObject arg1, JObject arg2);
	};
} // namespace android::accessibilityservice

