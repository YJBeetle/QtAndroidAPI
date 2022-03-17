#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../ComponentName.def.hpp"
#include "../Intent.def.hpp"
#include "../IntentFilter.def.hpp"
#include "./ActivityInfo.def.hpp"
#include "./ApplicationInfo.def.hpp"
#include "./ChangedPackages.def.hpp"
#include "./InstrumentationInfo.def.hpp"
#include "./ModuleInfo.def.hpp"
#include "./PackageInfo.def.hpp"
#include "./PackageInstaller.def.hpp"
#include "./PermissionGroupInfo.def.hpp"
#include "./PermissionInfo.def.hpp"
#include "./ProviderInfo.def.hpp"
#include "./ResolveInfo.def.hpp"
#include "./ServiceInfo.def.hpp"
#include "./VersionedPackage.def.hpp"
#include "../res/Resources.def.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageManager.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint PackageManager::CERT_INPUT_RAW_X509()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_RAW_X509"
		);
	}
	inline jint PackageManager::CERT_INPUT_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_SHA256"
		);
	}
	inline jint PackageManager::COMPONENT_ENABLED_STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DEFAULT"
		);
	}
	inline jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED"
		);
	}
	inline jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED"
		);
	}
	inline jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_USER"
		);
	}
	inline jint PackageManager::COMPONENT_ENABLED_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_ENABLED"
		);
	}
	inline jint PackageManager::DONT_KILL_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"DONT_KILL_APP"
		);
	}
	inline JString PackageManager::EXTRA_VERIFICATION_ID()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::EXTRA_VERIFICATION_RESULT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_APP_WIDGETS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_APP_WIDGETS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_AUDIO_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_LOW_LATENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_AUDIO_OUTPUT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_OUTPUT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_AUDIO_PRO()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_PRO",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_AUTOFILL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOFILL",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_AUTOMOTIVE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOMOTIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_BACKUP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BACKUP",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_BLUETOOTH_LE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH_LE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_ANY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_ANY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_AR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AR",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_AUTOFOCUS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AUTOFOCUS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_CAPABILITY_RAW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_RAW",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_EXTERNAL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_EXTERNAL",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_FLASH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FLASH",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_FRONT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FRONT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CAMERA_LEVEL_FULL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_LEVEL_FULL",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CANT_SAVE_STATE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CANT_SAVE_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_COMPANION_DEVICE_SETUP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_COMPANION_DEVICE_SETUP",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CONNECTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONNECTION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_CONSUMER_IR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONSUMER_IR",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_DEVICE_ADMIN",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_EMBEDDED()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_EMBEDDED",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_ETHERNET()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ETHERNET",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FACE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FACE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FAKETOUCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FINGERPRINT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FINGERPRINT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_FREEFORM_WINDOW_MANAGEMENT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FREEFORM_WINDOW_MANAGEMENT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_GAMEPAD()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_GAMEPAD",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_HIFI_SENSORS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HIFI_SENSORS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_HOME_SCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HOME_SCREEN",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_INPUT_METHODS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_INPUT_METHODS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_IPSEC_TUNNELS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IPSEC_TUNNELS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_IRIS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IRIS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LEANBACK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LEANBACK_ONLY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK_ONLY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LIVE_TV()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_TV",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LIVE_WALLPAPER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LOCATION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LOCATION_GPS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_GPS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_LOCATION_NETWORK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_NETWORK",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_MANAGED_USERS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MANAGED_USERS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_MICROPHONE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MICROPHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_MIDI()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MIDI",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC_BEAM()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_BEAM",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC_HOST_CARD_EMULATION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC_HOST_CARD_EMULATION_NFCF()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION_NFCF",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_OPENGLES_EXTENSION_PACK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_OPENGLES_EXTENSION_PACK",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_PC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PC",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_PICTURE_IN_PICTURE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_PRINTING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PRINTING",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_RAM_LOW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_LOW",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_RAM_NORMAL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_NORMAL",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SCREEN_LANDSCAPE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_LANDSCAPE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SCREEN_PORTRAIT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_PORTRAIT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SECURELY_REMOVES_USERS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURELY_REMOVES_USERS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SECURE_LOCK_SCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURE_LOCK_SCREEN",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_ACCELEROMETER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_ACCELEROMETER",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_AMBIENT_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_BAROMETER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_BAROMETER",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_COMPASS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_COMPASS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_GYROSCOPE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_GYROSCOPE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_HEART_RATE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_HEART_RATE_ECG()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE_ECG",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_LIGHT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_LIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_PROXIMITY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_PROXIMITY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_RELATIVE_HUMIDITY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_STEP_COUNTER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_COUNTER",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SENSOR_STEP_DETECTOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_DETECTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SIP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_SIP_VOIP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP_VOIP",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_STRONGBOX_KEYSTORE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_STRONGBOX_KEYSTORE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY_CDMA()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_CDMA",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY_EUICC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_EUICC",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY_GSM()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_GSM",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY_IMS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_IMS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEPHONY_MBMS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_MBMS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TELEVISION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEVISION",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TOUCHSCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_USB_ACCESSORY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_ACCESSORY",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_USB_HOST()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_HOST",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VERIFIED_BOOT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VERIFIED_BOOT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VR_HEADTRACKING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_HEADTRACKING",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VR_MODE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VR_MODE_HIGH_PERFORMANCE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE_HIGH_PERFORMANCE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VULKAN_HARDWARE_COMPUTE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_COMPUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VULKAN_HARDWARE_LEVEL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_VULKAN_HARDWARE_VERSION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_VERSION",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WATCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WATCH",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WEBVIEW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WEBVIEW",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WIFI()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WIFI_AWARE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_AWARE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WIFI_DIRECT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_DIRECT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WIFI_PASSPOINT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_PASSPOINT",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageManager::FEATURE_WIFI_RTT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_RTT",
			"Ljava/lang/String;"
		);
	}
	inline jint PackageManager::FLAG_PERMISSION_WHITELIST_INSTALLER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_INSTALLER"
		);
	}
	inline jint PackageManager::FLAG_PERMISSION_WHITELIST_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_SYSTEM"
		);
	}
	inline jint PackageManager::FLAG_PERMISSION_WHITELIST_UPGRADE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_UPGRADE"
		);
	}
	inline jint PackageManager::GET_ACTIVITIES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_ACTIVITIES"
		);
	}
	inline jint PackageManager::GET_CONFIGURATIONS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_CONFIGURATIONS"
		);
	}
	inline jint PackageManager::GET_DISABLED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_COMPONENTS"
		);
	}
	inline jint PackageManager::GET_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	inline jint PackageManager::GET_GIDS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_GIDS"
		);
	}
	inline jint PackageManager::GET_INSTRUMENTATION()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INSTRUMENTATION"
		);
	}
	inline jint PackageManager::GET_INTENT_FILTERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INTENT_FILTERS"
		);
	}
	inline jint PackageManager::GET_META_DATA()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_META_DATA"
		);
	}
	inline jint PackageManager::GET_PERMISSIONS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PERMISSIONS"
		);
	}
	inline jint PackageManager::GET_PROVIDERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PROVIDERS"
		);
	}
	inline jint PackageManager::GET_RECEIVERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RECEIVERS"
		);
	}
	inline jint PackageManager::GET_RESOLVED_FILTER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RESOLVED_FILTER"
		);
	}
	inline jint PackageManager::GET_SERVICES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SERVICES"
		);
	}
	inline jint PackageManager::GET_SHARED_LIBRARY_FILES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SHARED_LIBRARY_FILES"
		);
	}
	inline jint PackageManager::GET_SIGNATURES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNATURES"
		);
	}
	inline jint PackageManager::GET_SIGNING_CERTIFICATES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNING_CERTIFICATES"
		);
	}
	inline jint PackageManager::GET_UNINSTALLED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_UNINSTALLED_PACKAGES"
		);
	}
	inline jint PackageManager::GET_URI_PERMISSION_PATTERNS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_URI_PERMISSION_PATTERNS"
		);
	}
	inline jint PackageManager::INSTALL_REASON_DEVICE_RESTORE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_RESTORE"
		);
	}
	inline jint PackageManager::INSTALL_REASON_DEVICE_SETUP()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_SETUP"
		);
	}
	inline jint PackageManager::INSTALL_REASON_POLICY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_POLICY"
		);
	}
	inline jint PackageManager::INSTALL_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_UNKNOWN"
		);
	}
	inline jint PackageManager::INSTALL_REASON_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_USER"
		);
	}
	inline jint PackageManager::MATCH_ALL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_ALL"
		);
	}
	inline jint PackageManager::MATCH_APEX()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_APEX"
		);
	}
	inline jint PackageManager::MATCH_DEFAULT_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DEFAULT_ONLY"
		);
	}
	inline jint PackageManager::MATCH_DIRECT_BOOT_AUTO()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AUTO"
		);
	}
	inline jint PackageManager::MATCH_DIRECT_BOOT_AWARE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AWARE"
		);
	}
	inline jint PackageManager::MATCH_DIRECT_BOOT_UNAWARE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_UNAWARE"
		);
	}
	inline jint PackageManager::MATCH_DISABLED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_COMPONENTS"
		);
	}
	inline jint PackageManager::MATCH_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	inline jint PackageManager::MATCH_SYSTEM_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_SYSTEM_ONLY"
		);
	}
	inline jint PackageManager::MATCH_UNINSTALLED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_UNINSTALLED_PACKAGES"
		);
	}
	inline jlong PackageManager::MAXIMUM_VERIFICATION_TIMEOUT()
	{
		return getStaticField<jlong>(
			"android.content.pm.PackageManager",
			"MAXIMUM_VERIFICATION_TIMEOUT"
		);
	}
	inline jint PackageManager::PERMISSION_DENIED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_DENIED"
		);
	}
	inline jint PackageManager::PERMISSION_GRANTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_GRANTED"
		);
	}
	inline jint PackageManager::SIGNATURE_FIRST_NOT_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_FIRST_NOT_SIGNED"
		);
	}
	inline jint PackageManager::SIGNATURE_MATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_MATCH"
		);
	}
	inline jint PackageManager::SIGNATURE_NEITHER_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NEITHER_SIGNED"
		);
	}
	inline jint PackageManager::SIGNATURE_NO_MATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NO_MATCH"
		);
	}
	inline jint PackageManager::SIGNATURE_SECOND_NOT_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_SECOND_NOT_SIGNED"
		);
	}
	inline jint PackageManager::SIGNATURE_UNKNOWN_PACKAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_UNKNOWN_PACKAGE"
		);
	}
	inline jint PackageManager::VERIFICATION_ALLOW()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_ALLOW"
		);
	}
	inline jint PackageManager::VERIFICATION_REJECT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_REJECT"
		);
	}
	inline jint PackageManager::VERSION_CODE_HIGHEST()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERSION_CODE_HIGHEST"
		);
	}
	
	// Constructors
	inline PackageManager::PackageManager()
		: JObject(
			"android.content.pm.PackageManager",
			"()V"
		) {}
	
	// Methods
	inline void PackageManager::addPackageToPreferred(JString arg0) const
	{
		callMethod<void>(
			"addPackageToPreferred",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean PackageManager::addPermission(android::content::pm::PermissionInfo arg0) const
	{
		return callMethod<jboolean>(
			"addPermission",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean PackageManager::addPermissionAsync(android::content::pm::PermissionInfo arg0) const
	{
		return callMethod<jboolean>(
			"addPermissionAsync",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.object()
		);
	}
	inline void PackageManager::addPreferredActivity(android::content::IntentFilter arg0, jint arg1, JArray arg2, android::content::ComponentName arg3) const
	{
		callMethod<void>(
			"addPreferredActivity",
			"(Landroid/content/IntentFilter;I[Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1,
			arg2.object<jarray>(),
			arg3.object()
		);
	}
	inline jboolean PackageManager::addWhitelistedRestrictedPermission(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"addWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean PackageManager::canRequestPackageInstalls() const
	{
		return callMethod<jboolean>(
			"canRequestPackageInstalls",
			"()Z"
		);
	}
	inline JArray PackageManager::canonicalToCurrentPackageNames(JArray arg0) const
	{
		return callObjectMethod(
			"canonicalToCurrentPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	inline jint PackageManager::checkPermission(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint PackageManager::checkSignatures(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkSignatures",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint PackageManager::checkSignatures(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"checkSignatures",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void PackageManager::clearInstantAppCookie() const
	{
		callMethod<void>(
			"clearInstantAppCookie",
			"()V"
		);
	}
	inline void PackageManager::clearPackagePreferredActivities(JString arg0) const
	{
		callMethod<void>(
			"clearPackagePreferredActivities",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JArray PackageManager::currentToCanonicalPackageNames(JArray arg0) const
	{
		return callObjectMethod(
			"currentToCanonicalPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	inline void PackageManager::extendVerificationTimeout(jint arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"extendVerificationTimeout",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityBanner(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityBanner(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityIcon(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityIcon(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::content::pm::ActivityInfo PackageManager::getActivityInfo(android::content::ComponentName arg0, jint arg1) const
	{
		return callObjectMethod(
			"getActivityInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityLogo(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getActivityLogo(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JObject PackageManager::getAllPermissionGroups(jint arg0) const
	{
		return callObjectMethod(
			"getAllPermissionGroups",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationBanner(android::content::pm::ApplicationInfo arg0) const
	{
		return callObjectMethod(
			"getApplicationBanner",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationBanner(JString arg0) const
	{
		return callObjectMethod(
			"getApplicationBanner",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>()
		);
	}
	inline jint PackageManager::getApplicationEnabledSetting(JString arg0) const
	{
		return callMethod<jint>(
			"getApplicationEnabledSetting",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationIcon(android::content::pm::ApplicationInfo arg0) const
	{
		return callObjectMethod(
			"getApplicationIcon",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationIcon(JString arg0) const
	{
		return callObjectMethod(
			"getApplicationIcon",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ApplicationInfo PackageManager::getApplicationInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString PackageManager::getApplicationLabel(android::content::pm::ApplicationInfo arg0) const
	{
		return callObjectMethod(
			"getApplicationLabel",
			"(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationLogo(android::content::pm::ApplicationInfo arg0) const
	{
		return callObjectMethod(
			"getApplicationLogo",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getApplicationLogo(JString arg0) const
	{
		return callObjectMethod(
			"getApplicationLogo",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ChangedPackages PackageManager::getChangedPackages(jint arg0) const
	{
		return callObjectMethod(
			"getChangedPackages",
			"(I)Landroid/content/pm/ChangedPackages;",
			arg0
		);
	}
	inline jint PackageManager::getComponentEnabledSetting(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getComponentEnabledSetting",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getDefaultActivityIcon() const
	{
		return callObjectMethod(
			"getDefaultActivityIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getDrawable(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline JObject PackageManager::getInstalledApplications(jint arg0) const
	{
		return callObjectMethod(
			"getInstalledApplications",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JObject PackageManager::getInstalledModules(jint arg0) const
	{
		return callObjectMethod(
			"getInstalledModules",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JObject PackageManager::getInstalledPackages(jint arg0) const
	{
		return callObjectMethod(
			"getInstalledPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JString PackageManager::getInstallerPackageName(JString arg0) const
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray PackageManager::getInstantAppCookie() const
	{
		return callObjectMethod(
			"getInstantAppCookie",
			"()[B"
		);
	}
	inline jint PackageManager::getInstantAppCookieMaxBytes() const
	{
		return callMethod<jint>(
			"getInstantAppCookieMaxBytes",
			"()I"
		);
	}
	inline android::content::pm::InstrumentationInfo PackageManager::getInstrumentationInfo(android::content::ComponentName arg0, jint arg1) const
	{
		return callObjectMethod(
			"getInstrumentationInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/InstrumentationInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::Intent PackageManager::getLaunchIntentForPackage(JString arg0) const
	{
		return callObjectMethod(
			"getLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	inline android::content::Intent PackageManager::getLeanbackLaunchIntentForPackage(JString arg0) const
	{
		return callObjectMethod(
			"getLeanbackLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ModuleInfo PackageManager::getModuleInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getModuleInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ModuleInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString PackageManager::getNameForUid(jint arg0) const
	{
		return callObjectMethod(
			"getNameForUid",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::content::pm::PackageInfo PackageManager::getPackageArchiveInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPackageArchiveInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JIntArray PackageManager::getPackageGids(JString arg0) const
	{
		return callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;)[I",
			arg0.object<jstring>()
		);
	}
	inline JIntArray PackageManager::getPackageGids(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;I)[I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::pm::PackageInfo PackageManager::getPackageInfo(android::content::pm::VersionedPackage arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPackageInfo",
			"(Landroid/content/pm/VersionedPackage;I)Landroid/content/pm/PackageInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::pm::PackageInfo PackageManager::getPackageInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPackageInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::pm::PackageInstaller PackageManager::getPackageInstaller() const
	{
		return callObjectMethod(
			"getPackageInstaller",
			"()Landroid/content/pm/PackageInstaller;"
		);
	}
	inline jint PackageManager::getPackageUid(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getPackageUid",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JArray PackageManager::getPackagesForUid(jint arg0) const
	{
		return callObjectMethod(
			"getPackagesForUid",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	inline JObject PackageManager::getPackagesHoldingPermissions(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPackagesHoldingPermissions",
			"([Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline android::content::pm::PermissionGroupInfo PackageManager::getPermissionGroupInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPermissionGroupInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::pm::PermissionInfo PackageManager::getPermissionInfo(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPermissionInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint PackageManager::getPreferredActivities(JObject arg0, JObject arg1, JString arg2) const
	{
		return callMethod<jint>(
			"getPreferredActivities",
			"(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline JObject PackageManager::getPreferredPackages(jint arg0) const
	{
		return callObjectMethod(
			"getPreferredPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline android::content::pm::ProviderInfo PackageManager::getProviderInfo(android::content::ComponentName arg0, jint arg1) const
	{
		return callObjectMethod(
			"getProviderInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ProviderInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::pm::ActivityInfo PackageManager::getReceiverInfo(android::content::ComponentName arg0, jint arg1) const
	{
		return callObjectMethod(
			"getReceiverInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::res::Resources PackageManager::getResourcesForActivity(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getResourcesForActivity",
			"(Landroid/content/ComponentName;)Landroid/content/res/Resources;",
			arg0.object()
		);
	}
	inline android::content::res::Resources PackageManager::getResourcesForApplication(android::content::pm::ApplicationInfo arg0) const
	{
		return callObjectMethod(
			"getResourcesForApplication",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;",
			arg0.object()
		);
	}
	inline android::content::res::Resources PackageManager::getResourcesForApplication(JString arg0) const
	{
		return callObjectMethod(
			"getResourcesForApplication",
			"(Ljava/lang/String;)Landroid/content/res/Resources;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ServiceInfo PackageManager::getServiceInfo(android::content::ComponentName arg0, jint arg1) const
	{
		return callObjectMethod(
			"getServiceInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ServiceInfo;",
			arg0.object(),
			arg1
		);
	}
	inline JObject PackageManager::getSharedLibraries(jint arg0) const
	{
		return callObjectMethod(
			"getSharedLibraries",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline android::os::Bundle PackageManager::getSuspendedPackageAppExtras() const
	{
		return callObjectMethod(
			"getSuspendedPackageAppExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jboolean PackageManager::getSyntheticAppDetailsActivityEnabled(JString arg0) const
	{
		return callMethod<jboolean>(
			"getSyntheticAppDetailsActivityEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JArray PackageManager::getSystemAvailableFeatures() const
	{
		return callObjectMethod(
			"getSystemAvailableFeatures",
			"()[Landroid/content/pm/FeatureInfo;"
		);
	}
	inline JArray PackageManager::getSystemSharedLibraryNames() const
	{
		return callObjectMethod(
			"getSystemSharedLibraryNames",
			"()[Ljava/lang/String;"
		);
	}
	inline JString PackageManager::getText(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getText",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getUserBadgedDrawableForDensity(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, jint arg3) const
	{
		return callObjectMethod(
			"getUserBadgedDrawableForDensity",
			"(Landroid/graphics/drawable/Drawable;Landroid/os/UserHandle;Landroid/graphics/Rect;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline android::graphics::drawable::Drawable PackageManager::getUserBadgedIcon(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getUserBadgedIcon",
			"(Landroid/graphics/drawable/Drawable;Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString PackageManager::getUserBadgedLabel(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getUserBadgedLabel",
			"(Ljava/lang/CharSequence;Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject PackageManager::getWhitelistedRestrictedPermissions(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getWhitelistedRestrictedPermissions",
			"(Ljava/lang/String;I)Ljava/util/Set;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject PackageManager::getXml(JString arg0, jint arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getXml",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean PackageManager::hasSigningCertificate(jint arg0, JByteArray arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"hasSigningCertificate",
			"(I[BI)Z",
			arg0,
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	inline jboolean PackageManager::hasSigningCertificate(JString arg0, JByteArray arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"hasSigningCertificate",
			"(Ljava/lang/String;[BI)Z",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	inline jboolean PackageManager::hasSystemFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PackageManager::hasSystemFeature(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean PackageManager::isDeviceUpgrading() const
	{
		return callMethod<jboolean>(
			"isDeviceUpgrading",
			"()Z"
		);
	}
	inline jboolean PackageManager::isInstantApp() const
	{
		return callMethod<jboolean>(
			"isInstantApp",
			"()Z"
		);
	}
	inline jboolean PackageManager::isInstantApp(JString arg0) const
	{
		return callMethod<jboolean>(
			"isInstantApp",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PackageManager::isPackageSuspended() const
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"()Z"
		);
	}
	inline jboolean PackageManager::isPackageSuspended(JString arg0) const
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PackageManager::isPermissionRevokedByPolicy(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isPermissionRevokedByPolicy",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean PackageManager::isSafeMode() const
	{
		return callMethod<jboolean>(
			"isSafeMode",
			"()Z"
		);
	}
	inline JObject PackageManager::queryBroadcastReceivers(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryBroadcastReceivers",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject PackageManager::queryContentProviders(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"queryContentProviders",
			"(Ljava/lang/String;II)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline JObject PackageManager::queryInstrumentation(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryInstrumentation",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject PackageManager::queryIntentActivities(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryIntentActivities",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject PackageManager::queryIntentActivityOptions(android::content::ComponentName arg0, JArray arg1, android::content::Intent arg2, jint arg3) const
	{
		return callObjectMethod(
			"queryIntentActivityOptions",
			"(Landroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3
		);
	}
	inline JObject PackageManager::queryIntentContentProviders(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryIntentContentProviders",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject PackageManager::queryIntentServices(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryIntentServices",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject PackageManager::queryPermissionsByGroup(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryPermissionsByGroup",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void PackageManager::removePackageFromPreferred(JString arg0) const
	{
		callMethod<void>(
			"removePackageFromPreferred",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PackageManager::removePermission(JString arg0) const
	{
		callMethod<void>(
			"removePermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean PackageManager::removeWhitelistedRestrictedPermission(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"removeWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline android::content::pm::ResolveInfo PackageManager::resolveActivity(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::pm::ProviderInfo PackageManager::resolveContentProvider(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveContentProvider",
			"(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::pm::ResolveInfo PackageManager::resolveService(android::content::Intent arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveService",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.object(),
			arg1
		);
	}
	inline void PackageManager::setApplicationCategoryHint(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setApplicationCategoryHint",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void PackageManager::setApplicationEnabledSetting(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setApplicationEnabledSetting",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void PackageManager::setComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setComponentEnabledSetting",
			"(Landroid/content/ComponentName;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void PackageManager::setInstallerPackageName(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setInstallerPackageName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void PackageManager::updateInstantAppCookie(JByteArray arg0) const
	{
		callMethod<void>(
			"updateInstantAppCookie",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void PackageManager::verifyPendingInstall(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"verifyPendingInstall",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
