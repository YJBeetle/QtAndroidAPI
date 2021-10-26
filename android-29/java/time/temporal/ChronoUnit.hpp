#pragma once

#ifndef JAVA_TIME_TEMPORAL_CHRONOUNIT
#define JAVA_TIME_TEMPORAL_CHRONOUNIT

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace __jni_impl::java::time
{
	class Duration;
}

namespace __jni_impl::java::time::temporal
{
	class ChronoUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NANOS();
		static QAndroidJniObject MICROS();
		static QAndroidJniObject MILLIS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject HALF_DAYS();
		static QAndroidJniObject DAYS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject YEARS();
		static QAndroidJniObject DECADES();
		static QAndroidJniObject CENTURIES();
		static QAndroidJniObject MILLENNIA();
		static QAndroidJniObject ERAS();
		static QAndroidJniObject FOREVER();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jboolean isDateBased();
		jboolean isTimeBased();
		jboolean isSupportedBy(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDuration();
		jboolean isDurationEstimated();
		QAndroidJniObject addTo(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jlong between(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::java::time::temporal

#include "../Duration.hpp"

namespace __jni_impl::java::time::temporal
{
	// Fields
	QAndroidJniObject ChronoUnit::NANOS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"NANOS",
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
	QAndroidJniObject ChronoUnit::MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLIS",
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
	QAndroidJniObject ChronoUnit::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MINUTES",
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
	QAndroidJniObject ChronoUnit::HALF_DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HALF_DAYS",
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
	QAndroidJniObject ChronoUnit::WEEKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"WEEKS",
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
	QAndroidJniObject ChronoUnit::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"YEARS",
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
	QAndroidJniObject ChronoUnit::CENTURIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"CENTURIES",
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
	
	// Constructors
	void ChronoUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.ChronoUnit",
			"(V)V");
	}
	
	// Methods
	jstring ChronoUnit::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ChronoUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"values",
			"()[Ljava/time/temporal/ChronoUnit;"
		).object<jarray>();
	}
	QAndroidJniObject ChronoUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;",
			arg0
		);
	}
	QAndroidJniObject ChronoUnit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean ChronoUnit::isDateBased()
	{
		return __thiz.callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	jboolean ChronoUnit::isTimeBased()
	{
		return __thiz.callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	jboolean ChronoUnit::isSupportedBy(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/Temporal;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ChronoUnit::getDuration()
	{
		return __thiz.callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	jboolean ChronoUnit::isDurationEstimated()
	{
		return __thiz.callMethod<jboolean>(
			"isDurationEstimated",
			"()Z"
		);
	}
	QAndroidJniObject ChronoUnit::addTo(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong ChronoUnit::between(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class ChronoUnit : public __jni_impl::java::time::temporal::ChronoUnit
	{
	public:
		ChronoUnit(QAndroidJniObject obj) { __thiz = obj; }
		ChronoUnit()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_CHRONOUNIT

