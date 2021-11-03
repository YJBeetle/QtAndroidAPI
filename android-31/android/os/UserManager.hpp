#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::os
{
	class UserManager : public JObject
	{
	public:
		// Fields
		static JString ALLOW_PARENT_PROFILE_APP_LINKING();
		static JString DISALLOW_ADD_MANAGED_PROFILE();
		static JString DISALLOW_ADD_USER();
		static JString DISALLOW_ADJUST_VOLUME();
		static JString DISALLOW_AIRPLANE_MODE();
		static JString DISALLOW_AMBIENT_DISPLAY();
		static JString DISALLOW_APPS_CONTROL();
		static JString DISALLOW_AUTOFILL();
		static JString DISALLOW_BLUETOOTH();
		static JString DISALLOW_BLUETOOTH_SHARING();
		static JString DISALLOW_CAMERA_TOGGLE();
		static JString DISALLOW_CONFIG_BLUETOOTH();
		static JString DISALLOW_CONFIG_BRIGHTNESS();
		static JString DISALLOW_CONFIG_CELL_BROADCASTS();
		static JString DISALLOW_CONFIG_CREDENTIALS();
		static JString DISALLOW_CONFIG_DATE_TIME();
		static JString DISALLOW_CONFIG_LOCALE();
		static JString DISALLOW_CONFIG_LOCATION();
		static JString DISALLOW_CONFIG_MOBILE_NETWORKS();
		static JString DISALLOW_CONFIG_PRIVATE_DNS();
		static JString DISALLOW_CONFIG_SCREEN_TIMEOUT();
		static JString DISALLOW_CONFIG_TETHERING();
		static JString DISALLOW_CONFIG_VPN();
		static JString DISALLOW_CONFIG_WIFI();
		static JString DISALLOW_CONTENT_CAPTURE();
		static JString DISALLOW_CONTENT_SUGGESTIONS();
		static JString DISALLOW_CREATE_WINDOWS();
		static JString DISALLOW_CROSS_PROFILE_COPY_PASTE();
		static JString DISALLOW_DATA_ROAMING();
		static JString DISALLOW_DEBUGGING_FEATURES();
		static JString DISALLOW_FACTORY_RESET();
		static JString DISALLOW_FUN();
		static JString DISALLOW_INSTALL_APPS();
		static JString DISALLOW_INSTALL_UNKNOWN_SOURCES();
		static JString DISALLOW_INSTALL_UNKNOWN_SOURCES_GLOBALLY();
		static JString DISALLOW_MICROPHONE_TOGGLE();
		static JString DISALLOW_MODIFY_ACCOUNTS();
		static JString DISALLOW_MOUNT_PHYSICAL_MEDIA();
		static JString DISALLOW_NETWORK_RESET();
		static JString DISALLOW_OUTGOING_BEAM();
		static JString DISALLOW_OUTGOING_CALLS();
		static JString DISALLOW_PRINTING();
		static JString DISALLOW_REMOVE_MANAGED_PROFILE();
		static JString DISALLOW_REMOVE_USER();
		static JString DISALLOW_SAFE_BOOT();
		static JString DISALLOW_SET_USER_ICON();
		static JString DISALLOW_SET_WALLPAPER();
		static JString DISALLOW_SHARE_INTO_MANAGED_PROFILE();
		static JString DISALLOW_SHARE_LOCATION();
		static JString DISALLOW_SMS();
		static JString DISALLOW_SYSTEM_ERROR_DIALOGS();
		static JString DISALLOW_UNIFIED_PASSWORD();
		static JString DISALLOW_UNINSTALL_APPS();
		static JString DISALLOW_UNMUTE_MICROPHONE();
		static JString DISALLOW_USB_FILE_TRANSFER();
		static JString DISALLOW_USER_SWITCH();
		static JString ENSURE_VERIFY_APPS();
		static JString KEY_RESTRICTIONS_PENDING();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::Intent createUserCreationIntent(JString arg0, JString arg1, JString arg2, android::os::PersistableBundle arg3);
		static jboolean isHeadlessSystemUserMode();
		static jboolean supportsMultipleUsers();
		android::os::Bundle getApplicationRestrictions(JString arg0) const;
		jlong getSerialNumberForUser(android::os::UserHandle arg0) const;
		jint getUserCount() const;
		jlong getUserCreationTime(android::os::UserHandle arg0) const;
		android::os::UserHandle getUserForSerialNumber(jlong arg0) const;
		JString getUserName() const;
		JObject getUserProfiles() const;
		android::os::Bundle getUserRestrictions() const;
		android::os::Bundle getUserRestrictions(android::os::UserHandle arg0) const;
		jboolean hasUserRestriction(JString arg0) const;
		jboolean isDemoUser() const;
		jboolean isManagedProfile() const;
		jboolean isQuietModeEnabled(android::os::UserHandle arg0) const;
		jboolean isSystemUser() const;
		jboolean isUserAGoat() const;
		jboolean isUserForeground() const;
		jboolean isUserRunning(android::os::UserHandle arg0) const;
		jboolean isUserRunningOrStopping(android::os::UserHandle arg0) const;
		jboolean isUserUnlocked() const;
		jboolean isUserUnlocked(android::os::UserHandle arg0) const;
		jboolean requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1) const;
		jboolean requestQuietModeEnabled(jboolean arg0, android::os::UserHandle arg1, jint arg2) const;
		jboolean setRestrictionsChallenge(JString arg0) const;
		void setUserRestriction(JString arg0, jboolean arg1) const;
		void setUserRestrictions(android::os::Bundle arg0) const;
		void setUserRestrictions(android::os::Bundle arg0, android::os::UserHandle arg1) const;
	};
} // namespace android::os

