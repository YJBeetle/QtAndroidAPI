#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./JapaneseDate.hpp"
#include "./JapaneseEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./JapaneseChronology.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::JapaneseChronology JapaneseChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseChronology",
			"INSTANCE",
			"Ljava/time/chrono/JapaneseChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	java::time::chrono::JapaneseDate JapaneseChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/JapaneseDate;",
			arg0
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::time::chrono::JapaneseEra JapaneseChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	JObject JapaneseChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	JString JapaneseChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	JString JapaneseChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jboolean JapaneseChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	JObject JapaneseChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jint JapaneseChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	java::time::temporal::ValueRange JapaneseChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject JapaneseChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	JObject JapaneseChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

