#pragma once

#ifndef ANDROID_APP_ADMIN_DEVICEADMINRECEIVER
#define ANDROID_APP_ADMIN_DEVICEADMINRECEIVER

#include "../../../__JniBaseClass.hpp"
#include "../../content/BroadcastReceiver.hpp"

namespace __jni_impl::android::app::admin
{
	class DevicePolicyManager;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app::admin
{
	class DeviceAdminReceiver : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		// Fields
		static jstring ACTION_CHOOSE_PRIVATE_KEY_ALIAS();
		static jstring ACTION_DEVICE_ADMIN_DISABLED();
		static jstring ACTION_DEVICE_ADMIN_DISABLE_REQUESTED();
		static jstring ACTION_DEVICE_ADMIN_ENABLED();
		static jstring ACTION_LOCK_TASK_ENTERING();
		static jstring ACTION_LOCK_TASK_EXITING();
		static jstring ACTION_NETWORK_LOGS_AVAILABLE();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getManager(__jni_impl::android::content::Context arg0);
		QAndroidJniObject getWho(__jni_impl::android::content::Context arg0);
		void onEnabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		jstring onDisableRequested(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onDisabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onPasswordChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onPasswordChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onPasswordFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onPasswordFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onPasswordSucceeded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onPasswordSucceeded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onPasswordExpiring(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onPasswordExpiring(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onProfileProvisioningComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onReadyForUserInitialization(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onLockTaskModeEntering(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jstring arg2);
		void onLockTaskModeEntering(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, const QString &arg2);
		void onLockTaskModeExiting(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onSystemUpdatePending(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2);
		void onBugreportSharingDeclined(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onBugreportShared(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jstring arg2);
		void onBugreportShared(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, const QString &arg2);
		void onBugreportFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2);
		void onSecurityLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onUserAdded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onUserRemoved(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onUserStarted(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onUserStopped(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onUserSwitched(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2);
		void onTransferOwnershipComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::os::PersistableBundle arg1);
		void onTransferAffiliatedProfileOwnershipComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::os::UserHandle arg1);
		jstring onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, jstring arg4);
		jstring onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, const QString &arg4);
		void onNetworkLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2, jint arg3);
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "DevicePolicyManager.hpp"
#include "../../content/Context.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../os/UserHandle.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::app::admin
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
	
	// Constructors
	void DeviceAdminReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DeviceAdminReceiver",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DeviceAdminReceiver::getManager(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getManager",
			"(Landroid/content/Context;)Landroid/app/admin/DevicePolicyManager;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DeviceAdminReceiver::getWho(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getWho",
			"(Landroid/content/Context;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onEnabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DeviceAdminReceiver::onDisableRequested(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"onDisableRequested",
			"(Landroid/content/Context;Landroid/content/Intent;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	void DeviceAdminReceiver::onDisabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onPasswordChanged",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onPasswordFailed",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordSucceeded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordSucceeded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onPasswordSucceeded",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordExpiring(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onPasswordExpiring(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onPasswordExpiring",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onProfileProvisioningComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onProfileProvisioningComplete",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onReadyForUserInitialization(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReadyForUserInitialization",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onLockTaskModeEntering(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onLockTaskModeEntering",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onLockTaskModeEntering(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onLockTaskModeEntering",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DeviceAdminReceiver::onLockTaskModeExiting(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onLockTaskModeExiting",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onSystemUpdatePending(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"onSystemUpdatePending",
			"(Landroid/content/Context;Landroid/content/Intent;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onBugreportSharingDeclined(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onBugreportSharingDeclined",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onBugreportShared(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onBugreportShared",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onBugreportShared(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onBugreportShared",
			"(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DeviceAdminReceiver::onBugreportFailed(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onBugreportFailed",
			"(Landroid/content/Context;Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeviceAdminReceiver::onSecurityLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onSecurityLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onUserAdded(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onUserAdded",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onUserRemoved(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onUserRemoved",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onUserStarted(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onUserStarted",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onUserStopped(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onUserStopped",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onUserSwitched(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onUserSwitched",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onTransferOwnershipComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onTransferOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeviceAdminReceiver::onTransferAffiliatedProfileOwnershipComplete(__jni_impl::android::content::Context arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onTransferAffiliatedProfileOwnershipComplete",
			"(Landroid/content/Context;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DeviceAdminReceiver::onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		).object<jstring>();
	}
	jstring DeviceAdminReceiver::onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		).object<jstring>();
	}
	void DeviceAdminReceiver::onNetworkLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void DeviceAdminReceiver::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DeviceAdminReceiver : public __jni_impl::android::app::admin::DeviceAdminReceiver
	{
	public:
		DeviceAdminReceiver(QAndroidJniObject obj) { __thiz = obj; }
		DeviceAdminReceiver()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DEVICEADMINRECEIVER

