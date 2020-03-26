#pragma once

#ifndef JAVA_TIME_INSTANT
#define JAVA_TIME_INSTANT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class OffsetDateTime;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::time
{
	class Clock;
}

namespace __jni_impl::java::time
{
	class Instant : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EPOCH();
		static QAndroidJniObject MIN();
		static QAndroidJniObject MAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::time::Instant arg0);
		jint compareTo(jobject arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getNano();
		jlong getEpochSecond();
		static QAndroidJniObject ofEpochSecond(jlong arg0);
		static QAndroidJniObject ofEpochSecond(jlong arg0, jlong arg1);
		static QAndroidJniObject ofEpochMilli(jlong arg0);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusMillis(jlong arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusMillis(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jboolean isAfter(__jni_impl::java::time::Instant arg0);
		jboolean isBefore(__jni_impl::java::time::Instant arg0);
		QAndroidJniObject atZone(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject atOffset(__jni_impl::java::time::ZoneOffset arg0);
		jlong toEpochMilli();
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "ZonedDateTime.hpp"
#include "ZoneId.hpp"
#include "OffsetDateTime.hpp"
#include "ZoneOffset.hpp"
#include "Clock.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject Instant::EPOCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"EPOCH",
			"Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Instant::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"MIN",
			"Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Instant::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"MAX",
			"Ljava/time/Instant;"
		);
	}
	
	// Constructors
	void Instant::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.Instant",
			"(V)V");
	}
	
	// Methods
	jint Instant::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Instant::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Instant::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Instant::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Instant::compareTo(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/Instant;)I",
			arg0.__jniObject().object()
		);
	}
	jint Instant::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jlong Instant::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
	jobject Instant::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean Instant::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jint Instant::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jlong Instant::getEpochSecond()
	{
		return __thiz.callMethod<jlong>(
			"getEpochSecond",
			"()J"
		);
	}
	QAndroidJniObject Instant::ofEpochSecond(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::ofEpochSecond(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(JJ)Ljava/time/Instant;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Instant::ofEpochMilli(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochMilli",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong Instant::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::plusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::minusMillis(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	QAndroidJniObject Instant::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Instant;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Instant::isAfter(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Instant;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Instant::isBefore(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Instant;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::atZone(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instant::atOffset(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	jlong Instant::toEpochMilli()
	{
		return __thiz.callMethod<jlong>(
			"toEpochMilli",
			"()J"
		);
	}
	QAndroidJniObject Instant::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Instant::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Instant;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class Instant : public __jni_impl::java::time::Instant
	{
	public:
		Instant(QAndroidJniObject obj) { __thiz = obj; }
		Instant()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_INSTANT

