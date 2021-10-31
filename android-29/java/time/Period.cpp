#include "../io/ObjectInputStream.hpp"
#include "./LocalDate.hpp"
#include "./chrono/IsoChronology.hpp"
#include "../util/regex/Pattern.hpp"
#include "./Period.hpp"

namespace java::time
{
	// Fields
	java::time::Period Period::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Period",
			"ZERO",
			"Ljava/time/Period;"
		);
	}
	
	// QAndroidJniObject forward
	Period::Period(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Period Period::between(java::time::LocalDate arg0, java::time::LocalDate arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"between",
			"(Ljava/time/LocalDate;Ljava/time/LocalDate;)Ljava/time/Period;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Period Period::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	java::time::Period Period::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"of",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::Period Period::ofDays(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::ofMonths(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::ofWeeks(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofWeeks",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::ofYears(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Period;",
			arg0
		);
	}
	__JniBaseClass Period::addTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jboolean Period::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Period::get(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.object()
		);
	}
	java::time::chrono::IsoChronology Period::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	jint Period::getDays()
	{
		return callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	jint Period::getMonths()
	{
		return callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	__JniBaseClass Period::getUnits()
	{
		return callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	jint Period::getYears()
	{
		return callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	jint Period::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Period::isNegative()
	{
		return callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	jboolean Period::isZero()
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	java::time::Period Period::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	java::time::Period Period::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::multipliedBy(jint arg0)
	{
		return callObjectMethod(
			"multipliedBy",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::negated()
	{
		return callObjectMethod(
			"negated",
			"()Ljava/time/Period;"
		);
	}
	java::time::Period Period::normalized()
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/Period;"
		);
	}
	java::time::Period Period::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.object()
		);
	}
	java::time::Period Period::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	__JniBaseClass Period::subtractFrom(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jstring Period::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Period::toTotalMonths()
	{
		return callMethod<jlong>(
			"toTotalMonths",
			"()J"
		);
	}
	java::time::Period Period::withDays(jint arg0)
	{
		return callObjectMethod(
			"withDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::withMonths(jint arg0)
	{
		return callObjectMethod(
			"withMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	java::time::Period Period::withYears(jint arg0)
	{
		return callObjectMethod(
			"withYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
} // namespace java::time

