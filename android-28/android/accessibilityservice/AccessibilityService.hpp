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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		AccessibilityService();
		
		// Methods
		void disableSelf() const;
		jboolean dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2) const;
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0) const;
		android::accessibilityservice::AccessibilityButtonController getAccessibilityButtonController() const;
		android::accessibilityservice::FingerprintGestureController getFingerprintGestureController() const;
		android::accessibilityservice::AccessibilityService_MagnificationController getMagnificationController() const;
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow() const;
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo() const;
		android::accessibilityservice::AccessibilityService_SoftKeyboardController getSoftKeyboardController() const;
		JObject getSystemService(JString arg0) const;
		JObject getWindows() const;
		void onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		void onInterrupt() const;
		jboolean performGlobalAction(jint arg0) const;
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const;
	};
} // namespace android::accessibilityservice

