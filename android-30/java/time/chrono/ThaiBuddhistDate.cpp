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
	
	// QJniObject forward
	ThaiBuddhistDate::ThaiBuddhistDate(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::from(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"of",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass ThaiBuddhistDate::atTime(java::time::LocalTime arg0)
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
	java::time::chrono::ThaiBuddhistChronology ThaiBuddhistDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistDate::getEra()
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
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::temporal::ValueRange ThaiBuddhistDate::range(__JniBaseClass arg0)
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
	__JniBaseClass ThaiBuddhistDate::until(__JniBaseClass arg0)
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
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

