#pragma once

#ifndef JAVA_TIME_YEARMONTH
#define JAVA_TIME_YEARMONTH

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
namespace __jni_impl::java::time
{
	class Month;
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
	class Clock;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}

namespace __jni_impl::java::time
{
	class YearMonth : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::time::YearMonth arg0);
		jint compareTo(jobject arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(jint arg0, __jni_impl::java::time::Month arg1);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getYear();
		jint getMonthValue();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject plusYears(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		jboolean isAfter(__jni_impl::java::time::YearMonth arg0);
		jboolean isBefore(__jni_impl::java::time::YearMonth arg0);
		QAndroidJniObject getMonth();
		QAndroidJniObject withYear(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now();
		jboolean isLeapYear();
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject atDay(jint arg0);
		jboolean isValidDay(jint arg0);
		QAndroidJniObject atEndOfMonth();
	};
} // namespace __jni_impl::java::time

#include "format/DateTimeFormatter.hpp"
#include "Month.hpp"
#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "Clock.hpp"
#include "ZoneId.hpp"
#include "LocalDate.hpp"

namespace __jni_impl::java::time
{
	// Fields
	
	// Constructors
	void YearMonth::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.YearMonth",
			"(V)V");
	}
	
	// Methods
	jint YearMonth::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object());
	}
	jboolean YearMonth::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject YearMonth::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint YearMonth::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint YearMonth::compareTo(__jni_impl::java::time::YearMonth arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/YearMonth;)I",
			arg0.__jniObject().object());
	}
	jint YearMonth::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jlong YearMonth::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::of(jint arg0, __jni_impl::java::time::Month arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(ILjava/time/Month;)Ljava/time/YearMonth;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject YearMonth::of(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(II)Ljava/time/YearMonth;",
			arg0,
			arg1);
	}
	QAndroidJniObject YearMonth::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jboolean YearMonth::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/YearMonth;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject YearMonth::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/YearMonth;",
			arg0);
	}
	QAndroidJniObject YearMonth::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object());
	}
	jint YearMonth::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I");
	}
	jint YearMonth::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I");
	}
	QAndroidJniObject YearMonth::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.__jniObject().object());
	}
	jlong YearMonth::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject YearMonth::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject YearMonth::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/YearMonth;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject YearMonth::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/YearMonth;",
			arg0);
	}
	QAndroidJniObject YearMonth::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0);
	}
	jboolean YearMonth::isAfter(__jni_impl::java::time::YearMonth arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/YearMonth;)Z",
			arg0.__jniObject().object());
	}
	jboolean YearMonth::isBefore(__jni_impl::java::time::YearMonth arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/YearMonth;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;");
	}
	QAndroidJniObject YearMonth::withYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYear",
			"(I)Ljava/time/YearMonth;",
			arg0);
	}
	QAndroidJniObject YearMonth::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/YearMonth;",
			arg0);
	}
	jint YearMonth::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I");
	}
	jint YearMonth::lengthOfYear()
	{
		return __thiz.callMethod<jint>(
			"lengthOfYear",
			"()I");
	}
	QAndroidJniObject YearMonth::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/Clock;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/YearMonth;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject YearMonth::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"()Ljava/time/YearMonth;");
	}
	jboolean YearMonth::isLeapYear()
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"()Z");
	}
	QAndroidJniObject YearMonth::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/YearMonth;",
			arg0);
	}
	QAndroidJniObject YearMonth::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0);
	}
	QAndroidJniObject YearMonth::atDay(jint arg0)
	{
		return __thiz.callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0);
	}
	jboolean YearMonth::isValidDay(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidDay",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject YearMonth::atEndOfMonth()
	{
		return __thiz.callObjectMethod(
			"atEndOfMonth",
			"()Ljava/time/LocalDate;");
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class YearMonth : public __jni_impl::java::time::YearMonth
	{
	public:
		YearMonth(QAndroidJniObject obj) { __thiz = obj; }
		YearMonth()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_YEARMONTH

