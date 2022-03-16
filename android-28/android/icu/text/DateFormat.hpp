#pragma once

#include "./UFormat.hpp"

class JArray;
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
class JObject;
class JString;
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
		static JString ABBR_GENERIC_TZ();
		static JString ABBR_MONTH();
		static JString ABBR_MONTH_DAY();
		static JString ABBR_MONTH_WEEKDAY_DAY();
		static JString ABBR_QUARTER();
		static JString ABBR_SPECIFIC_TZ();
		static JString ABBR_UTC_TZ();
		static JString ABBR_WEEKDAY();
		static jint AM_PM_FIELD();
		static jint AM_PM_MIDNIGHT_NOON_FIELD();
		static jint DATE_FIELD();
		static JString DAY();
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
		static JString GENERIC_TZ();
		static JString HOUR();
		static jint HOUR0_FIELD();
		static jint HOUR1_FIELD();
		static JString HOUR24();
		static JString HOUR24_MINUTE();
		static JString HOUR24_MINUTE_SECOND();
		static JString HOUR_MINUTE();
		static JString HOUR_MINUTE_SECOND();
		static jint HOUR_OF_DAY0_FIELD();
		static jint HOUR_OF_DAY1_FIELD();
		static jint JULIAN_DAY_FIELD();
		static JString LOCATION_TZ();
		static jint LONG();
		static jint MEDIUM();
		static jint MILLISECONDS_IN_DAY_FIELD();
		static jint MILLISECOND_FIELD();
		static JString MINUTE();
		static jint MINUTE_FIELD();
		static JString MINUTE_SECOND();
		static JString MONTH();
		static JString MONTH_DAY();
		static jint MONTH_FIELD();
		static JString MONTH_WEEKDAY_DAY();
		static jint NONE();
		static JString NUM_MONTH();
		static JString NUM_MONTH_DAY();
		static JString NUM_MONTH_WEEKDAY_DAY();
		static JString QUARTER();
		static jint QUARTER_FIELD();
		static jint RELATIVE();
		static jint RELATIVE_DEFAULT();
		static jint RELATIVE_FULL();
		static jint RELATIVE_LONG();
		static jint RELATIVE_MEDIUM();
		static jint RELATIVE_SHORT();
		static JString SECOND();
		static jint SECOND_FIELD();
		static jint SHORT();
		static JString SPECIFIC_TZ();
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
		static JString WEEKDAY();
		static jint WEEK_OF_MONTH_FIELD();
		static jint WEEK_OF_YEAR_FIELD();
		static JString YEAR();
		static JString YEAR_ABBR_MONTH();
		static JString YEAR_ABBR_MONTH_DAY();
		static JString YEAR_ABBR_MONTH_WEEKDAY_DAY();
		static JString YEAR_ABBR_QUARTER();
		static jint YEAR_FIELD();
		static JString YEAR_MONTH();
		static JString YEAR_MONTH_DAY();
		static JString YEAR_MONTH_WEEKDAY_DAY();
		static jint YEAR_NAME_FIELD();
		static JString YEAR_NUM_MONTH();
		static JString YEAR_NUM_MONTH_DAY();
		static JString YEAR_NUM_MONTH_WEEKDAY_DAY();
		static JString YEAR_QUARTER();
		static jint YEAR_WOY_FIELD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static android::icu::text::DateFormat getDateInstance();
		static android::icu::text::DateFormat getDateInstance(jint arg0);
		static android::icu::text::DateFormat getDateInstance(android::icu::util::Calendar arg0, jint arg1);
		static android::icu::text::DateFormat getDateInstance(jint arg0, android::icu::util::ULocale arg1);
		static android::icu::text::DateFormat getDateInstance(jint arg0, java::util::Locale arg1);
		static android::icu::text::DateFormat getDateInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2);
		static android::icu::text::DateFormat getDateInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2);
		static android::icu::text::DateFormat getDateTimeInstance();
		static android::icu::text::DateFormat getDateTimeInstance(jint arg0, jint arg1);
		static android::icu::text::DateFormat getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2);
		static android::icu::text::DateFormat getDateTimeInstance(jint arg0, jint arg1, android::icu::util::ULocale arg2);
		static android::icu::text::DateFormat getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2);
		static android::icu::text::DateFormat getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, android::icu::util::ULocale arg3);
		static android::icu::text::DateFormat getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, java::util::Locale arg3);
		static android::icu::text::DateFormat getInstance();
		static android::icu::text::DateFormat getInstance(android::icu::util::Calendar arg0);
		static android::icu::text::DateFormat getInstance(android::icu::util::Calendar arg0, java::util::Locale arg1);
		static android::icu::text::DateFormat getInstanceForSkeleton(JString arg0);
		static android::icu::text::DateFormat getInstanceForSkeleton(JString arg0, android::icu::util::ULocale arg1);
		static android::icu::text::DateFormat getInstanceForSkeleton(JString arg0, java::util::Locale arg1);
		static android::icu::text::DateFormat getInstanceForSkeleton(android::icu::util::Calendar arg0, JString arg1, android::icu::util::ULocale arg2);
		static android::icu::text::DateFormat getInstanceForSkeleton(android::icu::util::Calendar arg0, JString arg1, java::util::Locale arg2);
		static android::icu::text::DateFormat getPatternInstance(JString arg0);
		static android::icu::text::DateFormat getPatternInstance(JString arg0, android::icu::util::ULocale arg1);
		static android::icu::text::DateFormat getPatternInstance(JString arg0, java::util::Locale arg1);
		static android::icu::text::DateFormat getPatternInstance(android::icu::util::Calendar arg0, JString arg1, android::icu::util::ULocale arg2);
		static android::icu::text::DateFormat getPatternInstance(android::icu::util::Calendar arg0, JString arg1, java::util::Locale arg2);
		static android::icu::text::DateFormat getTimeInstance();
		static android::icu::text::DateFormat getTimeInstance(jint arg0);
		static android::icu::text::DateFormat getTimeInstance(android::icu::util::Calendar arg0, jint arg1);
		static android::icu::text::DateFormat getTimeInstance(jint arg0, android::icu::util::ULocale arg1);
		static android::icu::text::DateFormat getTimeInstance(jint arg0, java::util::Locale arg1);
		static android::icu::text::DateFormat getTimeInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2);
		static android::icu::text::DateFormat getTimeInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString format(java::util::Date arg0) const;
		java::lang::StringBuffer format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		jboolean getBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0) const;
		android::icu::util::Calendar getCalendar() const;
		android::icu::text::DisplayContext getContext(android::icu::text::DisplayContext_Type arg0) const;
		android::icu::text::NumberFormat getNumberFormat() const;
		android::icu::util::TimeZone getTimeZone() const;
		jint hashCode() const;
		jboolean isCalendarLenient() const;
		jboolean isLenient() const;
		java::util::Date parse(JString arg0) const;
		java::util::Date parse(JString arg0, java::text::ParsePosition arg1) const;
		void parse(JString arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		android::icu::text::DateFormat setBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1) const;
		void setCalendar(android::icu::util::Calendar arg0) const;
		void setCalendarLenient(jboolean arg0) const;
		void setContext(android::icu::text::DisplayContext arg0) const;
		void setLenient(jboolean arg0) const;
		void setNumberFormat(android::icu::text::NumberFormat arg0) const;
		void setTimeZone(android::icu::util::TimeZone arg0) const;
	};
} // namespace android::icu::text

