#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Date.def.hpp"
#include "./TimeZone.def.hpp"
#include "./SimpleTimeZone.def.hpp"

namespace java::util
{
	// Fields
	inline jint SimpleTimeZone::STANDARD_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"STANDARD_TIME"
		);
	}
	inline jint SimpleTimeZone::UTC_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"UTC_TIME"
		);
	}
	inline jint SimpleTimeZone::WALL_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"WALL_TIME"
		);
	}
	
	// Constructors
	inline SimpleTimeZone::SimpleTimeZone(jint arg0, JString arg1)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline SimpleTimeZone::SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIII)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		) {}
	inline SimpleTimeZone::SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIII)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		) {}
	inline SimpleTimeZone::SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIIIII)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12
		) {}
	
	// Methods
	inline JObject SimpleTimeZone::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean SimpleTimeZone::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SimpleTimeZone::getDSTSavings() const
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	inline jint SimpleTimeZone::getOffset(jlong arg0) const
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	inline jint SimpleTimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		return callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline jint SimpleTimeZone::getRawOffset() const
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	inline jboolean SimpleTimeZone::hasSameRules(java::util::TimeZone arg0) const
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.object()
		);
	}
	inline jint SimpleTimeZone::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SimpleTimeZone::inDaylightTime(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline jboolean SimpleTimeZone::observesDaylightTime() const
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	inline void SimpleTimeZone::setDSTSavings(jint arg0) const
	{
		callMethod<void>(
			"setDSTSavings",
			"(I)V",
			arg0
		);
	}
	inline void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setEndRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setEndRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const
	{
		callMethod<void>(
			"setEndRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void SimpleTimeZone::setRawOffset(jint arg0) const
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	inline void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setStartRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setStartRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const
	{
		callMethod<void>(
			"setStartRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void SimpleTimeZone::setStartYear(jint arg0) const
	{
		callMethod<void>(
			"setStartYear",
			"(I)V",
			arg0
		);
	}
	inline JString SimpleTimeZone::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SimpleTimeZone::useDaylightTime() const
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace java::util

// Base class headers
#include "./TimeZone.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
