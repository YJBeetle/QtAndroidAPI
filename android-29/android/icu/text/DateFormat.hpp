#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class DateFormat_BooleanAttribute;
}
namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class DisplayContext_Type;
}
namespace android::icu::text
{
	class NumberFormat;
}
namespace android::icu::util
{
	class Calendar;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
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
	class ParsePosition;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		static jstring ABBR_GENERIC_TZ();
		static jstring ABBR_MONTH();
		static jstring ABBR_MONTH_DAY();
		static jstring ABBR_MONTH_WEEKDAY_DAY();
		static jstring ABBR_QUARTER();
		static jstring ABBR_SPECIFIC_TZ();
		static jstring ABBR_UTC_TZ();
		static jstring ABBR_WEEKDAY();
		static jint AM_PM_FIELD();
		static jint AM_PM_MIDNIGHT_NOON_FIELD();
		static jint DATE_FIELD();
		static jstring DAY();
		static jint DAY_OF_WEEK_FIELD();
		static jint DAY_OF_WEEK_IN_MONTH_FIELD();
		static jint DAY_OF_YEAR_FIELD();
		static jint DEFAULT();
		static jint DOW_LOCAL_FIELD();
		static jint ERA_FIELD();
		static jint EXTENDED_YEAR_FIELD();
		static jint FLEXIBLE_DAY_PERIOD_FIELD();
		static jint FRACTIONAL_SECOND_FIELD();
		static jint FULL();
		static jstring GENERIC_TZ();
		static jstring HOUR();
		static jint HOUR0_FIELD();
		static jint HOUR1_FIELD();
		static jstring HOUR24();
		static jstring HOUR24_MINUTE();
		static jstring HOUR24_MINUTE_SECOND();
		static jstring HOUR_MINUTE();
		static jstring HOUR_MINUTE_SECOND();
		static jint HOUR_OF_DAY0_FIELD();
		static jint HOUR_OF_DAY1_FIELD();
		static jint JULIAN_DAY_FIELD();
		static jstring LOCATION_TZ();
		static jint LONG();
		static jint MEDIUM();
		static jint MILLISECONDS_IN_DAY_FIELD();
		static jint MILLISECOND_FIELD();
		static jstring MINUTE();
		static jint MINUTE_FIELD();
		static jstring MINUTE_SECOND();
		static jstring MONTH();
		static jstring MONTH_DAY();
		static jint MONTH_FIELD();
		static jstring MONTH_WEEKDAY_DAY();
		static jint NONE();
		static jstring NUM_MONTH();
		static jstring NUM_MONTH_DAY();
		static jstring NUM_MONTH_WEEKDAY_DAY();
		static jstring QUARTER();
		static jint QUARTER_FIELD();
		static jint RELATIVE();
		static jint RELATIVE_DEFAULT();
		static jint RELATIVE_FULL();
		static jint RELATIVE_LONG();
		static jint RELATIVE_MEDIUM();
		static jint RELATIVE_SHORT();
		static jstring SECOND();
		static jint SECOND_FIELD();
		static jint SHORT();
		static jstring SPECIFIC_TZ();
		static jint STANDALONE_DAY_FIELD();
		static jint STANDALONE_MONTH_FIELD();
		static jint STANDALONE_QUARTER_FIELD();
		static jint TIMEZONE_FIELD();
		static jint TIMEZONE_GENERIC_FIELD();
		static jint TIMEZONE_ISO_FIELD();
		static jint TIMEZONE_ISO_LOCAL_FIELD();
		static jint TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD();
		static jint TIMEZONE_RFC_FIELD();
		static jint TIMEZONE_SPECIAL_FIELD();
		static jstring WEEKDAY();
		static jint WEEK_OF_MONTH_FIELD();
		static jint WEEK_OF_YEAR_FIELD();
		static jstring YEAR();
		static jstring YEAR_ABBR_MONTH();
		static jstring YEAR_ABBR_MONTH_DAY();
		static jstring YEAR_ABBR_MONTH_WEEKDAY_DAY();
		static jstring YEAR_ABBR_QUARTER();
		static jint YEAR_FIELD();
		static jstring YEAR_MONTH();
		static jstring YEAR_MONTH_DAY();
		static jstring YEAR_MONTH_WEEKDAY_DAY();
		static jint YEAR_NAME_FIELD();
		static jstring YEAR_NUM_MONTH();
		static jstring YEAR_NUM_MONTH_DAY();
		static jstring YEAR_NUM_MONTH_WEEKDAY_DAY();
		static jstring YEAR_QUARTER();
		static jint YEAR_WOY_FIELD();
		
