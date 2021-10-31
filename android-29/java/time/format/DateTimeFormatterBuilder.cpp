#include "../ZoneId.hpp"
#include "./DateTimeFormatter.hpp"
#include "./FormatStyle.hpp"
#include "./ResolverStyle.hpp"
#include "./SignStyle.hpp"
#include "./TextStyle.hpp"
#include "../../util/Locale.hpp"
#include "./DateTimeFormatterBuilder.hpp"

namespace java::time::format
{
	// Fields
	
	// QJniObject forward
	DateTimeFormatterBuilder::DateTimeFormatterBuilder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateTimeFormatterBuilder::DateTimeFormatterBuilder()
		: __JniBaseClass(
			"java.time.format.DateTimeFormatterBuilder",
			"()V"
		) {}
	
	// Methods
	jstring DateTimeFormatterBuilder::getLocalizedDateTimePattern(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1, __JniBaseClass arg2, java::util::Locale arg3)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatterBuilder",
			"getLocalizedDateTimePattern",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;Ljava/time/chrono/Chronology;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		).object<jstring>();
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::append(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendChronologyId()
	{
		return callObjectMethod(
			"appendChronologyId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendChronologyText(java::time::format::TextStyle arg0)
	{
		return callObjectMethod(
			"appendChronologyText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendDayPeriodText(java::time::format::TextStyle arg0)
	{
		return callObjectMethod(
			"appendDayPeriodText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendFraction(__JniBaseClass arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return callObjectMethod(
			"appendFraction",
			"(Ljava/time/temporal/TemporalField;IIZ)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendGenericZoneText(java::time::format::TextStyle arg0)
	{
		return callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendGenericZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendInstant()
	{
		return callObjectMethod(
			"appendInstant",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendInstant(jint arg0)
	{
		return callObjectMethod(
			"appendInstant",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLiteral(jchar arg0)
	{
		return callObjectMethod(
			"appendLiteral",
			"(C)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLiteral(jstring arg0)
	{
		return callObjectMethod(
			"appendLiteral",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLocalized(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1)
	{
		return callObjectMethod(
			"appendLocalized",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLocalizedOffset(java::time::format::TextStyle arg0)
	{
		return callObjectMethod(
			"appendLocalizedOffset",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOffset(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"appendOffset",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0,
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOffsetId()
	{
		return callObjectMethod(
			"appendOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOptional(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"appendOptional",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendPattern(jstring arg0)
	{
		return callObjectMethod(
			"appendPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(__JniBaseClass arg0, java::time::format::TextStyle arg1)
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/util/Map;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(__JniBaseClass arg0, jint arg1)
	{
		return callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(__JniBaseClass arg0, jint arg1, jint arg2, java::time::format::SignStyle arg3)
	{
		return callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;IILjava/time/format/SignStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"appendValueReduced",
			"(Ljava/time/temporal/TemporalField;III)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		return callObjectMethod(
			"appendValueReduced",
			"(Ljava/time/temporal/TemporalField;IILjava/time/chrono/ChronoLocalDate;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneId()
	{
		return callObjectMethod(
			"appendZoneId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneOrOffsetId()
	{
		return callObjectMethod(
			"appendZoneOrOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneRegionId()
	{
		return callObjectMethod(
			"appendZoneRegionId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneText(java::time::format::TextStyle arg0)
	{
		return callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::optionalEnd()
	{
		return callObjectMethod(
			"optionalEnd",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::optionalStart()
	{
		return callObjectMethod(
			"optionalStart",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::padNext(jint arg0)
	{
		return callObjectMethod(
			"padNext",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::padNext(jint arg0, jchar arg1)
	{
		return callObjectMethod(
			"padNext",
			"(IC)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0,
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseCaseInsensitive()
	{
		return callObjectMethod(
			"parseCaseInsensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseCaseSensitive()
	{
		return callObjectMethod(
			"parseCaseSensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseDefaulting(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"parseDefaulting",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseLenient()
	{
		return callObjectMethod(
			"parseLenient",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseStrict()
	{
		return callObjectMethod(
			"parseStrict",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatterBuilder::toFormatter()
	{
		return callObjectMethod(
			"toFormatter",
			"()Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatterBuilder::toFormatter(java::util::Locale arg0)
	{
		return callObjectMethod(
			"toFormatter",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
} // namespace java::time::format

