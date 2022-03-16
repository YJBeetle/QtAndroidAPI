#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LocalDate.def.hpp"
#include "./chrono/IsoChronology.def.hpp"
#include "../util/regex/Pattern.def.hpp"
#include "./Period.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::Period Period::ZERO()
	{
		return getStaticObjectField(
			"java.time.Period",
			"ZERO",
			"Ljava/time/Period;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::Period Period::between(java::time::LocalDate arg0, java::time::LocalDate arg1)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"between",
			"(Ljava/time/LocalDate;Ljava/time/LocalDate;)Ljava/time/Period;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Period Period::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	inline java::time::Period Period::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"of",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::Period Period::ofDays(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"ofDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::ofMonths(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"ofMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::ofWeeks(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"ofWeeks",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::ofYears(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"ofYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.Period",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Period;",
			arg0.object<jstring>()
		);
	}
	inline JObject Period::addTo(JObject arg0) const
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline jboolean Period::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong Period::get(JObject arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.object()
		);
	}
	inline java::time::chrono::IsoChronology Period::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	inline jint Period::getDays() const
	{
		return callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	inline jint Period::getMonths() const
	{
		return callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	inline JObject Period::getUnits() const
	{
		return callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	inline jint Period::getYears() const
	{
		return callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	inline jint Period::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Period::isNegative() const
	{
		return callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	inline jboolean Period::isZero() const
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	inline java::time::Period Period::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	inline java::time::Period Period::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::multipliedBy(jint arg0) const
	{
		return callObjectMethod(
			"multipliedBy",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::negated() const
	{
		return callObjectMethod(
			"negated",
			"()Ljava/time/Period;"
		);
	}
	inline java::time::Period Period::normalized() const
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/Period;"
		);
	}
	inline java::time::Period Period::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	inline java::time::Period Period::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	inline JObject Period::subtractFrom(JObject arg0) const
	{
		return callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline JString Period::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong Period::toTotalMonths() const
	{
		return callMethod<jlong>(
			"toTotalMonths",
			"()J"
		);
	}
	inline java::time::Period Period::withDays(jint arg0) const
	{
		return callObjectMethod(
			"withDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::withMonths(jint arg0) const
	{
		return callObjectMethod(
			"withMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	inline java::time::Period Period::withYears(jint arg0) const
	{
		return callObjectMethod(
			"withYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

