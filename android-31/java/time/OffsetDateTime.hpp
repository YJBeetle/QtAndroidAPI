#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./DayOfWeek.def.hpp"
#include "./Instant.def.hpp"
#include "./LocalDate.def.hpp"
#include "./LocalDateTime.def.hpp"
#include "./LocalTime.def.hpp"
#include "./Month.def.hpp"
#include "./OffsetTime.def.hpp"
#include "./ZoneId.def.hpp"
#include "./ZoneOffset.def.hpp"
#include "./ZonedDateTime.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./OffsetDateTime.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::OffsetDateTime OffsetDateTime::MAX()
	{
		return getStaticObjectField(
			"java.time.OffsetDateTime",
			"MAX",
			"Ljava/time/OffsetDateTime;"
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::MIN()
	{
		return getStaticObjectField(
			"java.time.OffsetDateTime",
			"MIN",
			"Ljava/time/OffsetDateTime;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::OffsetDateTime OffsetDateTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::now()
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneOffset arg2)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneOffset arg7)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetDateTime;",
			arg0.object<jstring>()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetDateTime;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject OffsetDateTime::timeLineOrder()
	{
		return callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"timeLineOrder",
			"()Ljava/util/Comparator;"
		);
	}
	inline JObject OffsetDateTime::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::ZonedDateTime OffsetDateTime::atZoneSameInstant(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"atZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	inline java::time::ZonedDateTime OffsetDateTime::atZoneSimilarLocal(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"atZoneSimilarLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	inline jint OffsetDateTime::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint OffsetDateTime::compareTo(java::time::OffsetDateTime arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetDateTime;)I",
			arg0.object()
		);
	}
	inline jboolean OffsetDateTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString OffsetDateTime::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint OffsetDateTime::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jint OffsetDateTime::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	inline java::time::DayOfWeek OffsetDateTime::getDayOfWeek() const
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	inline jint OffsetDateTime::getDayOfYear() const
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	inline jint OffsetDateTime::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	inline jlong OffsetDateTime::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint OffsetDateTime::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	inline java::time::Month OffsetDateTime::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	inline jint OffsetDateTime::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	inline jint OffsetDateTime::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	inline java::time::ZoneOffset OffsetDateTime::getOffset() const
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline jint OffsetDateTime::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	inline jint OffsetDateTime::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jint OffsetDateTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean OffsetDateTime::isAfter(java::time::OffsetDateTime arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	inline jboolean OffsetDateTime::isBefore(java::time::OffsetDateTime arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	inline jboolean OffsetDateTime::isEqual(java::time::OffsetDateTime arg0) const
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	inline jboolean OffsetDateTime::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline JObject OffsetDateTime::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange OffsetDateTime::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong OffsetDateTime::toEpochSecond() const
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	inline java::time::Instant OffsetDateTime::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::LocalDate OffsetDateTime::toLocalDate() const
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	inline java::time::LocalDateTime OffsetDateTime::toLocalDateTime() const
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::LocalTime OffsetDateTime::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	inline java::time::OffsetTime OffsetDateTime::toOffsetTime() const
	{
		return callObjectMethod(
			"toOffsetTime",
			"()Ljava/time/OffsetTime;"
		);
	}
	inline JString OffsetDateTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::ZonedDateTime OffsetDateTime::toZonedDateTime() const
	{
		return callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline jlong OffsetDateTime::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withDayOfYear(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withHour(jint arg0) const
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withMinute(jint arg0) const
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withNano(jint arg0) const
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withOffsetSameInstant(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withOffsetSameLocal(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withSecond(jint arg0) const
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	inline java::time::OffsetDateTime OffsetDateTime::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

