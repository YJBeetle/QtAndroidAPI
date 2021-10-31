#include "../Duration.hpp"
#include "./ChronoUnit.hpp"

namespace java::time::temporal
{
	// Fields
	QAndroidJniObject ChronoUnit::CENTURIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"CENTURIES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::DECADES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DECADES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::ERAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"ERAS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::FOREVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"FOREVER",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::HALF_DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HALF_DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HOURS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::MICROS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MICROS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::MILLENNIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLENNIA",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLIS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MINUTES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MONTHS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::NANOS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"NANOS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"SECONDS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::WEEKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"WEEKS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	QAndroidJniObject ChronoUnit::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"YEARS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	
	ChronoUnit::ChronoUnit(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ChronoUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;",
			arg0
		);
	}
	jarray ChronoUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"values",
			"()[Ljava/time/temporal/ChronoUnit;"
		).object<jarray>();
	}
	QAndroidJniObject ChronoUnit::addTo(__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong ChronoUnit::between(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ChronoUnit::getDuration()
	{
		return __thiz.callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	jboolean ChronoUnit::isDateBased()
	{
		return __thiz.callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	jboolean ChronoUnit::isDurationEstimated()
	{
		return __thiz.callMethod<jboolean>(
			"isDurationEstimated",
			"()Z"
		);
	}
	jboolean ChronoUnit::isSupportedBy(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/Temporal;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ChronoUnit::isTimeBased()
	{
		return __thiz.callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	jstring ChronoUnit::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::temporal

