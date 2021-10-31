#include "./Activity.hpp"
#include "./KeyguardManager_KeyguardDismissCallback.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"
#include "../content/Intent.hpp"
#include "./KeyguardManager.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	KeyguardManager::KeyguardManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject KeyguardManager::createConfirmDeviceCredentialIntent(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"createConfirmDeviceCredentialIntent",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	void KeyguardManager::exitKeyguardSecurely(__JniBaseClass arg0)
	{
		callMethod<void>(
			"exitKeyguardSecurely",
			"(Landroid/app/KeyguardManager$OnKeyguardExitResult;)V",
			arg0.object()
		);
	}
	jboolean KeyguardManager::inKeyguardRestrictedInputMode()
	{
		return callMethod<jboolean>(
			"inKeyguardRestrictedInputMode",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceLocked()
	{
		return callMethod<jboolean>(
			"isDeviceLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceSecure()
	{
		return callMethod<jboolean>(
			"isDeviceSecure",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardLocked()
	{
		return callMethod<jboolean>(
			"isKeyguardLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardSecure()
	{
		return callMethod<jboolean>(
			"isKeyguardSecure",
			"()Z"
		);
	}
	QAndroidJniObject KeyguardManager::newKeyguardLock(jstring arg0)
	{
		return callObjectMethod(
			"newKeyguardLock",
			"(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;",
			arg0
		);
	}
	void KeyguardManager::requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1)
	{
		callMethod<void>(
			"requestDismissKeyguard",
			"(Landroid/app/Activity;Landroid/app/KeyguardManager$KeyguardDismissCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

