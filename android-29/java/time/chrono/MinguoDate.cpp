#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalDate.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "./MinguoChronology.hpp"
#include "./MinguoEra.hpp"
#include "../temporal/ValueRange.hpp"
#include "./MinguoDate.hpp"

namespace java::time::chrono
{
	// Fields
	
	// QAndroidJniObject forward
	MinguoDate::MinguoDate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MinguoDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"()Ljava/time/chrono/MinguoDate;"
		);
	}
	QAndroidJniObject MinguoDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"of",
			"(III)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MinguoDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean MinguoDate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MinguoDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/MinguoChronology;"
		);
	}
	QAndroidJniObject MinguoDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/MinguoEra;"
		);
	}
	jlong MinguoDate::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint MinguoDate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint MinguoDate::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	QAndroidJniObject MinguoDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject MinguoDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject MinguoDate::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong MinguoDate::toEpochDay()
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring MinguoDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MinguoDate::until(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong MinguoDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject MinguoDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

