#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Settings_NameValueTable.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Settings_Global : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static jstring ADB_ENABLED();
		static jstring AIRPLANE_MODE_ON();
		static jstring AIRPLANE_MODE_RADIOS();
		static jstring ALWAYS_FINISH_ACTIVITIES();
		static jstring ANIMATOR_DURATION_SCALE();
		static jstring APPLY_RAMPING_RINGER();
		static jstring AUTO_TIME();
		static jstring AUTO_TIME_ZONE();
		static jstring BLUETOOTH_ON();
		static jstring BOOT_COUNT();
		static jstring CONTACT_METADATA_SYNC_ENABLED();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_ROAMING();
		static jstring DEBUG_APP();
		static jstring DEVELOPMENT_SETTINGS_ENABLED();
		static jstring DEVICE_NAME();
		static jstring DEVICE_PROVISIONED();
		static jstring HTTP_PROXY();
		static jstring INSTALL_NON_MARKET_APPS();
		static jstring MODE_RINGER();
		static jstring NETWORK_PREFERENCE();
		static jstring RADIO_BLUETOOTH();
		static jstring RADIO_CELL();
		static jstring RADIO_NFC();
		static jstring RADIO_WIFI();
		static jstring SHOW_PROCESSES();
		static jstring STAY_ON_WHILE_PLUGGED_IN();
		static jstring TRANSITION_ANIMATION_SCALE();
		static jstring USB_MASS_STORAGE_ENABLED();
		static jstring USE_GOOGLE_MAIL();
		static jstring WAIT_FOR_DEBUGGER();
		static jstring WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN();
		static jstring WIFI_MAX_DHCP_RETRY_COUNT();
		static jstring WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static jstring WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static jstring WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static jstring WIFI_NUM_OPEN_NETWORKS_KEPT();
		static jstring WIFI_ON();
		static jstring WIFI_SLEEP_POLICY();
		static jint WIFI_SLEEP_POLICY_DEFAULT();
		static jint WIFI_SLEEP_POLICY_NEVER();
		static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED();
		static jstring WIFI_WATCHDOG_ON();
		static jstring WINDOW_ANIMATION_SCALE();
		
		Settings_Global(QAndroidJniObject obj);
		// Constructors
		Settings_Global();
		
		// Methods
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jstring getString(android::content::ContentResolver arg0, jstring arg1);
		static QAndroidJniObject getUriFor(jstring arg0);
		static jboolean putFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, jstring arg1, jstring arg2);
	};
} // namespace android::provider

