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
	
	// QJniObject forward
	KeyguardManager::KeyguardManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent KeyguardManager::createConfirmDeviceCredentialIntent(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"createConfirmDeviceCredentialIntent",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void KeyguardManager::exitKeyguardSecurely(JObject arg0)
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
	android::app::KeyguardManager_KeyguardLock KeyguardManager::newKeyguardLock(JString arg0)
	{
		return callObjectMethod(
			"newKeyguardLock",
			"(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;",
			arg0.object<jstring>()
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

