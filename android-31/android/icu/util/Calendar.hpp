#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateFormat;
}
namespace android::icu::util
{
	class Calendar_WeekData;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class Calendar : public JObject
	{
	public:
		// Fields
		static jint AM();
		static jint AM_PM();
		static jint APRIL();
		static jint AUGUST();
		static jint DATE();
		static jint DAY_OF_MONTH();
		static jint DAY_OF_WEEK();
		static jint DAY_OF_WEEK_IN_MONTH();
		static jint DAY_OF_YEAR();
		static jint DECEMBER();
		static jint DOW_LOCAL();
		static jint DST_OFFSET();
		static jint ERA();
		static jint EXTENDED_YEAR();
		static jint FEBRUARY();
		static jint FRIDAY();
		static jint HOUR();
		static jint HOUR_OF_DAY();
		static jint IS_LEAP_MONTH();
		static jint JANUARY();
		static jint JULIAN_DAY();
		static jint JULY();
		static jint JUNE();
		static jint MARCH();
		static jint MAY();
		static jint MILLISECOND();
		static jint MILLISECONDS_IN_DAY();
		static jint MINUTE();
		static jint MONDAY();
		static jint MONTH();
		static jint NOVEMBER();
		static jint OCTOBER();
		static jint PM();
		static jint SATURDAY();
		static jint SECOND();
		static jint SEPTEMBER();
		static jint SUNDAY();
		static jint THURSDAY();
		static jint TUESDAY();
		static jint UNDECIMBER();
		static jint WALLTIME_FIRST();
		static jint WALLTIME_LAST();
		static jint WALLTIME_NEXT_VALID();
		static jint WEDNESDAY();
		static jint WEEK_OF_MONTH();
		static jint WEEK_OF_YEAR();
		static jint YEAR();
		static jint YEAR_WOY();
		static jint ZONE_OFFSET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Calendar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Calendar(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static android::icu::util::Calendar getInstance();
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0);
		static android::icu::util::Calendar getInstance(android::icu::util::ULocale arg0);
		static android::icu::util::Calendar getInstance(java::util::Locale arg0);
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		static jarray getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static android::icu::util::Calendar_WeekData getWeekDataForRegion(jstring arg0);
		void add(jint arg0, jint arg1);
		jboolean after(jobject arg0);
		jboolean before(jobject arg0);
		void clear();
		void clear(jint arg0);
		jobject clone();
		jint compareTo(android::icu::util::Calendar arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jint fieldDifference(java::util::Date arg0, jint arg1);
		jint get(jint arg0);
		jint getActualMaximum(jint arg0);
		jint getActualMinimum(jint arg0);
		android::icu::text::DateFormat getDateTimeFormat(jint arg0, jint arg1, android::icu::util::ULocale arg2);
		android::icu::text::DateFormat getDateTimeFormat(jint arg0, jint arg1, java::util::Locale arg2);
		jstring getDisplayName(android::icu::util::ULocale arg0);
		jstring getDisplayName(java::util::Locale arg0);
		jint getFieldCount();
		jint getFirstDayOfWeek();
		jint getGreatestMinimum(jint arg0);
		jint getLeastMaximum(jint arg0);
		jint getMaximum(jint arg0);
		jint getMinimalDaysInFirstWeek();
		jint getMinimum(jint arg0);
		jint getRepeatedWallTimeOption();
		jint getSkippedWallTimeOption();
		java::util::Date getTime();
		jlong getTimeInMillis();
		android::icu::util::TimeZone getTimeZone();
		jstring getType();
		android::icu::util::Calendar_WeekData getWeekData();
		jint hashCode();
		jboolean isEquivalentTo(android::icu::util::Calendar arg0);
		jboolean isLenient();
		jboolean isSet(jint arg0);
		jboolean isWeekend();
		jboolean isWeekend(java::util::Date arg0);
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		void set(jint arg0, jint arg1);
		void set(jint arg0, jint arg1, jint arg2);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setFirstDayOfWeek(jint arg0);
		void setLenient(jboolean arg0);
		void setMinimalDaysInFirstWeek(jint arg0);
		void setRepeatedWallTimeOption(jint arg0);
		void setSkippedWallTimeOption(jint arg0);
		void setTime(java::util::Date arg0);
		void setTimeInMillis(jlong arg0);
		void setTimeZone(android::icu::util::TimeZone arg0);
		android::icu::util::Calendar setWeekData(android::icu::util::Calendar_WeekData arg0);
		jstring toString();
	};
} // namespace android::icu::util

