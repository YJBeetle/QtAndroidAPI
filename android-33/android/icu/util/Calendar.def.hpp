#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JArray;
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
class JObject;
class JString;
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
		Calendar(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static android::icu::util::Calendar getInstance();
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0);
		static android::icu::util::Calendar getInstance(android::icu::util::ULocale arg0);
		static android::icu::util::Calendar getInstance(java::util::Locale arg0);
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		static android::icu::util::Calendar getInstance(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		static JArray getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static android::icu::util::Calendar_WeekData getWeekDataForRegion(JString arg0);
		void add(jint arg0, jint arg1) const;
		jboolean after(JObject arg0) const;
		jboolean before(JObject arg0) const;
		void clear() const;
		void clear(jint arg0) const;
		JObject clone() const;
		jint compareTo(android::icu::util::Calendar arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		jint fieldDifference(java::util::Date arg0, jint arg1) const;
		jint get(jint arg0) const;
		jint getActualMaximum(jint arg0) const;
		jint getActualMinimum(jint arg0) const;
		android::icu::text::DateFormat getDateTimeFormat(jint arg0, jint arg1, android::icu::util::ULocale arg2) const;
		android::icu::text::DateFormat getDateTimeFormat(jint arg0, jint arg1, java::util::Locale arg2) const;
		JString getDisplayName(android::icu::util::ULocale arg0) const;
		JString getDisplayName(java::util::Locale arg0) const;
		jint getFieldCount() const;
		jint getFirstDayOfWeek() const;
		jint getGreatestMinimum(jint arg0) const;
		jint getLeastMaximum(jint arg0) const;
		jint getMaximum(jint arg0) const;
		jint getMinimalDaysInFirstWeek() const;
		jint getMinimum(jint arg0) const;
		jint getRepeatedWallTimeOption() const;
		jint getSkippedWallTimeOption() const;
		java::util::Date getTime() const;
		jlong getTimeInMillis() const;
		android::icu::util::TimeZone getTimeZone() const;
		JString getType() const;
		android::icu::util::Calendar_WeekData getWeekData() const;
		jint hashCode() const;
		jboolean isEquivalentTo(android::icu::util::Calendar arg0) const;
		jboolean isLenient() const;
		jboolean isSet(jint arg0) const;
		jboolean isWeekend() const;
		jboolean isWeekend(java::util::Date arg0) const;
		void roll(jint arg0, jboolean arg1) const;
		void roll(jint arg0, jint arg1) const;
		void set(jint arg0, jint arg1) const;
		void set(jint arg0, jint arg1, jint arg2) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void setFirstDayOfWeek(jint arg0) const;
		void setLenient(jboolean arg0) const;
		void setMinimalDaysInFirstWeek(jint arg0) const;
		void setRepeatedWallTimeOption(jint arg0) const;
		void setSkippedWallTimeOption(jint arg0) const;
		void setTime(java::util::Date arg0) const;
		void setTimeInMillis(jlong arg0) const;
		void setTimeZone(android::icu::util::TimeZone arg0) const;
		android::icu::util::Calendar setWeekData(android::icu::util::Calendar_WeekData arg0) const;
		JString toString() const;
	};
} // namespace android::icu::util

