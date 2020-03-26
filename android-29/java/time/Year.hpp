#pragma once

#ifndef JAVA_TIME_YEAR
#define JAVA_TIME_YEAR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
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
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class MonthDay;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class YearMonth;
}
namespace __jni_impl::java::time
{
	class Month;
}

namespace __jni_impl::java::time
{
	class Year : public __JniBaseClass
	{
	public:
		// Fields
		static jint MIN_VALUE();
		static jint MAX_VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jint length();
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::Year arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint getValue();
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject plusYears(jlong arg0);
		jboolean isAfter(__jni_impl::java::time::Year arg0);
		jboolean isBefore(__jni_impl::java::time::Year arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		QAndroidJniObject minusYears(jlong arg0);
		jboolean isLeap();
		static jboolean isLeap(jlong arg0);
		jboolean isValidMonthDay(__jni_impl::java::time::MonthDay arg0);
		QAndroidJniObject atDay(jint arg0);
		QAndroidJniObject atMonth(__jni_impl::java::time::Month arg0);
		QAndroidJniObject atMonth(jint arg0);
		QAndroidJniObject atMonthDay(__jni_impl::java::time::MonthDay arg0);
	};
} // namespace __jni_impl::java::time

#include "format/DateTimeFormatter.hpp"
#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "ZoneId.hpp"
#include "Clock.hpp"
#include "MonthDay.hpp"
#include "LocalDate.hpp"
#include "YearMonth.hpp"
#include "Month.hpp"

namespace __jni_impl::java::time
{
	// Fields
	jint Year::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.time.Year",
			"MIN_VALUE"
		);
	}
	jint Year::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.time.Year",
			"MAX_VALUE"
		);
	}
	
	// Constructors
	void Year::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.Year",
			"(V)V");
	}
	
	// Methods
	jint Year::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Year::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Year::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring Year::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Year::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Year::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Year::compareTo(__jni_impl::java::time::Year arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/Year;)I",
			arg0.__jniObject().object()
		);
	}
	jlong Year::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint Year::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jstring Year::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Year::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"of",
			"(I)Ljava/time/Year;",
			arg0
		);
	}
	QAndroidJniObject Year::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	jobject Year::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean Year::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalUnit;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/Year;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Year::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Year;",
			arg0
		);
	}
	QAndroidJniObject Year::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong Year::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Year::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Year::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Year;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Year::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	jboolean Year::isAfter(__jni_impl::java::time::Year arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Year;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Year::isBefore(__jni_impl::java::time::Year arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Year;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"()Ljava/time/Year;"
		);
	}
	QAndroidJniObject Year::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Year;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	jboolean Year::isLeap()
	{
		return __thiz.callMethod<jboolean>(
			"isLeap",
			"()Z"
		);
	}
	jboolean Year::isLeap(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.time.Year",
			"isLeap",
			"(J)Z",
			arg0
		);
	}
	jboolean Year::isValidMonthDay(__jni_impl::java::time::MonthDay arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidMonthDay",
			"(Ljava/time/MonthDay;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::atDay(jint arg0)
	{
		return __thiz.callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject Year::atMonth(__jni_impl::java::time::Month arg0)
	{
		return __thiz.callObjectMethod(
			"atMonth",
			"(Ljava/time/Month;)Ljava/time/YearMonth;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Year::atMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"atMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	QAndroidJniObject Year::atMonthDay(__jni_impl::java::time::MonthDay arg0)
	{
		return __thiz.callObjectMethod(
			"atMonthDay",
			"(Ljava/time/MonthDay;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class Year : public __jni_impl::java::time::Year
	{
	public:
		Year(QAndroidJniObject obj) { __thiz = obj; }
		Year()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_YEAR

