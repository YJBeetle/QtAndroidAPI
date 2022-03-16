#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JIntArray;
class JArray;
class JArray;
class JArray;
class JArray;
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
class JString;
class JString;

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
		static JString EXTRA_VERIFICATION_ID();
		static JString EXTRA_VERIFICATION_RESULT();
		static JString FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS();
		static JString FEATURE_APP_WIDGETS();
		static JString FEATURE_AUDIO_LOW_LATENCY();
		static JString FEATURE_AUDIO_OUTPUT();
		static JString FEATURE_AUDIO_PRO();
		static JString FEATURE_AUTOFILL();
		static JString FEATURE_AUTOMOTIVE();
		static JString FEATURE_BACKUP();
		static JString FEATURE_BLUETOOTH();
		static JString FEATURE_BLUETOOTH_LE();
		static JString FEATURE_CAMERA();
		static JString FEATURE_CAMERA_ANY();
		static JString FEATURE_CAMERA_AR();
		static JString FEATURE_CAMERA_AUTOFOCUS();
		static JString FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING();
		static JString FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR();
		static JString FEATURE_CAMERA_CAPABILITY_RAW();
		static JString FEATURE_CAMERA_EXTERNAL();
		static JString FEATURE_CAMERA_FLASH();
		static JString FEATURE_CAMERA_FRONT();
		static JString FEATURE_CAMERA_LEVEL_FULL();
		static JString FEATURE_CANT_SAVE_STATE();
		static JString FEATURE_COMPANION_DEVICE_SETUP();
		static JString FEATURE_CONNECTION_SERVICE();
		static JString FEATURE_CONSUMER_IR();
		static JString FEATURE_DEVICE_ADMIN();
		static JString FEATURE_EMBEDDED();
		static JString FEATURE_ETHERNET();
		static JString FEATURE_FACE();
		static JString FEATURE_FAKETOUCH();
		static JString FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT();
		static JString FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND();
		static JString FEATURE_FINGERPRINT();
		static JString FEATURE_FREEFORM_WINDOW_MANAGEMENT();
		static JString FEATURE_GAMEPAD();
		static JString FEATURE_HIFI_SENSORS();
		static JString FEATURE_HOME_SCREEN();
		static JString FEATURE_INPUT_METHODS();
		static JString FEATURE_IPSEC_TUNNELS();
		static JString FEATURE_IRIS();
		static JString FEATURE_LEANBACK();
		static JString FEATURE_LEANBACK_ONLY();
		static JString FEATURE_LIVE_TV();
		static JString FEATURE_LIVE_WALLPAPER();
		static JString FEATURE_LOCATION();
		static JString FEATURE_LOCATION_GPS();
		static JString FEATURE_LOCATION_NETWORK();
		static JString FEATURE_MANAGED_USERS();
		static JString FEATURE_MICROPHONE();
		static JString FEATURE_MIDI();
		static JString FEATURE_NFC();
		static JString FEATURE_NFC_BEAM();
		static JString FEATURE_NFC_HOST_CARD_EMULATION();
		static JString FEATURE_NFC_HOST_CARD_EMULATION_NFCF();
		static JString FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE();
		static JString FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC();
		static JString FEATURE_OPENGLES_EXTENSION_PACK();
		static JString FEATURE_PC();
		static JString FEATURE_PICTURE_IN_PICTURE();
		static JString FEATURE_PRINTING();
		static JString FEATURE_RAM_LOW();
		static JString FEATURE_RAM_NORMAL();
		static JString FEATURE_SCREEN_LANDSCAPE();
		static JString FEATURE_SCREEN_PORTRAIT();
		static JString FEATURE_SECURELY_REMOVES_USERS();
		static JString FEATURE_SECURE_LOCK_SCREEN();
		static JString FEATURE_SENSOR_ACCELEROMETER();
		static JString FEATURE_SENSOR_AMBIENT_TEMPERATURE();
		static JString FEATURE_SENSOR_BAROMETER();
		static JString FEATURE_SENSOR_COMPASS();
		static JString FEATURE_SENSOR_GYROSCOPE();
		static JString FEATURE_SENSOR_HEART_RATE();
		static JString FEATURE_SENSOR_HEART_RATE_ECG();
		static JString FEATURE_SENSOR_LIGHT();
		static JString FEATURE_SENSOR_PROXIMITY();
		static JString FEATURE_SENSOR_RELATIVE_HUMIDITY();
		static JString FEATURE_SENSOR_STEP_COUNTER();
		static JString FEATURE_SENSOR_STEP_DETECTOR();
		static JString FEATURE_SIP();
		static JString FEATURE_SIP_VOIP();
		static JString FEATURE_STRONGBOX_KEYSTORE();
		static JString FEATURE_TELEPHONY();
		static JString FEATURE_TELEPHONY_CDMA();
		static JString FEATURE_TELEPHONY_EUICC();
		static JString FEATURE_TELEPHONY_GSM();
		static JString FEATURE_TELEPHONY_IMS();
		static JString FEATURE_TELEPHONY_MBMS();
		static JString FEATURE_TELEVISION();
		static JString FEATURE_TOUCHSCREEN();
		static JString FEATURE_TOUCHSCREEN_MULTITOUCH();
		static JString FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT();
		static JString FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND();
		static JString FEATURE_USB_ACCESSORY();
		static JString FEATURE_USB_HOST();
		static JString FEATURE_VERIFIED_BOOT();
		static JString FEATURE_VR_HEADTRACKING();
		static JString FEATURE_VR_MODE();
		static JString FEATURE_VR_MODE_HIGH_PERFORMANCE();
		static JString FEATURE_VULKAN_HARDWARE_COMPUTE();
		static JString FEATURE_VULKAN_HARDWARE_LEVEL();
		static JString FEATURE_VULKAN_HARDWARE_VERSION();
		static JString FEATURE_WATCH();
		static JString FEATURE_WEBVIEW();
		static JString FEATURE_WIFI();
		static JString FEATURE_WIFI_AWARE();
		static JString FEATURE_WIFI_DIRECT();
		static JString FEATURE_WIFI_PASSPOINT();
		static JString FEATURE_WIFI_RTT();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageManager();
		
		// Methods
		void addPackageToPreferred(JString arg0) const;
		jboolean addPermission(android::content::pm::PermissionInfo arg0) const;
		jboolean addPermissionAsync(android::content::pm::PermissionInfo arg0) const;
		void addPreferredActivity(android::content::IntentFilter arg0, jint arg1, JArray arg2, android::content::ComponentName arg3) const;
		jboolean addWhitelistedRestrictedPermission(JString arg0, JString arg1, jint arg2) const;
		jboolean canRequestPackageInstalls() const;
		JArray canonicalToCurrentPackageNames(JArray arg0) const;
		jint checkPermission(JString arg0, JString arg1) const;
		jint checkSignatures(jint arg0, jint arg1) const;
		jint checkSignatures(JString arg0, JString arg1) const;
		void clearInstantAppCookie() const;
		void clearPackagePreferredActivities(JString arg0) const;
		JArray currentToCanonicalPackageNames(JArray arg0) const;
		void extendVerificationTimeout(jint arg0, jint arg1, jlong arg2) const;
		android::graphics::drawable::Drawable getActivityBanner(android::content::ComponentName arg0) const;
		android::graphics::drawable::Drawable getActivityBanner(android::content::Intent arg0) const;
		android::graphics::drawable::Drawable getActivityIcon(android::content::ComponentName arg0) const;
		android::graphics::drawable::Drawable getActivityIcon(android::content::Intent arg0) const;
		android::content::pm::ActivityInfo getActivityInfo(android::content::ComponentName arg0, jint arg1) const;
		android::graphics::drawable::Drawable getActivityLogo(android::content::ComponentName arg0) const;
		android::graphics::drawable::Drawable getActivityLogo(android::content::Intent arg0) const;
		JObject getAllPermissionGroups(jint arg0) const;
		android::graphics::drawable::Drawable getApplicationBanner(android::content::pm::ApplicationInfo arg0) const;
		android::graphics::drawable::Drawable getApplicationBanner(JString arg0) const;
		jint getApplicationEnabledSetting(JString arg0) const;
		android::graphics::drawable::Drawable getApplicationIcon(android::content::pm::ApplicationInfo arg0) const;
		android::graphics::drawable::Drawable getApplicationIcon(JString arg0) const;
		android::content::pm::ApplicationInfo getApplicationInfo(JString arg0, jint arg1) const;
		JString getApplicationLabel(android::content::pm::ApplicationInfo arg0) const;
		android::graphics::drawable::Drawable getApplicationLogo(android::content::pm::ApplicationInfo arg0) const;
		android::graphics::drawable::Drawable getApplicationLogo(JString arg0) const;
		android::content::pm::ChangedPackages getChangedPackages(jint arg0) const;
		jint getComponentEnabledSetting(android::content::ComponentName arg0) const;
		android::graphics::drawable::Drawable getDefaultActivityIcon() const;
		android::graphics::drawable::Drawable getDrawable(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const;
		JObject getInstalledApplications(jint arg0) const;
		JObject getInstalledModules(jint arg0) const;
		JObject getInstalledPackages(jint arg0) const;
		JString getInstallerPackageName(JString arg0) const;
		JByteArray getInstantAppCookie() const;
		jint getInstantAppCookieMaxBytes() const;
		android::content::pm::InstrumentationInfo getInstrumentationInfo(android::content::ComponentName arg0, jint arg1) const;
		android::content::Intent getLaunchIntentForPackage(JString arg0) const;
		android::content::Intent getLeanbackLaunchIntentForPackage(JString arg0) const;
		android::content::pm::ModuleInfo getModuleInfo(JString arg0, jint arg1) const;
		JString getNameForUid(jint arg0) const;
		android::content::pm::PackageInfo getPackageArchiveInfo(JString arg0, jint arg1) const;
		JIntArray getPackageGids(JString arg0) const;
		JIntArray getPackageGids(JString arg0, jint arg1) const;
		android::content::pm::PackageInfo getPackageInfo(android::content::pm::VersionedPackage arg0, jint arg1) const;
		android::content::pm::PackageInfo getPackageInfo(JString arg0, jint arg1) const;
		android::content::pm::PackageInstaller getPackageInstaller() const;
		jint getPackageUid(JString arg0, jint arg1) const;
		JArray getPackagesForUid(jint arg0) const;
		JObject getPackagesHoldingPermissions(JArray arg0, jint arg1) const;
		android::content::pm::PermissionGroupInfo getPermissionGroupInfo(JString arg0, jint arg1) const;
		android::content::pm::PermissionInfo getPermissionInfo(JString arg0, jint arg1) const;
		jint getPreferredActivities(JObject arg0, JObject arg1, JString arg2) const;
		JObject getPreferredPackages(jint arg0) const;
		android::content::pm::ProviderInfo getProviderInfo(android::content::ComponentName arg0, jint arg1) const;
		android::content::pm::ActivityInfo getReceiverInfo(android::content::ComponentName arg0, jint arg1) const;
		android::content::res::Resources getResourcesForActivity(android::content::ComponentName arg0) const;
		android::content::res::Resources getResourcesForApplication(android::content::pm::ApplicationInfo arg0) const;
		android::content::res::Resources getResourcesForApplication(JString arg0) const;
		android::content::pm::ServiceInfo getServiceInfo(android::content::ComponentName arg0, jint arg1) const;
		JObject getSharedLibraries(jint arg0) const;
		android::os::Bundle getSuspendedPackageAppExtras() const;
		jboolean getSyntheticAppDetailsActivityEnabled(JString arg0) const;
		JArray getSystemAvailableFeatures() const;
		JArray getSystemSharedLibraryNames() const;
		JString getText(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const;
		android::graphics::drawable::Drawable getUserBadgedDrawableForDensity(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, jint arg3) const;
		android::graphics::drawable::Drawable getUserBadgedIcon(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1) const;
		JString getUserBadgedLabel(JString arg0, android::os::UserHandle arg1) const;
		JObject getWhitelistedRestrictedPermissions(JString arg0, jint arg1) const;
		JObject getXml(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const;
		jboolean hasSigningCertificate(jint arg0, JByteArray arg1, jint arg2) const;
		jboolean hasSigningCertificate(JString arg0, JByteArray arg1, jint arg2) const;
		jboolean hasSystemFeature(JString arg0) const;
		jboolean hasSystemFeature(JString arg0, jint arg1) const;
		jboolean isDeviceUpgrading() const;
		jboolean isInstantApp() const;
		jboolean isInstantApp(JString arg0) const;
		jboolean isPackageSuspended() const;
		jboolean isPackageSuspended(JString arg0) const;
		jboolean isPermissionRevokedByPolicy(JString arg0, JString arg1) const;
		jboolean isSafeMode() const;
		JObject queryBroadcastReceivers(android::content::Intent arg0, jint arg1) const;
		JObject queryContentProviders(JString arg0, jint arg1, jint arg2) const;
		JObject queryInstrumentation(JString arg0, jint arg1) const;
		JObject queryIntentActivities(android::content::Intent arg0, jint arg1) const;
		JObject queryIntentActivityOptions(android::content::ComponentName arg0, JArray arg1, android::content::Intent arg2, jint arg3) const;
		JObject queryIntentContentProviders(android::content::Intent arg0, jint arg1) const;
		JObject queryIntentServices(android::content::Intent arg0, jint arg1) const;
		JObject queryPermissionsByGroup(JString arg0, jint arg1) const;
		void removePackageFromPreferred(JString arg0) const;
		void removePermission(JString arg0) const;
		jboolean removeWhitelistedRestrictedPermission(JString arg0, JString arg1, jint arg2) const;
		android::content::pm::ResolveInfo resolveActivity(android::content::Intent arg0, jint arg1) const;
		android::content::pm::ProviderInfo resolveContentProvider(JString arg0, jint arg1) const;
		android::content::pm::ResolveInfo resolveService(android::content::Intent arg0, jint arg1) const;
		void setApplicationCategoryHint(JString arg0, jint arg1) const;
		void setApplicationEnabledSetting(JString arg0, jint arg1, jint arg2) const;
		void setComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2) const;
		void setInstallerPackageName(JString arg0, JString arg1) const;
		void updateInstantAppCookie(JByteArray arg0) const;
		void verifyPendingInstall(jint arg0, jint arg1) const;
	};
} // namespace android::content::pm

