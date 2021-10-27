#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::java::math
{
	class BigInteger;
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
		static QAndroidJniObject between(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject of(jlong arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject ofDays(jlong arg0);
		static QAndroidJniObject ofHours(jlong arg0);
		static QAndroidJniObject ofMillis(jlong arg0);
		static QAndroidJniObject ofMinutes(jlong arg0);
		static QAndroidJniObject ofNanos(jlong arg0);
		static QAndroidJniObject ofSeconds(jlong arg0);
		static QAndroidJniObject ofSeconds(jlong arg0, jlong arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject abs();
		QAndroidJniObject addTo(__jni_impl::__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::Duration arg0);
		QAndroidJniObject dividedBy(jlong arg0);
		jlong dividedBy(__jni_impl::java::time::Duration arg0);
		jboolean equals(jobject arg0);
		jlong get(__jni_impl::__JniBaseClass arg0);
		jint getNano();
		jlong getSeconds();
		QAndroidJniObject getUnits();
		jint hashCode();
		jboolean isNegative();
		jboolean isZero();
		QAndroidJniObject minus(__jni_impl::java::time::Duration arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMillis(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject multipliedBy(jlong arg0);
		QAndroidJniObject negated();
		QAndroidJniObject plus(__jni_impl::java::time::Duration arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMillis(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject subtractFrom(__jni_impl::__JniBaseClass arg0);
		jlong toDays();
		jlong toDaysPart();
		jlong toHours();
		jint toHoursPart();
		jlong toMillis();
		jint toMillisPart();
		jlong toMinutes();
		jint toMinutesPart();
		jlong toNanos();
		jint toNanosPart();
		jlong toSeconds();
		jint toSecondsPart();
		jstring toString();
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject withNanos(jint arg0);
		QAndroidJniObject withSeconds(jlong arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "../math/BigDecimal.hpp"
#include "../math/BigInteger.hpp"

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
	QAndroidJniObject Duration::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Duration;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Duration::ofMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofMillis",
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
	QAndroidJniObject Duration::ofNanos(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofNanos",
			"(J)Ljava/time/Duration;",
			arg0
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
	QAndroidJniObject Duration::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Ljava/time/Duration;"
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
	jint Duration::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	QAndroidJniObject Duration::dividedBy(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dividedBy",
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
	jboolean Duration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Duration::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object()
		);
	}
	jint Duration::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jlong Duration::getSeconds()
	{
		return __thiz.callMethod<jlong>(
			"getSeconds",
			"()J"
		);
	}
	QAndroidJniObject Duration::getUnits()
	{
		return __thiz.callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	jint Duration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isNegative()
	{
		return __thiz.callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	jboolean Duration::isZero()
	{
		return __thiz.callMethod<jboolean>(
			"isZero",
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
	QAndroidJniObject Duration::minusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMillis",
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
	QAndroidJniObject Duration::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
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
	QAndroidJniObject Duration::multipliedBy(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"multipliedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::negated()
	{
		return __thiz.callObjectMethod(
			"negated",
			"()Ljava/time/Duration;"
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
	QAndroidJniObject Duration::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject Duration::plusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMillis",
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
	QAndroidJniObject Duration::subtractFrom(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::toDays()
	{
		return __thiz.callMethod<jlong>(
			"toDays",
			"()J"
		);
	}
	jlong Duration::toDaysPart()
	{
		return __thiz.callMethod<jlong>(
			"toDaysPart",
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
	jint Duration::toHoursPart()
	{
		return __thiz.callMethod<jint>(
			"toHoursPart",
			"()I"
		);
	}
	jlong Duration::toMillis()
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jint Duration::toMillisPart()
	{
		return __thiz.callMethod<jint>(
			"toMillisPart",
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
	jint Duration::toMinutesPart()
	{
		return __thiz.callMethod<jint>(
			"toMinutesPart",
			"()I"
		);
	}
	jlong Duration::toNanos()
	{
		return __thiz.callMethod<jlong>(
			"toNanos",
			"()J"
		);
	}
	jint Duration::toNanosPart()
	{
		return __thiz.callMethod<jint>(
			"toNanosPart",
			"()I"
		);
	}
	jlong Duration::toSeconds()
	{
		return __thiz.callMethod<jlong>(
			"toSeconds",
			"()J"
		);
	}
	jint Duration::toSecondsPart()
	{
		return __thiz.callMethod<jint>(
			"toSecondsPart",
			"()I"
		);
	}
	jstring Duration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Duration::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Duration::withSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"withSeconds",
			"(J)Ljava/time/Duration;",
			arg0
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

