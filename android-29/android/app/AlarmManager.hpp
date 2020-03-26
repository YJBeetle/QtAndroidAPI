#pragma once

#ifndef ANDROID_APP_ALARMMANAGER
#define ANDROID_APP_ALARMMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class AlarmManager_AlarmClockInfo;
}

namespace __jni_impl::android::app
{
	class AlarmManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_NEXT_ALARM_CLOCK_CHANGED();
		static jint ELAPSED_REALTIME();
		static jint ELAPSED_REALTIME_WAKEUP();
		static jlong INTERVAL_DAY();
		static jlong INTERVAL_FIFTEEN_MINUTES();
		static jlong INTERVAL_HALF_DAY();
		static jlong INTERVAL_HALF_HOUR();
		static jlong INTERVAL_HOUR();
		static jint RTC();
		static jint RTC_WAKEUP();
		
		// Constructors
		void __constructor();
		
		// Methods
		void set(jint arg0, jlong arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		void set(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2);
		void setTime(jlong arg0);
		void cancel(__jni_impl::android::app::PendingIntent arg0);
		void cancel(__jni_impl::__JniBaseClass arg0);
		void setTimeZone(jstring arg0);
		void setWindow(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3);
		void setWindow(jint arg0, jlong arg1, jlong arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5);
		void setRepeating(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3);
		void setExact(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2);
		void setExact(jint arg0, jlong arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		void setAlarmClock(__jni_impl::android::app::AlarmManager_AlarmClockInfo arg0, __jni_impl::android::app::PendingIntent arg1);
		void setInexactRepeating(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3);
		void setAndAllowWhileIdle(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2);
		void setExactAndAllowWhileIdle(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2);
		QAndroidJniObject getNextAlarmClock();
	};
} // namespace __jni_impl::android::app

#include "../os/Handler.hpp"
#include "PendingIntent.hpp"
#include "AlarmManager_AlarmClockInfo.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void AlarmManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.AlarmManager",
			"(V)V");
	}
	
	// Methods
	void AlarmManager::set(jint arg0, jlong arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
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
	void AlarmManager::set(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	void AlarmManager::cancel(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void AlarmManager::cancel(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(Landroid/app/AlarmManager$OnAlarmListener;)V",
			arg0.__jniObject().object()
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
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void AlarmManager::setWindow(jint arg0, jlong arg1, jlong arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5)
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
	void AlarmManager::setRepeating(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void AlarmManager::setExact(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setExact",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::setExact(jint arg0, jlong arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
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
	void AlarmManager::setAlarmClock(__jni_impl::android::app::AlarmManager_AlarmClockInfo arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"setAlarmClock",
			"(Landroid/app/AlarmManager$AlarmClockInfo;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AlarmManager::setInexactRepeating(jint arg0, jlong arg1, jlong arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void AlarmManager::setAndAllowWhileIdle(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlarmManager::setExactAndAllowWhileIdle(jint arg0, jlong arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"setExactAndAllowWhileIdle",
			"(IJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlarmManager::getNextAlarmClock()
	{
		return __thiz.callObjectMethod(
			"getNextAlarmClock",
			"()Landroid/app/AlarmManager$AlarmClockInfo;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AlarmManager : public __jni_impl::android::app::AlarmManager
	{
	public:
		AlarmManager(QAndroidJniObject obj) { __thiz = obj; }
		AlarmManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ALARMMANAGER

