#pragma once

#include "./Settings_NameValueTable.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Settings_Global : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static JString ADB_ENABLED();
		static JString AIRPLANE_MODE_ON();
		static JString AIRPLANE_MODE_RADIOS();
		static JString ALWAYS_FINISH_ACTIVITIES();
		static JString ANIMATOR_DURATION_SCALE();
		static JString APPLY_RAMPING_RINGER();
		static JString AUTO_TIME();
		static JString AUTO_TIME_ZONE();
		static JString BLUETOOTH_ON();
		static JString BOOT_COUNT();
		static JString CONTACT_METADATA_SYNC_ENABLED();
		static android::net::Uri CONTENT_URI();
		static JString DATA_ROAMING();
		static JString DEBUG_APP();
		static JString DEVELOPMENT_SETTINGS_ENABLED();
		static JString DEVICE_NAME();
		static JString DEVICE_PROVISIONED();
		static JString HTTP_PROXY();
		static JString INSTALL_NON_MARKET_APPS();
		static JString MODE_RINGER();
		static JString NETWORK_PREFERENCE();
		static JString RADIO_BLUETOOTH();
		static JString RADIO_CELL();
		static JString RADIO_NFC();
		static JString RADIO_WIFI();
		static JString SHOW_PROCESSES();
		static JString STAY_ON_WHILE_PLUGGED_IN();
		static JString TRANSITION_ANIMATION_SCALE();
		static JString USB_MASS_STORAGE_ENABLED();
		static JString USE_GOOGLE_MAIL();
		static JString WAIT_FOR_DEBUGGER();
		static JString WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN();
		static JString WIFI_MAX_DHCP_RETRY_COUNT();
		static JString WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static JString WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static JString WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static JString WIFI_NUM_OPEN_NETWORKS_KEPT();
		static JString WIFI_ON();
		static JString WIFI_SLEEP_POLICY();
		static jint WIFI_SLEEP_POLICY_DEFAULT();
		static jint WIFI_SLEEP_POLICY_NEVER();
		static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED();
		static JString WIFI_WATCHDOG_ON();
		static JString WINDOW_ANIMATION_SCALE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings_Global(const char *className, const char *sig, Ts...agv) : android::provider::Settings_NameValueTable(className, sig, std::forward<Ts>(agv)...) {}
		Settings_Global(QJniObject obj);
		
		// Constructors
		Settings_Global();
		
		// Methods
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, JString arg1);
		static jint getInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static JString getString(android::content::ContentResolver arg0, JString arg1);
		static android::net::Uri getUriFor(JString arg0);
		static jboolean putFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, JString arg1, JString arg2);
	};
} // namespace android::provider

