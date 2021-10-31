#include "../time/Instant.hpp"
#include "../time/LocalDate.hpp"
#include "./Date.hpp"

namespace java::sql
{
	// Fields
	
	Date::Date(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Date::Date(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Date",
			"(J)V",
			arg0
		);
	}
	Date::Date(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
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
			arg0.__jniObject().object()
		);
	}
	jint Date::getHours()
	{
		return __thiz.callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Date::getMinutes()
	{
		return __thiz.callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Date::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	void Date::setHours(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	void Date::setMinutes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	void Date::setSeconds(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	void Date::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Date::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Date::toLocalDate()
	{
		return __thiz.callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	jstring Date::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::sql

