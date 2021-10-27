#pragma once

#ifndef JAVA_SQL_TIMESTAMP
#define JAVA_SQL_TIMESTAMP

#include "../../__JniBaseClass.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::sql
{
	class Timestamp : public __jni_impl::java::util::Date
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static QAndroidJniObject from(__jni_impl::java::time::Instant arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::time::LocalDateTime arg0);
		jboolean after(__jni_impl::java::sql::Timestamp arg0);
		jboolean before(__jni_impl::java::sql::Timestamp arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::sql::Timestamp arg0);
		jint compareTo(__jni_impl::java::util::Date arg0);
		jboolean equals(jobject arg0);
		jboolean equals(__jni_impl::java::sql::Timestamp arg0);
		jint getNanos();
		jlong getTime();
		jint hashCode();
		void setNanos(jint arg0);
		void setTime(jlong arg0);
		QAndroidJniObject toInstant();
		QAndroidJniObject toLocalDateTime();
		jstring toString();
	};
} // namespace __jni_impl::java::sql

#include "../time/Instant.hpp"
#include "../time/LocalDateTime.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void Timestamp::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Timestamp",
			"(J)V",
			arg0
		);
	}
	void Timestamp::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Timestamp",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	
	// Methods
	QAndroidJniObject Timestamp::from(__jni_impl::java::time::Instant arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Timestamp",
			"from",
			"(Ljava/time/Instant;)Ljava/sql/Timestamp;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Timestamp::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Timestamp;",
			arg0
		);
	}
	QAndroidJniObject Timestamp::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Timestamp;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Timestamp::valueOf(__jni_impl::java::time::LocalDateTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/time/LocalDateTime;)Ljava/sql/Timestamp;",
			arg0.__jniObject().object()
		);
	}
	jboolean Timestamp::after(__jni_impl::java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/sql/Timestamp;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Timestamp::before(__jni_impl::java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Ljava/sql/Timestamp;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Timestamp::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Timestamp::compareTo(__jni_impl::java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/sql/Timestamp;)I",
			arg0.__jniObject().object()
		);
	}
	jint Timestamp::compareTo(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Timestamp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Timestamp::equals(__jni_impl::java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/sql/Timestamp;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Timestamp::getNanos()
	{
		return __thiz.callMethod<jint>(
			"getNanos",
			"()I"
		);
	}
	jlong Timestamp::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint Timestamp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Timestamp::setNanos(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNanos",
			"(I)V",
			arg0
		);
	}
	void Timestamp::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Timestamp::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Timestamp::toLocalDateTime()
	{
		return __thiz.callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	jstring Timestamp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class Timestamp : public __jni_impl::java::sql::Timestamp
	{
	public:
		Timestamp(QAndroidJniObject obj) { __thiz = obj; }
		Timestamp(jlong arg0)
		{
			__constructor(
				arg0);
		}
		Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_TIMESTAMP

