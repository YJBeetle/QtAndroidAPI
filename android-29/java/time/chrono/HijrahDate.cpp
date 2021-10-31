#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "./HijrahChronology.hpp"
#include "./HijrahEra.hpp"
#include "../temporal/ValueRange.hpp"
#include "./HijrahDate.hpp"

namespace java::time::chrono
{
	// Fields
	
	// QAndroidJniObject forward
	HijrahDate::HijrahDate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject HijrahDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"()Ljava/time/chrono/HijrahDate;"
		);
	}
	QAndroidJniObject HijrahDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"of",
			"(III)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject HijrahDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean HijrahDate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject HijrahDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/HijrahChronology;"
		);
	}
	QAndroidJniObject HijrahDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/HijrahEra;"
		);
	}
	jlong HijrahDate::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint HijrahDate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean HijrahDate::isLeapYear()
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jint HijrahDate::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint HijrahDate::lengthOfYear()
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	QAndroidJniObject HijrahDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject HijrahDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject HijrahDate::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong HijrahDate::toEpochDay()
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring HijrahDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject HijrahDate::until(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong HijrahDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject HijrahDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject HijrahDate::withVariant(java::time::chrono::HijrahChronology arg0)
	{
		return callObjectMethod(
			"withVariant",
			"(Ljava/time/chrono/HijrahChronology;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
} // namespace java::time::chrono

