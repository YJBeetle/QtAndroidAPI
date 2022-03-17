#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "../time/Instant.def.hpp"
#include "./Date.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Date::Date()
		: JObject(
			"java.util.Date",
			"()V"
		) {}
	inline Date::Date(JString arg0)
		: JObject(
			"java.util.Date",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Date::Date(jlong arg0)
		: JObject(
			"java.util.Date",
			"(J)V",
			arg0
		) {}
	inline Date::Date(jint arg0, jint arg1, jint arg2)
		: JObject(
			"java.util.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"java.util.Date",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"java.util.Date",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline jlong Date::UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jlong>(
			"java.util.Date",
			"UTC",
			"(IIIIII)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline java::util::Date Date::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.util.Date",
			"from",
			"(Ljava/time/Instant;)Ljava/util/Date;",
			arg0.object()
		);
	}
	inline jlong Date::parse(JString arg0)
	{
		return callStaticMethod<jlong>(
			"java.util.Date",
			"parse",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jboolean Date::after(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline jboolean Date::before(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline JObject Date::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Date::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Date::compareTo(java::util::Date arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.object()
		);
	}
	inline jboolean Date::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Date::getDate() const
	{
		return callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	inline jint Date::getDay() const
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	inline jint Date::getHours() const
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	inline jint Date::getMinutes() const
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	inline jint Date::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	inline jint Date::getSeconds() const
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	inline jlong Date::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline jint Date::getTimezoneOffset() const
	{
		return callMethod<jint>(
			"getTimezoneOffset",
			"()I"
		);
	}
	inline jint Date::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jint Date::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Date::setDate(jint arg0) const
	{
		callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	inline void Date::setHours(jint arg0) const
	{
		callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	inline void Date::setMinutes(jint arg0) const
	{
		callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	inline void Date::setMonth(jint arg0) const
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	inline void Date::setSeconds(jint arg0) const
	{
		callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	inline void Date::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void Date::setYear(jint arg0) const
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	inline JString Date::toGMTString() const
	{
		return callObjectMethod(
			"toGMTString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Instant Date::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline JString Date::toLocaleString() const
	{
		return callObjectMethod(
			"toLocaleString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Date::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

