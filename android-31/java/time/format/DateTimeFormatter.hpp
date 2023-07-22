#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../lang/Boolean.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../lang/RuntimeException.def.hpp"
#include "../../../JString.hpp"
#include "../../text/Format.def.hpp"
#include "../../text/ParsePosition.def.hpp"
#include "../Period.def.hpp"
#include "../ZoneId.def.hpp"
#include "./DateTimeParseException.def.hpp"
#include "./DecimalStyle.def.hpp"
#include "./FormatStyle.def.hpp"
#include "./ResolverStyle.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./DateTimeFormatter.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::DateTimeFormatter DateTimeFormatter::BASIC_ISO_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"BASIC_ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_DATE_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_INSTANT()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_INSTANT",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_DATE_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_LOCAL_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_DATE_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_OFFSET_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_ORDINAL_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ORDINAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_WEEK_DATE()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_WEEK_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ISO_ZONED_DATE_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ZONED_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::RFC_1123_DATE_TIME()
	{
		return getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"RFC_1123_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDate(java::time::format::FormatStyle arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDate",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedPattern(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			arg0.object<jstring>()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofLocalizedTime(java::time::format::FormatStyle arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofPattern(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			arg0.object<jstring>()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::ofPattern(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject DateTimeFormatter::parsedExcessDays()
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedExcessDays",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject DateTimeFormatter::parsedLeapSecond()
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedLeapSecond",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JString DateTimeFormatter::format(JObject arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void DateTimeFormatter::formatTo(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"formatTo",
			"(Ljava/time/temporal/TemporalAccessor;Ljava/lang/Appendable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject DateTimeFormatter::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/Chronology;"
		);
	}
	inline java::time::format::DecimalStyle DateTimeFormatter::getDecimalStyle() const
	{
		return callObjectMethod(
			"getDecimalStyle",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	inline java::util::Locale DateTimeFormatter::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline JObject DateTimeFormatter::getResolverFields() const
	{
		return callObjectMethod(
			"getResolverFields",
			"()Ljava/util/Set;"
		);
	}
	inline java::time::format::ResolverStyle DateTimeFormatter::getResolverStyle() const
	{
		return callObjectMethod(
			"getResolverStyle",
			"()Ljava/time/format/ResolverStyle;"
		);
	}
	inline java::time::ZoneId DateTimeFormatter::getZone() const
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::localizedBy(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"localizedBy",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline JObject DateTimeFormatter::parse(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject DateTimeFormatter::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;",
			arg0.object<jstring>()
		);
	}
	inline JObject DateTimeFormatter::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject DateTimeFormatter::parseBest(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"parseBest",
			"(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline JObject DateTimeFormatter::parseUnresolved(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseUnresolved",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::text::Format DateTimeFormatter::toFormat() const
	{
		return callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
	inline java::text::Format DateTimeFormatter::toFormat(JObject arg0) const
	{
		return callObjectMethod(
			"toFormat",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/text/Format;",
			arg0.object()
		);
	}
	inline JString DateTimeFormatter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withChronology(JObject arg0) const
	{
		return callObjectMethod(
			"withChronology",
			"(Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withDecimalStyle(java::time::format::DecimalStyle arg0) const
	{
		return callObjectMethod(
			"withDecimalStyle",
			"(Ljava/time/format/DecimalStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"withLocale",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withResolverFields(JArray arg0) const
	{
		return callObjectMethod(
			"withResolverFields",
			"([Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatter;",
			arg0.object<jarray>()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withResolverFields(JObject arg0) const
	{
		return callObjectMethod(
			"withResolverFields",
			"(Ljava/util/Set;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withResolverStyle(java::time::format::ResolverStyle arg0) const
	{
		return callObjectMethod(
			"withResolverStyle",
			"(Ljava/time/format/ResolverStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
	inline java::time::format::DateTimeFormatter DateTimeFormatter::withZone(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
} // namespace java::time::format

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::format;
#endif
