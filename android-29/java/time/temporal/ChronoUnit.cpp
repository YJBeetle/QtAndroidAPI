#include "../Duration.hpp"
#include "./ChronoUnit.hpp"

namespace java::time::temporal
{
	// Fields
	java::time::temporal::ChronoUnit ChronoUnit::CENTURIES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"CENTURIES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::DAYS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::DECADES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DECADES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::ERAS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"ERAS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::FOREVER()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"FOREVER",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::HALF_DAYS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HALF_DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::HOURS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HOURS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::MICROS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MICROS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::MILLENNIA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLENNIA",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::MILLIS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLIS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::MINUTES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MINUTES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::MONTHS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MONTHS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::NANOS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"NANOS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"SECONDS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::WEEKS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"WEEKS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	java::time::temporal::ChronoUnit ChronoUnit::YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"YEARS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	
	// QJniObject forward
	ChronoUnit::ChronoUnit(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::temporal::ChronoUnit ChronoUnit::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;",
			arg0
		);
	}
	jarray ChronoUnit::values()
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"values",
			"()[Ljava/time/temporal/ChronoUnit;"
		).object<jarray>();
	}
	__JniBaseClass ChronoUnit::addTo(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.object(),
			arg1
		);
	}
	jlong ChronoUnit::between(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Duration ChronoUnit::getDuration()
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	jboolean ChronoUnit::isDateBased()
	{
		return callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	jboolean ChronoUnit::isDurationEstimated()
	{
		return callMethod<jboolean>(
			"isDurationEstimated",
			"()Z"
		);
	}
	jboolean ChronoUnit::isSupportedBy(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/Temporal;)Z",
			arg0.object()
		);
	}
	jboolean ChronoUnit::isTimeBased()
	{
		return callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	jstring ChronoUnit::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::temporal

