#pragma once

#ifndef ANDROID_APP_UIAUTOMATION
#define ANDROID_APP_UIAUTOMATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::view
{
	class InputEvent;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityServiceInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::view
{
	class WindowContentFrameStats;
}
namespace __jni_impl::android::view
{
	class WindowAnimationFrameStats;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::app
{
	class UiAutomation : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject findFocus(jint arg0);
		jboolean setRotation(jint arg0);
		jboolean injectInputEvent(__jni_impl::android::view::InputEvent arg0, jboolean arg1);
		void setOnAccessibilityEventListener(__jni_impl::__JniBaseClass arg0);
		void adoptShellPermissionIdentity();
		void adoptShellPermissionIdentity(jarray arg0);
		void dropShellPermissionIdentity();
		jboolean performGlobalAction(jint arg0);
		void setServiceInfo(__jni_impl::android::accessibilityservice::AccessibilityServiceInfo arg0);
		QAndroidJniObject getWindows();
		QAndroidJniObject getRootInActiveWindow();
		QAndroidJniObject executeAndWaitForEvent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void waitForIdle(jlong arg0, jlong arg1);
		QAndroidJniObject takeScreenshot();
		void setRunAsMonkey(jboolean arg0);
		jboolean clearWindowContentFrameStats(jint arg0);
		QAndroidJniObject getWindowContentFrameStats(jint arg0);
		void clearWindowAnimationFrameStats();
		QAndroidJniObject getWindowAnimationFrameStats();
		void grantRuntimePermission(jstring arg0, jstring arg1);
		void grantRuntimePermission(const QString &arg0, const QString &arg1);
		void grantRuntimePermissionAsUser(jstring arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2);
		void grantRuntimePermissionAsUser(const QString &arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2);
		void revokeRuntimePermission(jstring arg0, jstring arg1);
		void revokeRuntimePermission(const QString &arg0, const QString &arg1);
		void revokeRuntimePermissionAsUser(jstring arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2);
		void revokeRuntimePermissionAsUser(const QString &arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2);
		QAndroidJniObject executeShellCommand(jstring arg0);
		QAndroidJniObject executeShellCommand(const QString &arg0);
		QAndroidJniObject getServiceInfo();
	};
} // namespace __jni_impl::android::app

#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../view/InputEvent.hpp"
#include "../accessibilityservice/AccessibilityServiceInfo.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../graphics/Bitmap.hpp"
#include "../view/WindowContentFrameStats.hpp"
#include "../view/WindowAnimationFrameStats.hpp"
#include "../os/UserHandle.hpp"
#include "../os/ParcelFileDescriptor.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void UiAutomation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.UiAutomation",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UiAutomation::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
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
	jboolean UiAutomation::injectInputEvent(__jni_impl::android::view::InputEvent arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void UiAutomation::setOnAccessibilityEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnAccessibilityEventListener",
			"(Landroid/app/UiAutomation$OnAccessibilityEventListener;)V",
			arg0.__jniObject().object()
		);
	}
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
	void UiAutomation::dropShellPermissionIdentity()
	{
		__thiz.callMethod<void>(
			"dropShellPermissionIdentity",
			"()V"
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
	void UiAutomation::setServiceInfo(__jni_impl::android::accessibilityservice::AccessibilityServiceInfo arg0)
	{
		__thiz.callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UiAutomation::getWindows()
	{
		return __thiz.callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject UiAutomation::getRootInActiveWindow()
	{
		return __thiz.callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject UiAutomation::executeAndWaitForEvent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"executeAndWaitForEvent",
			"(Ljava/lang/Runnable;Landroid/app/UiAutomation$AccessibilityEventFilter;J)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
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
	QAndroidJniObject UiAutomation::takeScreenshot()
	{
		return __thiz.callObjectMethod(
			"takeScreenshot",
			"()Landroid/graphics/Bitmap;"
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
	jboolean UiAutomation::clearWindowContentFrameStats(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clearWindowContentFrameStats",
			"(I)Z",
			arg0
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
	void UiAutomation::clearWindowAnimationFrameStats()
	{
		__thiz.callMethod<void>(
			"clearWindowAnimationFrameStats",
			"()V"
		);
	}
	QAndroidJniObject UiAutomation::getWindowAnimationFrameStats()
	{
		return __thiz.callObjectMethod(
			"getWindowAnimationFrameStats",
			"()Landroid/view/WindowAnimationFrameStats;"
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
	void UiAutomation::grantRuntimePermissionAsUser(jstring arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void UiAutomation::grantRuntimePermissionAsUser(const QString &arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"grantRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
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
	void UiAutomation::revokeRuntimePermissionAsUser(jstring arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void UiAutomation::revokeRuntimePermissionAsUser(const QString &arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"revokeRuntimePermissionAsUser",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
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
	QAndroidJniObject UiAutomation::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class UiAutomation : public __jni_impl::android::app::UiAutomation
	{
	public:
		UiAutomation(QAndroidJniObject obj) { __thiz = obj; }
		UiAutomation()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_UIAUTOMATION

