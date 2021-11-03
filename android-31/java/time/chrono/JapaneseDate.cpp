#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.hpp"
#include "../LocalDate.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "./JapaneseChronology.hpp"
#include "./JapaneseEra.hpp"
#include "../temporal/ValueRange.hpp"
#include "./JapaneseDate.hpp"

namespace java::time::chrono
{
	// Fields
	
	// QAndroidJniObject forward
	JapaneseDate::JapaneseDate(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::JapaneseDate JapaneseDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(Ljava/time/chrono/JapaneseEra;III)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	JObject JapaneseDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean JapaneseDate::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::time::chrono::JapaneseChronology JapaneseDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/JapaneseChronology;"
		);
	}
	java::time::chrono::JapaneseEra JapaneseDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/JapaneseEra;"
		);
	}
	jlong JapaneseDate::getLong(JObject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint JapaneseDate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JapaneseDate::isSupported(JObject arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jint JapaneseDate::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint JapaneseDate::lengthOfYear()
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::minus(JObject arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::minus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::plus(JObject arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::plus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::temporal::ValueRange JapaneseDate::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong JapaneseDate::toEpochDay()
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	JString JapaneseDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject JapaneseDate::until(JObject arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong JapaneseDate::until(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::with(JObject arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	java::time::chrono::JapaneseDate JapaneseDate::with(JObject arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

