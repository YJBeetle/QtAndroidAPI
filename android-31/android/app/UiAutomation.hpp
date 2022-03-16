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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UiAutomation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiAutomation(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void adoptShellPermissionIdentity() const;
		void adoptShellPermissionIdentity(JArray arg0) const;
		void clearWindowAnimationFrameStats() const;
		jboolean clearWindowContentFrameStats(jint arg0) const;
		void dropShellPermissionIdentity() const;
		android::view::accessibility::AccessibilityEvent executeAndWaitForEvent(JObject arg0, JObject arg1, jlong arg2) const;
		android::os::ParcelFileDescriptor executeShellCommand(JString arg0) const;
		JArray executeShellCommandRw(JString arg0) const;
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo getRootInActiveWindow() const;
		android::accessibilityservice::AccessibilityServiceInfo getServiceInfo() const;
		android::view::WindowAnimationFrameStats getWindowAnimationFrameStats() const;
		android::view::WindowContentFrameStats getWindowContentFrameStats(jint arg0) const;
		JObject getWindows() const;
		android::util::SparseArray getWindowsOnAllDisplays() const;
		void grantRuntimePermission(JString arg0, JString arg1) const;
		void grantRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const;
		jboolean injectInputEvent(android::view::InputEvent arg0, jboolean arg1) const;
		jboolean performGlobalAction(jint arg0) const;
		void revokeRuntimePermission(JString arg0, JString arg1) const;
		void revokeRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const;
		void setOnAccessibilityEventListener(JObject arg0) const;
		jboolean setRotation(jint arg0) const;
		void setRunAsMonkey(jboolean arg0) const;
		void setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const;
		android::graphics::Bitmap takeScreenshot() const;
		JString toString() const;
		void waitForIdle(jlong arg0, jlong arg1) const;
	};
} // namespace android::app

