#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Boolean;
}
namespace java::lang
{
	class RuntimeException;
}
namespace java::text
{
	class Format;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::format
{
	class DateTimeParseException;
}
namespace java::time::format
{
	class DecimalStyle;
}
namespace java::time::format
{
	class FormatStyle;
}
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::util
{
	class Locale;
}

namespace java::time::format
{
	class DateTimeFormatter : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::format::DateTimeFormatter BASIC_ISO_DATE();
		static java::time::format::DateTimeFormatter ISO_DATE();
		static java::time::format::DateTimeFormatter ISO_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_INSTANT();
		static java::time::format::DateTimeFormatter ISO_LOCAL_DATE();
		static java::time::format::DateTimeFormatter ISO_LOCAL_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_LOCAL_TIME();
		static java::time::format::DateTimeFormatter ISO_OFFSET_DATE();
		static java::time::format::DateTimeFormatter ISO_OFFSET_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_OFFSET_TIME();
		static java::time::format::DateTimeFormatter ISO_ORDINAL_DATE();
		static java::time::format::DateTimeFormatter ISO_TIME();
		static java::time::format::DateTimeFormatter ISO_WEEK_DATE();
		static java::time::format::DateTimeFormatter ISO_ZONED_DATE_TIME();
		static java::time::format::DateTimeFormatter RFC_1123_DATE_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::DateTimeFormatter ofLocalizedDate(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofLocalizedDateTime(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1);
		static java::time::format::DateTimeFormatter ofLocalizedTime(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofPattern(jstring arg0);
		static java::time::format::DateTimeFormatter ofPattern(jstring arg0, java::util::Locale arg1);
		static __JniBaseClass parsedExcessDays();
		static __JniBaseClass parsedLeapSecond();
		jstring format(__JniBaseClass arg0);
		void formatTo(__JniBaseClass arg0, __JniBaseClass arg1);
		__JniBaseClass getChronology();
		java::time::format::DecimalStyle getDecimalStyle();
		java::util::Locale getLocale();
		__JniBaseClass getResolverFields();
		java::time::format::ResolverStyle getResolverStyle();
		java::time::ZoneId getZone();
		java::time::format::DateTimeFormatter localizedBy(java::util::Locale arg0);
		jobject parse(jstring arg0, __JniBaseClass arg1);
		__JniBaseClass parse(jstring arg0);
		__JniBaseClass parse(jstring arg0, java::text::ParsePosition arg1);
		__JniBaseClass parseBest(jstring arg0, jarray arg1);
		__JniBaseClass parseUnresolved(jstring arg0, java::text::ParsePosition arg1);
		java::text::Format toFormat();
		java::text::Format toFormat(__JniBaseClass arg0);
		jstring toString();
		java::time::format::DateTimeFormatter withChronology(__JniBaseClass arg0);
		java::time::format::DateTimeFormatter withDecimalStyle(java::time::format::DecimalStyle arg0);
		java::time::format::DateTimeFormatter withLocale(java::util::Locale arg0);
		java::time::format::DateTimeFormatter withResolverFields(jarray arg0);
		java::time::format::DateTimeFormatter withResolverFields(__JniBaseClass arg0);
		java::time::format::DateTimeFormatter withResolverStyle(java::time::format::ResolverStyle arg0);
		java::time::format::DateTimeFormatter withZone(java::time::ZoneId arg0);
	};
} // namespace java::time::format

