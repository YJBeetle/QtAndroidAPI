#pragma once

#ifndef JAVA_SQL_DATE
#define JAVA_SQL_DATE

#include "../../__JniBaseClass.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class Instant;
}

namespace __jni_impl::java::sql
{
	class Date : public __jni_impl::java::util::Date
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jlong arg0);
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::time::LocalDate arg0);
		jint getSeconds();
		QAndroidJniObject toInstant();
		void setTime(jlong arg0);
		QAndroidJniObject toLocalDate();
		void setHours(jint arg0);
		jint getHours();
		jint getMinutes();
		void setMinutes(jint arg0);
		void setSeconds(jint arg0);
	};
} // namespace __jni_impl::java::sql

#include "../time/LocalDate.hpp"
#include "../time/Instant.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void Date::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Date",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void Date::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Date",
			"(J)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject Date::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Date::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Date;",
			arg0);
	}
	QAndroidJniObject Date::valueOf(__jni_impl::java::time::LocalDate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/time/LocalDate;)Ljava/sql/Date;",
			arg0.__jniObject().object());
	}
	jint Date::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I");
	}
	QAndroidJniObject Date::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;");
	}
	void Date::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0);
	}
	QAndroidJniObject Date::toLocalDate()
	{
		return __thiz.callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;");
	}
	void Date::setHours(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHours",
			"(I)V",
			arg0);
	}
	jint Date::getHours()
	{
		return __thiz.callMethod<jint>(
			"getHours",
			"()I");
	}
	jint Date::getMinutes()
	{
		return __thiz.callMethod<jint>(
			"getMinutes",
			"()I");
	}
	void Date::setMinutes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0);
	}
	void Date::setSeconds(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class Date : public __jni_impl::java::sql::Date
	{
	public:
		Date(QAndroidJniObject obj) { __thiz = obj; }
		Date(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Date(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_DATE

