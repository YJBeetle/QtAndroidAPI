#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./LocalDate.def.hpp"
#include "./Month.def.hpp"
#include "./MonthDay.def.hpp"
#include "./YearMonth.def.hpp"
#include "./ZoneId.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./Year.def.hpp"

namespace java::time
{
	// Fields
	inline jint Year::MAX_VALUE()
	{
		return getStaticField<jint>(
			"java.time.Year",
			"MAX_VALUE"
		);
	}
	inline jint Year::MIN_VALUE()
	{
		return getStaticField<jint>(
			"java.time.Year",
			"MIN_VALUE"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::Year Year::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline jboolean Year::isLeap(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.time.Year",
			"isLeap",
			"(J)Z",
			arg0
		);
	}
	inline java::time::Year Year::now()
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"()Ljava/time/Year;"
		);
	}
	inline java::time::Year Year::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline java::time::Year Year::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline java::time::Year Year::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"of",
			"(I)Ljava/time/Year;",
			arg0
		);
	}
	inline java::time::Year Year::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Year;",
			arg0.object<jstring>()
		);
	}
	inline java::time::Year Year::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/Year;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject Year::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::LocalDate Year::atDay(jint arg0) const
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::YearMonth Year::atMonth(jint arg0) const
	{
		return callObjectMethod(
			"atMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline java::time::YearMonth Year::atMonth(java::time::Month arg0) const
	{
		return callObjectMethod(
			"atMonth",
			"(Ljava/time/Month;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::LocalDate Year::atMonthDay(java::time::MonthDay arg0) const
	{
		return callObjectMethod(
			"atMonthDay",
			"(Ljava/time/MonthDay;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline jint Year::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Year::compareTo(java::time::Year arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Year;)I",
			arg0.object()
		);
	}
	inline jboolean Year::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Year::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint Year::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jlong Year::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint Year::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	inline jint Year::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Year::isAfter(java::time::Year arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	inline jboolean Year::isBefore(java::time::Year arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	inline jboolean Year::isLeap() const
	{
		return callMethod<jboolean>(
			"isLeap",
			"()Z"
		);
	}
	inline jboolean Year::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline jboolean Year::isValidMonthDay(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isValidMonthDay",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	inline jint Year::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline java::time::Year Year::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline java::time::Year Year::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::Year Year::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	inline java::time::Year Year::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline java::time::Year Year::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::Year Year::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	inline JObject Year::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange Year::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString Year::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong Year::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Year Year::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Year;",
			arg0.object()
		);
	}
	inline java::time::Year Year::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Year;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time

// Base class headers

