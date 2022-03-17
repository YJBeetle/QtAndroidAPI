#pragma once

#include "./DevicePolicyManager.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DeviceAdminReceiver.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JString DeviceAdminReceiver::ACTION_DEVICE_ADMIN_DISABLED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_DISABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_DEVICE_ADMIN_DISABLE_REQUESTED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_DISABLE_REQUESTED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_DEVICE_ADMIN_ENABLED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_DEVICE_ADMIN_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_LOCK_TASK_ENTERING()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_LOCK_TASK_ENTERING",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_LOCK_TASK_EXITING()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_LOCK_TASK_EXITING",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_PASSWORD_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_PASSWORD_EXPIRING()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_EXPIRING",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_PASSWORD_FAILED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_FAILED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_PASSWORD_SUCCEEDED()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PASSWORD_SUCCEEDED",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::ACTION_PROFILE_PROVISIONING_COMPLETE()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"ACTION_PROFILE_PROVISIONING_COMPLETE",
			"Ljava/lang/String;"
		);
	}
	inline jint DeviceAdminReceiver::BUGREPORT_FAILURE_FAILED_COMPLETING()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminReceiver",
			"BUGREPORT_FAILURE_FAILED_COMPLETING"
		);
	}
	inline jint DeviceAdminReceiver::BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminReceiver",
			"BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE"
		);
	}
	inline JString DeviceAdminReceiver::DEVICE_ADMIN_META_DATA()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"DEVICE_ADMIN_META_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::EXTRA_DISABLE_WARNING()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_DISABLE_WARNING",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::EXTRA_LOCK_TASK_PACKAGE()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_LOCK_TASK_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminReceiver::EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminReceiver",
			"EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline DeviceAdminReceiver::DeviceAdminReceiver()
		: android::content::BroadcastReceiver(
			"android.app.admin.DeviceAdminReceiver",
			"()V"
		) {}
	
	// Methods
	inline android::app::admin::DevicePolicyManager DeviceAdminReceiver::getManager(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getManager",
			"(Landroid/content/Context;)Landroid/app/admin/DevicePolicyManager;",
			arg0.object()
		);
	}
	inline android::content::ComponentName DeviceAdminReceiver::getWho(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getWho",
			"(Landroid/content/Context;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	inline void DeviceAdminReceiver::onBugreportFailed(android::content::Context arg0, android::content::Intent arg1, jint arg2) const
	{
		callMethod<void>(
			"onBugreportFailed",
			"(Landroid/content/Context;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void DeviceAdminReceiver::onBugreportShared(android::content::Context arg0, android::content::Intent arg1, JString arg2) const
	{
		callMethod<void>(
			"onBugreportShared",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DeviceAdminReceiver::onBugreportSharingDeclined(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onBugreportSharingDeclined",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString DeviceAdminReceiver::onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, JString arg4) const
	{
		return callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object<jstring>()
		);
	}
	inline JString DeviceAdminReceiver::onDisableRequested(android::content::Context arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"onDisableRequested",
			"(Landroid/content/Context;Landroid/content/Intent;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onDisabled(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onEnabled(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onLockTaskModeEntering(android::content::Context arg0, android::content::Intent arg1, JString arg2) const
	{
		callMethod<void>(
			"onLockTaskModeEntering",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DeviceAdminReceiver::onLockTaskModeExiting(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onLockTaskModeExiting",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3) const
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
	inline void DeviceAdminReceiver::onPasswordChanged(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordChanged(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordFailed(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordFailed(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onProfileProvisioningComplete(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onProfileProvisioningComplete",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onReadyForUserInitialization(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReadyForUserInitialization",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onSecurityLogsAvailable(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onSecurityLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onSystemUpdatePending(android::content::Context arg0, android::content::Intent arg1, jlong arg2) const
	{
		callMethod<void>(
			"onSystemUpdatePending",
			"(Landroid/content/Context;Landroid/content/Intent;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void DeviceAdminReceiver::onTransferAffiliatedProfileOwnershipComplete(android::content::Context arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onTransferAffiliatedProfileOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onTransferOwnershipComplete(android::content::Context arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onTransferOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceAdminReceiver::onUserAdded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onUserAdded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onUserRemoved(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onUserRemoved",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onUserStarted(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onUserStarted",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onUserStopped(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onUserStopped",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DeviceAdminReceiver::onUserSwitched(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2) const
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

// Base class headers
#include "../../content/BroadcastReceiver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
