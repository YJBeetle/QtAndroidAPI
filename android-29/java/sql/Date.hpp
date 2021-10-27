#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}

namespace __jni_impl::java::sql
{
	class Date : public __jni_impl::java::util::Date
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::time::LocalDate arg0);
		jint getHours();
		jint getMinutes();
		jint getSeconds();
		void setHours(jint arg0);
		void setMinutes(jint arg0);
		void setSeconds(jint arg0);
		void setTime(jlong arg0);
		QAndroidJniObject toInstant();
		QAndroidJniObject toLocalDate();
		jstring toString();
	};
} // namespace __jni_impl::java::sql

#include "../time/Instant.hpp"
#include "../time/LocalDate.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void Date::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Date",
			"(J)V",
			arg0
		);
	}
	void Date::__constructor(jint arg0, jint arg1, jint arg2)
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
	QAndroidJniObject Date::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Date::valueOf(__jni_impl::java::time::LocalDate arg0)
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
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class Date : public __jni_impl::java::sql::Date
	{
	public:
		Date(QAndroidJniObject obj) { __thiz = obj; }
		Date(jlong arg0)
		{
			__constructor(
				arg0);
		}
		Date(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::sql

