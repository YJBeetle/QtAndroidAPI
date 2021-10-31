#include "../time/Instant.hpp"
#include "../time/LocalDateTime.hpp"
#include "../util/Date.hpp"
#include "./Timestamp.hpp"

namespace java::sql
{
	// Fields
	
	Timestamp::Timestamp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Timestamp::Timestamp(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.Timestamp",
			"(J)V",
			arg0
		);
	}
	Timestamp::Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
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
	QAndroidJniObject Timestamp::from(java::time::Instant arg0)
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
	QAndroidJniObject Timestamp::valueOf(java::time::LocalDateTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/time/LocalDateTime;)Ljava/sql/Timestamp;",
			arg0.__jniObject().object()
		);
	}
	jboolean Timestamp::after(java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/sql/Timestamp;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Timestamp::before(java::sql::Timestamp arg0)
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
	jint Timestamp::compareTo(java::sql::Timestamp arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/sql/Timestamp;)I",
			arg0.__jniObject().object()
		);
	}
	jint Timestamp::compareTo(java::util::Date arg0)
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
	jboolean Timestamp::equals(java::sql::Timestamp arg0)
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
} // namespace java::sql

