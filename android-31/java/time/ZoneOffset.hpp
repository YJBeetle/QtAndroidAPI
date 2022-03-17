#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./zone/ZoneRules.def.hpp"
#include "./ZoneOffset.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::ZoneOffset ZoneOffset::MAX()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"MAX",
			"Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::ZoneOffset ZoneOffset::MIN()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"MIN",
			"Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::ZoneOffset ZoneOffset::UTC()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"UTC",
			"Ljava/time/ZoneOffset;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::ZoneOffset ZoneOffset::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	inline java::time::ZoneOffset ZoneOffset::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneOffset;",
			arg0.object<jstring>()
		);
	}
	inline java::time::ZoneOffset ZoneOffset::ofHours(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHours",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	inline java::time::ZoneOffset ZoneOffset::ofHoursMinutes(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutes",
			"(II)Ljava/time/ZoneOffset;",
			arg0,
			arg1
		);
	}
	inline java::time::ZoneOffset ZoneOffset::ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutesSeconds",
			"(III)Ljava/time/ZoneOffset;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::ZoneOffset ZoneOffset::ofTotalSeconds(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofTotalSeconds",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	inline JObject ZoneOffset::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline jint ZoneOffset::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint ZoneOffset::compareTo(java::time::ZoneOffset arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/ZoneOffset;)I",
			arg0.object()
		);
	}
	inline jboolean ZoneOffset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ZoneOffset::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline JString ZoneOffset::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ZoneOffset::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline java::time::zone::ZoneRules ZoneOffset::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	inline jint ZoneOffset::getTotalSeconds() const
	{
		return callMethod<jint>(
			"getTotalSeconds",
			"()I"
		);
	}
	inline jint ZoneOffset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZoneOffset::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline JObject ZoneOffset::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange ZoneOffset::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString ZoneOffset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time

// Base class headers
#include "./ZoneId.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
