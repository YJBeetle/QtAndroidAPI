#pragma once

#include "./Format.hpp"

class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::DateFormat getDateInstance();
		static java::text::DateFormat getDateInstance(jint arg0);
		static java::text::DateFormat getDateInstance(jint arg0, java::util::Locale arg1);
		static java::text::DateFormat getDateTimeInstance();
		static java::text::DateFormat getDateTimeInstance(jint arg0, jint arg1);
		static java::text::DateFormat getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2);
		static java::text::DateFormat getInstance();
		static java::text::DateFormat getTimeInstance();
		static java::text::DateFormat getTimeInstance(jint arg0);
		static java::text::DateFormat getTimeInstance(jint arg0, java::util::Locale arg1);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString format(java::util::Date arg0) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::util::Calendar getCalendar() const;
		java::text::NumberFormat getNumberFormat() const;
		java::util::TimeZone getTimeZone() const;
		jint hashCode() const;
		jboolean isLenient() const;
		java::util::Date parse(JString arg0) const;
		java::util::Date parse(JString arg0, java::text::ParsePosition arg1) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		void setCalendar(java::util::Calendar arg0) const;
		void setLenient(jboolean arg0) const;
		void setNumberFormat(java::text::NumberFormat arg0) const;
		void setTimeZone(java::util::TimeZone arg0) const;
	};
} // namespace java::text

