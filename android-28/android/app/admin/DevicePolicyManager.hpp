#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JArray;
namespace android::app::admin
{
	class SystemUpdateInfo;
}
namespace android::app::admin
{
	class SystemUpdatePolicy;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class ProxyInfo;
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
namespace android::security
{
	class AttestedKeyPair;
}
namespace android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace android::telephony::data
{
	class ApnSetting;
}
class JString;
class JString;
namespace java::security::cert
{
	class Certificate;
}

namespace android::app::admin
{
	class DevicePolicyManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_ADD_DEVICE_ADMIN();
		static JString ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED();
		static JString ACTION_DEVICE_ADMIN_SERVICE();
		static JString ACTION_DEVICE_OWNER_CHANGED();
		static JString ACTION_MANAGED_PROFILE_PROVISIONED();
		static JString ACTION_PROFILE_OWNER_CHANGED();
		static JString ACTION_PROVISIONING_SUCCESSFUL();
		static JString ACTION_PROVISION_MANAGED_DEVICE();
		static JString ACTION_PROVISION_MANAGED_PROFILE();
		static JString ACTION_SET_NEW_PARENT_PROFILE_PASSWORD();
		static JString ACTION_SET_NEW_PASSWORD();
		static JString ACTION_START_ENCRYPTION();
		static JString ACTION_SYSTEM_UPDATE_POLICY_CHANGED();
		static JString DELEGATION_APP_RESTRICTIONS();
		static JString DELEGATION_BLOCK_UNINSTALL();
		static JString DELEGATION_CERT_INSTALL();
		static JString DELEGATION_ENABLE_SYSTEM_APP();
		static JString DELEGATION_INSTALL_EXISTING_PACKAGE();
		static JString DELEGATION_KEEP_UNINSTALLED_PACKAGES();
		static JString DELEGATION_PACKAGE_ACCESS();
		static JString DELEGATION_PERMISSION_GRANT();
		static jint ENCRYPTION_STATUS_ACTIVATING();
		static jint ENCRYPTION_STATUS_ACTIVE();
		static jint ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY();
		static jint ENCRYPTION_STATUS_ACTIVE_PER_USER();
		static jint ENCRYPTION_STATUS_INACTIVE();
		static jint ENCRYPTION_STATUS_UNSUPPORTED();
		static JString EXTRA_ADD_EXPLANATION();
		static JString EXTRA_DELEGATION_SCOPES();
		static JString EXTRA_DEVICE_ADMIN();
		static JString EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE();
		static JString EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM();
		static JString EXTRA_PROVISIONING_DISCLAIMERS();
		static JString EXTRA_PROVISIONING_DISCLAIMER_CONTENT();
		static JString EXTRA_PROVISIONING_DISCLAIMER_HEADER();
		static JString EXTRA_PROVISIONING_EMAIL_ADDRESS();
		static JString EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION();
		static JString EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static JString EXTRA_PROVISIONING_LOCALE();
		static JString EXTRA_PROVISIONING_LOCAL_TIME();
		static JString EXTRA_PROVISIONING_LOGO_URI();
		static JString EXTRA_PROVISIONING_MAIN_COLOR();
		static JString EXTRA_PROVISIONING_SKIP_ENCRYPTION();
		static JString EXTRA_PROVISIONING_SKIP_USER_CONSENT();
		static JString EXTRA_PROVISIONING_TIME_ZONE();
		static JString EXTRA_PROVISIONING_WIFI_HIDDEN();
		static JString EXTRA_PROVISIONING_WIFI_PAC_URL();
		static JString EXTRA_PROVISIONING_WIFI_PASSWORD();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_BYPASS();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_HOST();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_PORT();
		static JString EXTRA_PROVISIONING_WIFI_SECURITY_TYPE();
		static JString EXTRA_PROVISIONING_WIFI_SSID();
		static jint FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY();
		static jint FLAG_MANAGED_CAN_ACCESS_PARENT();
		static jint FLAG_PARENT_CAN_ACCESS_MANAGED();
		static jint ID_TYPE_BASE_INFO();
		static jint ID_TYPE_IMEI();
		static jint ID_TYPE_MEID();
		static jint ID_TYPE_SERIAL();
		static jint INSTALLKEY_REQUEST_CREDENTIALS_ACCESS();
		static jint INSTALLKEY_SET_USER_SELECTABLE();
		static jint KEYGUARD_DISABLE_BIOMETRICS();
		static jint KEYGUARD_DISABLE_FACE();
		static jint KEYGUARD_DISABLE_FEATURES_ALL();
		static jint KEYGUARD_DISABLE_FEATURES_NONE();
		static jint KEYGUARD_DISABLE_FINGERPRINT();
		static jint KEYGUARD_DISABLE_IRIS();
		static jint KEYGUARD_DISABLE_REMOTE_INPUT();
		static jint KEYGUARD_DISABLE_SECURE_CAMERA();
		static jint KEYGUARD_DISABLE_SECURE_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_TRUST_AGENTS();
		static jint KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_WIDGETS_ALL();
		static jint LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static jint LOCK_TASK_FEATURE_GLOBAL_ACTIONS();
		static jint LOCK_TASK_FEATURE_HOME();
		static jint LOCK_TASK_FEATURE_KEYGUARD();
		static jint LOCK_TASK_FEATURE_NONE();
		static jint LOCK_TASK_FEATURE_NOTIFICATIONS();
		static jint LOCK_TASK_FEATURE_OVERVIEW();
		static jint LOCK_TASK_FEATURE_SYSTEM_INFO();
		static jint MAKE_USER_EPHEMERAL();
		static JString MIME_TYPE_PROVISIONING_NFC();
		static jint PASSWORD_QUALITY_ALPHABETIC();
		static jint PASSWORD_QUALITY_ALPHANUMERIC();
		static jint PASSWORD_QUALITY_BIOMETRIC_WEAK();
		static jint PASSWORD_QUALITY_COMPLEX();
		static jint PASSWORD_QUALITY_NUMERIC();
		static jint PASSWORD_QUALITY_NUMERIC_COMPLEX();
		static jint PASSWORD_QUALITY_SOMETHING();
		static jint PASSWORD_QUALITY_UNSPECIFIED();
		static jint PERMISSION_GRANT_STATE_DEFAULT();
		static jint PERMISSION_GRANT_STATE_DENIED();
		static jint PERMISSION_GRANT_STATE_GRANTED();
		static jint PERMISSION_POLICY_AUTO_DENY();
		static jint PERMISSION_POLICY_AUTO_GRANT();
		static jint PERMISSION_POLICY_PROMPT();
		static JString POLICY_DISABLE_CAMERA();
		static JString POLICY_DISABLE_SCREEN_CAPTURE();
		static jint RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT();
		static jint RESET_PASSWORD_REQUIRE_ENTRY();
		static jint SKIP_SETUP_WIZARD();
		static jint WIPE_EUICC();
		static jint WIPE_EXTERNAL_STORAGE();
		static jint WIPE_RESET_PROTECTION_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addCrossProfileIntentFilter(android::content::ComponentName arg0, android::content::IntentFilter arg1, jint arg2) const;
		jboolean addCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const;
		jint addOverrideApn(android::content::ComponentName arg0, android::telephony::data::ApnSetting arg1) const;
		void addPersistentPreferredActivity(android::content::ComponentName arg0, android::content::IntentFilter arg1, android::content::ComponentName arg2) const;
		void addUserRestriction(android::content::ComponentName arg0, JString arg1) const;
		jboolean bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, JObject arg2, jint arg3, android::os::UserHandle arg4) const;
		void clearApplicationUserData(android::content::ComponentName arg0, JString arg1, JObject arg2, JObject arg3) const;
		void clearCrossProfileIntentFilters(android::content::ComponentName arg0) const;
		void clearDeviceOwnerApp(JString arg0) const;
		void clearPackagePersistentPreferredActivities(android::content::ComponentName arg0, JString arg1) const;
		void clearProfileOwner(android::content::ComponentName arg0) const;
		jboolean clearResetPasswordToken(android::content::ComponentName arg0) const;
		void clearUserRestriction(android::content::ComponentName arg0, JString arg1) const;
		android::content::Intent createAdminSupportIntent(JString arg0) const;
		android::os::UserHandle createAndManageUser(android::content::ComponentName arg0, JString arg1, android::content::ComponentName arg2, android::os::PersistableBundle arg3, jint arg4) const;
		jint enableSystemApp(android::content::ComponentName arg0, android::content::Intent arg1) const;
		void enableSystemApp(android::content::ComponentName arg0, JString arg1) const;
		android::security::AttestedKeyPair generateKeyPair(android::content::ComponentName arg0, JString arg1, android::security::keystore::KeyGenParameterSpec arg2, jint arg3) const;
		JArray getAccountTypesWithManagementDisabled() const;
		JObject getActiveAdmins() const;
		JObject getAffiliationIds(android::content::ComponentName arg0) const;
		JString getAlwaysOnVpnPackage(android::content::ComponentName arg0) const;
		android::os::Bundle getApplicationRestrictions(android::content::ComponentName arg0, JString arg1) const;
		JString getApplicationRestrictionsManagingPackage(android::content::ComponentName arg0) const;
		jboolean getAutoTimeRequired() const;
		JObject getBindDeviceAdminTargetUsers(android::content::ComponentName arg0) const;
		jboolean getBluetoothContactSharingDisabled(android::content::ComponentName arg0) const;
		jboolean getCameraDisabled(android::content::ComponentName arg0) const;
		JString getCertInstallerPackage(android::content::ComponentName arg0) const;
		jboolean getCrossProfileCallerIdDisabled(android::content::ComponentName arg0) const;
		jboolean getCrossProfileContactsSearchDisabled(android::content::ComponentName arg0) const;
		JObject getCrossProfileWidgetProviders(android::content::ComponentName arg0) const;
		jint getCurrentFailedPasswordAttempts() const;
		JObject getDelegatePackages(android::content::ComponentName arg0, JString arg1) const;
		JObject getDelegatedScopes(android::content::ComponentName arg0, JString arg1) const;
		JString getDeviceOwnerLockScreenInfo() const;
		JString getEndUserSessionMessage(android::content::ComponentName arg0) const;
		JObject getInstalledCaCerts(android::content::ComponentName arg0) const;
		JObject getKeepUninstalledPackages(android::content::ComponentName arg0) const;
		jint getKeyguardDisabledFeatures(android::content::ComponentName arg0) const;
		jint getLockTaskFeatures(android::content::ComponentName arg0) const;
		JArray getLockTaskPackages(android::content::ComponentName arg0) const;
		JString getLongSupportMessage(android::content::ComponentName arg0) const;
		jint getMaximumFailedPasswordsForWipe(android::content::ComponentName arg0) const;
		jlong getMaximumTimeToLock(android::content::ComponentName arg0) const;
		JObject getMeteredDataDisabledPackages(android::content::ComponentName arg0) const;
		jint getOrganizationColor(android::content::ComponentName arg0) const;
		JString getOrganizationName(android::content::ComponentName arg0) const;
		JObject getOverrideApns(android::content::ComponentName arg0) const;
		android::app::admin::DevicePolicyManager getParentProfileInstance(android::content::ComponentName arg0) const;
		jlong getPasswordExpiration(android::content::ComponentName arg0) const;
		jlong getPasswordExpirationTimeout(android::content::ComponentName arg0) const;
		jint getPasswordHistoryLength(android::content::ComponentName arg0) const;
		jint getPasswordMaximumLength(jint arg0) const;
		jint getPasswordMinimumLength(android::content::ComponentName arg0) const;
		jint getPasswordMinimumLetters(android::content::ComponentName arg0) const;
		jint getPasswordMinimumLowerCase(android::content::ComponentName arg0) const;
		jint getPasswordMinimumNonLetter(android::content::ComponentName arg0) const;
		jint getPasswordMinimumNumeric(android::content::ComponentName arg0) const;
		jint getPasswordMinimumSymbols(android::content::ComponentName arg0) const;
		jint getPasswordMinimumUpperCase(android::content::ComponentName arg0) const;
		jint getPasswordQuality(android::content::ComponentName arg0) const;
		android::app::admin::SystemUpdateInfo getPendingSystemUpdate(android::content::ComponentName arg0) const;
		jint getPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2) const;
		jint getPermissionPolicy(android::content::ComponentName arg0) const;
		JObject getPermittedAccessibilityServices(android::content::ComponentName arg0) const;
		JObject getPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0) const;
		JObject getPermittedInputMethods(android::content::ComponentName arg0) const;
		jlong getRequiredStrongAuthTimeout(android::content::ComponentName arg0) const;
		jboolean getScreenCaptureDisabled(android::content::ComponentName arg0) const;
		JObject getSecondaryUsers(android::content::ComponentName arg0) const;
		JString getShortSupportMessage(android::content::ComponentName arg0) const;
		JString getStartUserSessionMessage(android::content::ComponentName arg0) const;
		jboolean getStorageEncryption(android::content::ComponentName arg0) const;
		jint getStorageEncryptionStatus() const;
		android::app::admin::SystemUpdatePolicy getSystemUpdatePolicy() const;
		android::os::PersistableBundle getTransferOwnershipBundle() const;
		JObject getTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1) const;
		android::os::Bundle getUserRestrictions(android::content::ComponentName arg0) const;
		JString getWifiMacAddress(android::content::ComponentName arg0) const;
		jboolean hasCaCertInstalled(android::content::ComponentName arg0, JByteArray arg1) const;
		jboolean hasGrantedPolicy(android::content::ComponentName arg0, jint arg1) const;
		jboolean installCaCert(android::content::ComponentName arg0, JByteArray arg1) const;
		jboolean installExistingPackage(android::content::ComponentName arg0, JString arg1) const;
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, java::security::cert::Certificate arg2, JString arg3) const;
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jboolean arg4) const;
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jint arg4) const;
		jboolean isActivePasswordSufficient() const;
		jboolean isAdminActive(android::content::ComponentName arg0) const;
		jboolean isAffiliatedUser() const;
		jboolean isApplicationHidden(android::content::ComponentName arg0, JString arg1) const;
		jboolean isBackupServiceEnabled(android::content::ComponentName arg0) const;
		jboolean isCallerApplicationRestrictionsManagingPackage() const;
		jboolean isDeviceIdAttestationSupported() const;
		jboolean isDeviceOwnerApp(JString arg0) const;
		jboolean isEphemeralUser(android::content::ComponentName arg0) const;
		jboolean isLockTaskPermitted(JString arg0) const;
		jboolean isLogoutEnabled() const;
		jboolean isManagedProfile(android::content::ComponentName arg0) const;
		jboolean isMasterVolumeMuted(android::content::ComponentName arg0) const;
		jboolean isNetworkLoggingEnabled(android::content::ComponentName arg0) const;
		jboolean isOverrideApnEnabled(android::content::ComponentName arg0) const;
		jboolean isPackageSuspended(android::content::ComponentName arg0, JString arg1) const;
		jboolean isProfileOwnerApp(JString arg0) const;
		jboolean isProvisioningAllowed(JString arg0) const;
		jboolean isResetPasswordTokenActive(android::content::ComponentName arg0) const;
		jboolean isSecurityLoggingEnabled(android::content::ComponentName arg0) const;
		jboolean isUninstallBlocked(android::content::ComponentName arg0, JString arg1) const;
		jboolean isUsingUnifiedPassword(android::content::ComponentName arg0) const;
		void lockNow() const;
		void lockNow(jint arg0) const;
		jint logoutUser(android::content::ComponentName arg0) const;
		void reboot(android::content::ComponentName arg0) const;
		void removeActiveAdmin(android::content::ComponentName arg0) const;
		jboolean removeCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const;
		jboolean removeKeyPair(android::content::ComponentName arg0, JString arg1) const;
		jboolean removeOverrideApn(android::content::ComponentName arg0, jint arg1) const;
		jboolean removeUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
		jboolean requestBugreport(android::content::ComponentName arg0) const;
		jboolean resetPassword(JString arg0, jint arg1) const;
		jboolean resetPasswordWithToken(android::content::ComponentName arg0, JString arg1, JByteArray arg2, jint arg3) const;
		JObject retrieveNetworkLogs(android::content::ComponentName arg0, jlong arg1) const;
		JObject retrievePreRebootSecurityLogs(android::content::ComponentName arg0) const;
		JObject retrieveSecurityLogs(android::content::ComponentName arg0) const;
		void setAccountManagementDisabled(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		void setAffiliationIds(android::content::ComponentName arg0, JObject arg1) const;
		void setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		jboolean setApplicationHidden(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		void setApplicationRestrictions(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const;
		void setApplicationRestrictionsManagingPackage(android::content::ComponentName arg0, JString arg1) const;
		void setAutoTimeRequired(android::content::ComponentName arg0, jboolean arg1) const;
		void setBackupServiceEnabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setBluetoothContactSharingDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setCameraDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setCertInstallerPackage(android::content::ComponentName arg0, JString arg1) const;
		void setCrossProfileCallerIdDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setCrossProfileContactsSearchDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setDelegatedScopes(android::content::ComponentName arg0, JString arg1, JObject arg2) const;
		void setDeviceOwnerLockScreenInfo(android::content::ComponentName arg0, JString arg1) const;
		void setEndUserSessionMessage(android::content::ComponentName arg0, JString arg1) const;
		void setGlobalSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const;
		void setKeepUninstalledPackages(android::content::ComponentName arg0, JObject arg1) const;
		jboolean setKeyPairCertificate(android::content::ComponentName arg0, JString arg1, JObject arg2, jboolean arg3) const;
		jboolean setKeyguardDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setKeyguardDisabledFeatures(android::content::ComponentName arg0, jint arg1) const;
		void setLockTaskFeatures(android::content::ComponentName arg0, jint arg1) const;
		void setLockTaskPackages(android::content::ComponentName arg0, JArray arg1) const;
		void setLogoutEnabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setLongSupportMessage(android::content::ComponentName arg0, JString arg1) const;
		void setMasterVolumeMuted(android::content::ComponentName arg0, jboolean arg1) const;
		void setMaximumFailedPasswordsForWipe(android::content::ComponentName arg0, jint arg1) const;
		void setMaximumTimeToLock(android::content::ComponentName arg0, jlong arg1) const;
		JObject setMeteredDataDisabledPackages(android::content::ComponentName arg0, JObject arg1) const;
		void setNetworkLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setOrganizationColor(android::content::ComponentName arg0, jint arg1) const;
		void setOrganizationName(android::content::ComponentName arg0, JString arg1) const;
		void setOverrideApnsEnabled(android::content::ComponentName arg0, jboolean arg1) const;
		JArray setPackagesSuspended(android::content::ComponentName arg0, JArray arg1, jboolean arg2) const;
		void setPasswordExpirationTimeout(android::content::ComponentName arg0, jlong arg1) const;
		void setPasswordHistoryLength(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumLength(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumLetters(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumLowerCase(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumNonLetter(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumNumeric(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumSymbols(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordMinimumUpperCase(android::content::ComponentName arg0, jint arg1) const;
		void setPasswordQuality(android::content::ComponentName arg0, jint arg1) const;
		jboolean setPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2, jint arg3) const;
		void setPermissionPolicy(android::content::ComponentName arg0, jint arg1) const;
		jboolean setPermittedAccessibilityServices(android::content::ComponentName arg0, JObject arg1) const;
		jboolean setPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0, JObject arg1) const;
		jboolean setPermittedInputMethods(android::content::ComponentName arg0, JObject arg1) const;
		void setProfileEnabled(android::content::ComponentName arg0) const;
		void setProfileName(android::content::ComponentName arg0, JString arg1) const;
		void setRecommendedGlobalProxy(android::content::ComponentName arg0, android::net::ProxyInfo arg1) const;
		void setRequiredStrongAuthTimeout(android::content::ComponentName arg0, jlong arg1) const;
		jboolean setResetPasswordToken(android::content::ComponentName arg0, JByteArray arg1) const;
		void setRestrictionsProvider(android::content::ComponentName arg0, android::content::ComponentName arg1) const;
		void setScreenCaptureDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setSecureSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const;
		void setSecurityLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const;
		void setShortSupportMessage(android::content::ComponentName arg0, JString arg1) const;
		void setStartUserSessionMessage(android::content::ComponentName arg0, JString arg1) const;
		jboolean setStatusBarDisabled(android::content::ComponentName arg0, jboolean arg1) const;
		jint setStorageEncryption(android::content::ComponentName arg0, jboolean arg1) const;
		void setSystemSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const;
		void setSystemUpdatePolicy(android::content::ComponentName arg0, android::app::admin::SystemUpdatePolicy arg1) const;
		jboolean setTime(android::content::ComponentName arg0, jlong arg1) const;
		jboolean setTimeZone(android::content::ComponentName arg0, JString arg1) const;
		void setTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const;
		void setUninstallBlocked(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		void setUserIcon(android::content::ComponentName arg0, android::graphics::Bitmap arg1) const;
		jint startUserInBackground(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
		jint stopUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
		jboolean switchUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
		void transferOwnership(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const;
		void uninstallAllUserCaCerts(android::content::ComponentName arg0) const;
		void uninstallCaCert(android::content::ComponentName arg0, JByteArray arg1) const;
		jboolean updateOverrideApn(android::content::ComponentName arg0, jint arg1, android::telephony::data::ApnSetting arg2) const;
		void wipeData(jint arg0) const;
		void wipeData(jint arg0, JString arg1) const;
	};
} // namespace android::app::admin

