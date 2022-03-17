#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../time/Instant.def.hpp"
#include "../time/LocalDateTime.def.hpp"
#include "../util/Date.def.hpp"
#include "./Timestamp.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline Timestamp::Timestamp(jlong arg0)
		: java::util::Date(
			"java.sql.Timestamp",
			"(J)V",
			arg0
		) {}
	inline Timestamp::Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
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
	inline java::sql::Timestamp Timestamp::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"from",
			"(Ljava/time/Instant;)Ljava/sql/Timestamp;",
			arg0.object()
		);
	}
	inline java::sql::Timestamp Timestamp::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Timestamp;",
			arg0.object<jstring>()
		);
	}
	inline java::sql::Timestamp Timestamp::valueOf(java::time::LocalDateTime arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Timestamp",
			"valueOf",
			"(Ljava/time/LocalDateTime;)Ljava/sql/Timestamp;",
			arg0.object()
		);
	}
	inline jboolean Timestamp::after(java::sql::Timestamp arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	inline jboolean Timestamp::before(java::sql::Timestamp arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	inline jint Timestamp::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Timestamp::compareTo(java::sql::Timestamp arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/sql/Timestamp;)I",
			arg0.object()
		);
	}
	inline jint Timestamp::compareTo(java::util::Date arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.object()
		);
	}
	inline jboolean Timestamp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Timestamp::equals(java::sql::Timestamp arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/sql/Timestamp;)Z",
			arg0.object()
		);
	}
	inline jint Timestamp::getNanos() const
	{
		return callMethod<jint>(
			"getNanos",
			"()I"
		);
	}
	inline jlong Timestamp::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline jint Timestamp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Timestamp::setNanos(jint arg0) const
	{
		callMethod<void>(
			"setNanos",
			"(I)V",
			arg0
		);
	}
	inline void Timestamp::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline java::time::Instant Timestamp::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::LocalDateTime Timestamp::toLocalDateTime() const
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline JString Timestamp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::sql

// Base class headers
#include "../util/Date.hpp"

