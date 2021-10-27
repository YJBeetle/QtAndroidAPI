#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::os
{
	class UserManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ALLOW_PARENT_PROFILE_APP_LINKING();
		static jstring DISALLOW_ADD_MANAGED_PROFILE();
		static jstring DISALLOW_ADD_USER();
		static jstring DISALLOW_ADJUST_VOLUME();
		static jstring DISALLOW_AIRPLANE_MODE();
		static jstring DISALLOW_AMBIENT_DISPLAY();
		static jstring DISALLOW_APPS_CONTROL();
		static jstring DISALLOW_AUTOFILL();
		static jstring DISALLOW_BLUETOOTH();
		static jstring DISALLOW_BLUETOOTH_SHARING();
		static jstring DISALLOW_CONFIG_BLUETOOTH();
		static jstring DISALLOW_CONFIG_BRIGHTNESS();
		static jstring DISALLOW_CONFIG_CELL_BROADCASTS();
		static jstring DISALLOW_CONFIG_CREDENTIALS();
		static jstring DISALLOW_CONFIG_DATE_TIME();
		static jstring DISALLOW_CONFIG_LOCALE();
		static jstring DISALLOW_CONFIG_LOCATION();
		static jstring DISALLOW_CONFIG_MOBILE_NETWORKS();
		static jstring DISALLOW_CONFIG_PRIVATE_DNS();
		static jstring DISALLOW_CONFIG_SCREEN_TIMEOUT();
		static jstring DISALLOW_CONFIG_TETHERING();
		static jstring DISALLOW_CONFIG_VPN();
		static jstring DISALLOW_CONFIG_WIFI();
		static jstring DISALLOW_CONTENT_CAPTURE();
		static jstring DISALLOW_CONTENT_SUGGESTIONS();
		static jstring DISALLOW_CREATE_WINDOWS();
		static jstring DISALLOW_CROSS_PROFILE_COPY_PASTE();
		static jstring DISALLOW_DATA_ROAMING();
		static jstring DISALLOW_DEBUGGING_FEATURES();
		static jstring DISALLOW_FACTORY_RESET();
		static jstring DISALLOW_FUN();
		static jstring DISALLOW_INSTALL_APPS();
		static jstring DISALLOW_INSTALL_UNKNOWN_SOURCES();
		static jstring DISALLOW_INSTALL_UNKNOWN_SOURCES_GLOBALLY();
		static jstring DISALLOW_MODIFY_ACCOUNTS();
		static jstring DISALLOW_MOUNT_PHYSICAL_MEDIA();
		static jstring DISALLOW_NETWORK_RESET();
		static jstring DISALLOW_OUTGOING_BEAM();
		static jstring DISALLOW_OUTGOING_CALLS();
		static jstring DISALLOW_PRINTING();
		static jstring DISALLOW_REMOVE_MANAGED_PROFILE();
		static jstring DISALLOW_REMOVE_USER();
		static jstring DISALLOW_SAFE_BOOT();
		static jstring DISALLOW_SET_USER_ICON();
		static jstring DISALLOW_SET_WALLPAPER();
		static jstring DISALLOW_SHARE_INTO_MANAGED_PROFILE();
		static jstring DISALLOW_SHARE_LOCATION();
		static jstring DISALLOW_SMS();
		static jstring DISALLOW_SYSTEM_ERROR_DIALOGS();
		static jstring DISALLOW_UNIFIED_PASSWORD();
		static jstring DISALLOW_UNINSTALL_APPS();
		static jstring DISALLOW_UNMUTE_MICROPHONE();
		static jstring DISALLOW_USB_FILE_TRANSFER();
		static jstring DISALLOW_USER_SWITCH();
		static jstring ENSURE_VERIFY_APPS();
		static jstring KEY_RESTRICTIONS_PENDING();
		static jint USER_CREATION_FAILED_NOT_PERMITTED();
		static jint USER_CREATION_FAILED_NO_MORE_USERS();
		static jint USER_OPERATION_ERROR_CURRENT_USER();
		static jint USER_OPERATION_ERROR_LOW_STORAGE();
		static jint USER_OPERATION_ERROR_MANAGED_PROFILE();
		static jint USER_OPERATION_ERROR_MAX_RUNNING_USERS();
		static jint USER_OPERATION_ERROR_MAX_USERS();
		static jint USER_OPERATION_ERROR_UNKNOWN();
		static jint USER_OPERATION_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createUserCreationIntent(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::PersistableBundle arg3);
		static QAndroidJniObject createUserCreationIntent(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::PersistableBundle arg3);
		static jboolean supportsMultipleUsers();
		QAndroidJniObject getApplicationRestrictions(jstring arg0);
		QAndroidJniObject getApplicationRestrictions(const QString &arg0);
		jlong getSerialNumberForUser(__jni_impl::android::os::UserHandle arg0);
		jint getUserCount();
		jlong getUserCreationTime(__jni_impl::android::os::UserHandle arg0);
		QAndroidJniObject getUserForSerialNumber(jlong arg0);
		jstring getUserName();
		QAndroidJniObject getUserProfiles();
		QAndroidJniObject getUserRestrictions();
		QAndroidJniObject getUserRestrictions(__jni_impl::android::os::UserHandle arg0);
		jboolean hasUserRestriction(jstring arg0);
		jboolean hasUserRestriction(const QString &arg0);
		jboolean isDemoUser();
		jboolean isQuietModeEnabled(__jni_impl::android::os::UserHandle arg0);
		jboolean isSystemUser();
		jboolean isUserAGoat();
		jboolean isUserRunning(__jni_impl::android::os::UserHandle arg0);
		jboolean isUserRunningOrStopping(__jni_impl::android::os::UserHandle arg0);
		jboolean isUserUnlocked();
		jboolean isUserUnlocked(__jni_impl::android::os::UserHandle arg0);
		jboolean requestQuietModeEnabled(jboolean arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean setRestrictionsChallenge(jstring arg0);
		jboolean setRestrictionsChallenge(const QString &arg0);
		void setUserRestriction(jstring arg0, jboolean arg1);
		void setUserRestriction(const QString &arg0, jboolean arg1);
		void setUserRestrictions(__jni_impl::android::os::Bundle arg0);
		void setUserRestrictions(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::UserHandle arg1);
	};
} // namespace __jni_impl::android::os

