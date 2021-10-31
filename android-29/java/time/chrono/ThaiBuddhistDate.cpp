#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalDate.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "./ThaiBuddhistChronology.hpp"
#include "./ThaiBuddhistEra.hpp"
#include "../temporal/ValueRange.hpp"
#include "./ThaiBuddhistDate.hpp"

namespace java::time::chrono
{
	// Fields
	
	// QAndroidJniObject forward
	ThaiBuddhistDate::ThaiBuddhistDate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ThaiBuddhistDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"of",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThaiBuddhistDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean ThaiBuddhistDate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	jlong ThaiBuddhistDate::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint ThaiBuddhistDate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ThaiBuddhistDate::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong ThaiBuddhistDate::toEpochDay()
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring ThaiBuddhistDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ThaiBuddhistDate::until(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong ThaiBuddhistDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

