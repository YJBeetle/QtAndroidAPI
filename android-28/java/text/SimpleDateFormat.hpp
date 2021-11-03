#pragma once

#include "./DateFormat.hpp"

class JCharArray;
class JIntArray;
class JArray;
class JArray;
class JBooleanArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleDateFormat(const char *className, const char *sig, Ts...agv) : java::text::DateFormat(className, sig, std::forward<Ts>(agv)...) {}
		SimpleDateFormat(QJniObject obj);
		
		// Constructors
		SimpleDateFormat();
		SimpleDateFormat(JString arg0);
		SimpleDateFormat(JString arg0, java::text::DateFormatSymbols arg1);
		SimpleDateFormat(JString arg0, java::util::Locale arg1);
		
		// Methods
		void applyLocalizedPattern(JString arg0);
		void applyPattern(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		java::util::Date get2DigitYearStart();
		java::text::DateFormatSymbols getDateFormatSymbols();
		jint hashCode();
		java::util::Date parse(JString arg0, java::text::ParsePosition arg1);
		void set2DigitYearStart(java::util::Date arg0);
		void setDateFormatSymbols(java::text::DateFormatSymbols arg0);
		JString toLocalizedPattern();
		JString toPattern();
	};
} // namespace java::text

