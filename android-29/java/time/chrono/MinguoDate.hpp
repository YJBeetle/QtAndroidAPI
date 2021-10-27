#pragma once

#ifndef JAVA_TIME_CHRONO_MINGUODATE
#define JAVA_TIME_CHRONO_MINGUODATE

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
	class LocalDate;
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
	class MinguoChronology;
}
namespace __jni_impl::java::time::chrono
{
	class MinguoEra;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}

namespace __jni_impl::java::time::chrono
{
	class MinguoDate : public __JniBaseClass
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
		jint lengthOfMonth();
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
	};
} // namespace __jni_impl::java::time::chrono

#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalDate.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "MinguoChronology.hpp"
#include "MinguoEra.hpp"
#include "../temporal/ValueRange.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	
	// Constructors
	void MinguoDate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.MinguoDate",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MinguoDate::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"()Ljava/time/chrono/MinguoDate;"
		);
	}
	QAndroidJniObject MinguoDate::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"of",
			"(III)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MinguoDate::atTime(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jboolean MinguoDate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MinguoDate::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/MinguoChronology;"
		);
	}
	QAndroidJniObject MinguoDate::getEra()
	{
		return __thiz.callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/MinguoEra;"
		);
	}
	jlong MinguoDate::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint MinguoDate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint MinguoDate::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	QAndroidJniObject MinguoDate::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong MinguoDate::toEpochDay()
	{
		return __thiz.callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring MinguoDate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MinguoDate::until(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.__jniObject().object()
		);
	}
	jlong MinguoDate::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MinguoDate::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/MinguoDate;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class MinguoDate : public __jni_impl::java::time::chrono::MinguoDate
	{
	public:
		MinguoDate(QAndroidJniObject obj) { __thiz = obj; }
		MinguoDate()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_MINGUODATE

