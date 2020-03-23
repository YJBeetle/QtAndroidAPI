#pragma once

#ifndef JAVA_SQL_TIME
#define JAVA_SQL_TIME

#include "../util/Date.hpp"

namespace __jni_impl::java::time
{
	class LocalTime;
}
namespace __jni_impl::java::time
{
	class Instant;
}

namespace __jni_impl::java::sql
{
	class Time : public __jni_impl::java::util::Date
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jlong arg0);
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::time::LocalTime arg0);
		QAndroidJniObject toInstant();
		jint getYear();
		void setTime(jlong arg0);
		jint getDate();
		jint getDay();
		jint getMonth();
		QAndroidJniObject toLocalTime();
		void setDate(jint arg0);
		void setMonth(jint arg0);
		void setYear(jint arg0);
	};
} // namespace __jni_impl::java::sql

#include "../time/LocalTime.hpp"
#include "../time/Instant.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void Time::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Time",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void Time::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Time",
			"(J)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject Time::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Time::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Time;",
			arg0);
	}
	QAndroidJniObject Time::valueOf(__jni_impl::java::time::LocalTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/time/LocalTime;)Ljava/sql/Time;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Time::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;");
	}
	jint Time::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I");
	}
	void Time::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0);
	}
	jint Time::getDate()
	{
		return __thiz.callMethod<jint>(
			"getDate",
			"()I");
	}
	jint Time::getDay()
	{
		return __thiz.callMethod<jint>(
			"getDay",
			"()I");
	}
	jint Time::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I");
	}
	QAndroidJniObject Time::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;");
	}
	void Time::setDate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(I)V",
			arg0);
	}
	void Time::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
			"(I)V",
			arg0);
	}
	void Time::setYear(jint arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class Time : public __jni_impl::java::sql::Time
	{
	public:
		Time(QAndroidJniObject obj) { __thiz = obj; }
		Time(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Time(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_TIME

