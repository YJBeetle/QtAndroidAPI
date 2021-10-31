#include "./UidHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_IDLE_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_POWER_MAMS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_PACKETS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_PACKETS"
		);
	}
	jint UidHealthStats::MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT"
		);
	}
	jint UidHealthStats::MEASUREMENT_CPU_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_CPU_POWER_MAMS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_IDLE_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_POWER_MAMS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_PACKETS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_PACKETS"
		);
	}
	jint UidHealthStats::MEASUREMENT_OTHER_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_OTHER_USER_ACTIVITY_COUNT"
		);
	}
	jint UidHealthStats::MEASUREMENT_REALTIME_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_BATTERY_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_SYSTEM_CPU_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_SYSTEM_CPU_TIME_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT"
		);
	}
	jint UidHealthStats::MEASUREMENT_UPTIME_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_BATTERY_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_USER_CPU_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_USER_CPU_TIME_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_FULL_LOCK_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_FULL_LOCK_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_IDLE_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_MULTICAST_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_MULTICAST_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_POWER_MAMS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RUNNING_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RUNNING_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_PACKETS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_BYTES"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_MS"
		);
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_PACKETS"
		);
	}
	jint UidHealthStats::STATS_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PACKAGES"
		);
	}
	jint UidHealthStats::STATS_PIDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PIDS"
		);
	}
	jint UidHealthStats::STATS_PROCESSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PROCESSES"
		);
	}
	jint UidHealthStats::TIMERS_JOBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_JOBS"
		);
	}
	jint UidHealthStats::TIMERS_SENSORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SENSORS"
		);
	}
	jint UidHealthStats::TIMERS_SYNCS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SYNCS"
		);
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_DRAW"
		);
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_FULL"
		);
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_PARTIAL"
		);
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_WINDOW"
		);
	}
	jint UidHealthStats::TIMER_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_AUDIO"
		);
	}
	jint UidHealthStats::TIMER_BLUETOOTH_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_BLUETOOTH_SCAN"
		);
	}
	jint UidHealthStats::TIMER_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_CAMERA"
		);
	}
	jint UidHealthStats::TIMER_FLASHLIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FLASHLIGHT"
		);
	}
	jint UidHealthStats::TIMER_FOREGROUND_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FOREGROUND_ACTIVITY"
		);
	}
	jint UidHealthStats::TIMER_GPS_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_GPS_SENSOR"
		);
	}
	jint UidHealthStats::TIMER_MOBILE_RADIO_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_MOBILE_RADIO_ACTIVE"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_BACKGROUND_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_BACKGROUND_MS"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_CACHED_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_CACHED_MS"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_MS"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_TOP_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_MS"
		);
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_TOP_SLEEPING_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_SLEEPING_MS"
		);
	}
	jint UidHealthStats::TIMER_VIBRATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIBRATOR"
		);
	}
	jint UidHealthStats::TIMER_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIDEO"
		);
	}
	jint UidHealthStats::TIMER_WIFI_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_WIFI_SCAN"
		);
	}
	
	// QAndroidJniObject forward
	UidHealthStats::UidHealthStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::health
