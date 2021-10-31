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
		static QAndroidJniObject BASIC_ISO_DATE();
		static QAndroidJniObject ISO_DATE();
		static QAndroidJniObject ISO_DATE_TIME();
		static QAndroidJniObject ISO_INSTANT();
		static QAndroidJniObject ISO_LOCAL_DATE();
		static QAndroidJniObject ISO_LOCAL_DATE_TIME();
		static QAndroidJniObject ISO_LOCAL_TIME();
		static QAndroidJniObject ISO_OFFSET_DATE();
		static QAndroidJniObject ISO_OFFSET_DATE_TIME();
		static QAndroidJniObject ISO_OFFSET_TIME();
		static QAndroidJniObject ISO_ORDINAL_DATE();
		static QAndroidJniObject ISO_TIME();
		static QAndroidJniObject ISO_WEEK_DATE();
		static QAndroidJniObject ISO_ZONED_DATE_TIME();
		static QAndroidJniObject RFC_1123_DATE_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject ofLocalizedDate(java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofLocalizedDateTime(java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1);
		static QAndroidJniObject ofLocalizedTime(java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofPattern(jstring arg0);
		static QAndroidJniObject ofPattern(jstring arg0, java::util::Locale arg1);
		static QAndroidJniObject parsedExcessDays();
		static QAndroidJniObject parsedLeapSecond();
		jstring format(__JniBaseClass arg0);
		void formatTo(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject getChronology();
		QAndroidJniObject getDecimalStyle();
		QAndroidJniObject getLocale();
		QAndroidJniObject getResolverFields();
		QAndroidJniObject getResolverStyle();
		QAndroidJniObject getZone();
		QAndroidJniObject localizedBy(java::util::Locale arg0);
		jobject parse(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseBest(jstring arg0, jarray arg1);
		QAndroidJniObject parseUnresolved(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject toFormat();
		QAndroidJniObject toFormat(__JniBaseClass arg0);
		jstring toString();
		QAndroidJniObject withChronology(__JniBaseClass arg0);
		QAndroidJniObject withDecimalStyle(java::time::format::DecimalStyle arg0);
		QAndroidJniObject withLocale(java::util::Locale arg0);
		QAndroidJniObject withResolverFields(jarray arg0);
		QAndroidJniObject withResolverFields(__JniBaseClass arg0);
		QAndroidJniObject withResolverStyle(java::time::format::ResolverStyle arg0);
		QAndroidJniObject withZone(java::time::ZoneId arg0);
	};
} // namespace java::time::format

