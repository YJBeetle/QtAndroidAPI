#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"
#include "./DateFormat.hpp"

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
		
		SimpleDateFormat(QAndroidJniObject obj);
		// Constructors
		SimpleDateFormat();
		SimpleDateFormat(jstring arg0);
		SimpleDateFormat(jstring arg0, android::icu::text::DateFormatSymbols arg1);
		SimpleDateFormat(jstring arg0, android::icu::util::ULocale arg1);
		SimpleDateFormat(jstring arg0, java::util::Locale arg1);
		SimpleDateFormat(jstring arg0, jstring arg1, android::icu::util::ULocale arg2);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyPattern(jstring arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject get2DigitYearStart();
		QAndroidJniObject getDateFormatSymbols();
		QAndroidJniObject getNumberFormat(jchar arg0);
		QAndroidJniObject getTimeZoneFormat();
		jint hashCode();
		void parse(jstring arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2);
		void set2DigitYearStart(java::util::Date arg0);
		void setContext(android::icu::text::DisplayContext arg0);
		void setDateFormatSymbols(android::icu::text::DateFormatSymbols arg0);
		void setNumberFormat(android::icu::text::NumberFormat arg0);
		void setNumberFormat(jstring arg0, android::icu::text::NumberFormat arg1);
		void setTimeZoneFormat(android::icu::text::TimeZoneFormat arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
	};
} // namespace android::icu::text

