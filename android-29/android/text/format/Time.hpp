#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::text::format
{
	class Time : public __JniBaseClass
	{
	public:
		// Fields
		static jint EPOCH_JULIAN_DAY();
		static jint FRIDAY();
		static jint HOUR();
		static jint MINUTE();
		static jint MONDAY();
		static jint MONDAY_BEFORE_JULIAN_EPOCH();
		static jint MONTH();
		static jint MONTH_DAY();
		static jint SATURDAY();
		static jint SECOND();
		static jint SUNDAY();
		static jint THURSDAY();
		static jstring TIMEZONE_UTC();
		static jint TUESDAY();
		static jint WEDNESDAY();
		static jint WEEK_DAY();
		static jint WEEK_NUM();
		static jint YEAR();
		static jint YEAR_DAY();
		jboolean allDay();
		jlong gmtoff();
		jint hour();
		jint isDst();
		jint minute();
		jint month();
		jint monthDay();
		jint second();
		jstring timezone();
		jint weekDay();
		jint year();
		jint yearDay();
		
		Time(QAndroidJniObject obj);
		// Constructors
		Time();
		Time(android::text::format::Time &arg0);
		Time(jstring arg0);
		
		// Methods
		static jint compare(android::text::format::Time arg0, android::text::format::Time arg1);
		static jstring getCurrentTimezone();
		static jint getJulianDay(jlong arg0, jlong arg1);
		static jint getJulianMondayFromWeeksSinceEpoch(jint arg0);
		static jint getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1);
		static jboolean isEpoch(android::text::format::Time arg0);
		jboolean after(android::text::format::Time arg0);
		jboolean before(android::text::format::Time arg0);
		void clear(jstring arg0);
		jstring format(jstring arg0);
		jstring format2445();
		jstring format3339(jboolean arg0);
		jint getActualMaximum(jint arg0);
		jint getWeekNumber();
		jlong normalize(jboolean arg0);
		jboolean parse(jstring arg0);
		jboolean parse3339(jstring arg0);
		void set(android::text::format::Time arg0);
		void set(jlong arg0);
		void set(jint arg0, jint arg1, jint arg2);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jlong setJulianDay(jint arg0);
		void setToNow();
		void switchTimezone(jstring arg0);
		jlong toMillis(jboolean arg0);
		jstring toString();
	};
} // namespace android::text::format

