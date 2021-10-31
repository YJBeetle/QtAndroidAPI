#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class UserHandle;
}

namespace android::os
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
		static jint QUIET_MODE_DISABLE_ONLY_IF_CREDENTIAL_NOT_REQUIRED();
		static jint USER_CREATION_FAILED_NOT_PERMITTED();
		static jint USER_CREATION_FAILED_NO_MORE_USERS();
		static jint USER_OPERATION_ERROR_CURRENT_USER();
		static jint USER_OPERATION_ERROR_LOW_STORAGE();
		static jint USER_OPERATION_ERROR_MANAGED_PROFILE();
		static jint USER_OPERATION_ERROR_MAX_RUNNING_USERS();
		static jint USER_OPERATION_ERROR_MAX_USERS();
		static jint USER_OPERATION_ERROR_UNKNOWN();
		static jint USER_OPERATION_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UserManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::Intent createUserCreationIntent(jstring arg0, jstring arg1, jstring arg2, android::os::PersistableBundle arg3);
		static jboolean supportsMultipleUsers();
		android::os::Bundle getApplicationRestrictions(jstring arg0);
		jlong getSerialNumberForUser(android::os::UserHandle arg0);
		jint getUserCount();
		jlong getUserCreationTime(android::os::UserHandle arg0);
		android::os::UserHandle getUserForSerialNumber(jlong arg0);
		jstring getUserName();
		__JniBaseClass getUserProfiles();
		android::os::Bundle getUserRestrictions();
		android::os::Bundle getUserRestrictions(android::os::UserHandle arg0);
		jboolean hasUserRestriction(jstring arg0);
		jboolean isDemoUser();
		jboolean isManagedProfile();
		jboolean isQuietModeEnabled(android::os::UserHandle arg0);
		jboolean isSystemUser();
		jboolean isUserAGoat();
		jboolean isUserRunning(android::os::UserHandle arg0);
		jboolean isUserRunningOrStopping(android::os::UserHandle arg0);
		jboolean isUserUnlocked();
		jboolean isUserUnlocked(android::os::UserHandle arg0);
		jboolean requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1);
		jboolean requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1, jint arg2);
		jboolean setRestrictionsChallenge(jstring arg0);
		void setUserRestriction(jstring arg0, jboolean arg1);
		void setUserRestrictions(android::os::Bundle arg0);
		void setUserRestrictions(android::os::Bundle arg0, android::os::UserHandle arg1);
	};
} // namespace android::os

