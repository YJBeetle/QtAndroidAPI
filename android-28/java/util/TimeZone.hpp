#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../time/ZoneId.def.hpp"
#include "./Date.def.hpp"
#include "./Locale.def.hpp"
#include "./TimeZone.def.hpp"

namespace java::util
{
	// Fields
	inline jint TimeZone::LONG()
	{
		return getStaticField<jint>(
			"java.util.TimeZone",
			"LONG"
		);
	}
	inline jint TimeZone::SHORT()
	{
		return getStaticField<jint>(
			"java.util.TimeZone",
			"SHORT"
		);
	}
	
	// Constructors
	inline TimeZone::TimeZone()
		: JObject(
			"java.util.TimeZone",
			"()V"
		) {}
	
	// Methods
	inline JArray TimeZone::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray TimeZone::getAvailableIDs(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	inline java::util::TimeZone TimeZone::getDefault()
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getDefault",
			"()Ljava/util/TimeZone;"
		);
	}
	inline java::util::TimeZone TimeZone::getTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Ljava/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	inline java::util::TimeZone TimeZone::getTimeZone(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/time/ZoneId;)Ljava/util/TimeZone;",
			arg0.object()
		);
	}
	inline void TimeZone::setDefault(java::util::TimeZone arg0)
	{
		callStaticMethod<void>(
			"java.util.TimeZone",
			"setDefault",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	inline JObject TimeZone::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint TimeZone::getDSTSavings() const
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	inline JString TimeZone::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TimeZone::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString TimeZone::getDisplayName(jboolean arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString TimeZone::getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JString TimeZone::getID() const
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	inline jint TimeZone::getOffset(jlong arg0) const
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	inline jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline jint TimeZone::getRawOffset() const
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	inline jboolean TimeZone::hasSameRules(java::util::TimeZone arg0) const
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.object()
		);
	}
	inline jboolean TimeZone::inDaylightTime(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline jboolean TimeZone::observesDaylightTime() const
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	inline void TimeZone::setID(JString arg0) const
	{
		callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TimeZone::setRawOffset(jint arg0) const
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	inline java::time::ZoneId TimeZone::toZoneId() const
	{
		return callObjectMethod(
			"toZoneId",
			"()Ljava/time/ZoneId;"
		);
	}
	inline jboolean TimeZone::useDaylightTime() const
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace java::util

// Base class headers