#include "../content/Intent.hpp"
#include "Bundle.hpp"
#include "PersistableBundle.hpp"
#include "UserHandle.hpp"

namespace __jni_impl::android::os
{
	// Fields
	jstring UserManager::ALLOW_PARENT_PROFILE_APP_LINKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"ALLOW_PARENT_PROFILE_APP_LINKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_ADD_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADD_MANAGED_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_ADD_USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADD_USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_ADJUST_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADJUST_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_AIRPLANE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AIRPLANE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_AMBIENT_DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AMBIENT_DISPLAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_APPS_CONTROL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_APPS_CONTROL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_AUTOFILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AUTOFILL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_BLUETOOTH_SHARING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_BLUETOOTH_SHARING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_BRIGHTNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_CELL_BROADCASTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_CELL_BROADCASTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_CREDENTIALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_CREDENTIALS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_DATE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_LOCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_MOBILE_NETWORKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_MOBILE_NETWORKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_PRIVATE_DNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_PRIVATE_DNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_SCREEN_TIMEOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_SCREEN_TIMEOUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_TETHERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_TETHERING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_VPN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_VPN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONFIG_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONTENT_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONTENT_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CONTENT_SUGGESTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONTENT_SUGGESTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CREATE_WINDOWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CREATE_WINDOWS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_CROSS_PROFILE_COPY_PASTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CROSS_PROFILE_COPY_PASTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_DATA_ROAMING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_DATA_ROAMING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_DEBUGGING_FEATURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_DEBUGGING_FEATURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_FACTORY_RESET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_FACTORY_RESET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_FUN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_FUN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_INSTALL_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_INSTALL_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_INSTALL_UNKNOWN_SOURCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_INSTALL_UNKNOWN_SOURCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_INSTALL_UNKNOWN_SOURCES_GLOBALLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_INSTALL_UNKNOWN_SOURCES_GLOBALLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_MODIFY_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_MODIFY_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_MOUNT_PHYSICAL_MEDIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_MOUNT_PHYSICAL_MEDIA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_NETWORK_RESET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_NETWORK_RESET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_OUTGOING_BEAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_OUTGOING_BEAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_OUTGOING_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_OUTGOING_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_PRINTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_PRINTING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_REMOVE_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_REMOVE_MANAGED_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_REMOVE_USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_REMOVE_USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SAFE_BOOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SAFE_BOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SET_USER_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SET_USER_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SET_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SHARE_INTO_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SHARE_INTO_MANAGED_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SHARE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SHARE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_SYSTEM_ERROR_DIALOGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SYSTEM_ERROR_DIALOGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_UNIFIED_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNIFIED_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_UNINSTALL_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNINSTALL_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_UNMUTE_MICROPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNMUTE_MICROPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_USB_FILE_TRANSFER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_USB_FILE_TRANSFER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::DISALLOW_USER_SWITCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_USER_SWITCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::ENSURE_VERIFY_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"ENSURE_VERIFY_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserManager::KEY_RESTRICTIONS_PENDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserManager",
			"KEY_RESTRICTIONS_PENDING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint UserManager::USER_CREATION_FAILED_NOT_PERMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_CREATION_FAILED_NOT_PERMITTED"
		);
	}
	jint UserManager::USER_CREATION_FAILED_NO_MORE_USERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_CREATION_FAILED_NO_MORE_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_CURRENT_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_CURRENT_USER"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_LOW_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_LOW_STORAGE"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MANAGED_PROFILE"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MAX_RUNNING_USERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MAX_RUNNING_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MAX_USERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MAX_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_UNKNOWN"
		);
	}
	jint UserManager::USER_OPERATION_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_SUCCESS"
		);
	}
	
	// Constructors
	void UserManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.UserManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UserManager::createUserCreationIntent(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::PersistableBundle arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserManager",
			"createUserCreationIntent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)Landroid/content/Intent;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject UserManager::createUserCreationIntent(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::PersistableBundle arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserManager",
			"createUserCreationIntent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jboolean UserManager::supportsMultipleUsers()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.UserManager",
			"supportsMultipleUsers",
			"()Z"
		);
	}
	QAndroidJniObject UserManager::getApplicationRestrictions(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictions",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	QAndroidJniObject UserManager::getApplicationRestrictions(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictions",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong UserManager::getSerialNumberForUser(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jlong>(
			"getSerialNumberForUser",
			"(Landroid/os/UserHandle;)J",
			arg0.__jniObject().object()
		);
	}
	jint UserManager::getUserCount()
	{
		return __thiz.callMethod<jint>(
			"getUserCount",
			"()I"
		);
	}
	jlong UserManager::getUserCreationTime(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jlong>(
			"getUserCreationTime",
			"(Landroid/os/UserHandle;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UserManager::getUserForSerialNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"getUserForSerialNumber",
			"(J)Landroid/os/UserHandle;",
			arg0
		);
	}
	jstring UserManager::getUserName()
	{
		return __thiz.callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UserManager::getUserProfiles()
	{
		return __thiz.callObjectMethod(
			"getUserProfiles",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject UserManager::getUserRestrictions()
	{
		return __thiz.callObjectMethod(
			"getUserRestrictions",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject UserManager::getUserRestrictions(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getUserRestrictions",
			"(Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::hasUserRestriction(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasUserRestriction",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UserManager::hasUserRestriction(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasUserRestriction",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean UserManager::isDemoUser()
	{
		return __thiz.callMethod<jboolean>(
			"isDemoUser",
			"()Z"
		);
	}
	jboolean UserManager::isQuietModeEnabled(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isQuietModeEnabled",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::isSystemUser()
	{
		return __thiz.callMethod<jboolean>(
			"isSystemUser",
			"()Z"
		);
	}
	jboolean UserManager::isUserAGoat()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAGoat",
			"()Z"
		);
	}
	jboolean UserManager::isUserRunning(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserRunning",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::isUserRunningOrStopping(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserRunningOrStopping",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::isUserUnlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isUserUnlocked",
			"()Z"
		);
	}
	jboolean UserManager::isUserUnlocked(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserUnlocked",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::requestQuietModeEnabled(jboolean arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestQuietModeEnabled",
			"(ZLandroid/os/UserHandle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean UserManager::setRestrictionsChallenge(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRestrictionsChallenge",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UserManager::setRestrictionsChallenge(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRestrictionsChallenge",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UserManager::setUserRestriction(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setUserRestriction",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void UserManager::setUserRestriction(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setUserRestriction",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void UserManager::setUserRestrictions(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void UserManager::setUserRestrictions(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class UserManager : public __jni_impl::android::os::UserManager
	{
	public:
		UserManager(QAndroidJniObject obj) { __thiz = obj; }
		UserManager()
		{
			__constructor();
		}
	};
} // namespace android::os

