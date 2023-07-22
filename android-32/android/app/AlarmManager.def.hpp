#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::app
{
	class AlarmManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_NEXT_ALARM_CLOCK_CHANGED();
		static JString ACTION_SCHEDULE_EXACT_ALARM_PERMISSION_STATE_CHANGED();
		static jint ELAPSED_REALTIME();
		static jint ELAPSED_REALTIME_WAKEUP();
		static jlong INTERVAL_DAY();
		static jlong INTERVAL_FIFTEEN_MINUTES();
		static jlong INTERVAL_HALF_DAY();
		static jlong INTERVAL_HALF_HOUR();
		static jlong INTERVAL_HOUR();
		static jint RTC();
		static jint RTC_WAKEUP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlarmManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlarmManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean canScheduleExactAlarms() const;
		void cancel(JObject arg0) const;
		void cancel(android::app::PendingIntent arg0) const;
		android::app::AlarmManager_AlarmClockInfo getNextAlarmClock() const;
		void set(jint arg0, jlong arg1, android::app::PendingIntent arg2) const;
		void set(jint arg0, jlong arg1, JString arg2, JObject arg3, android::os::Handler arg4) const;
		void setAlarmClock(android::app::AlarmManager_AlarmClockInfo arg0, android::app::PendingIntent arg1) const;
		void setAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2) const;
		void setExact(jint arg0, jlong arg1, android::app::PendingIntent arg2) const;
		void setExact(jint arg0, jlong arg1, JString arg2, JObject arg3, android::os::Handler arg4) const;
		void setExactAndAllowWhileIdle(jint arg0, jlong arg1, android::app::PendingIntent arg2) const;
		void setInexactRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const;
		void setRepeating(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const;
		void setTime(jlong arg0) const;
		void setTimeZone(JString arg0) const;
		void setWindow(jint arg0, jlong arg1, jlong arg2, android::app::PendingIntent arg3) const;
		void setWindow(jint arg0, jlong arg1, jlong arg2, JString arg3, JObject arg4, android::os::Handler arg5) const;
	};
} // namespace android::app

