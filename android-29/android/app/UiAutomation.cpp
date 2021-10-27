#include "../accessibilityservice/AccessibilityServiceInfo.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../os/UserHandle.hpp"
#include "../view/InputEvent.hpp"
#include "../view/WindowAnimationFrameStats.hpp"
#include "../view/WindowContentFrameStats.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "./UiAutomation.hpp"

namespace android::app
{
	// Fields
	jint UiAutomation::FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_0"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_180()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_180"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_270()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_270"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_90()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_90"
		);
	}
	jint UiAutomation::ROTATION_FREEZE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_FREEZE_CURRENT"
		);
	}
	jint UiAutomation::ROTATION_UNFREEZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiAutomation",
			"ROTATION_UNFREEZE"
		);
	}
	
	UiAutomation::UiAutomation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void UiAutomation::adoptShellPermissionIdentity()
	{
		__thiz.callMethod<void>(
			"adoptShellPermissionIdentity",
			"()V"
		);
	}
	void UiAutomation::adoptShellPermissionIdentity(jarray arg0)
	{
		__thiz.callMethod<void>(
			"adoptShellPermissionIdentity",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void UiAutomation::clearWindowAnimationFrameStats()
	{
		__thiz.callMethod<void>(
			"clearWindowAnimationFrameStats",
			"()V"
		);
	}
	jboolean UiAutomation::clearWindowContentFrameStats(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clearWindowContentFrameStats",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::dropShellPermissionIdentity()
	{
		__thiz.callMethod<void>(
			"dropShellPermissionIdentity",
			"()V"
		);
	}
	QAndroidJniObject UiAutomation::executeAndWaitForEvent(__JniBaseClass arg0, __JniBaseClass arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"executeAndWaitForEvent",
			"(Ljava/lang/Runnable;Landroid/app/UiAutomation$AccessibilityEventFilter;J)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject UiAutomation::executeShellCommand(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"executeShellCommand",
			"(Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	QAndroidJniObject UiAutomation::executeShellCommand(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"executeShellCommand",
			"(Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject UiAutomation::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject UiAutomation::getRootInActiveWindow()
	{
		return __thiz.callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject UiAutomation::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	QAndroidJniObject UiAutomation::getWindowAnimationFrameStats()
	{
		return __thiz.callObjectMethod(
			"getWindowAnimationFrameStats",
			"()Landroid/view/WindowAnimationFrameStats;"
		);
	}
	QAndroidJniObject UiAutomation::getWindowContentFrameStats(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getWindowContentFrameStats",
			"(I)Landroid/view/WindowContentFrameStats;",
			arg0
		);
	}
	QAndroidJniObject UiAutomation::getWindows()
	{
		return __thiz.callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	void UiAutomation::grantRuntimePermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void UiAutomation::grantRuntimePermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void UiAutomation::grantRuntimePermissionAsUser(jstring arg0, jstring arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void UiAutomation::grantRuntimePermissionAsUser(const QString &arg0, const QString &arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jboolean UiAutomation::injectInputEvent(android::view::InputEvent arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean UiAutomation::performGlobalAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::revokeRuntimePermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void UiAutomation::revokeRuntimePermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void UiAutomation::revokeRuntimePermissionAsUser(jstring arg0, jstring arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void UiAutomation::revokeRuntimePermissionAsUser(const QString &arg0, const QString &arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void UiAutomation::setOnAccessibilityEventListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnAccessibilityEventListener",
			"(Landroid/app/UiAutomation$OnAccessibilityEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean UiAutomation::setRotation(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotation",
			"(I)Z",
			arg0
		);
	}
	void UiAutomation::setRunAsMonkey(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRunAsMonkey",
			"(Z)V",
			arg0
		);
	}
	void UiAutomation::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0)
	{
		__thiz.callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UiAutomation::takeScreenshot()
	{
		return __thiz.callObjectMethod(
			"takeScreenshot",
			"()Landroid/graphics/Bitmap;"
		);
	}
	void UiAutomation::waitForIdle(jlong arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"waitForIdle",
			"(JJ)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