		DateFormat(QAndroidJniObject obj);
		// Constructors
		DateFormat() = default;
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getDateInstance();
		static QAndroidJniObject getDateInstance(jint arg0);
		static QAndroidJniObject getDateInstance(android::icu::util::Calendar arg0, jint arg1);
		static QAndroidJniObject getDateInstance(jint arg0, android::icu::util::ULocale arg1);
		static QAndroidJniObject getDateInstance(jint arg0, java::util::Locale arg1);
		static QAndroidJniObject getDateInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2);
		static QAndroidJniObject getDateInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2);
		static QAndroidJniObject getDateTimeInstance();
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1);
		static QAndroidJniObject getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, android::icu::util::ULocale arg2);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2);
		static QAndroidJniObject getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, android::icu::util::ULocale arg3);
		static QAndroidJniObject getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, java::util::Locale arg3);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::Calendar arg0);
		static QAndroidJniObject getInstance(android::icu::util::Calendar arg0, java::util::Locale arg1);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0, android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0, java::util::Locale arg1);
		static QAndroidJniObject getInstanceForSkeleton(android::icu::util::Calendar arg0, jstring arg1, android::icu::util::ULocale arg2);
		static QAndroidJniObject getInstanceForSkeleton(android::icu::util::Calendar arg0, jstring arg1, java::util::Locale arg2);
		static QAndroidJniObject getPatternInstance(jstring arg0);
		static QAndroidJniObject getPatternInstance(jstring arg0, android::icu::util::ULocale arg1);
		static QAndroidJniObject getPatternInstance(jstring arg0, java::util::Locale arg1);
		static QAndroidJniObject getPatternInstance(android::icu::util::Calendar arg0, jstring arg1, android::icu::util::ULocale arg2);
		static QAndroidJniObject getPatternInstance(android::icu::util::Calendar arg0, jstring arg1, java::util::Locale arg2);
		static QAndroidJniObject getTimeInstance();
		static QAndroidJniObject getTimeInstance(jint arg0);
		static QAndroidJniObject getTimeInstance(android::icu::util::Calendar arg0, jint arg1);
		static QAndroidJniObject getTimeInstance(jint arg0, android::icu::util::ULocale arg1);
		static QAndroidJniObject getTimeInstance(jint arg0, java::util::Locale arg1);
		static QAndroidJniObject getTimeInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2);
		static QAndroidJniObject getTimeInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(java::util::Date arg0);
		QAndroidJniObject format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jboolean getBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0);
		QAndroidJniObject getCalendar();
		QAndroidJniObject getContext(android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getNumberFormat();
		QAndroidJniObject getTimeZone();
		jint hashCode();
		jboolean isCalendarLenient();
		jboolean isLenient();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		void parse(jstring arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject setBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1);
		void setCalendar(android::icu::util::Calendar arg0);
		void setCalendarLenient(jboolean arg0);
		void setContext(android::icu::text::DisplayContext arg0);
		void setLenient(jboolean arg0);
		void setNumberFormat(android::icu::text::NumberFormat arg0);
		void setTimeZone(android::icu::util::TimeZone arg0);
	};
} // namespace android::icu::text

