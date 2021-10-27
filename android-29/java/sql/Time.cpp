#include "../time/Instant.hpp"
#include "../time/LocalTime.hpp"
#include "./Time.hpp"

namespace java::sql
{
	// Fields
	
	Time::Time(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Time::Time(jlong &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Time",
			"(J)V",
			arg0
		);
	}
	Time::Time(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Time",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Time::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Time;",
			arg0
		);
	}
	QAndroidJniObject Time::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Time;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Time::valueOf(java::time::LocalTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/time/LocalTime;)Ljava/sql/Time;",
			arg0.__jniObject().object()
		);
	}
	jint Time::getDate()
	{
		return __thiz.callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	jint Time::getDay()
	{
		return __thiz.callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint Time::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint Time::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	void Time::setDate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	void Time::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void Time::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Time::setYear(jint arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Time::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Time::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring Time::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::sql

