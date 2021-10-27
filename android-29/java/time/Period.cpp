#include "../io/ObjectInputStream.hpp"
#include "./LocalDate.hpp"
#include "./chrono/IsoChronology.hpp"
#include "../util/regex/Pattern.hpp"
#include "./Period.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject Period::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Period",
			"ZERO",
			"Ljava/time/Period;"
		);
	}
	
	Period::Period(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Period::between(java::time::LocalDate arg0, java::time::LocalDate arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"between",
			"(Ljava/time/LocalDate;Ljava/time/LocalDate;)Ljava/time/Period;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Period::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Period::of(jint arg0, jint arg1, jint arg2)
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
	QAndroidJniObject Period::ofDays(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::ofMonths(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::ofWeeks(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofWeeks",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::ofYears(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"ofYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Period",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Period;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Period::addTo(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jboolean Period::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Period::get(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Period::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	jint Period::getDays()
	{
		return __thiz.callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	jint Period::getMonths()
	{
		return __thiz.callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	QAndroidJniObject Period::getUnits()
	{
		return __thiz.callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	jint Period::getYears()
	{
		return __thiz.callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	jint Period::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Period::isNegative()
	{
		return __thiz.callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	jboolean Period::isZero()
	{
		return __thiz.callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	QAndroidJniObject Period::minus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Period::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::multipliedBy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"multipliedBy",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::negated()
	{
		return __thiz.callObjectMethod(
			"negated",
			"()Ljava/time/Period;"
		);
	}
	QAndroidJniObject Period::normalized()
	{
		return __thiz.callObjectMethod(
			"normalized",
			"()Ljava/time/Period;"
		);
	}
	QAndroidJniObject Period::plus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Period::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::subtractFrom(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jstring Period::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Period::toTotalMonths()
	{
		return __thiz.callMethod<jlong>(
			"toTotalMonths",
			"()J"
		);
	}
	QAndroidJniObject Period::withDays(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDays",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::withMonths(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonths",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
	QAndroidJniObject Period::withYears(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYears",
			"(I)Ljava/time/Period;",
			arg0
		);
	}
} // namespace java::time

