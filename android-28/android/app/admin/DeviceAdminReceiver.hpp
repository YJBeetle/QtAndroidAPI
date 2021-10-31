#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/BroadcastReceiver.hpp"

namespace android::app::admin
{
	class DevicePolicyManager;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class UserHandle;
}

namespace android::app::admin
{
	class DeviceAdminReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		static jstring ACTION_DEVICE_ADMIN_DISABLED();
		static jstring ACTION_DEVICE_ADMIN_DISABLE_REQUESTED();
		static jstring ACTION_DEVICE_ADMIN_ENABLED();
		static jstring ACTION_LOCK_TASK_ENTERING();
		static jstring ACTION_LOCK_TASK_EXITING();
		static jstring ACTION_PASSWORD_CHANGED();
		static jstring ACTION_PASSWORD_EXPIRING();
		static jstring ACTION_PASSWORD_FAILED();
		static jstring ACTION_PASSWORD_SUCCEEDED();
		static jstring ACTION_PROFILE_PROVISIONING_COMPLETE();
		static jint BUGREPORT_FAILURE_FAILED_COMPLETING();
		static jint BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE();
		static jstring DEVICE_ADMIN_META_DATA();
		static jstring EXTRA_DISABLE_WARNING();
		static jstring EXTRA_LOCK_TASK_PACKAGE();
		static jstring EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceAdminReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminReceiver(QJniObject obj);
		
		// Constructors
		DeviceAdminReceiver();
		
		// Methods
		android::app::admin::DevicePolicyManager getManager(android::content::Context arg0);
		android::content::ComponentName getWho(android::content::Context arg0);
		void onBugreportFailed(android::content::Context arg0, android::content::Intent arg1, jint arg2);
		void onBugreportShared(android::content::Context arg0, android::content::Intent arg1, jstring arg2);
		void onBugreportSharingDeclined(android::content::Context arg0, android::content::Intent arg1);
		jstring onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, jstring arg4);
		jstring onDisableRequested(android::content::Context arg0, android::content::Intent arg1);
		void onDisabled(android::content::Context arg0, android::content::Intent arg1);
		void onEnabled(android::content::Context arg0, android::content::Intent arg1);
		void onLockTaskModeEntering(android::content::Context arg0, android::content::Intent arg1, jstring arg2);
		void onLockTaskModeExiting(android::content::Context arg0, android::content::Intent arg1);
		void onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3);
		void onPasswordChanged(android::content::Context arg0, android::content::Intent arg1);
		void onPasswordChanged(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1);
		void onPasswordExpiring(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onPasswordFailed(android::content::Context arg0, android::content::Intent arg1);
		void onPasswordFailed(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1);
		void onPasswordSucceeded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onProfileProvisioningComplete(android::content::Context arg0, android::content::Intent arg1);
		void onReadyForUserInitialization(android::content::Context arg0, android::content::Intent arg1);
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onSecurityLogsAvailable(android::content::Context arg0, android::content::Intent arg1);
		void onSystemUpdatePending(android::content::Context arg0, android::content::Intent arg1, jlong arg2);
		void onTransferAffiliatedProfileOwnershipComplete(android::content::Context arg0, android::os::UserHandle arg1);
		void onTransferOwnershipComplete(android::content::Context arg0, android::os::PersistableBundle arg1);
		void onUserAdded(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onUserRemoved(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onUserStarted(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onUserStopped(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
		void onUserSwitched(android::content::Context arg0, android::content::Intent arg1, android::os::UserHandle arg2);
	};
} // namespace android::app::admin

