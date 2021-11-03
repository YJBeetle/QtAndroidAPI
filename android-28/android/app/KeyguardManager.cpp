#include "./Activity.hpp"
#include "./KeyguardManager_KeyguardDismissCallback.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"
#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./KeyguardManager.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	KeyguardManager::KeyguardManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent KeyguardManager::createConfirmDeviceCredentialIntent(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"createConfirmDeviceCredentialIntent",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void KeyguardManager::exitKeyguardSecurely(JObject arg0) const
	{
		callMethod<void>(
			"exitKeyguardSecurely",
			"(Landroid/app/KeyguardManager$OnKeyguardExitResult;)V",
			arg0.object()
		);
	}
	jboolean KeyguardManager::inKeyguardRestrictedInputMode() const
	{
		return callMethod<jboolean>(
			"inKeyguardRestrictedInputMode",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceLocked() const
	{
		return callMethod<jboolean>(
			"isDeviceLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isDeviceSecure() const
	{
		return callMethod<jboolean>(
			"isDeviceSecure",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardLocked() const
	{
		return callMethod<jboolean>(
			"isKeyguardLocked",
			"()Z"
		);
	}
	jboolean KeyguardManager::isKeyguardSecure() const
	{
		return callMethod<jboolean>(
			"isKeyguardSecure",
			"()Z"
		);
	}
	android::app::KeyguardManager_KeyguardLock KeyguardManager::newKeyguardLock(JString arg0) const
	{
		return callObjectMethod(
			"newKeyguardLock",
			"(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;",
			arg0.object<jstring>()
		);
	}
	void KeyguardManager::requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1) const
	{
		callMethod<void>(
			"requestDismissKeyguard",
			"(Landroid/app/Activity;Landroid/app/KeyguardManager$KeyguardDismissCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

