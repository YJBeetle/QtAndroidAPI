#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	ThaiBuddhistDate::ThaiBuddhistDate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::from(JObject arg0)
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
	JObject ThaiBuddhistDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean ThaiBuddhistDate::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	jlong ThaiBuddhistDate::getLong(JObject arg0)
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
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(JObject arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(JObject arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::temporal::ValueRange ThaiBuddhistDate::range(JObject arg0)
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
	JString ThaiBuddhistDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ThaiBuddhistDate::until(JObject arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong ThaiBuddhistDate::until(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(JObject arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(JObject arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

