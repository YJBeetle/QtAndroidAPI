#include "./Activity.hpp"
#include "./KeyguardManager_KeyguardDismissCallback.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"
#include "../content/Intent.hpp"
#include "./KeyguardManager.hpp"

namespace android::app
{
	// Fields
	
	KeyguardManager::KeyguardManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject KeyguardManager::createConfirmDeviceCredentialIntent(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"createConfirmDeviceCredentialIntent",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyguardManager::createConfirmDeviceCredentialIntent(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"createConfirmDeviceCredentialIntent",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void KeyguardManager::exitKeyguardSecurely(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"exitKeyguardSecurely",
			"(Landroid/app/KeyguardManager$OnKeyguardExitResult;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean KeyguardManager::inKeyguardRestrictedInputMode()
	{
		return __thiz.callMethod<jboolean>(
			"inKeyguardRestrictedInputMode",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceSecure()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceSecure",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isKeyguardLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardSecure()
	{
		return __thiz.callMethod<jboolean>(
			"isKeyguardSecure",
			"()Z"
		);
	}
	QAndroidJniObject KeyguardManager::newKeyguardLock(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newKeyguardLock",
			"(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;",
			arg0
		);
	}
	QAndroidJniObject KeyguardManager::newKeyguardLock(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newKeyguardLock",
			"(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyguardManager::requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1)
	{
		__thiz.callMethod<void>(
			"requestDismissKeyguard",
			"(Landroid/app/Activity;Landroid/app/KeyguardManager$KeyguardDismissCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::app

