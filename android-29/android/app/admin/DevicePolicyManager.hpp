#pragma once

#ifndef ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER
#define ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::admin
{
	class DevicePolicyManager_InstallSystemUpdateCallback;
}
namespace __jni_impl::android::app::admin
{
	class SystemUpdateInfo;
}
namespace __jni_impl::android::app::admin
{
	class SystemUpdatePolicy;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class ProxyInfo;
}
namespace __jni_impl::android::net
{
	class Uri;
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
namespace __jni_impl::android::security
{
	class AttestedKeyPair;
}
namespace __jni_impl::android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace __jni_impl::android::telephony::data
{
	class ApnSetting;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::android::app::admin
{
	class DevicePolicyManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ADD_DEVICE_ADMIN();
		static jstring ACTION_ADMIN_POLICY_COMPLIANCE();
		static jstring ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED();
		static jstring ACTION_DEVICE_ADMIN_SERVICE();
		static jstring ACTION_DEVICE_OWNER_CHANGED();
		static jstring ACTION_GET_PROVISIONING_MODE();
		static jstring ACTION_MANAGED_PROFILE_PROVISIONED();
		static jstring ACTION_PROFILE_OWNER_CHANGED();
		static jstring ACTION_PROVISIONING_SUCCESSFUL();
		static jstring ACTION_PROVISION_MANAGED_DEVICE();
		static jstring ACTION_PROVISION_MANAGED_PROFILE();
		static jstring ACTION_SET_NEW_PARENT_PROFILE_PASSWORD();
		static jstring ACTION_SET_NEW_PASSWORD();
		static jstring ACTION_START_ENCRYPTION();
		static jstring ACTION_SYSTEM_UPDATE_POLICY_CHANGED();
		static jstring DELEGATION_APP_RESTRICTIONS();
		static jstring DELEGATION_BLOCK_UNINSTALL();
		static jstring DELEGATION_CERT_INSTALL();
		static jstring DELEGATION_CERT_SELECTION();
		static jstring DELEGATION_ENABLE_SYSTEM_APP();
		static jstring DELEGATION_INSTALL_EXISTING_PACKAGE();
		static jstring DELEGATION_KEEP_UNINSTALLED_PACKAGES();
		static jstring DELEGATION_NETWORK_LOGGING();
		static jstring DELEGATION_PACKAGE_ACCESS();
		static jstring DELEGATION_PERMISSION_GRANT();
		static jint ENCRYPTION_STATUS_ACTIVATING();
		static jint ENCRYPTION_STATUS_ACTIVE();
		static jint ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY();
		static jint ENCRYPTION_STATUS_ACTIVE_PER_USER();
		static jint ENCRYPTION_STATUS_INACTIVE();
		static jint ENCRYPTION_STATUS_UNSUPPORTED();
		static jstring EXTRA_ADD_EXPLANATION();
		static jstring EXTRA_DELEGATION_SCOPES();
		static jstring EXTRA_DEVICE_ADMIN();
		static jstring EXTRA_PASSWORD_COMPLEXITY();
		static jstring EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE();
		static jstring EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM();
		static jstring EXTRA_PROVISIONING_DISCLAIMERS();
		static jstring EXTRA_PROVISIONING_DISCLAIMER_CONTENT();
		static jstring EXTRA_PROVISIONING_DISCLAIMER_HEADER();
		static jstring EXTRA_PROVISIONING_EMAIL_ADDRESS();
		static jstring EXTRA_PROVISIONING_IMEI();
		static jstring EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION();
		static jstring EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static jstring EXTRA_PROVISIONING_LOCALE();
		static jstring EXTRA_PROVISIONING_LOCAL_TIME();
		static jstring EXTRA_PROVISIONING_LOGO_URI();
		static jstring EXTRA_PROVISIONING_MAIN_COLOR();
		static jstring EXTRA_PROVISIONING_MODE();
		static jstring EXTRA_PROVISIONING_SERIAL_NUMBER();
		static jstring EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS();
		static jstring EXTRA_PROVISIONING_SKIP_ENCRYPTION();
		static jstring EXTRA_PROVISIONING_SKIP_USER_CONSENT();
		static jstring EXTRA_PROVISIONING_TIME_ZONE();
		static jstring EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY();
		static jstring EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE();
		static jstring EXTRA_PROVISIONING_WIFI_DOMAIN();
		static jstring EXTRA_PROVISIONING_WIFI_EAP_METHOD();
		static jstring EXTRA_PROVISIONING_WIFI_HIDDEN();
		static jstring EXTRA_PROVISIONING_WIFI_IDENTITY();
		static jstring EXTRA_PROVISIONING_WIFI_PAC_URL();
		static jstring EXTRA_PROVISIONING_WIFI_PASSWORD();
		static jstring EXTRA_PROVISIONING_WIFI_PHASE2_AUTH();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_BYPASS();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_HOST();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_PORT();
		static jstring EXTRA_PROVISIONING_WIFI_SECURITY_TYPE();
		static jstring EXTRA_PROVISIONING_WIFI_SSID();
		static jstring EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE();
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
		static jstring MIME_TYPE_PROVISIONING_NFC();
		static jint PASSWORD_COMPLEXITY_HIGH();
		static jint PASSWORD_COMPLEXITY_LOW();
		static jint PASSWORD_COMPLEXITY_MEDIUM();
		static jint PASSWORD_COMPLEXITY_NONE();
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
		static jstring POLICY_DISABLE_CAMERA();
		static jstring POLICY_DISABLE_SCREEN_CAPTURE();
		static jint PRIVATE_DNS_MODE_OFF();
		static jint PRIVATE_DNS_MODE_OPPORTUNISTIC();
		static jint PRIVATE_DNS_MODE_PROVIDER_HOSTNAME();
		static jint PRIVATE_DNS_MODE_UNKNOWN();
		static jint PRIVATE_DNS_SET_ERROR_FAILURE_SETTING();
		static jint PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING();
		static jint PRIVATE_DNS_SET_NO_ERROR();
		static jint PROVISIONING_MODE_FULLY_MANAGED_DEVICE();
		static jint PROVISIONING_MODE_MANAGED_PROFILE();
		static jint RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT();
		static jint RESET_PASSWORD_REQUIRE_ENTRY();
		static jint SKIP_SETUP_WIZARD();
		static jint WIPE_EUICC();
		static jint WIPE_EXTERNAL_STORAGE();
		static jint WIPE_RESET_PROTECTION_DATA();
		static jint WIPE_SILENTLY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addCrossProfileIntentFilter(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1, jint arg2);
		jboolean addCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean addCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jint addOverrideApn(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::telephony::data::ApnSetting arg1);
		void addPersistentPreferredActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1, __jni_impl::android::content::ComponentName arg2);
		void addUserRestriction(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void addUserRestriction(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean bindDeviceAdminServiceAsUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::Intent arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::android::os::UserHandle arg4);
		void clearApplicationUserData(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void clearApplicationUserData(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void clearCrossProfileIntentFilters(__jni_impl::android::content::ComponentName arg0);
		void clearDeviceOwnerApp(jstring arg0);
		void clearDeviceOwnerApp(const QString &arg0);
		void clearPackagePersistentPreferredActivities(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void clearPackagePersistentPreferredActivities(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void clearProfileOwner(__jni_impl::android::content::ComponentName arg0);
		jboolean clearResetPasswordToken(__jni_impl::android::content::ComponentName arg0);
		void clearUserRestriction(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void clearUserRestriction(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		QAndroidJniObject createAdminSupportIntent(jstring arg0);
		QAndroidJniObject createAdminSupportIntent(const QString &arg0);
		QAndroidJniObject createAndManageUser(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::PersistableBundle arg3, jint arg4);
		QAndroidJniObject createAndManageUser(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::PersistableBundle arg3, jint arg4);
		jint enableSystemApp(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::Intent arg1);
		void enableSystemApp(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void enableSystemApp(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		QAndroidJniObject generateKeyPair(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::security::keystore::KeyGenParameterSpec arg2, jint arg3);
		QAndroidJniObject generateKeyPair(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::security::keystore::KeyGenParameterSpec arg2, jint arg3);
		jarray getAccountTypesWithManagementDisabled();
		QAndroidJniObject getActiveAdmins();
		QAndroidJniObject getAffiliationIds(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getAlwaysOnVpnLockdownWhitelist(__jni_impl::android::content::ComponentName arg0);
		jstring getAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		QAndroidJniObject getApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jstring getApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0);
		jboolean getAutoTimeRequired();
		QAndroidJniObject getBindDeviceAdminTargetUsers(__jni_impl::android::content::ComponentName arg0);
		jboolean getBluetoothContactSharingDisabled(__jni_impl::android::content::ComponentName arg0);
		jboolean getCameraDisabled(__jni_impl::android::content::ComponentName arg0);
		jstring getCertInstallerPackage(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getCrossProfileCalendarPackages(__jni_impl::android::content::ComponentName arg0);
		jboolean getCrossProfileCallerIdDisabled(__jni_impl::android::content::ComponentName arg0);
		jboolean getCrossProfileContactsSearchDisabled(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getCrossProfileWidgetProviders(__jni_impl::android::content::ComponentName arg0);
		jint getCurrentFailedPasswordAttempts();
		QAndroidJniObject getDelegatePackages(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		QAndroidJniObject getDelegatePackages(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		QAndroidJniObject getDelegatedScopes(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		QAndroidJniObject getDelegatedScopes(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jstring getDeviceOwnerLockScreenInfo();
		jstring getEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0);
		jstring getGlobalPrivateDnsHost(__jni_impl::android::content::ComponentName arg0);
		jint getGlobalPrivateDnsMode(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getInstalledCaCerts(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getKeepUninstalledPackages(__jni_impl::android::content::ComponentName arg0);
		jint getKeyguardDisabledFeatures(__jni_impl::android::content::ComponentName arg0);
		jint getLockTaskFeatures(__jni_impl::android::content::ComponentName arg0);
		jarray getLockTaskPackages(__jni_impl::android::content::ComponentName arg0);
		jstring getLongSupportMessage(__jni_impl::android::content::ComponentName arg0);
		jint getMaximumFailedPasswordsForWipe(__jni_impl::android::content::ComponentName arg0);
		jlong getMaximumTimeToLock(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getMeteredDataDisabledPackages(__jni_impl::android::content::ComponentName arg0);
		jint getOrganizationColor(__jni_impl::android::content::ComponentName arg0);
		jstring getOrganizationName(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getOverrideApns(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getParentProfileInstance(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordComplexity();
		jlong getPasswordExpiration(__jni_impl::android::content::ComponentName arg0);
		jlong getPasswordExpirationTimeout(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordHistoryLength(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMaximumLength(jint arg0);
		jint getPasswordMinimumLength(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumLetters(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumLowerCase(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumNonLetter(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumNumeric(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumSymbols(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordMinimumUpperCase(__jni_impl::android::content::ComponentName arg0);
		jint getPasswordQuality(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getPendingSystemUpdate(__jni_impl::android::content::ComponentName arg0);
		jint getPermissionGrantState(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2);
		jint getPermissionGrantState(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2);
		jint getPermissionPolicy(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getPermittedAccessibilityServices(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getPermittedCrossProfileNotificationListeners(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getPermittedInputMethods(__jni_impl::android::content::ComponentName arg0);
		jlong getRequiredStrongAuthTimeout(__jni_impl::android::content::ComponentName arg0);
		jboolean getScreenCaptureDisabled(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getSecondaryUsers(__jni_impl::android::content::ComponentName arg0);
		jstring getShortSupportMessage(__jni_impl::android::content::ComponentName arg0);
		jstring getStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0);
		jboolean getStorageEncryption(__jni_impl::android::content::ComponentName arg0);
		jint getStorageEncryptionStatus();
		QAndroidJniObject getSystemUpdatePolicy();
		QAndroidJniObject getTransferOwnershipBundle();
		QAndroidJniObject getTrustAgentConfiguration(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1);
		QAndroidJniObject getUserRestrictions(__jni_impl::android::content::ComponentName arg0);
		jstring getWifiMacAddress(__jni_impl::android::content::ComponentName arg0);
		jboolean hasCaCertInstalled(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1);
		jboolean hasGrantedPolicy(__jni_impl::android::content::ComponentName arg0, jint arg1);
		jboolean installCaCert(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1);
		jboolean installExistingPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean installExistingPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::cert::Certificate arg2, jstring arg3);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::cert::Certificate arg2, const QString &arg3);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jboolean arg4);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, const QString &arg3, jboolean arg4);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jint arg4);
		jboolean installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, const QString &arg3, jint arg4);
		void installSystemUpdate(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3);
		jboolean isActivePasswordSufficient();
		jboolean isAdminActive(__jni_impl::android::content::ComponentName arg0);
		jboolean isAffiliatedUser();
		jboolean isAlwaysOnVpnLockdownEnabled(__jni_impl::android::content::ComponentName arg0);
		jboolean isApplicationHidden(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean isApplicationHidden(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean isBackupServiceEnabled(__jni_impl::android::content::ComponentName arg0);
		jboolean isCallerApplicationRestrictionsManagingPackage();
		jboolean isDeviceIdAttestationSupported();
		jboolean isDeviceOwnerApp(jstring arg0);
		jboolean isDeviceOwnerApp(const QString &arg0);
		jboolean isEphemeralUser(__jni_impl::android::content::ComponentName arg0);
		jboolean isLockTaskPermitted(jstring arg0);
		jboolean isLockTaskPermitted(const QString &arg0);
		jboolean isLogoutEnabled();
		jboolean isManagedProfile(__jni_impl::android::content::ComponentName arg0);
		jboolean isMasterVolumeMuted(__jni_impl::android::content::ComponentName arg0);
		jboolean isNetworkLoggingEnabled(__jni_impl::android::content::ComponentName arg0);
		jboolean isOverrideApnEnabled(__jni_impl::android::content::ComponentName arg0);
		jboolean isPackageSuspended(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean isPackageSuspended(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean isProfileOwnerApp(jstring arg0);
		jboolean isProfileOwnerApp(const QString &arg0);
		jboolean isProvisioningAllowed(jstring arg0);
		jboolean isProvisioningAllowed(const QString &arg0);
		jboolean isResetPasswordTokenActive(__jni_impl::android::content::ComponentName arg0);
		jboolean isSecurityLoggingEnabled(__jni_impl::android::content::ComponentName arg0);
		jboolean isUninstallBlocked(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean isUninstallBlocked(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean isUsingUnifiedPassword(__jni_impl::android::content::ComponentName arg0);
		void lockNow();
		void lockNow(jint arg0);
		jint logoutUser(__jni_impl::android::content::ComponentName arg0);
		void reboot(__jni_impl::android::content::ComponentName arg0);
		void removeActiveAdmin(__jni_impl::android::content::ComponentName arg0);
		jboolean removeCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean removeCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean removeKeyPair(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean removeKeyPair(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean removeOverrideApn(__jni_impl::android::content::ComponentName arg0, jint arg1);
		jboolean removeUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean requestBugreport(__jni_impl::android::content::ComponentName arg0);
		jboolean resetPassword(jstring arg0, jint arg1);
		jboolean resetPassword(const QString &arg0, jint arg1);
		jboolean resetPasswordWithToken(__jni_impl::android::content::ComponentName arg0, jstring arg1, jbyteArray arg2, jint arg3);
		jboolean resetPasswordWithToken(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jbyteArray arg2, jint arg3);
		QAndroidJniObject retrieveNetworkLogs(__jni_impl::android::content::ComponentName arg0, jlong arg1);
		QAndroidJniObject retrievePreRebootSecurityLogs(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject retrieveSecurityLogs(__jni_impl::android::content::ComponentName arg0);
		void setAccountManagementDisabled(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setAccountManagementDisabled(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2);
		void setAffiliationIds(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		void setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2);
		void setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3);
		void setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3);
		jboolean setApplicationHidden(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		jboolean setApplicationHidden(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2);
		void setApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void setApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void setApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setAutoTimeRequired(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setBackupServiceEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setBluetoothContactSharingDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setCameraDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setCertInstallerPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setCertInstallerPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setCrossProfileCalendarPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		void setCrossProfileCallerIdDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfileContactsSearchDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setDefaultSmsApplication(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setDefaultSmsApplication(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setDelegatedScopes(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void setDelegatedScopes(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		void setDeviceOwnerLockScreenInfo(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setDeviceOwnerLockScreenInfo(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jint setGlobalPrivateDnsModeOpportunistic(__jni_impl::android::content::ComponentName arg0);
		jint setGlobalPrivateDnsModeSpecifiedHost(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jint setGlobalPrivateDnsModeSpecifiedHost(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setGlobalSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setGlobalSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2);
		void setKeepUninstalledPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		jboolean setKeyPairCertificate(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3);
		jboolean setKeyPairCertificate(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3);
		jboolean setKeyguardDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setKeyguardDisabledFeatures(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setLockTaskFeatures(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setLockTaskPackages(__jni_impl::android::content::ComponentName arg0, jarray arg1);
		void setLogoutEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setLongSupportMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setLongSupportMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setMasterVolumeMuted(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setMaximumFailedPasswordsForWipe(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setMaximumTimeToLock(__jni_impl::android::content::ComponentName arg0, jlong arg1);
		QAndroidJniObject setMeteredDataDisabledPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		void setNetworkLoggingEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setOrganizationColor(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setOrganizationName(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setOrganizationName(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setOverrideApnsEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		jarray setPackagesSuspended(__jni_impl::android::content::ComponentName arg0, jarray arg1, jboolean arg2);
		void setPasswordExpirationTimeout(__jni_impl::android::content::ComponentName arg0, jlong arg1);
		void setPasswordHistoryLength(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLength(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLetters(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLowerCase(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNonLetter(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNumeric(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumSymbols(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumUpperCase(__jni_impl::android::content::ComponentName arg0, jint arg1);
		void setPasswordQuality(__jni_impl::android::content::ComponentName arg0, jint arg1);
		jboolean setPermissionGrantState(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2, jint arg3);
		jboolean setPermissionGrantState(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2, jint arg3);
		void setPermissionPolicy(__jni_impl::android::content::ComponentName arg0, jint arg1);
		jboolean setPermittedAccessibilityServices(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		jboolean setPermittedCrossProfileNotificationListeners(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		jboolean setPermittedInputMethods(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		void setProfileEnabled(__jni_impl::android::content::ComponentName arg0);
		void setProfileName(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setProfileName(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setRecommendedGlobalProxy(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::net::ProxyInfo arg1);
		void setRequiredStrongAuthTimeout(__jni_impl::android::content::ComponentName arg0, jlong arg1);
		jboolean setResetPasswordToken(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1);
		void setRestrictionsProvider(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1);
		void setScreenCaptureDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setSecureSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setSecureSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2);
		void setSecurityLoggingEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setShortSupportMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setShortSupportMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void setStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean setStatusBarDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		jint setStorageEncryption(__jni_impl::android::content::ComponentName arg0, jboolean arg1);
		void setSystemSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setSystemSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2);
		void setSystemUpdatePolicy(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::app::admin::SystemUpdatePolicy arg1);
		jboolean setTime(__jni_impl::android::content::ComponentName arg0, jlong arg1);
		jboolean setTimeZone(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean setTimeZone(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void setTrustAgentConfiguration(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::PersistableBundle arg2);
		void setUninstallBlocked(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setUninstallBlocked(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2);
		void setUserIcon(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::graphics::Bitmap arg1);
		jint startUserInBackground(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		jint stopUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean switchUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		void transferOwnership(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::PersistableBundle arg2);
		void uninstallAllUserCaCerts(__jni_impl::android::content::ComponentName arg0);
		void uninstallCaCert(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1);
		jboolean updateOverrideApn(__jni_impl::android::content::ComponentName arg0, jint arg1, __jni_impl::android::telephony::data::ApnSetting arg2);
		void wipeData(jint arg0);
		void wipeData(jint arg0, jstring arg1);
		void wipeData(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "DevicePolicyManager_InstallSystemUpdateCallback.hpp"
#include "SystemUpdateInfo.hpp"
#include "SystemUpdatePolicy.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../content/IntentFilter.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/ProxyInfo.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "../../security/AttestedKeyPair.hpp"
#include "../../security/keystore/KeyGenParameterSpec.hpp"
#include "../../telephony/data/ApnSetting.hpp"
#include "../../../java/security/cert/Certificate.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	jstring DevicePolicyManager::ACTION_ADD_DEVICE_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADD_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_ADMIN_POLICY_COMPLIANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADMIN_POLICY_COMPLIANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_DEVICE_ADMIN_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_ADMIN_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_DEVICE_OWNER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_OWNER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_GET_PROVISIONING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_GET_PROVISIONING_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_MANAGED_PROFILE_PROVISIONED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_MANAGED_PROFILE_PROVISIONED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_PROFILE_OWNER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROFILE_OWNER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_PROVISIONING_SUCCESSFUL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISIONING_SUCCESSFUL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_PROVISION_MANAGED_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_PROVISION_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_SET_NEW_PARENT_PROFILE_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PARENT_PROFILE_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_SET_NEW_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_START_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_START_ENCRYPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::ACTION_SYSTEM_UPDATE_POLICY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SYSTEM_UPDATE_POLICY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_APP_RESTRICTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_APP_RESTRICTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_BLOCK_UNINSTALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_BLOCK_UNINSTALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_CERT_INSTALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_INSTALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_CERT_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_SELECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_ENABLE_SYSTEM_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_ENABLE_SYSTEM_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_INSTALL_EXISTING_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_INSTALL_EXISTING_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_KEEP_UNINSTALLED_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_KEEP_UNINSTALLED_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_NETWORK_LOGGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_NETWORK_LOGGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_PACKAGE_ACCESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PACKAGE_ACCESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::DELEGATION_PERMISSION_GRANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PERMISSION_GRANT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVATING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVATING"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_PER_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_PER_USER"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_INACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_INACTIVE"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_UNSUPPORTED"
		);
	}
	jstring DevicePolicyManager::EXTRA_ADD_EXPLANATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_ADD_EXPLANATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_DELEGATION_SCOPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DELEGATION_SCOPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_DEVICE_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PASSWORD_COMPLEXITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PASSWORD_COMPLEXITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_CONTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_HEADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_HEADER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_EMAIL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_IMEI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_IMEI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_LOCAL_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCAL_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_LOGO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOGO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_MAIN_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MAIN_COLOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_SERIAL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SERIAL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_SKIP_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_ENCRYPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_SKIP_USER_CONSENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_USER_CONSENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_TIME_ZONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_DOMAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_DOMAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_EAP_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_EAP_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_HIDDEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_HIDDEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_IDENTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_IDENTITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PAC_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PAC_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PHASE2_AUTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PHASE2_AUTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_BYPASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_BYPASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_HOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_HOST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_PORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_PORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SECURITY_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SECURITY_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SSID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DevicePolicyManager::FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY"
		);
	}
	jint DevicePolicyManager::FLAG_MANAGED_CAN_ACCESS_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_MANAGED_CAN_ACCESS_PARENT"
		);
	}
	jint DevicePolicyManager::FLAG_PARENT_CAN_ACCESS_MANAGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_PARENT_CAN_ACCESS_MANAGED"
		);
	}
	jint DevicePolicyManager::ID_TYPE_BASE_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_BASE_INFO"
		);
	}
	jint DevicePolicyManager::ID_TYPE_IMEI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_IMEI"
		);
	}
	jint DevicePolicyManager::ID_TYPE_MEID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_MEID"
		);
	}
	jint DevicePolicyManager::ID_TYPE_SERIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_SERIAL"
		);
	}
	jint DevicePolicyManager::INSTALLKEY_REQUEST_CREDENTIALS_ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_REQUEST_CREDENTIALS_ACCESS"
		);
	}
	jint DevicePolicyManager::INSTALLKEY_SET_USER_SELECTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_SET_USER_SELECTABLE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_BIOMETRICS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_BIOMETRICS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FACE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_ALL"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_NONE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FINGERPRINT"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_IRIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_IRIS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_REMOTE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_REMOTE_INPUT"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_CAMERA"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_TRUST_AGENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_TRUST_AGENTS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_WIDGETS_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_WIDGETS_ALL"
		);
	}
	jint DevicePolicyManager::LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LEAVE_ALL_SYSTEM_APPS_ENABLED"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_GLOBAL_ACTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_GLOBAL_ACTIONS"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_HOME"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_KEYGUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_KEYGUARD"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NONE"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_OVERVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_OVERVIEW"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_SYSTEM_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_SYSTEM_INFO"
		);
	}
	jint DevicePolicyManager::MAKE_USER_EPHEMERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MAKE_USER_EPHEMERAL"
		);
	}
	jstring DevicePolicyManager::MIME_TYPE_PROVISIONING_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"MIME_TYPE_PROVISIONING_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_HIGH"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_LOW"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_MEDIUM"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_NONE"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_ALPHABETIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHABETIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_ALPHANUMERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHANUMERIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_BIOMETRIC_WEAK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_BIOMETRIC_WEAK"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_COMPLEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_COMPLEX"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC_COMPLEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC_COMPLEX"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_SOMETHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_SOMETHING"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_UNSPECIFIED"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DEFAULT"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_DENIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DENIED"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_GRANTED"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_AUTO_DENY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_DENY"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_AUTO_GRANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_GRANT"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_PROMPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_PROMPT"
		);
	}
	jstring DevicePolicyManager::POLICY_DISABLE_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::POLICY_DISABLE_SCREEN_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_SCREEN_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OFF"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_OPPORTUNISTIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OPPORTUNISTIC"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_PROVIDER_HOSTNAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_PROVIDER_HOSTNAME"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_UNKNOWN"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_FAILURE_SETTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_FAILURE_SETTING"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_NO_ERROR"
		);
	}
	jint DevicePolicyManager::PROVISIONING_MODE_FULLY_MANAGED_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_FULLY_MANAGED_DEVICE"
		);
	}
	jint DevicePolicyManager::PROVISIONING_MODE_MANAGED_PROFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_MANAGED_PROFILE"
		);
	}
	jint DevicePolicyManager::RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT"
		);
	}
	jint DevicePolicyManager::RESET_PASSWORD_REQUIRE_ENTRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_REQUIRE_ENTRY"
		);
	}
	jint DevicePolicyManager::SKIP_SETUP_WIZARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"SKIP_SETUP_WIZARD"
		);
	}
	jint DevicePolicyManager::WIPE_EUICC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EUICC"
		);
	}
	jint DevicePolicyManager::WIPE_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EXTERNAL_STORAGE"
		);
	}
	jint DevicePolicyManager::WIPE_RESET_PROTECTION_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_RESET_PROTECTION_DATA"
		);
	}
	jint DevicePolicyManager::WIPE_SILENTLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_SILENTLY"
		);
	}
	
	// Constructors
	void DevicePolicyManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DevicePolicyManager",
			"(V)V");
	}
	
	// Methods
	void DevicePolicyManager::addCrossProfileIntentFilter(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addCrossProfileIntentFilter",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean DevicePolicyManager::addCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::addCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint DevicePolicyManager::addOverrideApn(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::telephony::data::ApnSetting arg1)
	{
		return __thiz.callMethod<jint>(
			"addOverrideApn",
			"(Landroid/content/ComponentName;Landroid/telephony/data/ApnSetting;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::addPersistentPreferredActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1, __jni_impl::android::content::ComponentName arg2)
	{
		__thiz.callMethod<void>(
			"addPersistentPreferredActivity",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::addUserRestriction(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::addUserRestriction(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::bindDeviceAdminServiceAsUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::Intent arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::android::os::UserHandle arg4)
	{
		return __thiz.callMethod<jboolean>(
			"bindDeviceAdminServiceAsUser",
			"(Landroid/content/ComponentName;Landroid/content/Intent;Landroid/content/ServiceConnection;ILandroid/os/UserHandle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void DevicePolicyManager::clearApplicationUserData(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"clearApplicationUserData",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$OnClearApplicationUserDataListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void DevicePolicyManager::clearApplicationUserData(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"clearApplicationUserData",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$OnClearApplicationUserDataListener;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void DevicePolicyManager::clearCrossProfileIntentFilters(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"clearCrossProfileIntentFilters",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::clearDeviceOwnerApp(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clearDeviceOwnerApp",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DevicePolicyManager::clearDeviceOwnerApp(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clearDeviceOwnerApp",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DevicePolicyManager::clearPackagePersistentPreferredActivities(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"clearPackagePersistentPreferredActivities",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::clearPackagePersistentPreferredActivities(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"clearPackagePersistentPreferredActivities",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::clearProfileOwner(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"clearProfileOwner",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::clearResetPasswordToken(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clearResetPasswordToken",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::clearUserRestriction(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"clearUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::clearUserRestriction(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"clearUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DevicePolicyManager::createAdminSupportIntent(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createAdminSupportIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject DevicePolicyManager::createAdminSupportIntent(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createAdminSupportIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DevicePolicyManager::createAndManageUser(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::PersistableBundle arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"createAndManageUser",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/PersistableBundle;I)Landroid/os/UserHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject DevicePolicyManager::createAndManageUser(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::PersistableBundle arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"createAndManageUser",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/PersistableBundle;I)Landroid/os/UserHandle;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	jint DevicePolicyManager::enableSystemApp(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callMethod<jint>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Landroid/content/Intent;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::enableSystemApp(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::enableSystemApp(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DevicePolicyManager::generateKeyPair(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::security::keystore::KeyGenParameterSpec arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/security/keystore/KeyGenParameterSpec;I)Landroid/security/AttestedKeyPair;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject DevicePolicyManager::generateKeyPair(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::security::keystore::KeyGenParameterSpec arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/security/keystore/KeyGenParameterSpec;I)Landroid/security/AttestedKeyPair;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jarray DevicePolicyManager::getAccountTypesWithManagementDisabled()
	{
		return __thiz.callObjectMethod(
			"getAccountTypesWithManagementDisabled",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject DevicePolicyManager::getActiveAdmins()
	{
		return __thiz.callObjectMethod(
			"getActiveAdmins",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject DevicePolicyManager::getAffiliationIds(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getAffiliationIds",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getAlwaysOnVpnLockdownWhitelist(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getAlwaysOnVpnLockdownWhitelist",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jstring DevicePolicyManager::getAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DevicePolicyManager::getApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DevicePolicyManager::getApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring DevicePolicyManager::getApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean DevicePolicyManager::getAutoTimeRequired()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoTimeRequired",
			"()Z"
		);
	}
	QAndroidJniObject DevicePolicyManager::getBindDeviceAdminTargetUsers(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getBindDeviceAdminTargetUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::getBluetoothContactSharingDisabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::getCameraDisabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getCameraDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring DevicePolicyManager::getCertInstallerPackage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getCertInstallerPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DevicePolicyManager::getCrossProfileCalendarPackages(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::getCrossProfileCallerIdDisabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::getCrossProfileContactsSearchDisabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getCrossProfileWidgetProviders(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getCrossProfileWidgetProviders",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getCurrentFailedPasswordAttempts()
	{
		return __thiz.callMethod<jint>(
			"getCurrentFailedPasswordAttempts",
			"()I"
		);
	}
	QAndroidJniObject DevicePolicyManager::getDelegatePackages(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getDelegatePackages",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DevicePolicyManager::getDelegatePackages(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getDelegatePackages",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DevicePolicyManager::getDelegatedScopes(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DevicePolicyManager::getDelegatedScopes(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring DevicePolicyManager::getDeviceOwnerLockScreenInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceOwnerLockScreenInfo",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DevicePolicyManager::getEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getEndUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DevicePolicyManager::getGlobalPrivateDnsHost(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getGlobalPrivateDnsHost",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint DevicePolicyManager::getGlobalPrivateDnsMode(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getGlobalPrivateDnsMode",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getInstalledCaCerts(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledCaCerts",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getKeepUninstalledPackages(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getKeepUninstalledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getKeyguardDisabledFeatures(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getLockTaskFeatures(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getLockTaskFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jarray DevicePolicyManager::getLockTaskPackages(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getLockTaskPackages",
			"(Landroid/content/ComponentName;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jstring DevicePolicyManager::getLongSupportMessage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getLongSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint DevicePolicyManager::getMaximumFailedPasswordsForWipe(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jlong DevicePolicyManager::getMaximumTimeToLock(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jlong>(
			"getMaximumTimeToLock",
			"(Landroid/content/ComponentName;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getMeteredDataDisabledPackages(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getOrganizationColor(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getOrganizationColor",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jstring DevicePolicyManager::getOrganizationName(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getOrganizationName",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DevicePolicyManager::getOverrideApns(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getOverrideApns",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getParentProfileInstance(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getParentProfileInstance",
			"(Landroid/content/ComponentName;)Landroid/app/admin/DevicePolicyManager;",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordComplexity()
	{
		return __thiz.callMethod<jint>(
			"getPasswordComplexity",
			"()I"
		);
	}
	jlong DevicePolicyManager::getPasswordExpiration(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jlong>(
			"getPasswordExpiration",
			"(Landroid/content/ComponentName;)J",
			arg0.__jniObject().object()
		);
	}
	jlong DevicePolicyManager::getPasswordExpirationTimeout(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jlong>(
			"getPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordHistoryLength(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordHistoryLength",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMaximumLength(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMaximumLength",
			"(I)I",
			arg0
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLength(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumLength",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLetters(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumLetters",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLowerCase(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumNonLetter(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumNumeric(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumSymbols(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumUpperCase(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPasswordQuality(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPasswordQuality",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getPendingSystemUpdate(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getPendingSystemUpdate",
			"(Landroid/content/ComponentName;)Landroid/app/admin/SystemUpdateInfo;",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getPermissionGrantState(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"getPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint DevicePolicyManager::getPermissionGrantState(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"getPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jint DevicePolicyManager::getPermissionPolicy(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getPermissionPolicy",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getPermittedAccessibilityServices(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getPermittedCrossProfileNotificationListeners(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getPermittedInputMethods(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getPermittedInputMethods",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jlong DevicePolicyManager::getRequiredStrongAuthTimeout(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jlong>(
			"getRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::getScreenCaptureDisabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getScreenCaptureDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getSecondaryUsers(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getSecondaryUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jstring DevicePolicyManager::getShortSupportMessage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getShortSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DevicePolicyManager::getStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getStartUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean DevicePolicyManager::getStorageEncryption(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getStorageEncryption",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::getStorageEncryptionStatus()
	{
		return __thiz.callMethod<jint>(
			"getStorageEncryptionStatus",
			"()I"
		);
	}
	QAndroidJniObject DevicePolicyManager::getSystemUpdatePolicy()
	{
		return __thiz.callObjectMethod(
			"getSystemUpdatePolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	QAndroidJniObject DevicePolicyManager::getTransferOwnershipBundle()
	{
		return __thiz.callObjectMethod(
			"getTransferOwnershipBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject DevicePolicyManager::getTrustAgentConfiguration(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return __thiz.callObjectMethod(
			"getTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::getUserRestrictions(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getUserRestrictions",
			"(Landroid/content/ComponentName;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	jstring DevicePolicyManager::getWifiMacAddress(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getWifiMacAddress",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean DevicePolicyManager::hasCaCertInstalled(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasCaCertInstalled",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::hasGrantedPolicy(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasGrantedPolicy",
			"(Landroid/content/ComponentName;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::installCaCert(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jboolean>(
			"installCaCert",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::installExistingPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"installExistingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::installExistingPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"installExistingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::cert::Certificate arg2, jstring arg3)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;Ljava/security/cert/Certificate;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::cert::Certificate arg2, const QString &arg3)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;Ljava/security/cert/Certificate;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jboolean arg4)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, const QString &arg3, jboolean arg4)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jint arg4)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean DevicePolicyManager::installKeyPair(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, const QString &arg3, jint arg4)
	{
		return __thiz.callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4
		);
	}
	void DevicePolicyManager::installSystemUpdate(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3)
	{
		__thiz.callMethod<void>(
			"installSystemUpdate",
			"(Landroid/content/ComponentName;Landroid/net/Uri;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$InstallSystemUpdateCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isActivePasswordSufficient()
	{
		return __thiz.callMethod<jboolean>(
			"isActivePasswordSufficient",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isAdminActive(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAdminActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isAffiliatedUser()
	{
		return __thiz.callMethod<jboolean>(
			"isAffiliatedUser",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isAlwaysOnVpnLockdownEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysOnVpnLockdownEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isApplicationHidden(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::isApplicationHidden(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isBackupServiceEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBackupServiceEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isCallerApplicationRestrictionsManagingPackage()
	{
		return __thiz.callMethod<jboolean>(
			"isCallerApplicationRestrictionsManagingPackage",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isDeviceIdAttestationSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceIdAttestationSupported",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isDeviceOwnerApp(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DevicePolicyManager::isDeviceOwnerApp(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceOwnerApp",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isEphemeralUser(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEphemeralUser",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isLockTaskPermitted(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLockTaskPermitted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DevicePolicyManager::isLockTaskPermitted(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLockTaskPermitted",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isLogoutEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isLogoutEnabled",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isManagedProfile(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isManagedProfile",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isMasterVolumeMuted(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isMasterVolumeMuted",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isNetworkLoggingEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isOverrideApnEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOverrideApnEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isPackageSuspended(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageSuspended",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::isPackageSuspended(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageSuspended",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isProfileOwnerApp(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProfileOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DevicePolicyManager::isProfileOwnerApp(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProfileOwnerApp",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isProvisioningAllowed(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProvisioningAllowed",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DevicePolicyManager::isProvisioningAllowed(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProvisioningAllowed",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isResetPasswordTokenActive(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isResetPasswordTokenActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isSecurityLoggingEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::isUninstallBlocked(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::isUninstallBlocked(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isUsingUnifiedPassword(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUsingUnifiedPassword",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::lockNow()
	{
		__thiz.callMethod<void>(
			"lockNow",
			"()V"
		);
	}
	void DevicePolicyManager::lockNow(jint arg0)
	{
		__thiz.callMethod<void>(
			"lockNow",
			"(I)V",
			arg0
		);
	}
	jint DevicePolicyManager::logoutUser(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"logoutUser",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::reboot(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"reboot",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::removeActiveAdmin(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"removeActiveAdmin",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::removeCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::removeCrossProfileWidgetProvider(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::removeKeyPair(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::removeKeyPair(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::removeOverrideApn(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeOverrideApn",
			"(Landroid/content/ComponentName;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::removeUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::requestBugreport(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestBugreport",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::resetPassword(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"resetPassword",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jboolean DevicePolicyManager::resetPassword(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"resetPassword",
			"(Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean DevicePolicyManager::resetPasswordWithToken(__jni_impl::android::content::ComponentName arg0, jstring arg1, jbyteArray arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"resetPasswordWithToken",
			"(Landroid/content/ComponentName;Ljava/lang/String;[BI)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean DevicePolicyManager::resetPasswordWithToken(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jbyteArray arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"resetPasswordWithToken",
			"(Landroid/content/ComponentName;Ljava/lang/String;[BI)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject DevicePolicyManager::retrieveNetworkLogs(__jni_impl::android::content::ComponentName arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"retrieveNetworkLogs",
			"(Landroid/content/ComponentName;J)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DevicePolicyManager::retrievePreRebootSecurityLogs(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"retrievePreRebootSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DevicePolicyManager::retrieveSecurityLogs(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"retrieveSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::setAccountManagementDisabled(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setAccountManagementDisabled",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setAccountManagementDisabled(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setAccountManagementDisabled",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setAffiliationIds(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setAffiliationIds",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;ZLjava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;ZLjava/util/Set;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::setApplicationHidden(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean DevicePolicyManager::setApplicationHidden(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::setApplicationRestrictions(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::setApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setApplicationRestrictionsManagingPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setAutoTimeRequired(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setAutoTimeRequired",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setBackupServiceEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setBackupServiceEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setBluetoothContactSharingDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setCameraDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCameraDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setCertInstallerPackage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setCertInstallerPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setCertInstallerPackage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setCertInstallerPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setCrossProfileCalendarPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setCrossProfileCallerIdDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setCrossProfileContactsSearchDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setDefaultSmsApplication(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setDefaultSmsApplication",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setDefaultSmsApplication(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setDefaultSmsApplication",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setDelegatedScopes(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::setDelegatedScopes(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::setDeviceOwnerLockScreenInfo(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setDeviceOwnerLockScreenInfo",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setDeviceOwnerLockScreenInfo(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setDeviceOwnerLockScreenInfo",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setEndUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setEndUserSessionMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setEndUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint DevicePolicyManager::setGlobalPrivateDnsModeOpportunistic(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"setGlobalPrivateDnsModeOpportunistic",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint DevicePolicyManager::setGlobalPrivateDnsModeSpecifiedHost(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"setGlobalPrivateDnsModeSpecifiedHost",
			"(Landroid/content/ComponentName;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DevicePolicyManager::setGlobalPrivateDnsModeSpecifiedHost(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"setGlobalPrivateDnsModeSpecifiedHost",
			"(Landroid/content/ComponentName;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setGlobalSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setGlobalSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setGlobalSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setGlobalSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DevicePolicyManager::setKeepUninstalledPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setKeepUninstalledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::setKeyPairCertificate(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setKeyPairCertificate",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;Z)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean DevicePolicyManager::setKeyPairCertificate(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setKeyPairCertificate",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;Z)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean DevicePolicyManager::setKeyguardDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setKeyguardDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setKeyguardDisabledFeatures(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setLockTaskFeatures(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLockTaskFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setLockTaskPackages(__jni_impl::android::content::ComponentName arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"setLockTaskPackages",
			"(Landroid/content/ComponentName;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setLogoutEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setLogoutEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setLongSupportMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setLongSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setLongSupportMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setLongSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setMasterVolumeMuted(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setMasterVolumeMuted",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setMaximumFailedPasswordsForWipe(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setMaximumTimeToLock(__jni_impl::android::content::ComponentName arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setMaximumTimeToLock",
			"(Landroid/content/ComponentName;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DevicePolicyManager::setMeteredDataDisabledPackages(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setNetworkLoggingEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setOrganizationColor(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOrganizationColor",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setOrganizationName(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setOrganizationName",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setOrganizationName(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setOrganizationName",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setOverrideApnsEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setOverrideApnsEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray DevicePolicyManager::setPackagesSuspended(__jni_impl::android::content::ComponentName arg0, jarray arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"setPackagesSuspended",
			"(Landroid/content/ComponentName;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jarray>();
	}
	void DevicePolicyManager::setPasswordExpirationTimeout(__jni_impl::android::content::ComponentName arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordHistoryLength(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordHistoryLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLength(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLetters(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumLetters",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLowerCase(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumNonLetter(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumNumeric(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumSymbols(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumUpperCase(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordQuality(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPasswordQuality",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setPermissionGrantState(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean DevicePolicyManager::setPermissionGrantState(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	void DevicePolicyManager::setPermissionPolicy(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPermissionPolicy",
			"(Landroid/content/ComponentName;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setPermittedAccessibilityServices(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::setPermittedCrossProfileNotificationListeners(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::setPermittedInputMethods(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPermittedInputMethods",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setProfileEnabled(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"setProfileEnabled",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::setProfileName(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setProfileName",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setProfileName(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setProfileName",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setRecommendedGlobalProxy(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::net::ProxyInfo arg1)
	{
		__thiz.callMethod<void>(
			"setRecommendedGlobalProxy",
			"(Landroid/content/ComponentName;Landroid/net/ProxyInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setRequiredStrongAuthTimeout(__jni_impl::android::content::ComponentName arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setResetPasswordToken(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setResetPasswordToken",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setRestrictionsProvider(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1)
	{
		__thiz.callMethod<void>(
			"setRestrictionsProvider",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::setScreenCaptureDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setScreenCaptureDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setSecureSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setSecureSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setSecureSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setSecureSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DevicePolicyManager::setSecurityLoggingEnabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setShortSupportMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setShortSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setShortSupportMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setShortSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setStartUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setStartUserSessionMessage(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setStartUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean DevicePolicyManager::setStatusBarDisabled(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setStatusBarDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DevicePolicyManager::setStorageEncryption(__jni_impl::android::content::ComponentName arg0, jboolean arg1)
	{
		return __thiz.callMethod<jint>(
			"setStorageEncryption",
			"(Landroid/content/ComponentName;Z)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DevicePolicyManager::setSystemSetting(__jni_impl::android::content::ComponentName arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setSystemSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setSystemSetting(__jni_impl::android::content::ComponentName arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setSystemSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DevicePolicyManager::setSystemUpdatePolicy(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::app::admin::SystemUpdatePolicy arg1)
	{
		__thiz.callMethod<void>(
			"setSystemUpdatePolicy",
			"(Landroid/content/ComponentName;Landroid/app/admin/SystemUpdatePolicy;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::setTime(__jni_impl::android::content::ComponentName arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setTime",
			"(Landroid/content/ComponentName;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setTimeZone(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setTimeZone",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setTimeZone(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setTimeZone",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DevicePolicyManager::setTrustAgentConfiguration(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"setTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::setUninstallBlocked(__jni_impl::android::content::ComponentName arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DevicePolicyManager::setUninstallBlocked(__jni_impl::android::content::ComponentName arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setUserIcon(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"setUserIcon",
			"(Landroid/content/ComponentName;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint DevicePolicyManager::startUserInBackground(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jint>(
			"startUserInBackground",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint DevicePolicyManager::stopUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jint>(
			"stopUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DevicePolicyManager::switchUser(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"switchUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DevicePolicyManager::transferOwnership(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"transferOwnership",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::uninstallAllUserCaCerts(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"uninstallAllUserCaCerts",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void DevicePolicyManager::uninstallCaCert(__jni_impl::android::content::ComponentName arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"uninstallCaCert",
			"(Landroid/content/ComponentName;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::updateOverrideApn(__jni_impl::android::content::ComponentName arg0, jint arg1, __jni_impl::android::telephony::data::ApnSetting arg2)
	{
		return __thiz.callMethod<jboolean>(
			"updateOverrideApn",
			"(Landroid/content/ComponentName;ILandroid/telephony/data/ApnSetting;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DevicePolicyManager::wipeData(jint arg0)
	{
		__thiz.callMethod<void>(
			"wipeData",
			"(I)V",
			arg0
		);
	}
	void DevicePolicyManager::wipeData(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"wipeData",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void DevicePolicyManager::wipeData(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"wipeData",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DevicePolicyManager : public __jni_impl::android::app::admin::DevicePolicyManager
	{
	public:
		DevicePolicyManager(QAndroidJniObject obj) { __thiz = obj; }
		DevicePolicyManager()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER

