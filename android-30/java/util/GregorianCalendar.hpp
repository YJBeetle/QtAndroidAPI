#pragma once

#include "./Calendar.hpp"

class JIntArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::time
{
	class ZonedDateTime;
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
	class GregorianCalendar : public java::util::Calendar
	{
	public:
		// Fields
		static jint AD();
		static jint BC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GregorianCalendar(const char *className, const char *sig, Ts...agv) : java::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		GregorianCalendar(QAndroidJniObject obj);
		
		// Constructors
		GregorianCalendar();
		GregorianCalendar(java::util::Locale arg0);
		GregorianCalendar(java::util::TimeZone arg0);
		GregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1);
		GregorianCalendar(jint arg0, jint arg1, jint arg2);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static java::util::GregorianCalendar from(java::time::ZonedDateTime arg0);
		void add(jint arg0, jint arg1) const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		jint getActualMaximum(jint arg0) const;
		jint getActualMinimum(jint arg0) const;
		JString getCalendarType() const;
		jint getGreatestMinimum(jint arg0) const;
		java::util::Date getGregorianChange() const;
		jint getLeastMaximum(jint arg0) const;
		jint getMaximum(jint arg0) const;
		jint getMinimum(jint arg0) const;
		java::util::TimeZone getTimeZone() const;
		jint getWeekYear() const;
		jint getWeeksInWeekYear() const;
		jint hashCode() const;
		jboolean isLeapYear(jint arg0) const;
		jboolean isWeekDateSupported() const;
		void roll(jint arg0, jboolean arg1) const;
		void roll(jint arg0, jint arg1) const;
		void setGregorianChange(java::util::Date arg0) const;
		void setTimeZone(java::util::TimeZone arg0) const;
		void setWeekDate(jint arg0, jint arg1, jint arg2) const;
		java::time::ZonedDateTime toZonedDateTime() const;
	};
} // namespace java::util

