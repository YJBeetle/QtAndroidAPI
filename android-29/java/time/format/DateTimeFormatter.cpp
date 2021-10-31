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
	QAndroidJniObject DateTimeFormatter::BASIC_ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"BASIC_ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_INSTANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_INSTANT",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_ORDINAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ORDINAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_WEEK_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_WEEK_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_ZONED_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ZONED_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::RFC_1123_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"RFC_1123_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	
	DateTimeFormatter::DateTimeFormatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DateTimeFormatter::ofLocalizedDate(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDate",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedTime(java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(jstring arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parsedExcessDays()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedExcessDays",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject DateTimeFormatter::parsedLeapSecond()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedLeapSecond",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	jstring DateTimeFormatter::format(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void DateTimeFormatter::formatTo(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"formatTo",
			"(Ljava/time/temporal/TemporalAccessor;Ljava/lang/Appendable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/Chronology;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getDecimalStyle()
	{
		return __thiz.callObjectMethod(
			"getDecimalStyle",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getResolverFields()
	{
		return __thiz.callObjectMethod(
			"getResolverFields",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getResolverStyle()
	{
		return __thiz.callObjectMethod(
			"getResolverStyle",
			"()Ljava/time/format/ResolverStyle;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getZone()
	{
		return __thiz.callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	QAndroidJniObject DateTimeFormatter::localizedBy(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"localizedBy",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	jobject DateTimeFormatter::parse(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject DateTimeFormatter::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parseBest(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"parseBest",
			"(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatter::parseUnresolved(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseUnresolved",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::toFormat()
	{
		return __thiz.callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
	QAndroidJniObject DateTimeFormatter::toFormat(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"toFormat",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/text/Format;",
			arg0.__jniObject().object()
		);
	}
	jstring DateTimeFormatter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DateTimeFormatter::withChronology(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withChronology",
			"(Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withDecimalStyle(java::time::format::DecimalStyle arg0)
	{
		return __thiz.callObjectMethod(
			"withDecimalStyle",
			"(Ljava/time/format/DecimalStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withLocale(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"withLocale",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverFields(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverFields",
			"([Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverFields(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverFields",
			"(Ljava/util/Set;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverStyle(java::time::format::ResolverStyle arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverStyle",
			"(Ljava/time/format/ResolverStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withZone(java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::time::format

