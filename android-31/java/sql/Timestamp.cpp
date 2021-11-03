#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../time/Instant.hpp"
#include "../time/LocalDateTime.hpp"
#include "../util/Date.hpp"
#include "./Timestamp.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	Timestamp::Timestamp(QJniObject obj) : java::util::Date(obj) {}
	
	// Constructors
	Timestamp::Timestamp(jlong arg0)
		: java::util::Date(
			"java.sql.Timestamp",
			"(J)V",
			arg0
		) {}
	Timestamp::Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		: java::util::Date(
			"java.sql.Timestamp",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	java::sql::Timestamp Timestamp::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"from",
			"(Ljava/time/Instant;)Ljava/sql/Timestamp;",
			arg0.object()
		);
	}
	java::sql::Timestamp Timestamp::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Timestamp;",
			arg0.object<jstring>()
		);
	}
	java::sql::Timestamp Timestamp::valueOf(java::time::LocalDateTime arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/time/LocalDateTime;)Ljava/sql/Timestamp;",
			arg0.object()
		);
	}
	jboolean Timestamp::after(java::sql::Timestamp arg0)
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	jboolean Timestamp::before(java::sql::Timestamp arg0)
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	jint Timestamp::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Timestamp::compareTo(java::sql::Timestamp arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/sql/Timestamp;)I",
			arg0.object()
		);
	}
	jint Timestamp::compareTo(java::util::Date arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.object()
		);
	}
	jboolean Timestamp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Timestamp::equals(java::sql::Timestamp arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	jint Timestamp::getNanos()
	{
		return callMethod<jint>(
			"getNanos",
			"()I"
		);
	}
	jlong Timestamp::getTime()
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint Timestamp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Timestamp::setNanos(jint arg0)
	{
		callMethod<void>(
			"setNanos",
			"(I)V",
			arg0
		);
	}
	void Timestamp::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	java::time::Instant Timestamp::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	java::time::LocalDateTime Timestamp::toLocalDateTime()
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	JString Timestamp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::sql

