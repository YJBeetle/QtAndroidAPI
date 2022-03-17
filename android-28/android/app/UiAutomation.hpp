#pragma once

#include "../accessibilityservice/AccessibilityServiceInfo.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../view/InputEvent.def.hpp"
#include "../view/WindowAnimationFrameStats.def.hpp"
#include "../view/WindowContentFrameStats.def.hpp"
#include "../view/accessibility/AccessibilityEvent.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../../JString.hpp"
#include "./UiAutomation.def.hpp"

namespace android::app
{
	// Fields
	inline jint UiAutomation::FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES"
		);
	}
	inline jint UiAutomation::ROTATION_FREEZE_0()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_0"
		);
	}
	inline jint UiAutomation::ROTATION_FREEZE_180()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_180"
		);
	}
	inline jint UiAutomation::ROTATION_FREEZE_270()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_270"
		);
	}
	inline jint UiAutomation::ROTATION_FREEZE_90()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_90"
		);
	}
	inline jint UiAutomation::ROTATION_FREEZE_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_CURRENT"
		);
	}
	inline jint UiAutomation::ROTATION_UNFREEZE()
	{
		return getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_UNFREEZE"
		);
	}
	
	// Constructors
	
	// Methods
	inline void UiAutomation::clearWindowAnimationFrameStats() const
	{
		callMethod<void>(
			"clearWindowAnimationFrameStats",
			"()V"
		);
	}
	inline jboolean UiAutomation::clearWindowContentFrameStats(jint arg0) const
	{
		return callMethod<jboolean>(
			"clearWindowContentFrameStats",
			"(I)Z",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityEvent UiAutomation::executeAndWaitForEvent(JObject arg0, JObject arg1, jlong arg2) const
	{
		return callObjectMethod(
			"executeAndWaitForEvent",
			"(Ljava/lang/Runnable;Landroid/app/UiAutomation$AccessibilityEventFilter;J)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::os::ParcelFileDescriptor UiAutomation::executeShellCommand(JString arg0) const
	{
		return callObjectMethod(
			"executeShellCommand",
			"(Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object<jstring>()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo UiAutomation::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo UiAutomation::getRootInActiveWindow() const
	{
		return callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::accessibilityservice::AccessibilityServiceInfo UiAutomation::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	inline android::view::WindowAnimationFrameStats UiAutomation::getWindowAnimationFrameStats() const
	{
		return callObjectMethod(
			"getWindowAnimationFrameStats",
			"()Landroid/view/WindowAnimationFrameStats;"
		);
	}
	inline android::view::WindowContentFrameStats UiAutomation::getWindowContentFrameStats(jint arg0) const
	{
		return callObjectMethod(
			"getWindowContentFrameStats",
			"(I)Landroid/view/WindowContentFrameStats;",
			arg0
		);
	}
	inline JObject UiAutomation::getWindows() const
	{
		return callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	inline void UiAutomation::grantRuntimePermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"grantRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void UiAutomation::grantRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jboolean UiAutomation::injectInputEvent(android::view::InputEvent arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean UiAutomation::performGlobalAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	inline void UiAutomation::revokeRuntimePermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"revokeRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void UiAutomation::revokeRuntimePermissionAsUser(JString arg0, JString arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void UiAutomation::setOnAccessibilityEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnAccessibilityEventListener",
			"(Landroid/app/UiAutomation$OnAccessibilityEventListener;)V",
			arg0.object()
		);
	}
	inline jboolean UiAutomation::setRotation(jint arg0) const
	{
		return callMethod<jboolean>(
			"setRotation",
			"(I)Z",
			arg0
		);
	}
	inline void UiAutomation::setRunAsMonkey(jboolean arg0) const
	{
		callMethod<void>(
			"setRunAsMonkey",
			"(Z)V",
			arg0
		);
	}
	inline void UiAutomation::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0) const
	{
		callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.object()
		);
	}
	inline android::graphics::Bitmap UiAutomation::takeScreenshot() const
	{
		return callObjectMethod(
			"takeScreenshot",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline void UiAutomation::waitForIdle(jlong arg0, jlong arg1) const
	{
		callMethod<void>(
			"waitForIdle",
			"(JJ)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
