#include "../content/Intent.hpp"
#include "./Bundle.hpp"
#include "./PersistableBundle.hpp"
#include "./UserHandle.hpp"
#include "../../JString.hpp"
#include "./UserManager.hpp"

namespace android::os
{
	// Fields
	JString UserManager::ALLOW_PARENT_PROFILE_APP_LINKING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"ALLOW_PARENT_PROFILE_APP_LINKING",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_ADD_MANAGED_PROFILE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADD_MANAGED_PROFILE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_ADD_USER()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADD_USER",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_ADJUST_VOLUME()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_ADJUST_VOLUME",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_AIRPLANE_MODE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AIRPLANE_MODE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_AMBIENT_DISPLAY()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AMBIENT_DISPLAY",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_APPS_CONTROL()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_APPS_CONTROL",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_AUTOFILL()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_AUTOFILL",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_BLUETOOTH_SHARING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_BLUETOOTH_SHARING",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_BRIGHTNESS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_BRIGHTNESS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_CELL_BROADCASTS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_CELL_BROADCASTS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_CREDENTIALS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_CREDENTIALS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_DATE_TIME()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_DATE_TIME",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_LOCALE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_LOCALE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_LOCATION()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_LOCATION",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_MOBILE_NETWORKS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_MOBILE_NETWORKS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_SCREEN_TIMEOUT()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_SCREEN_TIMEOUT",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_TETHERING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_TETHERING",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_VPN()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_VPN",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CONFIG_WIFI()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CONFIG_WIFI",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CREATE_WINDOWS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CREATE_WINDOWS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_CROSS_PROFILE_COPY_PASTE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_CROSS_PROFILE_COPY_PASTE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_DATA_ROAMING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_DATA_ROAMING",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_DEBUGGING_FEATURES()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_DEBUGGING_FEATURES",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_FACTORY_RESET()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_FACTORY_RESET",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_FUN()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_FUN",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_INSTALL_APPS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_INSTALL_APPS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_INSTALL_UNKNOWN_SOURCES()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_INSTALL_UNKNOWN_SOURCES",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_MODIFY_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_MODIFY_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_MOUNT_PHYSICAL_MEDIA()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_MOUNT_PHYSICAL_MEDIA",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_NETWORK_RESET()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_NETWORK_RESET",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_OUTGOING_BEAM()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_OUTGOING_BEAM",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_OUTGOING_CALLS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_OUTGOING_CALLS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_PRINTING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_PRINTING",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_REMOVE_MANAGED_PROFILE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_REMOVE_MANAGED_PROFILE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_REMOVE_USER()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_REMOVE_USER",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SAFE_BOOT()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SAFE_BOOT",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SET_USER_ICON()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SET_USER_ICON",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SET_WALLPAPER",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SHARE_INTO_MANAGED_PROFILE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SHARE_INTO_MANAGED_PROFILE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SHARE_LOCATION()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SHARE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SMS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SMS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_SYSTEM_ERROR_DIALOGS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_SYSTEM_ERROR_DIALOGS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_UNIFIED_PASSWORD()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNIFIED_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_UNINSTALL_APPS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNINSTALL_APPS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_UNMUTE_MICROPHONE()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_UNMUTE_MICROPHONE",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_USB_FILE_TRANSFER()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_USB_FILE_TRANSFER",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::DISALLOW_USER_SWITCH()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"DISALLOW_USER_SWITCH",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::ENSURE_VERIFY_APPS()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"ENSURE_VERIFY_APPS",
			"Ljava/lang/String;"
		);
	}
	JString UserManager::KEY_RESTRICTIONS_PENDING()
	{
		return getStaticObjectField(
			"android.os.UserManager",
			"KEY_RESTRICTIONS_PENDING",
			"Ljava/lang/String;"
		);
	}
	jint UserManager::USER_CREATION_FAILED_NOT_PERMITTED()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_CREATION_FAILED_NOT_PERMITTED"
		);
	}
	jint UserManager::USER_CREATION_FAILED_NO_MORE_USERS()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_CREATION_FAILED_NO_MORE_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_CURRENT_USER()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_CURRENT_USER"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_LOW_STORAGE()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_LOW_STORAGE"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MANAGED_PROFILE()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MANAGED_PROFILE"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MAX_RUNNING_USERS()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MAX_RUNNING_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_MAX_USERS()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_MAX_USERS"
		);
	}
	jint UserManager::USER_OPERATION_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_ERROR_UNKNOWN"
		);
	}
	jint UserManager::USER_OPERATION_SUCCESS()
	{
		return getStaticField<jint>(
			"android.os.UserManager",
			"USER_OPERATION_SUCCESS"
		);
	}
	
	// QJniObject forward
	UserManager::UserManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent UserManager::createUserCreationIntent(JString arg0, JString arg1, JString arg2, android::os::PersistableBundle arg3)
	{
		return callStaticObjectMethod(
			"android.os.UserManager",
			"createUserCreationIntent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	jboolean UserManager::supportsMultipleUsers()
	{
		return callStaticMethod<jboolean>(
			"android.os.UserManager",
			"supportsMultipleUsers",
			"()Z"
		);
	}
	android::os::Bundle UserManager::getApplicationRestrictions(JString arg0) const
	{
		return callObjectMethod(
			"getApplicationRestrictions",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object<jstring>()
		);
	}
	jlong UserManager::getSerialNumberForUser(android::os::UserHandle arg0) const
	{
		return callMethod<jlong>(
			"getSerialNumberForUser",
			"(Landroid/os/UserHandle;)J",
			arg0.object()
		);
	}
	jint UserManager::getUserCount() const
	{
		return callMethod<jint>(
			"getUserCount",
			"()I"
		);
	}
	jlong UserManager::getUserCreationTime(android::os::UserHandle arg0) const
	{
		return callMethod<jlong>(
			"getUserCreationTime",
			"(Landroid/os/UserHandle;)J",
			arg0.object()
		);
	}
	android::os::UserHandle UserManager::getUserForSerialNumber(jlong arg0) const
	{
		return callObjectMethod(
			"getUserForSerialNumber",
			"(J)Landroid/os/UserHandle;",
			arg0
		);
	}
	JString UserManager::getUserName() const
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
	JObject UserManager::getUserProfiles() const
	{
		return callObjectMethod(
			"getUserProfiles",
			"()Ljava/util/List;"
		);
	}
	android::os::Bundle UserManager::getUserRestrictions() const
	{
		return callObjectMethod(
			"getUserRestrictions",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Bundle UserManager::getUserRestrictions(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getUserRestrictions",
			"(Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	jboolean UserManager::hasUserRestriction(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasUserRestriction",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean UserManager::isDemoUser() const
	{
		return callMethod<jboolean>(
			"isDemoUser",
			"()Z"
		);
	}
	jboolean UserManager::isQuietModeEnabled(android::os::UserHandle arg0) const
	{
		return callMethod<jboolean>(
			"isQuietModeEnabled",
			"(Landroid/os/UserHandle;)Z",
			arg0.object()
		);
	}
	jboolean UserManager::isSystemUser() const
	{
		return callMethod<jboolean>(
			"isSystemUser",
			"()Z"
		);
	}
	jboolean UserManager::isUserAGoat() const
	{
		return callMethod<jboolean>(
			"isUserAGoat",
			"()Z"
		);
	}
	jboolean UserManager::isUserRunning(android::os::UserHandle arg0) const
	{
		return callMethod<jboolean>(
			"isUserRunning",
			"(Landroid/os/UserHandle;)Z",
			arg0.object()
		);
	}
	jboolean UserManager::isUserRunningOrStopping(android::os::UserHandle arg0) const
	{
		return callMethod<jboolean>(
			"isUserRunningOrStopping",
			"(Landroid/os/UserHandle;)Z",
			arg0.object()
		);
	}
	jboolean UserManager::isUserUnlocked() const
	{
		return callMethod<jboolean>(
			"isUserUnlocked",
			"()Z"
		);
	}
	jboolean UserManager::isUserUnlocked(android::os::UserHandle arg0) const
	{
		return callMethod<jboolean>(
			"isUserUnlocked",
			"(Landroid/os/UserHandle;)Z",
			arg0.object()
		);
	}
	jboolean UserManager::requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"requestQuietModeEnabled",
			"(ZLandroid/os/UserHandle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean UserManager::setRestrictionsChallenge(JString arg0) const
	{
		return callMethod<jboolean>(
			"setRestrictionsChallenge",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void UserManager::setUserRestriction(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setUserRestriction",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void UserManager::setUserRestrictions(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void UserManager::setUserRestrictions(android::os::Bundle arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"setUserRestrictions",
			"(Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::os

