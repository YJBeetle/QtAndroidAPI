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
	class JapaneseChronology;
}
namespace __jni_impl::java::time::chrono
{
	class JapaneseEra;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}

namespace __jni_impl::java::time::chrono
{
	class JapaneseDate : public __JniBaseClass
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
		static QAndroidJniObject of(__jni_impl::java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject atTime(__jni_impl::java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getChronology();
		QAndroidJniObject getEra();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint hashCode();
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
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
	};
} // namespace __jni_impl::java::time::chrono

#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../LocalDate.hpp"
#include "../LocalTime.hpp"
#include "../ZoneId.hpp"
#include "JapaneseChronology.hpp"
#include "JapaneseEra.hpp"
#include "../temporal/ValueRange.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	
	// Constructors
	void JapaneseDate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.JapaneseDate",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject JapaneseDate::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
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
	QAndroidJniObject JapaneseDate::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
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
	QAndroidJniObject JapaneseDate::of(__jni_impl::java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(Ljava/time/chrono/JapaneseEra;III)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject JapaneseDate::atTime(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jboolean JapaneseDate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject JapaneseDate::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/JapaneseChronology;"
		);
	}
	QAndroidJniObject JapaneseDate::getEra()
	{
		return __thiz.callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/JapaneseEra;"
		);
	}
	jlong JapaneseDate::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint JapaneseDate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JapaneseDate::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	jint JapaneseDate::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint JapaneseDate::lengthOfYear()
	{
		return __thiz.callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	QAndroidJniObject JapaneseDate::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong JapaneseDate::toEpochDay()
	{
		return __thiz.callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jstring JapaneseDate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JapaneseDate::until(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.__jniObject().object()
		);
	}
	jlong JapaneseDate::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseDate::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class JapaneseDate : public __jni_impl::java::time::chrono::JapaneseDate
	{
	public:
		JapaneseDate(QAndroidJniObject obj) { __thiz = obj; }
		JapaneseDate()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

