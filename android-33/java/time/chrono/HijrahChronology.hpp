#pragma once

#include "../../../JIntArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Void.def.hpp"
#include "../Clock.def.hpp"
#include "../Instant.def.hpp"
#include "../ZoneId.def.hpp"
#include "./HijrahDate.def.hpp"
#include "./HijrahEra.def.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "../../util/Properties.def.hpp"
#include "./HijrahChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::HijrahChronology HijrahChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.HijrahChronology",
			"INSTANCE",
			"Ljava/time/chrono/HijrahChronology;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::HijrahDate HijrahChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/HijrahDate;",
			arg0
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/HijrahDate;"
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::time::chrono::HijrahEra HijrahChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	inline JObject HijrahChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	inline JString HijrahChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString HijrahChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean HijrahChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	inline JObject HijrahChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jint HijrahChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	inline java::time::temporal::ValueRange HijrahChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject HijrahChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	inline JObject HijrahChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
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
