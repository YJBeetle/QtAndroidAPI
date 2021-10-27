#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Calendar.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		
		GregorianCalendar(QAndroidJniObject obj);
		// Constructors
		GregorianCalendar();
		GregorianCalendar(java::util::Locale &arg0);
		GregorianCalendar(java::util::TimeZone &arg0);
		GregorianCalendar(java::util::TimeZone &arg0, java::util::Locale &arg1);
		GregorianCalendar(jint &arg0, jint &arg1, jint &arg2);
		GregorianCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4);
		GregorianCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5);
		
		// Methods
		static QAndroidJniObject from(java::time::ZonedDateTime arg0);
		void add(jint arg0, jint arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		jint getActualMaximum(jint arg0);
		jint getActualMinimum(jint arg0);
		jstring getCalendarType();
		jint getGreatestMinimum(jint arg0);
		QAndroidJniObject getGregorianChange();
		jint getLeastMaximum(jint arg0);
		jint getMaximum(jint arg0);
		jint getMinimum(jint arg0);
		QAndroidJniObject getTimeZone();
		jint getWeekYear();
		jint getWeeksInWeekYear();
		jint hashCode();
		jboolean isLeapYear(jint arg0);
		jboolean isWeekDateSupported();
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		void setGregorianChange(java::util::Date arg0);
		void setTimeZone(java::util::TimeZone arg0);
		void setWeekDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject toZonedDateTime();
	};
} // namespace java::util

