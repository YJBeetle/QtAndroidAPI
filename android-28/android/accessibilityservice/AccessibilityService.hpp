#pragma once

#include "../app/Service.hpp"

namespace android::accessibilityservice
{
	class AccessibilityButtonController;
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
	class Intent;
}
namespace android::os
{
	class Handler;
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
class JObject;
class JString;

namespace android::accessibilityservice
{
	class AccessibilityService : public android::app::Service
	{
	public:
		// Fields
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
		static jint GLOBAL_ACTION_BACK();
		static jint GLOBAL_ACTION_HOME();
		static jint GLOBAL_ACTION_LOCK_SCREEN();
		static jint GLOBAL_ACTION_NOTIFICATIONS();
		static jint GLOBAL_ACTION_POWER_DIALOG();
		static jint GLOBAL_ACTION_QUICK_SETTINGS();
		static jint GLOBAL_ACTION_RECENTS();
		static jint GLOBAL_ACTION_TAKE_SCREENSHOT();
		static jint GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		static jint SHOW_MODE_AUTO();
		static jint SHOW_MODE_HIDDEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService(QJniObject obj);
		
		// Constructors
		AccessibilityService();
		
		// Methods
		void disableSelf();
		jboolean dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		android::accessibilityservice::AccessibilityButtonController getAccessibilityButtonController();
		android::accessibilityservice::FingerprintGestureController getFingerprintGestureController();
		android::accessibilityservice::AccessibilityService_MagnificationController getMagnificationController();
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow();
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo();
		android::accessibilityservice::AccessibilityService_SoftKeyboardController getSoftKeyboardController();
		JObject getSystemService(JString arg0);
		JObject getWindows();
		void onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		JObject onBind(android::content::Intent arg0);
		void onInterrupt();
		jboolean performGlobalAction(jint arg0);
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0);
	};
} // namespace android::accessibilityservice

