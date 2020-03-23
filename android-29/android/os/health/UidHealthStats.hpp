#pragma once

#ifndef ANDROID_OS_HEALTH_UIDHEALTHSTATS
#define ANDROID_OS_HEALTH_UIDHEALTHSTATS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::health
{
	class UidHealthStats : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::health


namespace __jni_impl::android::os::health
{
	// Fields
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_IDLE_MS");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_POWER_MAMS");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_MS");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_RX_PACKETS");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_MS");
	}
	jint UidHealthStats::MEASUREMENT_BLUETOOTH_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BLUETOOTH_TX_PACKETS");
	}
	jint UidHealthStats::MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT");
	}
	jint UidHealthStats::MEASUREMENT_CPU_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_CPU_POWER_MAMS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_IDLE_MS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_POWER_MAMS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_MS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_RX_PACKETS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_MS");
	}
	jint UidHealthStats::MEASUREMENT_MOBILE_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_MOBILE_TX_PACKETS");
	}
	jint UidHealthStats::MEASUREMENT_OTHER_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_OTHER_USER_ACTIVITY_COUNT");
	}
	jint UidHealthStats::MEASUREMENT_REALTIME_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_BATTERY_MS");
	}
	jint UidHealthStats::MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS");
	}
	jint UidHealthStats::MEASUREMENT_SYSTEM_CPU_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_SYSTEM_CPU_TIME_MS");
	}
	jint UidHealthStats::MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT");
	}
	jint UidHealthStats::MEASUREMENT_UPTIME_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_BATTERY_MS");
	}
	jint UidHealthStats::MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS");
	}
	jint UidHealthStats::MEASUREMENT_USER_CPU_TIME_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_USER_CPU_TIME_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_FULL_LOCK_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_FULL_LOCK_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_IDLE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_IDLE_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_MULTICAST_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_MULTICAST_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_POWER_MAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_POWER_MAMS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RUNNING_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RUNNING_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_RX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_RX_PACKETS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_BYTES");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_MS");
	}
	jint UidHealthStats::MEASUREMENT_WIFI_TX_PACKETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"MEASUREMENT_WIFI_TX_PACKETS");
	}
	jint UidHealthStats::STATS_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PACKAGES");
	}
	jint UidHealthStats::STATS_PIDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PIDS");
	}
	jint UidHealthStats::STATS_PROCESSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"STATS_PROCESSES");
	}
	jint UidHealthStats::TIMERS_JOBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_JOBS");
	}
	jint UidHealthStats::TIMERS_SENSORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SENSORS");
	}
	jint UidHealthStats::TIMERS_SYNCS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_SYNCS");
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_DRAW");
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_FULL");
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_PARTIAL");
	}
	jint UidHealthStats::TIMERS_WAKELOCKS_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMERS_WAKELOCKS_WINDOW");
	}
	jint UidHealthStats::TIMER_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_AUDIO");
	}
	jint UidHealthStats::TIMER_BLUETOOTH_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_BLUETOOTH_SCAN");
	}
	jint UidHealthStats::TIMER_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_CAMERA");
	}
	jint UidHealthStats::TIMER_FLASHLIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FLASHLIGHT");
	}
	jint UidHealthStats::TIMER_FOREGROUND_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_FOREGROUND_ACTIVITY");
	}
	jint UidHealthStats::TIMER_GPS_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_GPS_SENSOR");
	}
	jint UidHealthStats::TIMER_MOBILE_RADIO_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_MOBILE_RADIO_ACTIVE");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_BACKGROUND_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_BACKGROUND_MS");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_CACHED_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_CACHED_MS");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_MS");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_TOP_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_MS");
	}
	jint UidHealthStats::TIMER_PROCESS_STATE_TOP_SLEEPING_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_PROCESS_STATE_TOP_SLEEPING_MS");
	}
	jint UidHealthStats::TIMER_VIBRATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIBRATOR");
	}
	jint UidHealthStats::TIMER_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_VIDEO");
	}
	jint UidHealthStats::TIMER_WIFI_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.UidHealthStats",
			"TIMER_WIFI_SCAN");
	}
	
	// Constructors
	void UidHealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.UidHealthStats",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class UidHealthStats : public __jni_impl::android::os::health::UidHealthStats
	{
	public:
		UidHealthStats(QAndroidJniObject obj) { __thiz = obj; }
		UidHealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_UIDHEALTHSTATS

