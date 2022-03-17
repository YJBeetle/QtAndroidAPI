#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../Instant.def.hpp"
#include "../ZoneId.def.hpp"
#include "./JapaneseDate.def.hpp"
#include "./JapaneseEra.def.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./JapaneseChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::JapaneseChronology JapaneseChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseChronology",
			"INSTANCE",
			"Ljava/time/chrono/JapaneseChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::JapaneseDate JapaneseChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/JapaneseDate;",
			arg0
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	inline JObject JapaneseChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	inline JString JapaneseChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString JapaneseChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean JapaneseChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	inline JObject JapaneseChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jint JapaneseChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	inline java::time::temporal::ValueRange JapaneseChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject JapaneseChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	inline JObject JapaneseChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::chrono;
#endif
