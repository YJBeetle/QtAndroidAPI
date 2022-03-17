#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../Instant.def.hpp"
#include "../ZoneId.def.hpp"
#include "./ThaiBuddhistDate.def.hpp"
#include "./ThaiBuddhistEra.def.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "../../util/HashMap.def.hpp"
#include "./ThaiBuddhistChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::ThaiBuddhistChronology ThaiBuddhistChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistChronology",
			"INSTANCE",
			"Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	inline JObject ThaiBuddhistChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	inline JString ThaiBuddhistChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString ThaiBuddhistChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ThaiBuddhistChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	inline JObject ThaiBuddhistChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jint ThaiBuddhistChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	inline java::time::temporal::ValueRange ThaiBuddhistChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject ThaiBuddhistChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	inline JObject ThaiBuddhistChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
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

