#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../Instant.def.hpp"
#include "../LocalDate.def.hpp"
#include "../LocalDateTime.def.hpp"
#include "../Period.def.hpp"
#include "../ZoneId.def.hpp"
#include "../ZoneOffset.def.hpp"
#include "../ZonedDateTime.def.hpp"
#include "./IsoEra.def.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./IsoChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::IsoChronology IsoChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoChronology",
			"INSTANCE",
			"Ljava/time/chrono/IsoChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::LocalDate IsoChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate IsoChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::LocalDate IsoChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline java::time::LocalDate IsoChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate IsoChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/LocalDate;"
		);
	}
	inline java::time::LocalDate IsoChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate IsoChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate IsoChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	inline java::time::LocalDate IsoChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jlong IsoChronology::epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6) const
	{
		return callMethod<jlong>(
			"epochSecond",
			"(IIIIIILjava/time/ZoneOffset;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline java::time::chrono::IsoEra IsoChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	inline JObject IsoChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	inline JString IsoChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString IsoChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean IsoChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	inline java::time::LocalDateTime IsoChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	inline java::time::Period IsoChronology::period(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"period",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint IsoChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	inline java::time::temporal::ValueRange IsoChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline java::time::LocalDate IsoChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::ZonedDateTime IsoChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	inline java::time::ZonedDateTime IsoChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

// Base class headers
#include "./AbstractChronology.hpp"

