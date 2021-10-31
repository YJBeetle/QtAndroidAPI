#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "../IntentFilter.hpp"
#include "./ActivityInfo.hpp"
#include "./ApplicationInfo.hpp"
#include "./ChangedPackages.hpp"
#include "./InstrumentationInfo.hpp"
#include "./ModuleInfo.hpp"
#include "./PackageInfo.hpp"
#include "./PackageInstaller.hpp"
#include "./PermissionGroupInfo.hpp"
#include "./PermissionInfo.hpp"
#include "./ProviderInfo.hpp"
#include "./ResolveInfo.hpp"
#include "./ServiceInfo.hpp"
#include "./VersionedPackage.hpp"
#include "../res/Resources.hpp"
#include "../../graphics/Rect.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./PackageManager.hpp"

namespace android::content::pm
{
	// Fields
	jint PackageManager::CERT_INPUT_RAW_X509()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_RAW_X509"
		);
	}
	jint PackageManager::CERT_INPUT_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"CERT_INPUT_SHA256"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DEFAULT"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_DISABLED_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_DISABLED_USER"
		);
	}
	jint PackageManager::COMPONENT_ENABLED_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"COMPONENT_ENABLED_STATE_ENABLED"
		);
	}
	jint PackageManager::DONT_KILL_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"DONT_KILL_APP"
		);
	}
	jstring PackageManager::EXTRA_VERIFICATION_ID()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::EXTRA_VERIFICATION_RESULT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"EXTRA_VERIFICATION_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ACTIVITIES_ON_SECONDARY_DISPLAYS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_APP_WIDGETS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_APP_WIDGETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_LOW_LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_OUTPUT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUDIO_PRO()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUDIO_PRO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUTOFILL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOFILL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_AUTOMOTIVE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_AUTOMOTIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BACKUP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BACKUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_BLUETOOTH_LE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_BLUETOOTH_LE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_ANY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_ANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_AR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_AUTOFOCUS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_AUTOFOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_CAPABILITY_RAW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_CAPABILITY_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_EXTERNAL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_EXTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_FLASH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FLASH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_FRONT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_FRONT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CAMERA_LEVEL_FULL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CAMERA_LEVEL_FULL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CANT_SAVE_STATE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CANT_SAVE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_COMPANION_DEVICE_SETUP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_COMPANION_DEVICE_SETUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CONNECTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONNECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_CONSUMER_IR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_CONSUMER_IR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_EMBEDDED()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_EMBEDDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_ETHERNET()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_ETHERNET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FACE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FINGERPRINT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_FREEFORM_WINDOW_MANAGEMENT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_FREEFORM_WINDOW_MANAGEMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_GAMEPAD()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_GAMEPAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_HIFI_SENSORS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HIFI_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_HOME_SCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_HOME_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_INPUT_METHODS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_INPUT_METHODS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_IPSEC_TUNNELS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IPSEC_TUNNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_IRIS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_IRIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LEANBACK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LEANBACK_ONLY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LEANBACK_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LIVE_TV()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_TV",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LIVE_WALLPAPER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION_GPS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_GPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_LOCATION_NETWORK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_LOCATION_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MANAGED_USERS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MANAGED_USERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MICROPHONE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MICROPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_MIDI()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_MIDI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_BEAM()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_BEAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_HOST_CARD_EMULATION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_HOST_CARD_EMULATION_NFCF()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_HOST_CARD_EMULATION_NFCF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_ESE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_NFC_OFF_HOST_CARD_EMULATION_UICC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_OPENGLES_EXTENSION_PACK()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_OPENGLES_EXTENSION_PACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PICTURE_IN_PICTURE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_PRINTING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_PRINTING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_RAM_LOW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_RAM_NORMAL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_RAM_NORMAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SCREEN_LANDSCAPE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_LANDSCAPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SCREEN_PORTRAIT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SCREEN_PORTRAIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SECURELY_REMOVES_USERS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURELY_REMOVES_USERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SECURE_LOCK_SCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SECURE_LOCK_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_ACCELEROMETER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_ACCELEROMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_AMBIENT_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_BAROMETER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_BAROMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_COMPASS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_COMPASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_GYROSCOPE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_GYROSCOPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_HEART_RATE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_HEART_RATE_ECG()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_HEART_RATE_ECG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_LIGHT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_LIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_PROXIMITY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_PROXIMITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_RELATIVE_HUMIDITY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_STEP_COUNTER()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_COUNTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SENSOR_STEP_DETECTOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SENSOR_STEP_DETECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SIP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_SIP_VOIP()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_SIP_VOIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_STRONGBOX_KEYSTORE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_STRONGBOX_KEYSTORE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_CDMA()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_CDMA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_EUICC()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_EUICC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_GSM()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_GSM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_IMS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_IMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEPHONY_MBMS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEPHONY_MBMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TELEVISION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TELEVISION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_USB_ACCESSORY()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_ACCESSORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_USB_HOST()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_USB_HOST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VERIFIED_BOOT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VERIFIED_BOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_HEADTRACKING()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_HEADTRACKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_MODE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VR_MODE_HIGH_PERFORMANCE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VR_MODE_HIGH_PERFORMANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_COMPUTE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_COMPUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_LEVEL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_VULKAN_HARDWARE_VERSION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_VULKAN_HARDWARE_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WATCH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WATCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WEBVIEW()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WEBVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_AWARE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_AWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_DIRECT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_DIRECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_PASSPOINT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_PASSPOINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager::FEATURE_WIFI_RTT()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager",
			"FEATURE_WIFI_RTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_INSTALLER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_INSTALLER"
		);
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_SYSTEM"
		);
	}
	jint PackageManager::FLAG_PERMISSION_WHITELIST_UPGRADE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"FLAG_PERMISSION_WHITELIST_UPGRADE"
		);
	}
	jint PackageManager::GET_ACTIVITIES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_ACTIVITIES"
		);
	}
	jint PackageManager::GET_CONFIGURATIONS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_CONFIGURATIONS"
		);
	}
	jint PackageManager::GET_DISABLED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_COMPONENTS"
		);
	}
	jint PackageManager::GET_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	jint PackageManager::GET_GIDS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_GIDS"
		);
	}
	jint PackageManager::GET_INSTRUMENTATION()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INSTRUMENTATION"
		);
	}
	jint PackageManager::GET_INTENT_FILTERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_INTENT_FILTERS"
		);
	}
	jint PackageManager::GET_META_DATA()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_META_DATA"
		);
	}
	jint PackageManager::GET_PERMISSIONS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PERMISSIONS"
		);
	}
	jint PackageManager::GET_PROVIDERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_PROVIDERS"
		);
	}
	jint PackageManager::GET_RECEIVERS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RECEIVERS"
		);
	}
	jint PackageManager::GET_RESOLVED_FILTER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_RESOLVED_FILTER"
		);
	}
	jint PackageManager::GET_SERVICES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SERVICES"
		);
	}
	jint PackageManager::GET_SHARED_LIBRARY_FILES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SHARED_LIBRARY_FILES"
		);
	}
	jint PackageManager::GET_SIGNATURES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNATURES"
		);
	}
	jint PackageManager::GET_SIGNING_CERTIFICATES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_SIGNING_CERTIFICATES"
		);
	}
	jint PackageManager::GET_UNINSTALLED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_UNINSTALLED_PACKAGES"
		);
	}
	jint PackageManager::GET_URI_PERMISSION_PATTERNS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"GET_URI_PERMISSION_PATTERNS"
		);
	}
	jint PackageManager::INSTALL_REASON_DEVICE_RESTORE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_RESTORE"
		);
	}
	jint PackageManager::INSTALL_REASON_DEVICE_SETUP()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_DEVICE_SETUP"
		);
	}
	jint PackageManager::INSTALL_REASON_POLICY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_POLICY"
		);
	}
	jint PackageManager::INSTALL_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_UNKNOWN"
		);
	}
	jint PackageManager::INSTALL_REASON_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"INSTALL_REASON_USER"
		);
	}
	jint PackageManager::MATCH_ALL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_ALL"
		);
	}
	jint PackageManager::MATCH_APEX()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_APEX"
		);
	}
	jint PackageManager::MATCH_DEFAULT_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DEFAULT_ONLY"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_AUTO()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AUTO"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_AWARE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_AWARE"
		);
	}
	jint PackageManager::MATCH_DIRECT_BOOT_UNAWARE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DIRECT_BOOT_UNAWARE"
		);
	}
	jint PackageManager::MATCH_DISABLED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_COMPONENTS"
		);
	}
	jint PackageManager::MATCH_DISABLED_UNTIL_USED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_DISABLED_UNTIL_USED_COMPONENTS"
		);
	}
	jint PackageManager::MATCH_SYSTEM_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_SYSTEM_ONLY"
		);
	}
	jint PackageManager::MATCH_UNINSTALLED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"MATCH_UNINSTALLED_PACKAGES"
		);
	}
	jlong PackageManager::MAXIMUM_VERIFICATION_TIMEOUT()
	{
		return getStaticField<jlong>(
			"android.content.pm.PackageManager",
			"MAXIMUM_VERIFICATION_TIMEOUT"
		);
	}
	jint PackageManager::PERMISSION_DENIED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_DENIED"
		);
	}
	jint PackageManager::PERMISSION_GRANTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"PERMISSION_GRANTED"
		);
	}
	jint PackageManager::SIGNATURE_FIRST_NOT_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_FIRST_NOT_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_MATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_MATCH"
		);
	}
	jint PackageManager::SIGNATURE_NEITHER_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NEITHER_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_NO_MATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_NO_MATCH"
		);
	}
	jint PackageManager::SIGNATURE_SECOND_NOT_SIGNED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_SECOND_NOT_SIGNED"
		);
	}
	jint PackageManager::SIGNATURE_UNKNOWN_PACKAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"SIGNATURE_UNKNOWN_PACKAGE"
		);
	}
	jint PackageManager::VERIFICATION_ALLOW()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_ALLOW"
		);
	}
	jint PackageManager::VERIFICATION_REJECT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERIFICATION_REJECT"
		);
	}
	jint PackageManager::VERSION_CODE_HIGHEST()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageManager",
			"VERSION_CODE_HIGHEST"
		);
	}
	
	// QAndroidJniObject forward
	PackageManager::PackageManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PackageManager::PackageManager()
		: __JniBaseClass(
			"android.content.pm.PackageManager",
			"()V"
		) {}
	
	// Methods
	void PackageManager::addPackageToPreferred(jstring arg0)
	{
		callMethod<void>(
			"addPackageToPreferred",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean PackageManager::addPermission(android::content::pm::PermissionInfo arg0)
	{
		return callMethod<jboolean>(
			"addPermission",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.object()
		);
	}
	jboolean PackageManager::addPermissionAsync(android::content::pm::PermissionInfo arg0)
	{
		return callMethod<jboolean>(
			"addPermissionAsync",
			"(Landroid/content/pm/PermissionInfo;)Z",
			arg0.object()
		);
	}
	void PackageManager::addPreferredActivity(android::content::IntentFilter arg0, jint arg1, jarray arg2, android::content::ComponentName arg3)
	{
		callMethod<void>(
			"addPreferredActivity",
			"(Landroid/content/IntentFilter;I[Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	jboolean PackageManager::addWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"addWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::canRequestPackageInstalls()
	{
		return callMethod<jboolean>(
			"canRequestPackageInstalls",
			"()Z"
		);
	}
	jarray PackageManager::canonicalToCurrentPackageNames(jarray arg0)
	{
		return callObjectMethod(
			"canonicalToCurrentPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jint PackageManager::checkPermission(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::checkSignatures(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkSignatures",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint PackageManager::checkSignatures(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"checkSignatures",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	void PackageManager::clearInstantAppCookie()
	{
		callMethod<void>(
			"clearInstantAppCookie",
			"()V"
		);
	}
	void PackageManager::clearPackagePreferredActivities(jstring arg0)
	{
		callMethod<void>(
			"clearPackagePreferredActivities",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jarray PackageManager::currentToCanonicalPackageNames(jarray arg0)
	{
		return callObjectMethod(
			"currentToCanonicalPackageNames",
			"([Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	void PackageManager::extendVerificationTimeout(jint arg0, jint arg1, jlong arg2)
	{
		callMethod<void>(
			"extendVerificationTimeout",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityBanner(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityBanner(android::content::Intent arg0)
	{
		return callObjectMethod(
			"getActivityBanner",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityIcon(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityIcon(android::content::Intent arg0)
	{
		return callObjectMethod(
			"getActivityIcon",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::content::pm::ActivityInfo PackageManager::getActivityInfo(android::content::ComponentName arg0, jint arg1)
	{
		return callObjectMethod(
			"getActivityInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityLogo(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getActivityLogo(android::content::Intent arg0)
	{
		return callObjectMethod(
			"getActivityLogo",
			"(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	__JniBaseClass PackageManager::getAllPermissionGroups(jint arg0)
	{
		return callObjectMethod(
			"getAllPermissionGroups",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationBanner(android::content::pm::ApplicationInfo arg0)
	{
		return callObjectMethod(
			"getApplicationBanner",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationBanner(jstring arg0)
	{
		return callObjectMethod(
			"getApplicationBanner",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint PackageManager::getApplicationEnabledSetting(jstring arg0)
	{
		return callMethod<jint>(
			"getApplicationEnabledSetting",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationIcon(android::content::pm::ApplicationInfo arg0)
	{
		return callObjectMethod(
			"getApplicationIcon",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationIcon(jstring arg0)
	{
		return callObjectMethod(
			"getApplicationIcon",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::content::pm::ApplicationInfo PackageManager::getApplicationInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;",
			arg0,
			arg1
		);
	}
	jstring PackageManager::getApplicationLabel(android::content::pm::ApplicationInfo arg0)
	{
		return callObjectMethod(
			"getApplicationLabel",
			"(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationLogo(android::content::pm::ApplicationInfo arg0)
	{
		return callObjectMethod(
			"getApplicationLogo",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getApplicationLogo(jstring arg0)
	{
		return callObjectMethod(
			"getApplicationLogo",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::content::pm::ChangedPackages PackageManager::getChangedPackages(jint arg0)
	{
		return callObjectMethod(
			"getChangedPackages",
			"(I)Landroid/content/pm/ChangedPackages;",
			arg0
		);
	}
	jint PackageManager::getComponentEnabledSetting(android::content::ComponentName arg0)
	{
		return callMethod<jint>(
			"getComponentEnabledSetting",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageManager::getDefaultActivityIcon()
	{
		return callObjectMethod(
			"getDefaultActivityIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable PackageManager::getDrawable(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2)
	{
		return callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	__JniBaseClass PackageManager::getInstalledApplications(jint arg0)
	{
		return callObjectMethod(
			"getInstalledApplications",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass PackageManager::getInstalledModules(jint arg0)
	{
		return callObjectMethod(
			"getInstalledModules",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass PackageManager::getInstalledPackages(jint arg0)
	{
		return callObjectMethod(
			"getInstalledPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jstring PackageManager::getInstallerPackageName(jstring arg0)
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jbyteArray PackageManager::getInstantAppCookie()
	{
		return callObjectMethod(
			"getInstantAppCookie",
			"()[B"
		).object<jbyteArray>();
	}
	jint PackageManager::getInstantAppCookieMaxBytes()
	{
		return callMethod<jint>(
			"getInstantAppCookieMaxBytes",
			"()I"
		);
	}
	android::content::pm::InstrumentationInfo PackageManager::getInstrumentationInfo(android::content::ComponentName arg0, jint arg1)
	{
		return callObjectMethod(
			"getInstrumentationInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/InstrumentationInfo;",
			arg0.object(),
			arg1
		);
	}
	android::content::Intent PackageManager::getLaunchIntentForPackage(jstring arg0)
	{
		return callObjectMethod(
			"getLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent PackageManager::getLeanbackLaunchIntentForPackage(jstring arg0)
	{
		return callObjectMethod(
			"getLeanbackLaunchIntentForPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::pm::ModuleInfo PackageManager::getModuleInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getModuleInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/ModuleInfo;",
			arg0,
			arg1
		);
	}
	jstring PackageManager::getNameForUid(jint arg0)
	{
		return callObjectMethod(
			"getNameForUid",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::content::pm::PackageInfo PackageManager::getPackageArchiveInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getPackageArchiveInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0,
			arg1
		);
	}
	jintArray PackageManager::getPackageGids(jstring arg0)
	{
		return callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jintArray PackageManager::getPackageGids(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getPackageGids",
			"(Ljava/lang/String;I)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	android::content::pm::PackageInfo PackageManager::getPackageInfo(android::content::pm::VersionedPackage arg0, jint arg1)
	{
		return callObjectMethod(
			"getPackageInfo",
			"(Landroid/content/pm/VersionedPackage;I)Landroid/content/pm/PackageInfo;",
			arg0.object(),
			arg1
		);
	}
	android::content::pm::PackageInfo PackageManager::getPackageInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getPackageInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;",
			arg0,
			arg1
		);
	}
	android::content::pm::PackageInstaller PackageManager::getPackageInstaller()
	{
		return callObjectMethod(
			"getPackageInstaller",
			"()Landroid/content/pm/PackageInstaller;"
		);
	}
	jint PackageManager::getPackageUid(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getPackageUid",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jarray PackageManager::getPackagesForUid(jint arg0)
	{
		return callObjectMethod(
			"getPackagesForUid",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	__JniBaseClass PackageManager::getPackagesHoldingPermissions(jarray arg0, jint arg1)
	{
		return callObjectMethod(
			"getPackagesHoldingPermissions",
			"([Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	android::content::pm::PermissionGroupInfo PackageManager::getPermissionGroupInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getPermissionGroupInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;",
			arg0,
			arg1
		);
	}
	android::content::pm::PermissionInfo PackageManager::getPermissionInfo(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getPermissionInfo",
			"(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;",
			arg0,
			arg1
		);
	}
	jint PackageManager::getPreferredActivities(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2)
	{
		return callMethod<jint>(
			"getPreferredActivities",
			"(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass PackageManager::getPreferredPackages(jint arg0)
	{
		return callObjectMethod(
			"getPreferredPackages",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	android::content::pm::ProviderInfo PackageManager::getProviderInfo(android::content::ComponentName arg0, jint arg1)
	{
		return callObjectMethod(
			"getProviderInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ProviderInfo;",
			arg0.object(),
			arg1
		);
	}
	android::content::pm::ActivityInfo PackageManager::getReceiverInfo(android::content::ComponentName arg0, jint arg1)
	{
		return callObjectMethod(
			"getReceiverInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::Resources PackageManager::getResourcesForActivity(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getResourcesForActivity",
			"(Landroid/content/ComponentName;)Landroid/content/res/Resources;",
			arg0.object()
		);
	}
	android::content::res::Resources PackageManager::getResourcesForApplication(android::content::pm::ApplicationInfo arg0)
	{
		return callObjectMethod(
			"getResourcesForApplication",
			"(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;",
			arg0.object()
		);
	}
	android::content::res::Resources PackageManager::getResourcesForApplication(jstring arg0)
	{
		return callObjectMethod(
			"getResourcesForApplication",
			"(Ljava/lang/String;)Landroid/content/res/Resources;",
			arg0
		);
	}
	android::content::pm::ServiceInfo PackageManager::getServiceInfo(android::content::ComponentName arg0, jint arg1)
	{
		return callObjectMethod(
			"getServiceInfo",
			"(Landroid/content/ComponentName;I)Landroid/content/pm/ServiceInfo;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass PackageManager::getSharedLibraries(jint arg0)
	{
		return callObjectMethod(
			"getSharedLibraries",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	android::os::Bundle PackageManager::getSuspendedPackageAppExtras()
	{
		return callObjectMethod(
			"getSuspendedPackageAppExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean PackageManager::getSyntheticAppDetailsActivityEnabled(jstring arg0)
	{
		return callMethod<jboolean>(
			"getSyntheticAppDetailsActivityEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jarray PackageManager::getSystemAvailableFeatures()
	{
		return callObjectMethod(
			"getSystemAvailableFeatures",
			"()[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	jarray PackageManager::getSystemSharedLibraryNames()
	{
		return callObjectMethod(
			"getSystemSharedLibraryNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring PackageManager::getText(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2)
	{
		return callObjectMethod(
			"getText",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2.object()
		).object<jstring>();
	}
	android::graphics::drawable::Drawable PackageManager::getUserBadgedDrawableForDensity(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, jint arg3)
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
	android::graphics::drawable::Drawable PackageManager::getUserBadgedIcon(android::graphics::drawable::Drawable arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getUserBadgedIcon",
			"(Landroid/graphics/drawable/Drawable;Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring PackageManager::getUserBadgedLabel(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getUserBadgedLabel",
			"(Ljava/lang/CharSequence;Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	__JniBaseClass PackageManager::getWhitelistedRestrictedPermissions(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getWhitelistedRestrictedPermissions",
			"(Ljava/lang/String;I)Ljava/util/Set;",
			arg0,
			arg1
		);
	}
	__JniBaseClass PackageManager::getXml(jstring arg0, jint arg1, android::content::pm::ApplicationInfo arg2)
	{
		return callObjectMethod(
			"getXml",
			"(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean PackageManager::hasSigningCertificate(jint arg0, jbyteArray arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"hasSigningCertificate",
			"(I[BI)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::hasSigningCertificate(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"hasSigningCertificate",
			"(Ljava/lang/String;[BI)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PackageManager::hasSystemFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::hasSystemFeature(jstring arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"hasSystemFeature",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jboolean PackageManager::isDeviceUpgrading()
	{
		return callMethod<jboolean>(
			"isDeviceUpgrading",
			"()Z"
		);
	}
	jboolean PackageManager::isInstantApp()
	{
		return callMethod<jboolean>(
			"isInstantApp",
			"()Z"
		);
	}
	jboolean PackageManager::isInstantApp(jstring arg0)
	{
		return callMethod<jboolean>(
			"isInstantApp",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::isPackageSuspended()
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"()Z"
		);
	}
	jboolean PackageManager::isPackageSuspended(jstring arg0)
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PackageManager::isPermissionRevokedByPolicy(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isPermissionRevokedByPolicy",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean PackageManager::isSafeMode()
	{
		return callMethod<jboolean>(
			"isSafeMode",
			"()Z"
		);
	}
	__JniBaseClass PackageManager::queryBroadcastReceivers(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"queryBroadcastReceivers",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass PackageManager::queryContentProviders(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"queryContentProviders",
			"(Ljava/lang/String;II)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass PackageManager::queryInstrumentation(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"queryInstrumentation",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	__JniBaseClass PackageManager::queryIntentActivities(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"queryIntentActivities",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass PackageManager::queryIntentActivityOptions(android::content::ComponentName arg0, jarray arg1, android::content::Intent arg2, jint arg3)
	{
		return callObjectMethod(
			"queryIntentActivityOptions",
			"(Landroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	__JniBaseClass PackageManager::queryIntentContentProviders(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"queryIntentContentProviders",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass PackageManager::queryIntentServices(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"queryIntentServices",
			"(Landroid/content/Intent;I)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass PackageManager::queryPermissionsByGroup(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"queryPermissionsByGroup",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	void PackageManager::removePackageFromPreferred(jstring arg0)
	{
		callMethod<void>(
			"removePackageFromPreferred",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageManager::removePermission(jstring arg0)
	{
		callMethod<void>(
			"removePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean PackageManager::removeWhitelistedRestrictedPermission(jstring arg0, jstring arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"removeWhitelistedRestrictedPermission",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	android::content::pm::ResolveInfo PackageManager::resolveActivity(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.object(),
			arg1
		);
	}
	android::content::pm::ProviderInfo PackageManager::resolveContentProvider(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveContentProvider",
			"(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;",
			arg0,
			arg1
		);
	}
	android::content::pm::ResolveInfo PackageManager::resolveService(android::content::Intent arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveService",
			"(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;",
			arg0.object(),
			arg1
		);
	}
	void PackageManager::setApplicationCategoryHint(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"setApplicationCategoryHint",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void PackageManager::setApplicationEnabledSetting(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setApplicationEnabledSetting",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PackageManager::setComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setComponentEnabledSetting",
			"(Landroid/content/ComponentName;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PackageManager::setInstallerPackageName(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setInstallerPackageName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PackageManager::updateInstantAppCookie(jbyteArray arg0)
	{
		callMethod<void>(
			"updateInstantAppCookie",
			"([B)V",
			arg0
		);
	}
	void PackageManager::verifyPendingInstall(jint arg0, jint arg1)
	{
		callMethod<void>(
			"verifyPendingInstall",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

