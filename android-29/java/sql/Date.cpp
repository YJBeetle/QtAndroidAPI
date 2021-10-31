#include "../time/Instant.hpp"
#include "../time/LocalDate.hpp"
#include "./Date.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	Date::Date(QAndroidJniObject obj) : java::util::Date(obj) {}
	
	// Constructors
	Date::Date(jlong arg0)
		: java::util::Date(
			"java.sql.Date",
			"(J)V",
			arg0
		) {}
	Date::Date(jint arg0, jint arg1, jint arg2)
		: java::util::Date(
			"java.sql.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	QAndroidJniObject Date::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Date;",
			arg0
		);
	}
	QAndroidJniObject Date::valueOf(java::time::LocalDate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/time/LocalDate;)Ljava/sql/Date;",
			arg0.object()
		);
	}
	jint Date::getHours()
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Date::getMinutes()
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Date::getSeconds()
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	void Date::setHours(jint arg0)
	{
		callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	void Date::setMinutes(jint arg0)
	{
		callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	void Date::setSeconds(jint arg0)
	{
		callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	void Date::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Date::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Date::toLocalDate()
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	jstring Date::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::sql
