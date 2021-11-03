#include "../../JString.hpp"
#include "../time/Instant.hpp"
#include "../time/LocalTime.hpp"
#include "./Time.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	Time::Time(QJniObject obj) : java::util::Date(obj) {}
	
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
	java::sql::Time Time::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Time;",
			arg0.object<jstring>()
		);
	}
	java::sql::Time Time::valueOf(java::time::LocalTime arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/time/LocalTime;)Ljava/sql/Time;",
			arg0.object()
		);
	}
	jint Time::getDate() const
	{
		return callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	jint Time::getDay() const
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint Time::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint Time::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	void Time::setDate(jint arg0) const
	{
		callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	void Time::setMonth(jint arg0) const
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void Time::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Time::setYear(jint arg0) const
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	java::time::Instant Time::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	java::time::LocalTime Time::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	JString Time::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::sql

