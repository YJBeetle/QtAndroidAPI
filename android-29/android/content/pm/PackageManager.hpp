#pragma once

#include "../../../JObject.hpp"

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
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class ChangedPackages;
}
namespace android::content::pm
{
	class InstrumentationInfo;
}
namespace android::content::pm
{
	class ModuleInfo;
}
namespace android::content::pm
{
	class PackageInfo;
}
namespace android::content::pm
{
	class PackageInstaller;
}
namespace android::content::pm
{
	class PermissionGroupInfo;
}
namespace android::content::pm
{
	class PermissionInfo;
}
namespace android::content::pm
{
	class ProviderInfo;
}
namespace android::content::pm
{
	class ResolveInfo;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::content::pm
{
	class VersionedPackage;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class UserHandle;
}

namespace android::content::pm
{
	class PackageManager : public JObject
	{
	public:
		// Fields
		static jint CERT_INPUT_RAW_X509();
		static jint CERT_INPUT_SHA256();
		static jint COMPONENT_ENABLED_STATE_DEFAULT();
		static jint COMPONENT_ENABLED_STATE_DISABLED();
		static jint COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED();
		static jint COMPONENT_ENABLED_STATE_DISABLED_USER();
		static jint COMPONENT_ENABLED_STATE_ENABLED();
		static jint DONT_KILL_APP();
		static jstring EXTRA_VERIFICATION_ID();
		static jstring EXTRA_VERIFICATION_RESULT();
		static jstring FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS();
		static jstring FEATURE_APP_WIDGETS();
		static jstring FEATURE_AUDIO_LOW_LATENCY();
		static jstring FEATURE_AUDIO_OUTPUT();
		static jstring FEATURE_AUDIO_PRO();
		static jstring FEATURE_AUTOFILL();
		static jstring FEATURE_AUTOMOTIVE();
		static jstring FEATURE_BACKUP();
		static jstring FEATURE_BLUETOOTH();
		static jstring FEATURE_BLUETOOTH_LE();
		static jstring FEATURE_CAMERA();
		static jstring FEATURE_CAMERA_ANY();
		static jstring FEATURE_CAMERA_AR();
		static jstring FEATURE_CAMERA_AUTOFOCUS();
		static jstring FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING();
		static jstring FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR();
		static jstring FEATURE_CAMERA_CAPABILITY_RAW();
		static jstring FEATURE_CAMERA_EXTERNAL();
		static jstring FEATURE_CAMERA_FLASH();
		static jstring FEATURE_CAMERA_FRONT();
		static jstring FEATURE_CAMERA_LEVEL_FULL();
		static jstring FEATURE_CANT_SAVE_STATE();
		static jstring FEATURE_COMPANION_DEVICE_SETUP();
		static jstring FEATURE_CONNECTION_SERVICE();
		static jstring FEATURE_CONSUMER_IR();
		static jstring FEATURE_DEVICE_ADMIN();
		static jstring FEATURE_EMBEDDED();
		static jstring FEATURE_ETHERNET();
		static jstring FEATURE_FACE();
		static jstring FEATURE_FAKETOUCH();
		static jstring FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT();
		static jstring FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND();
		static jstring FEATURE_FINGERPRINT();
		static jstring FEATURE_FREEFORM_WINDOW_MANAGEMENT();
		static jstring FEATURE_GAMEPAD();
		static jstring FEATURE_HIFI_SENSORS();
		static jstring FEATURE_HOME_SCREEN();
		static jstring FEATURE_INPUT_METHODS();
		static jstring FEATURE_IPSEC_TUNNELS();
		static jstring FEATURE_IRIS();
		static jstring FEATURE_LEANBACK();
		static jstring FEATURE_LEANBACK_ONLY();
		static jstring FEATURE_LIVE_TV();
		static jstring FEATURE_LIVE_WALLPAPER();
		static jstring FEATURE_LOCATION();
		static jstring FEATURE_LOCATION_GPS();
		static jstring FEATURE_LOCATION_NETWORK();
		static jstring FEATURE_MANAGED_USERS();
		static jstring FEATURE_MICROPHONE();
		static jstring FEATURE_MIDI();
		static jstring FEATURE_NFC();
		static jstring FEATURE_NFC_BEAM();
		static jstring FEATURE_NFC_HOST_CARD_EMULATION();
		static jstring FEATURE_NFC_HOST_CARD_EMULATION_NFCF();
		static jstring FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE();
		static jstring FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC();
		static jstring FEATURE_OPENGLES_EXTENSION_PACK();
		static jstring FEATURE_PC();
		static jstring FEATURE_PICTURE_IN_PICTURE();
		static jstring FEATURE_PRINTING();
		static jstring FEATURE_RAM_LOW();
		static jstring FEATURE_RAM_NORMAL();
		static jstring FEATURE_SCREEN_LANDSCAPE();
		static jstring FEATURE_SCREEN_PORTRAIT();
		static jstring FEATURE_SECURELY_REMOVES_USERS();
		static jstring FEATURE_SECURE_LOCK_SCREEN();
		static jstring FEATURE_SENSOR_ACCELEROMETER();
		static jstring FEATURE_SENSOR_AMBIENT_TEMPERATURE();
		static jstring FEATURE_SENSOR_BAROMETER();
		static jstring FEATURE_SENSOR_COMPASS();
		static jstring FEATURE_SENSOR_GYROSCOPE();
		static jstring FEATURE_SENSOR_HEART_RATE();
		static jstring FEATURE_SENSOR_HEART_RATE_ECG();
		static jstring FEATURE_SENSOR_LIGHT();
		static jstring FEATURE_SENSOR_PROXIMITY();
		static jstring FEATURE_SENSOR_RELATIVE_HUMIDITY();
		static jstring FEATURE_SENSOR_STEP_COUNTER();
		static jstring FEATURE_SENSOR_STEP_DETECTOR();
		static jstring FEATURE_SIP();
		static jstring FEATURE_SIP_VOIP();
		static jstring FEATURE_STRONGBOX_KEYSTORE();
		static jstring FEATURE_TELEPHONY();
		static jstring FEATURE_TELEPHONY_CDMA();
		static jstring FEATURE_TELEPHONY_EUICC();
		static jstring FEATURE_TELEPHONY_GSM();
		static jstring FEATURE_TELEPHONY_IMS();
		static jstring FEATURE_TELEPHONY_MBMS();
		static jstring FEATURE_TELEVISION();
		static jstring FEATURE_TOUCHSCREEN();
		static jstring FEATURE_TOUCHSCREEN_MULTITOUCH();
		static jstring FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT();
		static jstring FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND();
		static jstring FEATURE_USB_ACCESSORY();
		static jstring FEATURE_USB_HOST();
		static jstring FEATURE_VERIFIED_BOOT();
		static jstring FEATURE_VR_HEADTRACKING();
		static jstring FEATURE_VR_MODE();
		static jstring FEATURE_VR_MODE_HIGH_PERFORMANCE();
		static jstring FEATURE_VULKAN_HARDWARE_COMPUTE();
		static jstring FEATURE_VULKAN_HARDWARE_LEVEL();
		static jstring FEATURE_VULKAN_HARDWARE_VERSION();
		static jstring FEATURE_WATCH();
		static jstring FEATURE_WEBVIEW();
		static jstring FEATURE_WIFI();
		static jstring FEATURE_WIFI_AWARE();
		static jstring FEATURE_WIFI_DIRECT();
		static jstring FEATURE_WIFI_PASSPOINT();
		static jstring FEATURE_WIFI_RTT();
		static jint FLAG_PERMISSION_WHITELIST_INSTALLER();
		static jint FLAG_PERMISSION_WHITELIST_SYSTEM();
		static jint FLAG_PERMISSION_WHITELIST_UPGRADE();
		static jint GET_ACTIVITIES();
		static jint GET_CONFIGURATIONS();
		static jint GET_DISABLED_COMPONENTS();
		static jint GET_DISABLED_UNTIL_USED_COMPONENTS();
		static jint GET_GIDS();
		static jint GET_INSTRUMENTATION();
		static jint GET_INTENT_FILTERS();
		static jint GET_META_DATA();
		static jint GET_PERMISSIONS();
		static jint GET_PROVIDERS();
		static jint GET_RECEIVERS();
		static jint GET_RESOLVED_FILTER();
		static jint GET_SERVICES();
		static jint GET_SHARED_LIBRARY_FILES();
		static jint GET_SIGNATURES();
		static jint GET_SIGNING_CERTIFICATES();
		static jint GET_UNINSTALLED_PACKAGES();
		static jint GET_URI_PERMISSION_PATTERNS();
		static jint INSTALL_REASON_DEVICE_RESTORE();
		static jint INSTALL_REASON_DEVICE_SETUP();
		static jint INSTALL_REASON_POLICY();
		static jint INSTALL_REASON_UNKNOWN();
		static jint INSTALL_REASON_USER();
		static jint MATCH_ALL();
		static jint MATCH_APEX();
		static jint MATCH_DEFAULT_ONLY();
		static jint MATCH_DIRECT_BOOT_AUTO();
		static jint MATCH_DIRECT_BOOT_AWARE();
		static jint MATCH_DIRECT_BOOT_UNAWARE();
		static jint MATCH_DISABLED_COMPONENTS();
		static jint MATCH_DISABLED_UNTIL_USED_COMPONENTS();
		static jint MATCH_SYSTEM_ONLY();
		static jint MATCH_UNINSTALLED_PACKAGES();
		static jlong MAXIMUM_VERIFICATION_TIMEOUT();
		static jint PERMISSION_DENIED();
		static jint PERMISSION_GRANTED();
		static jint SIGNATURE_FIRST_NOT_SIGNED();
		static jint SIGNATURE_MATCH();
		static jint SIGNATURE_NEITHER_SIGNED();
		static jint SIGNATURE_NO_MATCH();
		static jint SIGNATURE_SECOND_NOT_SIGNED();
		static jint SIGNATURE_UNKNOWN_PACKAGE();
		static jint VERIFICATION_ALLOW();
		static jint VERIFICATION_REJECT();
		static jint VERSION_CODE_HIGHEST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager(QAndroidJniObject obj);
		
