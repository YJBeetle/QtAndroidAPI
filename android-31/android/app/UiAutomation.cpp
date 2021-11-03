#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../accessibilityservice/AccessibilityServiceInfo.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../os/UserHandle.hpp"
#include "../util/SparseArray.hpp"
#include "../view/InputEvent.hpp"
#include "../view/WindowAnimationFrameStats.hpp"
#include "../view/WindowContentFrameStats.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../../JString.hpp"
#include "./UiAutomation.hpp"

namespace android::app
{
	// Fields
	jint UiAutomation::FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES"
		);
	}
	jint UiAutomation::FLAG_DONT_USE_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"FLAG_DONT_USE_ACCESSIBILITY"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_0()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_0"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_180()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_180"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_270()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_270"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_90()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_90"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_CURRENT"
		);
	}
	jint UiAutomation::ROTATION_UNFREEZE()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_UNFREEZE"
		);
	}
	
	// QJniObject forward
	UiAutomation::UiAutomation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void UiAutomation::adoptShellPermissionIdentity() const
	{
		callMethod<void>(
			"adoptShellPermissionIdentity",
			"()V"
		);
	}
	void UiAutomation::adoptShellPermissionIdentity(JArray arg0) const
	{
		callMethod<void>(
			"adoptShellPermissionIdentity",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void UiAutomation::clearWindowAnimationFrameStats() const
	{
		callMethod<void>(
			"clearWindowAnimationFrameStats",
			"()V"
		);
	}
	jboolean UiAutomation::clearWindowContentFrameStats(jint arg0) const
	{
		return callMethod<jboolean>(
			"clearWindowContentFrameStats",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::dropShellPermissionIdentity() const
	{
		callMethod<void>(
			"dropShellPermissionIdentity",
			"()V"
		);
	}
	android::view::accessibility::AccessibilityEvent UiAutomation::executeAndWaitForEvent(JObject arg0, JObject arg1, jlong arg2) const
	{
		return callObjectMethod(
			"executeAndWaitForEvent",
			"(Ljava/lang/Runnable;Landroid/app/UiAutomation$AccessibilityEventFilter;J)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::os::ParcelFileDescriptor UiAutomation::executeShellCommand(JString arg0) const
	{
		return callObjectMethod(
			"executeShellCommand",
			"(Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object<jstring>()
		);
	}
	JArray UiAutomation::executeShellCommandRw(JString arg0) const
	{
		return callObjectMethod(
			"executeShellCommandRw",
			"(Ljava/lang/String;)[Landroid/os/ParcelFileDescriptor;",
			arg0.object<jstring>()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo UiAutomation::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	android::view::accessibility::AccessibilityNodeInfo UiAutomation::getRootInActiveWindow() const
	{
		return callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::accessibilityservice::AccessibilityServiceInfo UiAutomation::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	android::view::WindowAnimationFrameStats UiAutomation::getWindowAnimationFrameStats() const
	{
		return callObjectMethod(
			"getWindowAnimationFrameStats",
			"()Landroid/view/WindowAnimationFrameStats;"
		);
	}
	android::view::WindowContentFrameStats UiAutomation::getWindowContentFrameStats(jint arg0) const
	{
		return callObjectMethod(
			"getWindowContentFrameStats",
			"(I)Landroid/view/WindowContentFrameStats;",
			arg0
		);
	}
	JObject UiAutomation::getWindows() const
	{
		return callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	android::util::SparseArray UiAutomation::getWindowsOnAllDisplays() const
	{
		return callObjectMethod(
			"getWindowsOnAllDisplays",
			"()Landroid/util/SparseArray;"
		);
	}
	void UiAutomation::grantRuntimePermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"grantRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void UiAutomation::grantRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jboolean UiAutomation::injectInputEvent(android::view::InputEvent arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;Z)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean UiAutomation::performGlobalAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::revokeRuntimePermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"revokeRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void UiAutomation::revokeRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void UiAutomation::setOnAccessibilityEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnAccessibilityEventListener",
			"(Landroid/app/UiAutomation$OnAccessibilityEventListener;)V",
			arg0.object()
		);
	}
	jboolean UiAutomation::setRotation(jint arg0) const
	{
		return callMethod<jboolean>(
			"setRotation",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::setRunAsMonkey(jboolean arg0) const
	{
		callMethod<void>(
			"setRunAsMonkey",
			"(Z)V",
			arg0
		);
	}
	void UiAutomation::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const
	{
		callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.object()
		);
	}
	android::graphics::Bitmap UiAutomation::takeScreenshot() const
	{
		return callObjectMethod(
			"takeScreenshot",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString UiAutomation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UiAutomation::waitForIdle(jlong arg0, jlong arg1) const
	{
		callMethod<void>(
			"waitForIdle",
			"(JJ)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

