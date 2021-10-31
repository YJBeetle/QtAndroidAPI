#include "../../lang/Boolean.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../text/Format.hpp"
#include "../../text/ParsePosition.hpp"
#include "../Period.hpp"
#include "../ZoneId.hpp"
#include "./DateTimeParseException.hpp"
#include "./DecimalStyle.hpp"
#include "./FormatStyle.hpp"
#include "./ResolverStyle.hpp"
#include "../../util/Locale.hpp"
#include "./DateTimeFormatter.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::DateTimeFormatter DateTimeFormatter::BASIC_ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"BASIC_ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_INSTANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_INSTANT",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_ORDINAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ORDINAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_WEEK_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_WEEK_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ISO_ZONED_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ZONED_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::RFC_1123_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"RFC_1123_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	
	// QAndroidJniObject forward
	DateTimeFormatter::DateTimeFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDate(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDate",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedTime(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ofPattern(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::ofPattern(jstring arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass DateTimeFormatter::parsedExcessDays()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedExcessDays",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass DateTimeFormatter::parsedLeapSecond()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedLeapSecond",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	jstring DateTimeFormatter::format(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	void DateTimeFormatter::formatTo(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"formatTo",
			"(Ljava/time/temporal/TemporalAccessor;Ljava/lang/Appendable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass DateTimeFormatter::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/Chronology;"
		);
	}
	java::time::format::DecimalStyle DateTimeFormatter::getDecimalStyle()
	{
		return callObjectMethod(
			"getDecimalStyle",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	java::util::Locale DateTimeFormatter::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	__JniBaseClass DateTimeFormatter::getResolverFields()
	{
		return callObjectMethod(
			"getResolverFields",
			"()Ljava/util/Set;"
		);
	}
	java::time::format::ResolverStyle DateTimeFormatter::getResolverStyle()
	{
		return callObjectMethod(
			"getResolverStyle",
			"()Ljava/time/format/ResolverStyle;"
		);
	}
	java::time::ZoneId DateTimeFormatter::getZone()
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::localizedBy(java::util::Locale arg0)
	{
		return callObjectMethod(
			"localizedBy",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	jobject DateTimeFormatter::parse(jstring arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	__JniBaseClass DateTimeFormatter::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;",
			arg0
		);
	}
	__JniBaseClass DateTimeFormatter::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass DateTimeFormatter::parseBest(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"parseBest",
			"(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1
		);
	}
	__JniBaseClass DateTimeFormatter::parseUnresolved(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseUnresolved",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.object()
		);
	}
	java::text::Format DateTimeFormatter::toFormat()
	{
		return callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
	java::text::Format DateTimeFormatter::toFormat(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"toFormat",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/text/Format;",
			arg0.object()
		);
	}
	jstring DateTimeFormatter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withChronology(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withChronology",
			"(Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withDecimalStyle(java::time::format::DecimalStyle arg0)
	{
		return callObjectMethod(
			"withDecimalStyle",
			"(Ljava/time/format/DecimalStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"withLocale",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withResolverFields(jarray arg0)
	{
		return callObjectMethod(
			"withResolverFields",
			"([Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withResolverFields(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withResolverFields",
			"(Ljava/util/Set;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withResolverStyle(java::time::format::ResolverStyle arg0)
	{
		return callObjectMethod(
			"withResolverStyle",
			"(Ljava/time/format/ResolverStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatter::withZone(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
} // namespace java::time::format

