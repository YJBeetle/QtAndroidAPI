#include "./AlarmManager_AlarmClockInfo.hpp"
#include "./PendingIntent.hpp"
#include "../os/Handler.hpp"
#include "./AlarmManager.hpp"

namespace android::app
{
	// Fields
	jstring AlarmManager::ACTION_NEXT_ALARM_CLOCK_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AlarmManager",
			"ACTION_NEXT_ALARM_CLOCK_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlarmManager::ELAPSED_REALTIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME"
		);
	}
	jint AlarmManager::ELAPSED_REALTIME_WAKEUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlarmManager",
			"ELAPSED_REALTIME_WAKEUP"
		);
	}
	jlong AlarmManager::INTERVAL_DAY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_DAY"
		);
	}
	jlong AlarmManager::INTERVAL_FIFTEEN_MINUTES()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_FIFTEEN_MINUTES"
		);
	}
	jlong AlarmManager::INTERVAL_HALF_DAY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_DAY"
		);
	}
	jlong AlarmManager::INTERVAL_HALF_HOUR()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HALF_HOUR"
		);
	}
	jlong AlarmManager::INTERVAL_HOUR()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.AlarmManager",
			"INTERVAL_HOUR"
		);
	}
	jint AlarmManager::RTC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC"
		);
	}
	jint AlarmManager::RTC_WAKEUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlarmManager",
			"RTC_WAKEUP"
		);
	}
	
	AlarmManager::AlarmManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AlarmManager::cancel(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(Landroid/app/AlarmManager$OnAlarmListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AlarmManager::cancel(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlarmManager::getNextAlarmClock()
	{
		return __thiz.callObjectMethod(
			"getNextAlarmClock",
			"()Landroid/app/AlarmManager$AlarmClockInfo;"
		);
	}
	void AlarmManager::set(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::set(jint arg0, jlong arg1, jstring arg2, __JniBaseClass arg3, android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"set",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void AlarmManager::setAlarmClock(android::app::AlarmManager_AlarmClockInfo arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"setAlarmClock",
			"(Landroid/app/AlarmManager$AlarmClockInfo;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AlarmManager::setAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::setExact(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setExact",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::setExact(jint arg0, jlong arg1, jstring arg2, __JniBaseClass arg3, android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"setExact",
			"(IJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void AlarmManager::setExactAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setExactAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::setInexactRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"setInexactRepeating",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AlarmManager::setRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"setRepeating",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AlarmManager::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void AlarmManager::setTimeZone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"setWindow",
			"(IJJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, jstring arg3, __JniBaseClass arg4, android::os::Handler arg5)
	{
		__thiz.callMethod<void>(
			"setWindow",
			"(IJJLjava/lang/String;Landroid/app/AlarmManager$OnAlarmListener;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
} // namespace android::app

