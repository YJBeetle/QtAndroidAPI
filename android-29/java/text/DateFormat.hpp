#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"

namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class NumberFormat;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Calendar;
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

namespace java::text
{
	class DateFormat : public java::text::Format
	{
	public:
		// Fields
		static jint AM_PM_FIELD();
		static jint DATE_FIELD();
		static jint DAY_OF_WEEK_FIELD();
		static jint DAY_OF_WEEK_IN_MONTH_FIELD();
		static jint DAY_OF_YEAR_FIELD();
		static jint DEFAULT();
		static jint ERA_FIELD();
		static jint FULL();
		static jint HOUR0_FIELD();
		static jint HOUR1_FIELD();
		static jint HOUR_OF_DAY0_FIELD();
		static jint HOUR_OF_DAY1_FIELD();
		static jint LONG();
		static jint MEDIUM();
		static jint MILLISECOND_FIELD();
		static jint MINUTE_FIELD();
		static jint MONTH_FIELD();
		static jint SECOND_FIELD();
		static jint SHORT();
		static jint TIMEZONE_FIELD();
		static jint WEEK_OF_MONTH_FIELD();
		static jint WEEK_OF_YEAR_FIELD();
		static jint YEAR_FIELD();
		
		DateFormat(QAndroidJniObject obj);
		// Constructors
		DateFormat() = default;
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getDateInstance();
		static QAndroidJniObject getDateInstance(jint arg0);
		static QAndroidJniObject getDateInstance(jint arg0, java::util::Locale arg1);
		static QAndroidJniObject getDateTimeInstance();
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getTimeInstance();
		static QAndroidJniObject getTimeInstance(jint arg0);
		static QAndroidJniObject getTimeInstance(jint arg0, java::util::Locale arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(java::util::Date arg0);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject getCalendar();
		QAndroidJniObject getNumberFormat();
		QAndroidJniObject getTimeZone();
		jint hashCode();
		jboolean isLenient();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, java::text::ParsePosition arg1);
		void setCalendar(java::util::Calendar arg0);
		void setLenient(jboolean arg0);
		void setNumberFormat(java::text::NumberFormat arg0);
		void setTimeZone(java::util::TimeZone arg0);
	};
} // namespace java::text

