#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../Instant.def.hpp"
#include "../ZoneId.def.hpp"
#include "./MinguoDate.def.hpp"
#include "./MinguoEra.def.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./MinguoChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::MinguoChronology MinguoChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.MinguoChronology",
			"INSTANCE",
			"Ljava/time/chrono/MinguoChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::MinguoDate MinguoChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/MinguoDate;",
			arg0
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/MinguoDate;"
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::time::chrono::MinguoEra MinguoChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	inline JObject MinguoChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	inline JString MinguoChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString MinguoChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean MinguoChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	inline JObject MinguoChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jint MinguoChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	inline java::time::temporal::ValueRange MinguoChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject MinguoChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	inline JObject MinguoChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

// Base class headers
#include "./AbstractChronology.hpp"

