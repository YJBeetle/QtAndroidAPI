#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class LocalTime;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time::chrono
{
	class HijrahChronology;
}
namespace __jni_impl::java::time::chrono
{
	class HijrahEra;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}

namespace __jni_impl::java::time::chrono
{
	class HijrahDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject atTime(__jni_impl::java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getChronology();
		QAndroidJniObject getEra();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint hashCode();
		jboolean isLeapYear();
		jint lengthOfMonth();
		jint lengthOfYear();
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		QAndroidJniObject until(__jni_impl::__JniBaseClass arg0);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withVariant(__jni_impl::java::time::chrono::HijrahChronology arg0);
	};
} // namespace __jni_impl::java::time::chrono

#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "HijrahChronology.hpp"
#include "HijrahEra.hpp"
#include "../temporal/ValueRange.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	
	// Constructors
	void HijrahDate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.HijrahDate",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HijrahDate::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
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
	QAndroidJniObject HijrahDate::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
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
	QAndroidJniObject HijrahDate::atTime(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jboolean HijrahDate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject HijrahDate::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/HijrahChronology;"
		);
	}
	QAndroidJniObject HijrahDate::getEra()
	{
		return __thiz.callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/HijrahEra;"
		);
	}
	jlong HijrahDate::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint HijrahDate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean HijrahDate::isLeapYear()
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jint HijrahDate::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint HijrahDate::lengthOfYear()
	{
		return __thiz.callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	QAndroidJniObject HijrahDate::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong HijrahDate::toEpochDay()
	{
		return __thiz.callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring HijrahDate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject HijrahDate::until(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.__jniObject().object()
		);
	}
	jlong HijrahDate::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahDate::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject HijrahDate::withVariant(__jni_impl::java::time::chrono::HijrahChronology arg0)
	{
		return __thiz.callObjectMethod(
			"withVariant",
			"(Ljava/time/chrono/HijrahChronology;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class HijrahDate : public __jni_impl::java::time::chrono::HijrahDate
	{
	public:
		HijrahDate(QAndroidJniObject obj) { __thiz = obj; }
		HijrahDate()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

