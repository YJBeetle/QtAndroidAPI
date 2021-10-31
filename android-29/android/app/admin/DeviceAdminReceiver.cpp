#include "./DevicePolicyManager.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./DeviceAdminReceiver.hpp"

namespace android::app::admin
{
	// Fields
	jstring DeviceAdminReceiver::ACTION_CHOOSE_PRIVATE_KEY_ALIAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_CHOOSE_PRIVATE_KEY_ALIAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_DEVICE_ADMIN_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_DISABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_DEVICE_ADMIN_DISABLE_REQUESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_DISABLE_REQUESTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_DEVICE_ADMIN_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_LOCK_TASK_ENTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_LOCK_TASK_ENTERING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_LOCK_TASK_EXITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_LOCK_TASK_EXITING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_NETWORK_LOGS_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_NETWORK_LOGS_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_PASSWORD_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_PASSWORD_EXPIRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_EXPIRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_PASSWORD_FAILED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_FAILED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_PASSWORD_SUCCEEDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_SUCCEEDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::ACTION_PROFILE_PROVISIONING_COMPLETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PROFILE_PROVISIONING_COMPLETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DeviceAdminReceiver::BUGREPORT_FAILURE_FAILED_COMPLETING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminReceiver",
			"BUGREPORT_FAILURE_FAILED_COMPLETING"
		);
	}
	jint DeviceAdminReceiver::BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminReceiver",
			"BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE"
		);
	}
	jstring DeviceAdminReceiver::DEVICE_ADMIN_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"DEVICE_ADMIN_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::EXTRA_DISABLE_WARNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_DISABLE_WARNING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::EXTRA_LOCK_TASK_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_LOCK_TASK_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DeviceAdminReceiver::DeviceAdminReceiver(QAndroidJniObject obj) : android::content::BroadcastReceiver(obj) {}
	
	// Constructors
	DeviceAdminReceiver::DeviceAdminReceiver()
		: android::content::BroadcastReceiver(
			"android.app.admin.DeviceAdminReceiver",
			"()V"
		) {}
	
	// Methods
	android::app::admin::DevicePolicyManager DeviceAdminReceiver::getManager(android::content::Context arg0)
	{
		return callObjectMethod(
			"getManager",
			"(Landroid/content/Context;)Landroid/app/admin/DevicePolicyManager;",
			arg0.object()
		);
	}
	android::content::ComponentName DeviceAdminReceiver::getWho(android::content::Context arg0)
	{
		return callObjectMethod(
			"getWho",
			"(Landroid/content/Context;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	void DeviceAdminReceiver::onBugreportFailed(android::content::Context arg0, android::content::Intent arg1, jint arg2)
	{
		callMethod<void>(
			"onBugreportFailed",
			"(Landroid/content/Context;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onBugreportShared(android::content::Context arg0, android::content::Intent arg1, jstring arg2)
	{
		callMethod<void>(
			"onBugreportShared",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onBugreportSharingDeclined(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onBugreportSharingDeclined",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jstring DeviceAdminReceiver::onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, jstring arg4)
	{
		return callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::onDisableRequested(android::content::Context arg0, android::content::Intent arg1)
	{
		return callObjectMethod(
			"onDisableRequested",
			"(Landroid/content/Context;Landroid/content/Intent;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	void DeviceAdminReceiver::onDisabled(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onEnabled(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onLockTaskModeEntering(android::content::Context arg0, android::content::Intent arg1, jstring arg2)
	{
		callMethod<void>(
			"onLockTaskModeEntering",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onLockTaskModeExiting(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onLockTaskModeExiting",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3)
	{
		callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void DeviceAdminReceiver::onPasswordChanged(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onPasswordChanged(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onPasswordFailed(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onPasswordFailed(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onProfileProvisioningComplete(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onProfileProvisioningComplete",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onReadyForUserInitialization(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onReadyForUserInitialization",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onSecurityLogsAvailable(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onSecurityLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onSystemUpdatePending(android::content::Context arg0, android::content::Intent arg1, jlong arg2)
	{
		callMethod<void>(
			"onSystemUpdatePending",
			"(Landroid/content/Context;Landroid/content/Intent;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onTransferAffiliatedProfileOwnershipComplete(android::content::Context arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onTransferAffiliatedProfileOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onTransferOwnershipComplete(android::content::Context arg0, android::os::PersistableBundle arg1)
	{
		callMethod<void>(
			"onTransferOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DeviceAdminReceiver::onUserAdded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onUserAdded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onUserRemoved(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onUserRemoved",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onUserStarted(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onUserStarted",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onUserStopped(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onUserStopped",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DeviceAdminReceiver::onUserSwitched(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onUserSwitched",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app::admin

