#pragma once

#ifndef JAVA_TIME_DURATION
#define JAVA_TIME_DURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}

namespace __jni_impl::java::time
{
	class Duration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ZERO();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject abs();
		jint compareTo(__jni_impl::java::time::Duration arg0);
		jint compareTo(jobject arg0);
		static QAndroidJniObject of(jlong arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jlong toMillis();
		jlong toNanos();
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		jlong toSeconds();
		jlong getSeconds();
		jint getNano();
		jlong toMinutes();
		jlong toHours();
		jlong toDays();
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plus(__jni_impl::java::time::Duration arg0);
		static QAndroidJniObject ofNanos(jlong arg0);
		static QAndroidJniObject ofSeconds(jlong arg0, jlong arg1);
		static QAndroidJniObject ofSeconds(jlong arg0);
		QAndroidJniObject addTo(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject between(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getUnits();
		QAndroidJniObject negated();
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusMillis(jlong arg0);
		QAndroidJniObject multipliedBy(jlong arg0);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		jboolean isNegative();
		QAndroidJniObject minus(__jni_impl::java::time::Duration arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject ofDays(jlong arg0);
		static QAndroidJniObject ofHours(jlong arg0);
		static QAndroidJniObject ofMinutes(jlong arg0);
		static QAndroidJniObject ofMillis(jlong arg0);
		jboolean isZero();
		QAndroidJniObject withSeconds(jlong arg0);
		QAndroidJniObject withNanos(jint arg0);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusMillis(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		jlong dividedBy(__jni_impl::java::time::Duration arg0);
		QAndroidJniObject dividedBy(jlong arg0);
		QAndroidJniObject subtractFrom(__jni_impl::__JniBaseClass arg0);
		jlong toDaysPart();
		jint toHoursPart();
		jint toMinutesPart();
		jint toSecondsPart();
		jint toMillisPart();
		jint toNanosPart();
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::time

#include "../math/BigInteger.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../math/BigDecimal.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject Duration::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Duration",
			"ZERO",
			"Ljava/time/Duration;"
		);
	}
	
	// Constructors
	void Duration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.Duration",
			"(V)V");
	}
	
	// Methods
	jlong Duration::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Duration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Duration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Duration::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Ljava/time/Duration;"
		);
	}
	jint Duration::compareTo(__jni_impl::java::time::Duration arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/Duration;)I",
			arg0.__jniObject().object()
		);
	}
	jint Duration::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Duration::of(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"of",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Duration;",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::toMillis()
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jlong Duration::toNanos()
	{
		return __thiz.callMethod<jlong>(
			"toNanos",
			"()J"
		);
	}
	QAndroidJniObject Duration::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Duration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong Duration::toSeconds()
	{
		return __thiz.callMethod<jlong>(
			"toSeconds",
			"()J"
		);
	}
	jlong Duration::getSeconds()
	{
		return __thiz.callMethod<jlong>(
			"getSeconds",
			"()J"
		);
	}
	jint Duration::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jlong Duration::toMinutes()
	{
		return __thiz.callMethod<jlong>(
			"toMinutes",
			"()J"
		);
	}
	jlong Duration::toHours()
	{
		return __thiz.callMethod<jlong>(
			"toHours",
			"()J"
		);
	}
	jlong Duration::toDays()
	{
		return __thiz.callMethod<jlong>(
			"toDays",
			"()J"
		);
	}
	QAndroidJniObject Duration::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::plus(__jni_impl::java::time::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::ofNanos(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofSeconds(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(JJ)Ljava/time/Duration;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Duration::ofSeconds(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::addTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::between(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)Ljava/time/Duration;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::getUnits()
	{
		return __thiz.callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Duration::negated()
	{
		return __thiz.callObjectMethod(
			"negated",
			"()Ljava/time/Duration;"
		);
	}
	QAndroidJniObject Duration::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::multipliedBy(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"multipliedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	jboolean Duration::isNegative()
	{
		return __thiz.callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	QAndroidJniObject Duration::minus(__jni_impl::java::time::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::ofDays(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofHours(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofMinutes(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	jboolean Duration::isZero()
	{
		return __thiz.callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	QAndroidJniObject Duration::withSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"withSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::withNanos(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNanos",
			"(I)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	jlong Duration::dividedBy(__jni_impl::java::time::Duration arg0)
	{
		return __thiz.callMethod<jlong>(
			"dividedBy",
			"(Ljava/time/Duration;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::dividedBy(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dividedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::subtractFrom(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::toDaysPart()
	{
		return __thiz.callMethod<jlong>(
			"toDaysPart",
			"()J"
		);
	}
	jint Duration::toHoursPart()
	{
		return __thiz.callMethod<jint>(
			"toHoursPart",
			"()I"
		);
	}
	jint Duration::toMinutesPart()
	{
		return __thiz.callMethod<jint>(
			"toMinutesPart",
			"()I"
		);
	}
	jint Duration::toSecondsPart()
	{
		return __thiz.callMethod<jint>(
			"toSecondsPart",
			"()I"
		);
	}
	jint Duration::toMillisPart()
	{
		return __thiz.callMethod<jint>(
			"toMillisPart",
			"()I"
		);
	}
	jint Duration::toNanosPart()
	{
		return __thiz.callMethod<jint>(
			"toNanosPart",
			"()I"
		);
	}
	QAndroidJniObject Duration::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class Duration : public __jni_impl::java::time::Duration
	{
	public:
		Duration(QAndroidJniObject obj) { __thiz = obj; }
		Duration()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_DURATION

