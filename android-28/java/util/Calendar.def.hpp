#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JBooleanArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Calendar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Calendar(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getAvailableCalendarTypes();
		static JArray getAvailableLocales();
		static java::util::Calendar getInstance();
		static java::util::Calendar getInstance(java::util::Locale arg0);
		static java::util::Calendar getInstance(java::util::TimeZone arg0);
		static java::util::Calendar getInstance(java::util::TimeZone arg0, java::util::Locale arg1);
		void add(jint arg0, jint arg1) const;
		jboolean after(JObject arg0) const;
		jboolean before(JObject arg0) const;
		void clear() const;
		void clear(jint arg0) const;
		JObject clone() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::util::Calendar arg0) const;
		jboolean equals(JObject arg0) const;
		jint get(jint arg0) const;
		jint getActualMaximum(jint arg0) const;
		jint getActualMinimum(jint arg0) const;
		JString getCalendarType() const;
		JString getDisplayName(jint arg0, jint arg1, java::util::Locale arg2) const;
		JObject getDisplayNames(jint arg0, jint arg1, java::util::Locale arg2) const;
		jint getFirstDayOfWeek() const;
		jint getGreatestMinimum(jint arg0) const;
		jint getLeastMaximum(jint arg0) const;
		jint getMaximum(jint arg0) const;
		jint getMinimalDaysInFirstWeek() const;
		jint getMinimum(jint arg0) const;
		java::util::Date getTime() const;
		jlong getTimeInMillis() const;
		java::util::TimeZone getTimeZone() const;
		jint getWeekYear() const;
		jint getWeeksInWeekYear() const;
		jint hashCode() const;
		jboolean isLenient() const;
		jboolean isSet(jint arg0) const;
		jboolean isWeekDateSupported() const;
		void roll(jint arg0, jboolean arg1) const;
		void roll(jint arg0, jint arg1) const;
		void set(jint arg0, jint arg1) const;
		void set(jint arg0, jint arg1, jint arg2) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void setFirstDayOfWeek(jint arg0) const;
		void setLenient(jboolean arg0) const;
		void setMinimalDaysInFirstWeek(jint arg0) const;
		void setTime(java::util::Date arg0) const;
		void setTimeInMillis(jlong arg0) const;
		void setTimeZone(java::util::TimeZone arg0) const;
		void setWeekDate(jint arg0, jint arg1, jint arg2) const;
		java::time::Instant toInstant() const;
		JString toString() const;
	};
} // namespace java::util

