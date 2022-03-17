#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./LocalDate.def.hpp"
#include "./Month.def.hpp"
#include "./ZoneId.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./YearMonth.def.hpp"

namespace java::time
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::YearMonth YearMonth::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::now()
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"()Ljava/time/YearMonth;"
		);
	}
	inline java::time::YearMonth YearMonth::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/Clock;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(II)Ljava/time/YearMonth;",
			arg0,
			arg1
		);
	}
	inline java::time::YearMonth YearMonth::of(jint arg0, java::time::Month arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(ILjava/time/Month;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::YearMonth YearMonth::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/YearMonth;",
			arg0.object<jstring>()
		);
	}
	inline java::time::YearMonth YearMonth::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/YearMonth;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject YearMonth::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::LocalDate YearMonth::atDay(jint arg0) const
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate YearMonth::atEndOfMonth() const
	{
		return callObjectMethod(
			"atEndOfMonth",
			"()Ljava/time/LocalDate;"
		);
	}
	inline jint YearMonth::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint YearMonth::compareTo(java::time::YearMonth arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/YearMonth;)I",
			arg0.object()
		);
	}
	inline jboolean YearMonth::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString YearMonth::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint YearMonth::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jlong YearMonth::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline java::time::Month YearMonth::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	inline jint YearMonth::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	inline jint YearMonth::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jint YearMonth::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean YearMonth::isAfter(java::time::YearMonth arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	inline jboolean YearMonth::isBefore(java::time::YearMonth arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	inline jboolean YearMonth::isLeapYear() const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	inline jboolean YearMonth::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline jboolean YearMonth::isValidDay(jint arg0) const
	{
		return callMethod<jboolean>(
			"isValidDay",
			"(I)Z",
			arg0
		);
	}
	inline jint YearMonth::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline jint YearMonth::lengthOfYear() const
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	inline java::time::YearMonth YearMonth::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::YearMonth YearMonth::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline java::time::YearMonth YearMonth::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline java::time::YearMonth YearMonth::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::YearMonth YearMonth::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline java::time::YearMonth YearMonth::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline JObject YearMonth::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange YearMonth::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString YearMonth::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong YearMonth::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::YearMonth YearMonth::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	inline java::time::YearMonth YearMonth::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/YearMonth;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::YearMonth YearMonth::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	inline java::time::YearMonth YearMonth::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

