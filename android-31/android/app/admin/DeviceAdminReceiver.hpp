#pragma once

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
class JString;
class JString;

namespace android::app::admin
{
	class DeviceAdminReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		static JString ACTION_CHOOSE_PRIVATE_KEY_ALIAS();
		static JString ACTION_DEVICE_ADMIN_DISABLED();
		static JString ACTION_DEVICE_ADMIN_DISABLE_REQUESTED();
		static JString ACTION_DEVICE_ADMIN_ENABLED();
		static JString ACTION_LOCK_TASK_ENTERING();
		static JString ACTION_LOCK_TASK_EXITING();
		static JString ACTION_NETWORK_LOGS_AVAILABLE();
		static JString ACTION_PASSWORD_CHANGED();
		static JString ACTION_PASSWORD_EXPIRING();
		static JString ACTION_PASSWORD_FAILED();
		static JString ACTION_PASSWORD_SUCCEEDED();
		static JString ACTION_PROFILE_PROVISIONING_COMPLETE();
		static JString ACTION_SECURITY_LOGS_AVAILABLE();
		static jint BUGREPORT_FAILURE_FAILED_COMPLETING();
		static jint BUGREPORT_FAILURE_FILE_NO_LONGER_AVAILABLE();
		static JString DEVICE_ADMIN_META_DATA();
		static JString EXTRA_DISABLE_WARNING();
		static JString EXTRA_LOCK_TASK_PACKAGE();
		static JString EXTRA_TRANSFER_OWNERSHIP_ADMIN_EXTRAS_BUNDLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeviceAdminReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminReceiver(QAndroidJniObject obj);
		
		// Constructors
		DeviceAdminReceiver();
		
		// Methods
		android::app::admin::DevicePolicyManager getManager(android::content::Context arg0);
		android::content::ComponentName getWho(android::content::Context arg0);
		void onBugreportFailed(android::content::Context arg0, android::content::Intent arg1, jint arg2);
		void onBugreportShared(android::content::Context arg0, android::content::Intent arg1, JString arg2);
		void onBugreportSharingDeclined(android::content::Context arg0, android::content::Intent arg1);
		JString onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, JString arg4);
		void onComplianceAcknowledgementRequired(android::content::Context arg0, android::content::Intent arg1);
		JString onDisableRequested(android::content::Context arg0, android::content::Intent arg1);
		void onDisabled(android::content::Context arg0, android::content::Intent arg1);
		void onEnabled(android::content::Context arg0, android::content::Intent arg1);
		void onLockTaskModeEntering(android::content::Context arg0, android::content::Intent arg1, JString arg2);
		void onLockTaskModeExiting(android::content::Context arg0, android::content::Intent arg1);
		void onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3);
		void onOperationSafetyStateChanged(android::content::Context arg0, jint arg1, jboolean arg2);
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

