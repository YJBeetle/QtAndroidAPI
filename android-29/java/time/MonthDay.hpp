#pragma once

#ifndef JAVA_TIME_MONTHDAY
#define JAVA_TIME_MONTHDAY

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
	class MonthDay : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::time::MonthDay arg0);
		jint compareTo(jobject arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject of(__jni_impl::java::time::Month arg0, jint arg1);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getMonthValue();
		jint getDayOfMonth();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::java::time::Month arg0);
		jboolean isAfter(__jni_impl::java::time::MonthDay arg0);
		jboolean isBefore(__jni_impl::java::time::MonthDay arg0);
		QAndroidJniObject getMonth();
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withDayOfMonth(jint arg0);
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now();
		jboolean isValidYear(jint arg0);
		QAndroidJniObject atYear(jint arg0);
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
	void MonthDay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.MonthDay",
			"(V)V");
	}
	
	// Methods
	jint MonthDay::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean MonthDay::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MonthDay::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MonthDay::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint MonthDay::compareTo(__jni_impl::java::time::MonthDay arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/MonthDay;)I",
			arg0.__jniObject().object()
		);
	}
	jint MonthDay::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jlong MonthDay::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jstring MonthDay::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MonthDay::of(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(II)Ljava/time/MonthDay;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MonthDay::of(__jni_impl::java::time::Month arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(Ljava/time/Month;I)Ljava/time/MonthDay;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MonthDay::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/MonthDay;",
			arg0.__jniObject().object()
		);
	}
	jobject MonthDay::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean MonthDay::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/MonthDay;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/MonthDay;",
			arg0
		);
	}
	QAndroidJniObject MonthDay::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jint MonthDay::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint MonthDay::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject MonthDay::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::with(__jni_impl::java::time::Month arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/Month;)Ljava/time/MonthDay;",
			arg0.__jniObject().object()
		);
	}
	jboolean MonthDay::isAfter(__jni_impl::java::time::MonthDay arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/MonthDay;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MonthDay::isBefore(__jni_impl::java::time::MonthDay arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/MonthDay;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	QAndroidJniObject MonthDay::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
	QAndroidJniObject MonthDay::withDayOfMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
	QAndroidJniObject MonthDay::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/Clock;)Ljava/time/MonthDay;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/MonthDay;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MonthDay::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"()Ljava/time/MonthDay;"
		);
	}
	jboolean MonthDay::isValidYear(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidYear",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject MonthDay::atYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"atYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class MonthDay : public __jni_impl::java::time::MonthDay
	{
	public:
		MonthDay(QAndroidJniObject obj) { __thiz = obj; }
		MonthDay()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_MONTHDAY

