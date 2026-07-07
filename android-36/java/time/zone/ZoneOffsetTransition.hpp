#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Duration.def.hpp"
#include "../Instant.def.hpp"
#include "../LocalDateTime.def.hpp"
#include "../ZoneOffset.def.hpp"
#include "./ZoneOffsetTransition.def.hpp"

namespace java::time::zone
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::zone::ZoneOffsetTransition ZoneOffsetTransition::of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransition",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint ZoneOffsetTransition::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint ZoneOffsetTransition::compareTo(java::time::zone::ZoneOffsetTransition arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/zone/ZoneOffsetTransition;)I",
			arg0.object()
		);
	}
	inline jboolean ZoneOffsetTransition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::LocalDateTime ZoneOffsetTransition::getDateTimeAfter() const
	{
		return callObjectMethod(
			"getDateTimeAfter",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::LocalDateTime ZoneOffsetTransition::getDateTimeBefore() const
	{
		return callObjectMethod(
			"getDateTimeBefore",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::Duration ZoneOffsetTransition::getDuration() const
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline java::time::Instant ZoneOffsetTransition::getInstant() const
	{
		return callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::ZoneOffset ZoneOffsetTransition::getOffsetAfter() const
	{
		return callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::ZoneOffset ZoneOffsetTransition::getOffsetBefore() const
	{
		return callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline jint ZoneOffsetTransition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZoneOffsetTransition::isGap() const
	{
		return callMethod<jboolean>(
			"isGap",
			"()Z"
		);
	}
	inline jboolean ZoneOffsetTransition::isOverlap() const
	{
		return callMethod<jboolean>(
			"isOverlap",
			"()Z"
		);
	}
	inline jboolean ZoneOffsetTransition::isValidOffset(java::time::ZoneOffset arg0) const
	{
		return callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/ZoneOffset;)Z",
			arg0.object()
		);
	}
	inline jlong ZoneOffsetTransition::toEpochSecond() const
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	inline JString ZoneOffsetTransition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::zone

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::zone;
#endif
