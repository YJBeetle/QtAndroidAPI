#include "../../io/ObjectInputStream.hpp"
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
	JapaneseDate::JapaneseDate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject JapaneseDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	QAndroidJniObject JapaneseDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject JapaneseDate::of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(Ljava/time/chrono/JapaneseEra;III)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject JapaneseDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jboolean JapaneseDate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject JapaneseDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/JapaneseChronology;"
		);
	}
	QAndroidJniObject JapaneseDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/JapaneseEra;"
		);
	}
	jlong JapaneseDate::getLong(__JniBaseClass arg0)
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
	jboolean JapaneseDate::isSupported(__JniBaseClass arg0)
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
	QAndroidJniObject JapaneseDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject JapaneseDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject JapaneseDate::range(__JniBaseClass arg0)
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
	jstring JapaneseDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JapaneseDate::until(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	jlong JapaneseDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject JapaneseDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	QAndroidJniObject JapaneseDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono
