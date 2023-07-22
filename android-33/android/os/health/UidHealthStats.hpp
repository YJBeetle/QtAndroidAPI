#pragma once

#include "./UidHealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_IDLE_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_IDLE_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_POWER_MAMS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_POWER_MAMS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_PACKETS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_PACKETS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_CPU_POWER_MAMS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_CPU_POWER_MAMS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_IDLE_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_IDLE_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_POWER_MAMS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_POWER_MAMS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_RX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_RX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_RX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_PACKETS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_TX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_TX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_MOBILE_TX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_PACKETS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_OTHER_USER_ACTIVITY_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_OTHER_USER_ACTIVITY_COUNT"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_REALTIME_BATTERY_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_BATTERY_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_SYSTEM_CPU_TIME_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_SYSTEM_CPU_TIME_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_UPTIME_BATTERY_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_BATTERY_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_USER_CPU_TIME_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_USER_CPU_TIME_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_FULL_LOCK_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_FULL_LOCK_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_IDLE_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_IDLE_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_MULTICAST_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_MULTICAST_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_POWER_MAMS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_POWER_MAMS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_RUNNING_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RUNNING_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_RX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_RX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_RX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_PACKETS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_TX_BYTES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_BYTES"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_TX_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_MS"
		);
	}
	inline jint UidHealthStats::MEASUREMENT_WIFI_TX_PACKETS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_PACKETS"
		);
	}
	inline jint UidHealthStats::STATS_PACKAGES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PACKAGES"
		);
	}
	inline jint UidHealthStats::STATS_PIDS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PIDS"
		);
	}
	inline jint UidHealthStats::STATS_PROCESSES()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PROCESSES"
		);
	}
	inline jint UidHealthStats::TIMERS_JOBS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_JOBS"
		);
	}
	inline jint UidHealthStats::TIMERS_SENSORS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SENSORS"
		);
	}
	inline jint UidHealthStats::TIMERS_SYNCS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SYNCS"
		);
	}
	inline jint UidHealthStats::TIMERS_WAKELOCKS_DRAW()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_DRAW"
		);
	}
	inline jint UidHealthStats::TIMERS_WAKELOCKS_FULL()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_FULL"
		);
	}
	inline jint UidHealthStats::TIMERS_WAKELOCKS_PARTIAL()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_PARTIAL"
		);
	}
	inline jint UidHealthStats::TIMERS_WAKELOCKS_WINDOW()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_WINDOW"
		);
	}
	inline jint UidHealthStats::TIMER_AUDIO()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_AUDIO"
		);
	}
	inline jint UidHealthStats::TIMER_BLUETOOTH_SCAN()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_BLUETOOTH_SCAN"
		);
	}
	inline jint UidHealthStats::TIMER_CAMERA()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_CAMERA"
		);
	}
	inline jint UidHealthStats::TIMER_FLASHLIGHT()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FLASHLIGHT"
		);
	}
	inline jint UidHealthStats::TIMER_FOREGROUND_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FOREGROUND_ACTIVITY"
		);
	}
	inline jint UidHealthStats::TIMER_GPS_SENSOR()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_GPS_SENSOR"
		);
	}
	inline jint UidHealthStats::TIMER_MOBILE_RADIO_ACTIVE()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_MOBILE_RADIO_ACTIVE"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_BACKGROUND_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_BACKGROUND_MS"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_CACHED_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_CACHED_MS"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_MS"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_TOP_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_MS"
		);
	}
	inline jint UidHealthStats::TIMER_PROCESS_STATE_TOP_SLEEPING_MS()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_SLEEPING_MS"
		);
	}
	inline jint UidHealthStats::TIMER_VIBRATOR()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIBRATOR"
		);
	}
	inline jint UidHealthStats::TIMER_VIDEO()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIDEO"
		);
	}
	inline jint UidHealthStats::TIMER_WIFI_SCAN()
	{
		return getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_WIFI_SCAN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
