#pragma once

#include "./DateFormat.hpp"

class JArray;
class JBooleanArray;
namespace android::icu::text
{
	class DateFormat_Field;
}
namespace android::icu::text
{
	class DateFormatSymbols;
}
namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class NumberFormat;
}
namespace android::icu::text
{
	class TimeZoneFormat;
}
namespace android::icu::util
{
	class Calendar;
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
	class SimpleDateFormat : public android::icu::text::DateFormat
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleDateFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::DateFormat(className, sig, std::forward<Ts>(agv)...) {}
		SimpleDateFormat(QAndroidJniObject obj);
		
		// Constructors
		SimpleDateFormat();
		SimpleDateFormat(JString arg0);
		SimpleDateFormat(JString arg0, android::icu::text::DateFormatSymbols arg1);
		SimpleDateFormat(JString arg0, android::icu::util::ULocale arg1);
		SimpleDateFormat(JString arg0, java::util::Locale arg1);
		SimpleDateFormat(JString arg0, JString arg1, android::icu::util::ULocale arg2);
		
		// Methods
		void applyLocalizedPattern(JString arg0);
		void applyPattern(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		java::util::Date get2DigitYearStart();
		android::icu::text::DateFormatSymbols getDateFormatSymbols();
		android::icu::text::NumberFormat getNumberFormat(jchar arg0);
		android::icu::text::TimeZoneFormat getTimeZoneFormat();
		jint hashCode();
		void parse(JString arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2);
		void set2DigitYearStart(java::util::Date arg0);
		void setContext(android::icu::text::DisplayContext arg0);
		void setDateFormatSymbols(android::icu::text::DateFormatSymbols arg0);
		void setNumberFormat(android::icu::text::NumberFormat arg0);
		void setNumberFormat(JString arg0, android::icu::text::NumberFormat arg1);
		void setTimeZoneFormat(android::icu::text::TimeZoneFormat arg0);
		JString toLocalizedPattern();
		JString toPattern();
	};
} // namespace android::icu::text

