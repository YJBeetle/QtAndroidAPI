#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class AlarmManager_AlarmClockInfo;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Handler;
}

namespace android::app
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
		
		AlarmManager(QAndroidJniObject obj);
		// Constructors
		AlarmManager() = default;
		
		// Methods
		void cancel(__JniBaseClass arg0);
		void cancel(android::app::PendingIntent arg0);
		QAndroidJniObject getNextAlarmClock();
		void set(jint arg0, jlong arg1, android::app::PendingIntent arg2);
		void set(jint arg0, jlong arg1, jstring arg2, __JniBaseClass arg3, android::os::Handler arg4);
		void setAlarmClock(android::app::AlarmManager_AlarmClockInfo arg0, android::app::PendingIntent arg1);
		void setAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2);
		void setExact(jint arg0, jlong arg1, android::app::PendingIntent arg2);
		void setExact(jint arg0, jlong arg1, jstring arg2, __JniBaseClass arg3, android::os::Handler arg4);
		void setExactAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2);
		void setInexactRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3);
		void setRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3);
		void setTime(jlong arg0);
		void setTimeZone(jstring arg0);
		void setWindow(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3);
		void setWindow(jint arg0, jlong arg1, jlong arg2, jstring arg3, __JniBaseClass arg4, android::os::Handler arg5);
	};
} // namespace android::app