		// Constructors
		PackageManager();
		
		// Methods
		void addPackageToPreferred(jstring arg0);
		jboolean addPermission(android::content::pm::PermissionInfo arg0);
		jboolean addPermissionAsync(android::content::pm::PermissionInfo arg0);
		void addPreferredActivity(android::content::IntentFilter arg0, jint arg1, jarray arg2, android::content::ComponentName arg3);
		jboolean addWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2);
		jboolean canRequestPackageInstalls();
		jarray canonicalToCurrentPackageNames(jarray arg0);
		jint checkPermission(jstring arg0, jstring arg1);
		jint checkSignatures(jint arg0, jint arg1);
		jint checkSignatures(jstring arg0, jstring arg1);
		void clearInstantAppCookie();
		void clearPackagePreferredActivities(jstring arg0);
		jarray currentToCanonicalPackageNames(jarray arg0);
		void extendVerificationTimeout(jint arg0, jint arg1, jlong arg2);
		android::graphics::drawable::Drawable getActivityBanner(android::content::ComponentName arg0);
		android::graphics::drawable::Drawable getActivityBanner(android::content::Intent arg0);
		android::graphics::drawable::Drawable getActivityIcon(android::content::ComponentName arg0);
		android::graphics::drawable::Drawable getActivityIcon(android::content::Intent arg0);
		android::content::pm::ActivityInfo getActivityInfo(android::content::ComponentName arg0, jint arg1);
		android::graphics::drawable::Drawable getActivityLogo(android::content::ComponentName arg0);
		android::graphics::drawable::Drawable getActivityLogo(android::content::Intent arg0);
		JObject getAllPermissionGroups(jint arg0);
		android::graphics::drawable::Drawable getApplicationBanner(android::content::pm::ApplicationInfo arg0);
		android::graphics::drawable::Drawable getApplicationBanner(jstring arg0);
		jint getApplicationEnabledSetting(jstring arg0);
		android::graphics::drawable::Drawable getApplicationIcon(android::content::pm::ApplicationInfo arg0);
		android::graphics::drawable::Drawable getApplicationIcon(jstring arg0);
		android::content::pm::ApplicationInfo getApplicationInfo(jstring arg0, jint arg1);
		jstring getApplicationLabel(android::content::pm::ApplicationInfo arg0);
		android::graphics::drawable::Drawable getApplicationLogo(android::content::pm::ApplicationInfo arg0);
		android::graphics::drawable::Drawable getApplicationLogo(jstring arg0);
		android::content::pm::ChangedPackages getChangedPackages(jint arg0);
		jint getComponentEnabledSetting(android::content::ComponentName arg0);
		android::graphics::drawable::Drawable getDefaultActivityIcon();
		android::graphics::drawable::Drawable getDrawable(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2);
		JObject getInstalledApplications(jint arg0);
		JObject getInstalledModules(jint arg0);
		JObject getInstalledPackages(jint arg0);
		jstring getInstallerPackageName(jstring arg0);
		jbyteArray getInstantAppCookie();
		jint getInstantAppCookieMaxBytes();
		android::content::pm::InstrumentationInfo getInstrumentationInfo(android::content::ComponentName arg0, jint arg1);
		android::content::Intent getLaunchIntentForPackage(jstring arg0);
		android::content::Intent getLeanbackLaunchIntentForPackage(jstring arg0);
		android::content::pm::ModuleInfo getModuleInfo(jstring arg0, jint arg1);
		jstring getNameForUid(jint arg0);
		android::content::pm::PackageInfo getPackageArchiveInfo(jstring arg0, jint arg1);
		jintArray getPackageGids(jstring arg0);
		jintArray getPackageGids(jstring arg0, jint arg1);
		android::content::pm::PackageInfo getPackageInfo(android::content::pm::VersionedPackage arg0, jint arg1);
		android::content::pm::PackageInfo getPackageInfo(jstring arg0, jint arg1);
		android::content::pm::PackageInstaller getPackageInstaller();
		jint getPackageUid(jstring arg0, jint arg1);
		jarray getPackagesForUid(jint arg0);
		JObject getPackagesHoldingPermissions(jarray arg0, jint arg1);
		android::content::pm::PermissionGroupInfo getPermissionGroupInfo(jstring arg0, jint arg1);
		android::content::pm::PermissionInfo getPermissionInfo(jstring arg0, jint arg1);
		jint getPreferredActivities(JObject arg0, JObject arg1, jstring arg2);
		JObject getPreferredPackages(jint arg0);
		android::content::pm::ProviderInfo getProviderInfo(android::content::ComponentName arg0, jint arg1);
		android::content::pm::ActivityInfo getReceiverInfo(android::content::ComponentName arg0, jint arg1);
		android::content::res::Resources getResourcesForActivity(android::content::ComponentName arg0);
		android::content::res::Resources getResourcesForApplication(android::content::pm::ApplicationInfo arg0);
		android::content::res::Resources getResourcesForApplication(jstring arg0);
		android::content::pm::ServiceInfo getServiceInfo(android::content::ComponentName arg0, jint arg1);
		JObject getSharedLibraries(jint arg0);
		android::os::Bundle getSuspendedPackageAppExtras();
		jboolean getSyntheticAppDetailsActivityEnabled(jstring arg0);
		jarray getSystemAvailableFeatures();
		jarray getSystemSharedLibraryNames();
		jstring getText(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2);
		android::graphics::drawable::Drawable getUserBadgedDrawableForDensity(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, jint arg3);
		android::graphics::drawable::Drawable getUserBadgedIcon(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1);
		jstring getUserBadgedLabel(jstring arg0, android::os::UserHandle arg1);
		JObject getWhitelistedRestrictedPermissions(jstring arg0, jint arg1);
		JObject getXml(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2);
		jboolean hasSigningCertificate(jint arg0, jbyteArray arg1, jint arg2);
		jboolean hasSigningCertificate(jstring arg0, jbyteArray arg1, jint arg2);
		jboolean hasSystemFeature(jstring arg0);
		jboolean hasSystemFeature(jstring arg0, jint arg1);
		jboolean isDeviceUpgrading();
		jboolean isInstantApp();
		jboolean isInstantApp(jstring arg0);
		jboolean isPackageSuspended();
		jboolean isPackageSuspended(jstring arg0);
		jboolean isPermissionRevokedByPolicy(jstring arg0, jstring arg1);
		jboolean isSafeMode();
		JObject queryBroadcastReceivers(android::content::Intent arg0, jint arg1);
		JObject queryContentProviders(jstring arg0, jint arg1, jint arg2);
		JObject queryInstrumentation(jstring arg0, jint arg1);
		JObject queryIntentActivities(android::content::Intent arg0, jint arg1);
		JObject queryIntentActivityOptions(android::content::ComponentName arg0, jarray arg1, android::content::Intent arg2, jint arg3);
		JObject queryIntentContentProviders(android::content::Intent arg0, jint arg1);
		JObject queryIntentServices(android::content::Intent arg0, jint arg1);
		JObject queryPermissionsByGroup(jstring arg0, jint arg1);
		void removePackageFromPreferred(jstring arg0);
		void removePermission(jstring arg0);
		jboolean removeWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2);
		android::content::pm::ResolveInfo resolveActivity(android::content::Intent arg0, jint arg1);
		android::content::pm::ProviderInfo resolveContentProvider(jstring arg0, jint arg1);
		android::content::pm::ResolveInfo resolveService(android::content::Intent arg0, jint arg1);
		void setApplicationCategoryHint(jstring arg0, jint arg1);
		void setApplicationEnabledSetting(jstring arg0, jint arg1, jint arg2);
		void setComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2);
		void setInstallerPackageName(jstring arg0, jstring arg1);
		void updateInstantAppCookie(jbyteArray arg0);
		void verifyPendingInstall(jint arg0, jint arg1);
	};
} // namespace android::content::pm

