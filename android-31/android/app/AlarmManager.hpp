#pragma once

#include "./AlarmManager_AlarmClockInfo.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./AlarmManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString AlarmManager::ACTION_NEXT_ALARM_CLOCK_CHANGED()
	{
		return getStaticObjectField(
			"android.app.AlarmManager",
			"ACTION_NEXT_ALARM_CLOCK_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString AlarmManager::ACTION_SCHEDULE_EXACT_ALARM_PERMISSION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.AlarmManager",
			"ACTION_SCHEDULE_EXACT_ALARM_PERMISSION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint AlarmManager::ELAPSED_REALTIME()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME"
		);
	}
	inline jint AlarmManager::ELAPSED_REALTIME_WAKEUP()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME_WAKEUP"
		);
	}
	inline jlong AlarmManager::INTERVAL_DAY()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_DAY"
		);
	}
	inline jlong AlarmManager::INTERVAL_FIFTEEN_MINUTES()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_FIFTEEN_MINUTES"
		);
	}
	inline jlong AlarmManager::INTERVAL_HALF_DAY()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_DAY"
		);
	}
	inline jlong AlarmManager::INTERVAL_HALF_HOUR()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_HOUR"
		);
	}
	inline jlong AlarmManager::INTERVAL_HOUR()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HOUR"
		);
	}
	inline jint AlarmManager::RTC()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC"
		);
	}
	inline jint AlarmManager::RTC_WAKEUP()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC_WAKEUP"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AlarmManager::canScheduleExactAlarms() const
	{
		return callMethod<jboolean>(
			"canScheduleExactAlarms",
			"()Z"
		);
	}
	inline void AlarmManager::cancel(JObject arg0) const
	{
		callMethod<void>(
			"cancel",
			"(Landroid/app/AlarmManager$OnAlarmListener;)V",
			arg0.object()
		);
	}
	inline void AlarmManager::cancel(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"cancel",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline android::app::AlarmManager_AlarmClockInfo AlarmManager::getNextAlarmClock() const
	{
		return callObjectMethod(
			"getNextAlarmClock",
			"()Landroid/app/AlarmManager$AlarmClockInfo;"
		);
	}
	inline void AlarmManager::set(jint arg0, jlong arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"set",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void AlarmManager::set(jint arg0, jlong arg1, JString arg2, JObject arg3, android::os::Handler arg4) const
	{
		callMethod<void>(
			"set",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void AlarmManager::setAlarmClock(android::app::AlarmManager_AlarmClockInfo arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"setAlarmClock",
			"(Landroid/app/AlarmManager$AlarmClockInfo;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AlarmManager::setAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"setAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void AlarmManager::setExact(jint arg0, jlong arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"setExact",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void AlarmManager::setExact(jint arg0, jlong arg1, JString arg2, JObject arg3, android::os::Handler arg4) const
	{
		callMethod<void>(
			"setExact",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void AlarmManager::setExactAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"setExactAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void AlarmManager::setInexactRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"setInexactRepeating",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void AlarmManager::setRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"setRepeating",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void AlarmManager::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void AlarmManager::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"setWindow",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, JString arg3, JObject arg4, android::os::Handler arg5) const
	{
		callMethod<void>(
			"setWindow",
			"(IJJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::app

// Base class headers

