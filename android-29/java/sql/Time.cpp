#include "../time/Instant.hpp"
#include "../time/LocalTime.hpp"
#include "./Time.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	Time::Time(QAndroidJniObject obj) : java::util::Date(obj) {}
	
	// Constructors
	Time::Time(jlong arg0)
		: java::util::Date(
			"java.sql.Time",
			"(J)V",
			arg0
		) {}
	Time::Time(jint arg0, jint arg1, jint arg2)
		: java::util::Date(
			"java.sql.Time",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
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
	QAndroidJniObject Time::valueOf(java::time::LocalTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/time/LocalTime;)Ljava/sql/Time;",
			arg0.object()
		);
	}
	jint Time::getDate()
	{
		return callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	jint Time::getDay()
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint Time::getMonth()
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint Time::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	void Time::setDate(jint arg0)
	{
		callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	void Time::setMonth(jint arg0)
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void Time::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Time::setYear(jint arg0)
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Time::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Time::toLocalTime()
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring Time::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::sql

