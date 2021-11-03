#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::text
{
	class DateFormatSymbols;
}
namespace java::time
{
	class Instant;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class TimeZone;
}

namespace java::util
{
	class Calendar : public JObject
	{
	public:
		// Fields
		static jint ALL_STYLES();
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
		static jint DST_OFFSET();
		static jint ERA();
		static jint FEBRUARY();
		static jint FIELD_COUNT();
		static jint FRIDAY();
		static jint HOUR();
		static jint HOUR_OF_DAY();
		static jint JANUARY();
		static jint JULY();
		static jint JUNE();
		static jint LONG();
		static jint LONG_FORMAT();
		static jint LONG_STANDALONE();
		static jint MARCH();
		static jint MAY();
		static jint MILLISECOND();
		static jint MINUTE();
		static jint MONDAY();
		static jint MONTH();
		static jint NARROW_FORMAT();
		static jint NARROW_STANDALONE();
		static jint NOVEMBER();
		static jint OCTOBER();
		static jint PM();
		static jint SATURDAY();
		static jint SECOND();
		static jint SEPTEMBER();
		static jint SHORT();
		static jint SHORT_FORMAT();
		static jint SHORT_STANDALONE();
		static jint SUNDAY();
		static jint THURSDAY();
		static jint TUESDAY();
		static jint UNDECIMBER();
		static jint WEDNESDAY();
		static jint WEEK_OF_MONTH();
		static jint WEEK_OF_YEAR();
		static jint YEAR();
		static jint ZONE_OFFSET();
		
		// QJniObject forward
		template<typename ...Ts> explicit Calendar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Calendar(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableCalendarTypes();
		static jarray getAvailableLocales();
		static java::util::Calendar getInstance();
		static java::util::Calendar getInstance(java::util::Locale arg0);
		static java::util::Calendar getInstance(java::util::TimeZone arg0);
		static java::util::Calendar getInstance(java::util::TimeZone arg0, java::util::Locale arg1);
		void add(jint arg0, jint arg1);
		jboolean after(jobject arg0);
		jboolean before(jobject arg0);
		void clear();
		void clear(jint arg0);
		jobject clone();
		jint compareTo(jobject arg0);
		jint compareTo(java::util::Calendar arg0);
		jboolean equals(jobject arg0);
		jint get(jint arg0);
		jint getActualMaximum(jint arg0);
		jint getActualMinimum(jint arg0);
		jstring getCalendarType();
		jstring getDisplayName(jint arg0, jint arg1, java::util::Locale arg2);
		JObject getDisplayNames(jint arg0, jint arg1, java::util::Locale arg2);
		jint getFirstDayOfWeek();
		jint getGreatestMinimum(jint arg0);
		jint getLeastMaximum(jint arg0);
		jint getMaximum(jint arg0);
		jint getMinimalDaysInFirstWeek();
		jint getMinimum(jint arg0);
		java::util::Date getTime();
		jlong getTimeInMillis();
		java::util::TimeZone getTimeZone();
		jint getWeekYear();
		jint getWeeksInWeekYear();
		jint hashCode();
		jboolean isLenient();
		jboolean isSet(jint arg0);
		jboolean isWeekDateSupported();
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		void set(jint arg0, jint arg1);
		void set(jint arg0, jint arg1, jint arg2);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setFirstDayOfWeek(jint arg0);
		void setLenient(jboolean arg0);
		void setMinimalDaysInFirstWeek(jint arg0);
		void setTime(java::util::Date arg0);
		void setTimeInMillis(jlong arg0);
		void setTimeZone(java::util::TimeZone arg0);
		void setWeekDate(jint arg0, jint arg1, jint arg2);
		java::time::Instant toInstant();
		jstring toString();
	};
} // namespace java::util

