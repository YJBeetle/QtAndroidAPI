#include "../content/Intent.hpp"
#include "./Bundle.hpp"
#include "./PersistableBundle.hpp"
#include "./UserHandle.hpp"
#include "./UserManager.hpp"

namespace android::os
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
	
	UserManager::UserManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UserManager::createUserCreationIntent(jstring arg0, jstring arg1, jstring arg2, android::os::PersistableBundle arg3)
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
	jlong UserManager::getSerialNumberForUser(android::os::UserHandle arg0)
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
	jlong UserManager::getUserCreationTime(android::os::UserHandle arg0)
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
	QAndroidJniObject UserManager::getUserRestrictions(android::os::UserHandle arg0)
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
	jboolean UserManager::isDemoUser()
	{
		return __thiz.callMethod<jboolean>(
			"isDemoUser",
			"()Z"
		);
	}
	jboolean UserManager::isQuietModeEnabled(android::os::UserHandle arg0)
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
	jboolean UserManager::isUserRunning(android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserRunning",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::isUserRunningOrStopping(android::os::UserHandle arg0)
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
	jboolean UserManager::isUserUnlocked(android::os::UserHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserUnlocked",
			"(Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UserManager::requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1)
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
	void UserManager::setUserRestriction(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setUserRestriction",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void UserManager::setUserRestrictions(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void UserManager::setUserRestrictions(android::os::Bundle arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::os

