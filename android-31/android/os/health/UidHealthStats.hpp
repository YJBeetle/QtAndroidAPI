#pragma once

#include "../../../JObject.hpp"

namespace android::os::health
{
	class UidHealthStats : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_BLUETOOTH_IDLE_MS();
		static jint MEASUREMENT_BLUETOOTH_POWER_MAMS();
		static jint MEASUREMENT_BLUETOOTH_RX_BYTES();
		static jint MEASUREMENT_BLUETOOTH_RX_MS();
		static jint MEASUREMENT_BLUETOOTH_RX_PACKETS();
		static jint MEASUREMENT_BLUETOOTH_TX_BYTES();
		static jint MEASUREMENT_BLUETOOTH_TX_MS();
		static jint MEASUREMENT_BLUETOOTH_TX_PACKETS();
		static jint MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT();
		static jint MEASUREMENT_CPU_POWER_MAMS();
		static jint MEASUREMENT_MOBILE_IDLE_MS();
		static jint MEASUREMENT_MOBILE_POWER_MAMS();
		static jint MEASUREMENT_MOBILE_RX_BYTES();
		static jint MEASUREMENT_MOBILE_RX_MS();
		static jint MEASUREMENT_MOBILE_RX_PACKETS();
		static jint MEASUREMENT_MOBILE_TX_BYTES();
		static jint MEASUREMENT_MOBILE_TX_MS();
		static jint MEASUREMENT_MOBILE_TX_PACKETS();
		static jint MEASUREMENT_OTHER_USER_ACTIVITY_COUNT();
		static jint MEASUREMENT_REALTIME_BATTERY_MS();
		static jint MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS();
		static jint MEASUREMENT_SYSTEM_CPU_TIME_MS();
		static jint MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT();
		static jint MEASUREMENT_UPTIME_BATTERY_MS();
		static jint MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS();
		static jint MEASUREMENT_USER_CPU_TIME_MS();
		static jint MEASUREMENT_WIFI_FULL_LOCK_MS();
		static jint MEASUREMENT_WIFI_IDLE_MS();
		static jint MEASUREMENT_WIFI_MULTICAST_MS();
		static jint MEASUREMENT_WIFI_POWER_MAMS();
		static jint MEASUREMENT_WIFI_RUNNING_MS();
		static jint MEASUREMENT_WIFI_RX_BYTES();
		static jint MEASUREMENT_WIFI_RX_MS();
		static jint MEASUREMENT_WIFI_RX_PACKETS();
		static jint MEASUREMENT_WIFI_TX_BYTES();
		static jint MEASUREMENT_WIFI_TX_MS();
		static jint MEASUREMENT_WIFI_TX_PACKETS();
		static jint STATS_PACKAGES();
		static jint STATS_PIDS();
		static jint STATS_PROCESSES();
		static jint TIMERS_JOBS();
		static jint TIMERS_SENSORS();
		static jint TIMERS_SYNCS();
		static jint TIMERS_WAKELOCKS_DRAW();
		static jint TIMERS_WAKELOCKS_FULL();
		static jint TIMERS_WAKELOCKS_PARTIAL();
		static jint TIMERS_WAKELOCKS_WINDOW();
		static jint TIMER_AUDIO();
		static jint TIMER_BLUETOOTH_SCAN();
		static jint TIMER_CAMERA();
		static jint TIMER_FLASHLIGHT();
		static jint TIMER_FOREGROUND_ACTIVITY();
		static jint TIMER_GPS_SENSOR();
		static jint TIMER_MOBILE_RADIO_ACTIVE();
		static jint TIMER_PROCESS_STATE_BACKGROUND_MS();
		static jint TIMER_PROCESS_STATE_CACHED_MS();
		static jint TIMER_PROCESS_STATE_FOREGROUND_MS();
		static jint TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS();
		static jint TIMER_PROCESS_STATE_TOP_MS();
		static jint TIMER_PROCESS_STATE_TOP_SLEEPING_MS();
		static jint TIMER_VIBRATOR();
		static jint TIMER_VIDEO();
		static jint TIMER_WIFI_SCAN();
		
		// QJniObject forward
		template<typename ...Ts> explicit UidHealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UidHealthStats(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

