#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEMANAGER
#define ANDROID_CONTENT_PM_PACKAGEMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class PackageInfo;
}
namespace __jni_impl::android::content::pm
{
	class VersionedPackage;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content::pm
{
	class PermissionInfo;
}
namespace __jni_impl::android::content::pm
{
	class PermissionGroupInfo;
}
namespace __jni_impl::android::content::pm
{
	class ActivityInfo;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content::pm
{
	class ProviderInfo;
}
namespace __jni_impl::android::content::pm
{
	class ModuleInfo;
}
namespace __jni_impl::android::content::pm
{
	class ChangedPackages;
}
namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::content::pm
{
	class InstrumentationInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller;
}
namespace __jni_impl::android::content::pm
{
	class ServiceInfo;
}

namespace __jni_impl::android::content::pm
{
	class PackageManager : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
		jint checkPermission(jstring arg0, jstring arg1);
		jint checkPermission(const QString &arg0, const QString &arg1);
		QAndroidJniObject getPackageInfo(__jni_impl::android::content::pm::VersionedPackage arg0, jint arg1);
		QAndroidJniObject getPackageInfo(jstring arg0, jint arg1);
		QAndroidJniObject getPackageInfo(const QString &arg0, jint arg1);
		jstring getText(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		jstring getText(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		QAndroidJniObject getXml(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		QAndroidJniObject getXml(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		jarray currentToCanonicalPackageNames(jarray arg0);
		jarray canonicalToCurrentPackageNames(jarray arg0);
		QAndroidJniObject getLaunchIntentForPackage(jstring arg0);
		QAndroidJniObject getLaunchIntentForPackage(const QString &arg0);
		QAndroidJniObject getLeanbackLaunchIntentForPackage(jstring arg0);
		QAndroidJniObject getLeanbackLaunchIntentForPackage(const QString &arg0);
		jintArray getPackageGids(jstring arg0);
		jintArray getPackageGids(const QString &arg0);
		jintArray getPackageGids(jstring arg0, jint arg1);
		jintArray getPackageGids(const QString &arg0, jint arg1);
		jint getPackageUid(jstring arg0, jint arg1);
		jint getPackageUid(const QString &arg0, jint arg1);
		QAndroidJniObject getPermissionInfo(jstring arg0, jint arg1);
		QAndroidJniObject getPermissionInfo(const QString &arg0, jint arg1);
		QAndroidJniObject queryPermissionsByGroup(jstring arg0, jint arg1);
		QAndroidJniObject queryPermissionsByGroup(const QString &arg0, jint arg1);
		QAndroidJniObject getPermissionGroupInfo(jstring arg0, jint arg1);
		QAndroidJniObject getPermissionGroupInfo(const QString &arg0, jint arg1);
		QAndroidJniObject getAllPermissionGroups(jint arg0);
		QAndroidJniObject getActivityInfo(__jni_impl::android::content::ComponentName arg0, jint arg1);
		QAndroidJniObject getReceiverInfo(__jni_impl::android::content::ComponentName arg0, jint arg1);
		QAndroidJniObject getProviderInfo(__jni_impl::android::content::ComponentName arg0, jint arg1);
		QAndroidJniObject getModuleInfo(jstring arg0, jint arg1);
		QAndroidJniObject getModuleInfo(const QString &arg0, jint arg1);
		QAndroidJniObject getInstalledModules(jint arg0);
		QAndroidJniObject getInstalledPackages(jint arg0);
		QAndroidJniObject getPackagesHoldingPermissions(jarray arg0, jint arg1);
		jboolean isPermissionRevokedByPolicy(jstring arg0, jstring arg1);
		jboolean isPermissionRevokedByPolicy(const QString &arg0, const QString &arg1);
		jboolean addPermission(__jni_impl::android::content::pm::PermissionInfo arg0);
		jboolean addPermissionAsync(__jni_impl::android::content::pm::PermissionInfo arg0);
		void removePermission(jstring arg0);
		void removePermission(const QString &arg0);
		QAndroidJniObject getWhitelistedRestrictedPermissions(jstring arg0, jint arg1);
		QAndroidJniObject getWhitelistedRestrictedPermissions(const QString &arg0, jint arg1);
		jboolean addWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2);
		jboolean addWhitelistedRestrictedPermission(const QString &arg0, const QString &arg1, jint arg2);
		jboolean removeWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2);
		jboolean removeWhitelistedRestrictedPermission(const QString &arg0, const QString &arg1, jint arg2);
		jint checkSignatures(jint arg0, jint arg1);
		jint checkSignatures(jstring arg0, jstring arg1);
		jint checkSignatures(const QString &arg0, const QString &arg1);
		jarray getPackagesForUid(jint arg0);
		jstring getNameForUid(jint arg0);
		QAndroidJniObject getInstalledApplications(jint arg0);
		jboolean isInstantApp();
		jboolean isInstantApp(jstring arg0);
		jboolean isInstantApp(const QString &arg0);
		jint getInstantAppCookieMaxBytes();
		jbyteArray getInstantAppCookie();
		void clearInstantAppCookie();
		void updateInstantAppCookie(jbyteArray arg0);
		jarray getSystemSharedLibraryNames();
		QAndroidJniObject getSharedLibraries(jint arg0);
		QAndroidJniObject getChangedPackages(jint arg0);
		jarray getSystemAvailableFeatures();
		jboolean hasSystemFeature(jstring arg0, jint arg1);
		jboolean hasSystemFeature(const QString &arg0, jint arg1);
		jboolean hasSystemFeature(jstring arg0);
		jboolean hasSystemFeature(const QString &arg0);
		QAndroidJniObject queryIntentActivities(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject queryIntentActivityOptions(__jni_impl::android::content::ComponentName arg0, jarray arg1, __jni_impl::android::content::Intent arg2, jint arg3);
		QAndroidJniObject queryBroadcastReceivers(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject resolveService(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject queryIntentServices(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject queryIntentContentProviders(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject resolveContentProvider(jstring arg0, jint arg1);
		QAndroidJniObject resolveContentProvider(const QString &arg0, jint arg1);
		QAndroidJniObject queryContentProviders(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject queryContentProviders(const QString &arg0, jint arg1, jint arg2);
		QAndroidJniObject getInstrumentationInfo(__jni_impl::android::content::ComponentName arg0, jint arg1);
		QAndroidJniObject queryInstrumentation(jstring arg0, jint arg1);
		QAndroidJniObject queryInstrumentation(const QString &arg0, jint arg1);
		QAndroidJniObject getActivityIcon(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getActivityIcon(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getActivityBanner(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getActivityBanner(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getDefaultActivityIcon();
		QAndroidJniObject getApplicationIcon(jstring arg0);
		QAndroidJniObject getApplicationIcon(const QString &arg0);
		QAndroidJniObject getApplicationIcon(__jni_impl::android::content::pm::ApplicationInfo arg0);
		QAndroidJniObject getApplicationBanner(__jni_impl::android::content::pm::ApplicationInfo arg0);
		QAndroidJniObject getApplicationBanner(jstring arg0);
		QAndroidJniObject getApplicationBanner(const QString &arg0);
		QAndroidJniObject getActivityLogo(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getActivityLogo(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getApplicationLogo(__jni_impl::android::content::pm::ApplicationInfo arg0);
		QAndroidJniObject getApplicationLogo(jstring arg0);
		QAndroidJniObject getApplicationLogo(const QString &arg0);
		QAndroidJniObject getUserBadgedIcon(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getUserBadgedDrawableForDensity(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, jint arg3);
		jstring getUserBadgedLabel(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		jstring getUserBadgedLabel(const QString &arg0, __jni_impl::android::os::UserHandle arg1);
		jstring getApplicationLabel(__jni_impl::android::content::pm::ApplicationInfo arg0);
		QAndroidJniObject getResourcesForActivity(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getResourcesForApplication(__jni_impl::android::content::pm::ApplicationInfo arg0);
		QAndroidJniObject getResourcesForApplication(jstring arg0);
		QAndroidJniObject getResourcesForApplication(const QString &arg0);
		QAndroidJniObject getPackageArchiveInfo(jstring arg0, jint arg1);
		QAndroidJniObject getPackageArchiveInfo(const QString &arg0, jint arg1);
		void verifyPendingInstall(jint arg0, jint arg1);
		void extendVerificationTimeout(jint arg0, jint arg1, jlong arg2);
		void setInstallerPackageName(jstring arg0, jstring arg1);
		void setInstallerPackageName(const QString &arg0, const QString &arg1);
		jstring getInstallerPackageName(jstring arg0);
		jstring getInstallerPackageName(const QString &arg0);
		void addPackageToPreferred(jstring arg0);
		void addPackageToPreferred(const QString &arg0);
		void removePackageFromPreferred(jstring arg0);
		void removePackageFromPreferred(const QString &arg0);
		QAndroidJniObject getPreferredPackages(jint arg0);
		void addPreferredActivity(__jni_impl::android::content::IntentFilter arg0, jint arg1, jarray arg2, __jni_impl::android::content::ComponentName arg3);
		void clearPackagePreferredActivities(jstring arg0);
		void clearPackagePreferredActivities(const QString &arg0);
		jint getPreferredActivities(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		jint getPreferredActivities(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		void setComponentEnabledSetting(__jni_impl::android::content::ComponentName arg0, jint arg1, jint arg2);
		jint getComponentEnabledSetting(__jni_impl::android::content::ComponentName arg0);
		jboolean getSyntheticAppDetailsActivityEnabled(jstring arg0);
		jboolean getSyntheticAppDetailsActivityEnabled(const QString &arg0);
		void setApplicationEnabledSetting(jstring arg0, jint arg1, jint arg2);
		void setApplicationEnabledSetting(const QString &arg0, jint arg1, jint arg2);
		jint getApplicationEnabledSetting(jstring arg0);
		jint getApplicationEnabledSetting(const QString &arg0);
		jboolean isSafeMode();
		jboolean isPackageSuspended();
		jboolean isPackageSuspended(jstring arg0);
		jboolean isPackageSuspended(const QString &arg0);
		QAndroidJniObject getSuspendedPackageAppExtras();
		void setApplicationCategoryHint(jstring arg0, jint arg1);
		void setApplicationCategoryHint(const QString &arg0, jint arg1);
		jboolean isDeviceUpgrading();
		QAndroidJniObject getPackageInstaller();
		jboolean canRequestPackageInstalls();
		jboolean hasSigningCertificate(jstring arg0, jbyteArray arg1, jint arg2);
		jboolean hasSigningCertificate(const QString &arg0, jbyteArray arg1, jint arg2);
		jboolean hasSigningCertificate(jint arg0, jbyteArray arg1, jint arg2);
		QAndroidJniObject getDrawable(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		QAndroidJniObject getDrawable(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		QAndroidJniObject getApplicationInfo(jstring arg0, jint arg1);
		QAndroidJniObject getApplicationInfo(const QString &arg0, jint arg1);
		QAndroidJniObject resolveActivity(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject getServiceInfo(__jni_impl::android::content::ComponentName arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "PackageInfo.hpp"
#include "VersionedPackage.hpp"
#include "ApplicationInfo.hpp"
#include "../Intent.hpp"
#include "PermissionInfo.hpp"
#include "PermissionGroupInfo.hpp"
#include "ActivityInfo.hpp"
#include "../ComponentName.hpp"
#include "ProviderInfo.hpp"
#include "ModuleInfo.hpp"
#include "ChangedPackages.hpp"
#include "ResolveInfo.hpp"
#include "InstrumentationInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "../../graphics/Rect.hpp"
#include "../res/Resources.hpp"
#include "../IntentFilter.hpp"
#include "../../os/Bundle.hpp"
#include "PackageInstaller.hpp"
#include "ServiceInfo.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	jint PackageManager::CERT_INPUT_RAW_X509()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_RAW_X509"
		);
	}
	jint PackageManager::CERT_INPUT_SHA256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_SHA256"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DEFAULT"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_USER"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_ENABLED"
		);
	}
	jint PackageManager::DONT_KILL_APP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"DONT_KILL_APP"
		);
	}
	jstring PackageManager::EXTRA_VERIFICATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::EXTRA_VERIFICATION_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_APP_WIDGETS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_APP_WIDGETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_LOW_LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_OUTPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_PRO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_PRO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUTOFILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOFILL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUTOMOTIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOMOTIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BACKUP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BACKUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BLUETOOTH_LE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH_LE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_ANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_ANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_AR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_AUTOFOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AUTOFOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_EXTERNAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_EXTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_FLASH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FLASH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_FRONT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FRONT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_LEVEL_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_LEVEL_FULL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CANT_SAVE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CANT_SAVE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_COMPANION_DEVICE_SETUP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_COMPANION_DEVICE_SETUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CONNECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONNECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CONSUMER_IR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONSUMER_IR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_DEVICE_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_EMBEDDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_EMBEDDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_ETHERNET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ETHERNET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FREEFORM_WINDOW_MANAGEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FREEFORM_WINDOW_MANAGEMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_GAMEPAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_GAMEPAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_HIFI_SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HIFI_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_HOME_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HOME_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_INPUT_METHODS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_INPUT_METHODS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_IPSEC_TUNNELS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IPSEC_TUNNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_IRIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IRIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LEANBACK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LEANBACK_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LIVE_TV()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_TV",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LIVE_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION_GPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_GPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION_NETWORK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MANAGED_USERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MANAGED_USERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MICROPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MICROPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MIDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MIDI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_BEAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_BEAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_HOST_CARD_EMULATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_HOST_CARD_EMULATION_NFCF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION_NFCF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_OPENGLES_EXTENSION_PACK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_OPENGLES_EXTENSION_PACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PICTURE_IN_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PRINTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PRINTING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_RAM_LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_RAM_NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_NORMAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SCREEN_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_LANDSCAPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SCREEN_PORTRAIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_PORTRAIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SECURELY_REMOVES_USERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURELY_REMOVES_USERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SECURE_LOCK_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURE_LOCK_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_ACCELEROMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_ACCELEROMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_AMBIENT_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_BAROMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_BAROMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_COMPASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_COMPASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_GYROSCOPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_GYROSCOPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_HEART_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_HEART_RATE_ECG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE_ECG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_LIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_PROXIMITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_PROXIMITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_RELATIVE_HUMIDITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_STEP_COUNTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_COUNTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_STEP_DETECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_DETECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SIP_VOIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP_VOIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_STRONGBOX_KEYSTORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_STRONGBOX_KEYSTORE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_CDMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_CDMA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_EUICC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_EUICC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_GSM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_GSM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_IMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_IMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_MBMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_MBMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEVISION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEVISION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_USB_ACCESSORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_ACCESSORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_USB_HOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_HOST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VERIFIED_BOOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VERIFIED_BOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_HEADTRACKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_HEADTRACKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_MODE_HIGH_PERFORMANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE_HIGH_PERFORMANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_COMPUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_COMPUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WATCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WEBVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WEBVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_AWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_AWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_DIRECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_DIRECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_PASSPOINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_PASSPOINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_RTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_RTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_INSTALLER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_INSTALLER"
		);
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_SYSTEM"
		);
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_UPGRADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_UPGRADE"
		);
	}
	jint PackageManager::GET_ACTIVITIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_ACTIVITIES"
		);
	}
	jint PackageManager::GET_CONFIGURATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_CONFIGURATIONS"
		);
	}
	jint PackageManager::GET_DISABLED_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_COMPONENTS"
		);
	}
	jint PackageManager::GET_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	jint PackageManager::GET_GIDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_GIDS"
		);
	}
	jint PackageManager::GET_INSTRUMENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INSTRUMENTATION"
		);
	}
	jint PackageManager::GET_INTENT_FILTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INTENT_FILTERS"
		);
	}
	jint PackageManager::GET_META_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_META_DATA"
		);
	}
	jint PackageManager::GET_PERMISSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PERMISSIONS"
		);
	}
	jint PackageManager::GET_PROVIDERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PROVIDERS"
		);
	}
	jint PackageManager::GET_RECEIVERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RECEIVERS"
		);
	}
	jint PackageManager::GET_RESOLVED_FILTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RESOLVED_FILTER"
		);
	}
	jint PackageManager::GET_SERVICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SERVICES"
		);
	}
	jint PackageManager::GET_SHARED_LIBRARY_FILES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SHARED_LIBRARY_FILES"
		);
	}
	jint PackageManager::GET_SIGNATURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNATURES"
		);
	}
	jint PackageManager::GET_SIGNING_CERTIFICATES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNING_CERTIFICATES"
		);
	}
	jint PackageManager::GET_UNINSTALLED_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_UNINSTALLED_PACKAGES"
		);
	}
	jint PackageManager::GET_URI_PERMISSION_PATTERNS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_URI_PERMISSION_PATTERNS"
		);
	}
	jint PackageManager::INSTALL_REASON_DEVICE_RESTORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_RESTORE"
		);
	}
	jint PackageManager::INSTALL_REASON_DEVICE_SETUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_SETUP"
		);
	}
	jint PackageManager::INSTALL_REASON_POLICY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_POLICY"
		);
	}
	jint PackageManager::INSTALL_REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_UNKNOWN"
		);
	}
	jint PackageManager::INSTALL_REASON_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_USER"
		);
	}
	jint PackageManager::MATCH_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_ALL"
		);
	}
	jint PackageManager::MATCH_APEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_APEX"
		);
	}
	jint PackageManager::MATCH_DEFAULT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DEFAULT_ONLY"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AUTO"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_AWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AWARE"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_UNAWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_UNAWARE"
		);
	}
	jint PackageManager::MATCH_DISABLED_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_COMPONENTS"
		);
	}
	jint PackageManager::MATCH_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	jint PackageManager::MATCH_SYSTEM_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_SYSTEM_ONLY"
		);
	}
	jint PackageManager::MATCH_UNINSTALLED_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_UNINSTALLED_PACKAGES"
		);
	}
	jlong PackageManager::MAXIMUM_VERIFICATION_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.content.pm.PackageManager",
			"MAXIMUM_VERIFICATION_TIMEOUT"
		);
	}
	jint PackageManager::PERMISSION_DENIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_DENIED"
		);
	}
	jint PackageManager::PERMISSION_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_GRANTED"
		);
	}
	jint PackageManager::SIGNATURE_FIRST_NOT_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_FIRST_NOT_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_MATCH"
		);
	}
	jint PackageManager::SIGNATURE_NEITHER_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NEITHER_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NO_MATCH"
		);
	}
	jint PackageManager::SIGNATURE_SECOND_NOT_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_SECOND_NOT_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_UNKNOWN_PACKAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_UNKNOWN_PACKAGE"
		);
	}
	jint PackageManager::VERIFICATION_ALLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_ALLOW"
		);
	}
	jint PackageManager::VERIFICATION_REJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_REJECT"
		);
	}
	jint PackageManager::VERSION_CODE_HIGHEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERSION_CODE_HIGHEST"
		);
	}
	
	// Constructors
	void PackageManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageManager",
			"()V"
		);
	}
	
	// Methods
	jint PackageManager::checkPermission(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::checkPermission(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getPackageInfo(__jni_impl::android::content::pm::VersionedPackage arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageInfo",
			"(Landroid/content/pm/VersionedPackage;I)Landroid/content/pm/PackageInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPackageInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPackageInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring PackageManager::getText(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring PackageManager::getText(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject PackageManager::getXml(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getXml",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getXml(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getXml",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jarray PackageManager::currentToCanonicalPackageNames(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"currentToCanonicalPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray PackageManager::canonicalToCurrentPackageNames(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalToCurrentPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject PackageManager::getLaunchIntentForPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getLaunchIntentForPackage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getLeanbackLaunchIntentForPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLeanbackLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getLeanbackLaunchIntentForPackage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getLeanbackLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jintArray PackageManager::getPackageGids(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jintArray PackageManager::getPackageGids(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;)[I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jintArray>();
	}
	jintArray PackageManager::getPackageGids(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;I)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jintArray PackageManager::getPackageGids(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;I)[I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jintArray>();
	}
	jint PackageManager::getPackageUid(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getPackageUid",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::getPackageUid(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getPackageUid",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPermissionInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPermissionInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPermissionInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPermissionInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryPermissionsByGroup(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryPermissionsByGroup",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryPermissionsByGroup(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryPermissionsByGroup",
			"(Ljava/lang/String;I)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPermissionGroupInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPermissionGroupInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPermissionGroupInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPermissionGroupInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getAllPermissionGroups(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAllPermissionGroups",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getActivityInfo(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getActivityInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getReceiverInfo(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getReceiverInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getProviderInfo(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getProviderInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ProviderInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getModuleInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getModuleInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ModuleInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getModuleInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getModuleInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ModuleInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getInstalledModules(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledModules",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getInstalledPackages(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getPackagesHoldingPermissions(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackagesHoldingPermissions",
			"([Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	jboolean PackageManager::isPermissionRevokedByPolicy(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPermissionRevokedByPolicy",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean PackageManager::isPermissionRevokedByPolicy(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPermissionRevokedByPolicy",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean PackageManager::addPermission(__jni_impl::android::content::pm::PermissionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addPermission",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PackageManager::addPermissionAsync(__jni_impl::android::content::pm::PermissionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addPermissionAsync",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	void PackageManager::removePermission(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageManager::removePermission(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removePermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getWhitelistedRestrictedPermissions(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getWhitelistedRestrictedPermissions",
			"(Ljava/lang/String;I)Ljava/util/Set;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getWhitelistedRestrictedPermissions(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getWhitelistedRestrictedPermissions",
			"(Ljava/lang/String;I)Ljava/util/Set;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean PackageManager::addWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"addWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::addWhitelistedRestrictedPermission(const QString &arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"addWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean PackageManager::removeWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"removeWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::removeWhitelistedRestrictedPermission(const QString &arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"removeWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint PackageManager::checkSignatures(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkSignatures",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::checkSignatures(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"checkSignatures",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::checkSignatures(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"checkSignatures",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jarray PackageManager::getPackagesForUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPackagesForUid",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jstring PackageManager::getNameForUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getNameForUid",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject PackageManager::getInstalledApplications(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledApplications",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean PackageManager::isInstantApp()
	{
		return __thiz.callMethod<jboolean>(
			"isInstantApp",
			"()Z"
		);
	}
	jboolean PackageManager::isInstantApp(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInstantApp",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::isInstantApp(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInstantApp",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint PackageManager::getInstantAppCookieMaxBytes()
	{
		return __thiz.callMethod<jint>(
			"getInstantAppCookieMaxBytes",
			"()I"
		);
	}
	jbyteArray PackageManager::getInstantAppCookie()
	{
		return __thiz.callObjectMethod(
			"getInstantAppCookie",
			"()[B"
		).object<jbyteArray>();
	}
	void PackageManager::clearInstantAppCookie()
	{
		__thiz.callMethod<void>(
			"clearInstantAppCookie",
			"()V"
		);
	}
	void PackageManager::updateInstantAppCookie(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"updateInstantAppCookie",
			"([B)V",
			arg0
		);
	}
	jarray PackageManager::getSystemSharedLibraryNames()
	{
		return __thiz.callObjectMethod(
			"getSystemSharedLibraryNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject PackageManager::getSharedLibraries(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSharedLibraries",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getChangedPackages(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChangedPackages",
			"(I)Landroid/content/pm/ChangedPackages;",
			arg0
		);
	}
	jarray PackageManager::getSystemAvailableFeatures()
	{
		return __thiz.callObjectMethod(
			"getSystemAvailableFeatures",
			"()[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	jboolean PackageManager::hasSystemFeature(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jboolean PackageManager::hasSystemFeature(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean PackageManager::hasSystemFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::hasSystemFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::queryIntentActivities(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryIntentActivities",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryIntentActivityOptions(__jni_impl::android::content::ComponentName arg0, jarray arg1, __jni_impl::android::content::Intent arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"queryIntentActivityOptions",
			"(Landroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PackageManager::queryBroadcastReceivers(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryBroadcastReceivers",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::resolveService(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveService",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryIntentServices(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryIntentServices",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryIntentContentProviders(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryIntentContentProviders",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::resolveContentProvider(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveContentProvider",
			"(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::resolveContentProvider(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveContentProvider",
			"(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryContentProviders(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"queryContentProviders",
			"(Ljava/lang/String;II)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PackageManager::queryContentProviders(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"queryContentProviders",
			"(Ljava/lang/String;II)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject PackageManager::getInstrumentationInfo(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getInstrumentationInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/InstrumentationInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryInstrumentation(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryInstrumentation",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::queryInstrumentation(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryInstrumentation",
			"(Ljava/lang/String;I)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getActivityIcon(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getActivityIcon(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getActivityBanner(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getActivityBanner(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getDefaultActivityIcon()
	{
		return __thiz.callObjectMethod(
			"getDefaultActivityIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject PackageManager::getApplicationIcon(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationIcon",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getApplicationIcon(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationIcon",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getApplicationIcon(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationIcon",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getApplicationBanner(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationBanner",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getApplicationBanner(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationBanner",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getApplicationBanner(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationBanner",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getActivityLogo(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getActivityLogo(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getApplicationLogo(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationLogo",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getApplicationLogo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationLogo",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getApplicationLogo(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationLogo",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getUserBadgedIcon(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getUserBadgedIcon",
			"(Landroid/graphics/drawable/Drawable;Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getUserBadgedDrawableForDensity(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"getUserBadgedDrawableForDensity",
			"(Landroid/graphics/drawable/Drawable;Landroid/os/UserHandle;Landroid/graphics/Rect;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jstring PackageManager::getUserBadgedLabel(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getUserBadgedLabel",
			"(Ljava/lang/CharSequence;Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring PackageManager::getUserBadgedLabel(const QString &arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getUserBadgedLabel",
			"(Ljava/lang/CharSequence;Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring PackageManager::getApplicationLabel(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getApplicationLabel",
			"(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject PackageManager::getResourcesForActivity(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcesForActivity",
			"(Landroid/content/ComponentName;)Landroid/content/res/Resources;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getResourcesForApplication(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcesForApplication",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getResourcesForApplication(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcesForApplication",
			"(Ljava/lang/String;)Landroid/content/res/Resources;",
			arg0
		);
	}
	QAndroidJniObject PackageManager::getResourcesForApplication(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcesForApplication",
			"(Ljava/lang/String;)Landroid/content/res/Resources;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getPackageArchiveInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageArchiveInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getPackageArchiveInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPackageArchiveInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void PackageManager::verifyPendingInstall(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"verifyPendingInstall",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PackageManager::extendVerificationTimeout(jint arg0, jint arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"extendVerificationTimeout",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PackageManager::setInstallerPackageName(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setInstallerPackageName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PackageManager::setInstallerPackageName(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setInstallerPackageName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring PackageManager::getInstallerPackageName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getInstallerPackageName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PackageManager::getInstallerPackageName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getInstallerPackageName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	void PackageManager::addPackageToPreferred(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addPackageToPreferred",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageManager::addPackageToPreferred(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addPackageToPreferred",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageManager::removePackageFromPreferred(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removePackageFromPreferred",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageManager::removePackageFromPreferred(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removePackageFromPreferred",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getPreferredPackages(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreferredPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	void PackageManager::addPreferredActivity(__jni_impl::android::content::IntentFilter arg0, jint arg1, jarray arg2, __jni_impl::android::content::ComponentName arg3)
	{
		__thiz.callMethod<void>(
			"addPreferredActivity",
			"(Landroid/content/IntentFilter;I[Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void PackageManager::clearPackagePreferredActivities(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clearPackagePreferredActivities",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageManager::clearPackagePreferredActivities(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clearPackagePreferredActivities",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint PackageManager::getPreferredActivities(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"getPreferredActivities",
			"(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint PackageManager::getPreferredActivities(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"getPreferredActivities",
			"(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void PackageManager::setComponentEnabledSetting(__jni_impl::android::content::ComponentName arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setComponentEnabledSetting",
			"(Landroid/content/ComponentName;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint PackageManager::getComponentEnabledSetting(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"getComponentEnabledSetting",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean PackageManager::getSyntheticAppDetailsActivityEnabled(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getSyntheticAppDetailsActivityEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::getSyntheticAppDetailsActivityEnabled(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getSyntheticAppDetailsActivityEnabled",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageManager::setApplicationEnabledSetting(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setApplicationEnabledSetting",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PackageManager::setApplicationEnabledSetting(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setApplicationEnabledSetting",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jint PackageManager::getApplicationEnabledSetting(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getApplicationEnabledSetting",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint PackageManager::getApplicationEnabledSetting(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getApplicationEnabledSetting",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PackageManager::isSafeMode()
	{
		return __thiz.callMethod<jboolean>(
			"isSafeMode",
			"()Z"
		);
	}
	jboolean PackageManager::isPackageSuspended()
	{
		return __thiz.callMethod<jboolean>(
			"isPackageSuspended",
			"()Z"
		);
	}
	jboolean PackageManager::isPackageSuspended(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageSuspended",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::isPackageSuspended(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageSuspended",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PackageManager::getSuspendedPackageAppExtras()
	{
		return __thiz.callObjectMethod(
			"getSuspendedPackageAppExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void PackageManager::setApplicationCategoryHint(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setApplicationCategoryHint",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void PackageManager::setApplicationCategoryHint(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setApplicationCategoryHint",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean PackageManager::isDeviceUpgrading()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceUpgrading",
			"()Z"
		);
	}
	QAndroidJniObject PackageManager::getPackageInstaller()
	{
		return __thiz.callObjectMethod(
			"getPackageInstaller",
			"()Landroid/content/pm/PackageInstaller;"
		);
	}
	jboolean PackageManager::canRequestPackageInstalls()
	{
		return __thiz.callMethod<jboolean>(
			"canRequestPackageInstalls",
			"()Z"
		);
	}
	jboolean PackageManager::hasSigningCertificate(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasSigningCertificate",
			"(Ljava/lang/String;[BI)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::hasSigningCertificate(const QString &arg0, jbyteArray arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasSigningCertificate",
			"(Ljava/lang/String;[BI)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jboolean PackageManager::hasSigningCertificate(jint arg0, jbyteArray arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasSigningCertificate",
			"(I[BI)Z",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PackageManager::getDrawable(jstring arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getDrawable(const QString &arg0, jint arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PackageManager::getApplicationInfo(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PackageManager::getApplicationInfo(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::resolveActivity(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageManager::getServiceInfo(__jni_impl::android::content::ComponentName arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ServiceInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageManager : public __jni_impl::android::content::pm::PackageManager
	{
	public:
		PackageManager(QAndroidJniObject obj) { __thiz = obj; }
		PackageManager()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEMANAGER

