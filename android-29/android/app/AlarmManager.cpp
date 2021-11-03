#include "./AlarmManager_AlarmClockInfo.hpp"
#include "./PendingIntent.hpp"
#include "../os/Handler.hpp"
#include "./AlarmManager.hpp"

namespace android::app
{
	// Fields
	jstring AlarmManager::ACTION_NEXT_ALARM_CLOCK_CHANGED()
	{
		return getStaticObjectField(
			"android.app.AlarmManager",
			"ACTION_NEXT_ALARM_CLOCK_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlarmManager::ELAPSED_REALTIME()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME"
		);
	}
	jint AlarmManager::ELAPSED_REALTIME_WAKEUP()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME_WAKEUP"
		);
	}
	jlong AlarmManager::INTERVAL_DAY()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_DAY"
		);
	}
	jlong AlarmManager::INTERVAL_FIFTEEN_MINUTES()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_FIFTEEN_MINUTES"
		);
	}
	jlong AlarmManager::INTERVAL_HALF_DAY()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_DAY"
		);
	}
	jlong AlarmManager::INTERVAL_HALF_HOUR()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_HOUR"
		);
	}
	jlong AlarmManager::INTERVAL_HOUR()
	{
		return getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HOUR"
		);
	}
	jint AlarmManager::RTC()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC"
		);
	}
	jint AlarmManager::RTC_WAKEUP()
	{
		return getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC_WAKEUP"
		);
	}
	
	// QJniObject forward
	AlarmManager::AlarmManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AlarmManager::cancel(JObject arg0)
	{
		callMethod<void>(
			"cancel",
			"(Landroid/app/AlarmManager$OnAlarmListener;)V",
			arg0.object()
		);
	}
	void AlarmManager::cancel(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"cancel",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	android::app::AlarmManager_AlarmClockInfo AlarmManager::getNextAlarmClock()
	{
		return callObjectMethod(
			"getNextAlarmClock",
			"()Landroid/app/AlarmManager$AlarmClockInfo;"
		);
	}
	void AlarmManager::set(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"set",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlarmManager::set(jint arg0, jlong arg1, jstring arg2, JObject arg3, android::os::Handler arg4)
	{
		callMethod<void>(
			"set",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	void AlarmManager::setAlarmClock(android::app::AlarmManager_AlarmClockInfo arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"setAlarmClock",
			"(Landroid/app/AlarmManager$AlarmClockInfo;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AlarmManager::setAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"setAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlarmManager::setExact(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"setExact",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlarmManager::setExact(jint arg0, jlong arg1, jstring arg2, JObject arg3, android::os::Handler arg4)
	{
		callMethod<void>(
			"setExact",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	void AlarmManager::setExactAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"setExactAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlarmManager::setInexactRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
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
	void AlarmManager::setRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
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
	void AlarmManager::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void AlarmManager::setTimeZone(jstring arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
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
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, jstring arg3, JObject arg4, android::os::Handler arg5)
	{
		callMethod<void>(
			"setWindow",
			"(IJJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::app

