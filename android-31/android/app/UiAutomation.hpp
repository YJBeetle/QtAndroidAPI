#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
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
class JString;

namespace android::app
{
	class UiAutomation : public JObject
	{
	public:
		// Fields
		static jint FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES();
		static jint FLAG_DONT_USE_ACCESSIBILITY();
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
		void adoptShellPermissionIdentity(JArray arg0);
		void clearWindowAnimationFrameStats();
		jboolean clearWindowContentFrameStats(jint arg0);
		void dropShellPermissionIdentity();
		android::view::accessibility::AccessibilityEvent executeAndWaitForEvent(JObject arg0, JObject arg1, jlong arg2);
		android::os::ParcelFileDescriptor executeShellCommand(JString arg0);
		JArray executeShellCommandRw(JString arg0);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow();
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo();
		android::view::WindowAnimationFrameStats getWindowAnimationFrameStats();
		android::view::WindowContentFrameStats getWindowContentFrameStats(jint arg0);
		JObject getWindows();
		android::util::SparseArray getWindowsOnAllDisplays();
		void grantRuntimePermission(JString arg0, JString arg1);
		void grantRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2);
		jboolean injectInputEvent(android::view::InputEvent arg0, jboolean arg1);
		jboolean performGlobalAction(jint arg0);
		void revokeRuntimePermission(JString arg0, JString arg1);
		void revokeRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2);
		void setOnAccessibilityEventListener(JObject arg0);
		jboolean setRotation(jint arg0);
		void setRunAsMonkey(jboolean arg0);
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0);
		android::graphics::Bitmap takeScreenshot();
		JString toString();
		void waitForIdle(jlong arg0, jlong arg1);
	};
} // namespace android::app

