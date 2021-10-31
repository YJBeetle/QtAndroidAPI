#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"
#include "./DateFormat.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::text
{
	class DateFormatSymbols;
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
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class SimpleDateFormat : public java::text::DateFormat
	{
	public:
		// Fields
		
		SimpleDateFormat(QAndroidJniObject obj);
		// Constructors
		SimpleDateFormat();
		SimpleDateFormat(jstring arg0);
		SimpleDateFormat(jstring arg0, java::text::DateFormatSymbols arg1);
		SimpleDateFormat(jstring arg0, java::util::Locale arg1);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyPattern(jstring arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject get2DigitYearStart();
		QAndroidJniObject getDateFormatSymbols();
		jint hashCode();
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		void set2DigitYearStart(java::util::Date arg0);
		void setDateFormatSymbols(java::text::DateFormatSymbols arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
	};
} // namespace java::text

