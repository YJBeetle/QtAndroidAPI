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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleDateFormat(const char *className, const char *sig, Ts...agv) : java::text::DateFormat(className, sig, std::forward<Ts>(agv)...) {}
		SimpleDateFormat(QAndroidJniObject obj);
		
		// Constructors
		SimpleDateFormat();
		SimpleDateFormat(JString arg0);
		SimpleDateFormat(JString arg0, java::text::DateFormatSymbols arg1);
		SimpleDateFormat(JString arg0, java::util::Locale arg1);
		
		// Methods
		void applyLocalizedPattern(JString arg0) const;
		void applyPattern(JString arg0) const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::lang::StringBuffer format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		JObject formatToCharacterIterator(JObject arg0) const;
		java::util::Date get2DigitYearStart() const;
		java::text::DateFormatSymbols getDateFormatSymbols() const;
		jint hashCode() const;
		java::util::Date parse(JString arg0, java::text::ParsePosition arg1) const;
		void set2DigitYearStart(java::util::Date arg0) const;
		void setDateFormatSymbols(java::text::DateFormatSymbols arg0) const;
		JString toLocalizedPattern() const;
		JString toPattern() const;
	};
} // namespace java::text

