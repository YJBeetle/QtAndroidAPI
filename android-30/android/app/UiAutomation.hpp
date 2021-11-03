#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class AccessibilityServiceInfo;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::os
{
	class UserHandle;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class InputEvent;
}
namespace android::view
{
	class WindowAnimationFrameStats;
}
namespace android::view
{
	class WindowContentFrameStats;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::app
{
	class UiAutomation : public JObject
	{
	public:
		// Fields
		static jint FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES();
		static jint ROTATION_FREEZE_0();
		static jint ROTATION_FREEZE_180();
		static jint ROTATION_FREEZE_270();
		static jint ROTATION_FREEZE_90();
		static jint ROTATION_FREEZE_CURRENT();
		static jint ROTATION_UNFREEZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit UiAutomation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiAutomation(QJniObject obj);
		
		// Constructors
		
		// Methods
		void adoptShellPermissionIdentity();
		void adoptShellPermissionIdentity(jarray arg0);
		void clearWindowAnimationFrameStats();
		jboolean clearWindowContentFrameStats(jint arg0);
		void dropShellPermissionIdentity();
		android::view::accessibility::AccessibilityEvent executeAndWaitForEvent(JObject arg0, JObject arg1, jlong arg2);
		android::os::ParcelFileDescriptor executeShellCommand(jstring arg0);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow();
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo();
		android::view::WindowAnimationFrameStats getWindowAnimationFrameStats();
		android::view::WindowContentFrameStats getWindowContentFrameStats(jint arg0);
		JObject getWindows();
		android::util::SparseArray getWindowsOnAllDisplays();
		void grantRuntimePermission(jstring arg0, jstring arg1);
		void grantRuntimePermissionAsUser(jstring arg0, jstring arg1, android::os::UserHandle arg2);
		jboolean injectInputEvent(android::view::InputEvent arg0, jboolean arg1);
		jboolean performGlobalAction(jint arg0);
		void revokeRuntimePermission(jstring arg0, jstring arg1);
		void revokeRuntimePermissionAsUser(jstring arg0, jstring arg1, android::os::UserHandle arg2);
		void setOnAccessibilityEventListener(JObject arg0);
		jboolean setRotation(jint arg0);
		void setRunAsMonkey(jboolean arg0);
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0);
		android::graphics::Bitmap takeScreenshot();
		jstring toString();
		void waitForIdle(jlong arg0, jlong arg1);
	};
} // namespace android::app

