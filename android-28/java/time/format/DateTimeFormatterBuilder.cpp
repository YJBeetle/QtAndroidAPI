#include "../../../JString.hpp"
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
	DateTimeFormatterBuilder::DateTimeFormatterBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateTimeFormatterBuilder::DateTimeFormatterBuilder()
		: JObject(
			"java.time.format.DateTimeFormatterBuilder",
			"()V"
		) {}
	
	// Methods
	JString DateTimeFormatterBuilder::getLocalizedDateTimePattern(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1, JObject arg2, java::util::Locale arg3)
	{
		return callStaticObjectMethod(
			"java.time.format.DateTimeFormatterBuilder",
			"getLocalizedDateTimePattern",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;Ljava/time/chrono/Chronology;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::append(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendChronologyId() const
	{
		return callObjectMethod(
			"appendChronologyId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendChronologyText(java::time::format::TextStyle arg0) const
	{
		return callObjectMethod(
			"appendChronologyText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendDayPeriodText(java::time::format::TextStyle arg0) const
	{
		return callObjectMethod(
			"appendDayPeriodText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendFraction(JObject arg0, jint arg1, jint arg2, jboolean arg3) const
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
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendGenericZoneText(java::time::format::TextStyle arg0) const
	{
		return callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendGenericZoneText(java::time::format::TextStyle arg0, JObject arg1) const
	{
		return callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendInstant() const
	{
		return callObjectMethod(
			"appendInstant",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendInstant(jint arg0) const
	{
		return callObjectMethod(
			"appendInstant",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLiteral(jchar arg0) const
	{
		return callObjectMethod(
			"appendLiteral",
			"(C)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLiteral(JString arg0) const
	{
		return callObjectMethod(
			"appendLiteral",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object<jstring>()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLocalized(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1) const
	{
		return callObjectMethod(
			"appendLocalized",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendLocalizedOffset(java::time::format::TextStyle arg0) const
	{
		return callObjectMethod(
			"appendLocalizedOffset",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOffset(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendOffset",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOffsetId() const
	{
		return callObjectMethod(
			"appendOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendOptional(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"appendOptional",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendPattern(JString arg0) const
	{
		return callObjectMethod(
			"appendPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object<jstring>()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(JObject arg0) const
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(JObject arg0, java::time::format::TextStyle arg1) const
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendText(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/util/Map;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(JObject arg0) const
	{
		return callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValue(JObject arg0, jint arg1, jint arg2, java::time::format::SignStyle arg3) const
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
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValueReduced(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendValueReduced(JObject arg0, jint arg1, jint arg2, JObject arg3) const
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
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneId() const
	{
		return callObjectMethod(
			"appendZoneId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneOrOffsetId() const
	{
		return callObjectMethod(
			"appendZoneOrOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneRegionId() const
	{
		return callObjectMethod(
			"appendZoneRegionId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneText(java::time::format::TextStyle arg0) const
	{
		return callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::appendZoneText(java::time::format::TextStyle arg0, JObject arg1) const
	{
		return callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::optionalEnd() const
	{
		return callObjectMethod(
			"optionalEnd",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::optionalStart() const
	{
		return callObjectMethod(
			"optionalStart",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::padNext(jint arg0) const
	{
		return callObjectMethod(
			"padNext",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::padNext(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"padNext",
			"(IC)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0,
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseCaseInsensitive() const
	{
		return callObjectMethod(
			"parseCaseInsensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseCaseSensitive() const
	{
		return callObjectMethod(
			"parseCaseSensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseDefaulting(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"parseDefaulting",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.object(),
			arg1
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseLenient() const
	{
		return callObjectMethod(
			"parseLenient",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatterBuilder DateTimeFormatterBuilder::parseStrict() const
	{
		return callObjectMethod(
			"parseStrict",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatterBuilder::toFormatter() const
	{
		return callObjectMethod(
			"toFormatter",
			"()Ljava/time/format/DateTimeFormatter;"
		);
	}
	java::time::format::DateTimeFormatter DateTimeFormatterBuilder::toFormatter(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"toFormatter",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.object()
		);
	}
} // namespace java::time::format

