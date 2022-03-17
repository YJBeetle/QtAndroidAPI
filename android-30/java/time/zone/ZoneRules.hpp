#pragma once

#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Duration.def.hpp"
#include "../Instant.def.hpp"
#include "../LocalDateTime.def.hpp"
#include "../ZoneOffset.def.hpp"
#include "./ZoneOffsetTransition.def.hpp"
#include "./ZoneRules.def.hpp"

namespace java::time::zone
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::zone::ZoneRules ZoneRules::of(java::time::ZoneOffset arg0)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneRules;",
			arg0.object()
		);
	}
	inline java::time::zone::ZoneRules ZoneRules::of(java::time::ZoneOffset arg0, java::time::ZoneOffset arg1, JObject arg2, JObject arg3, JObject arg4)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Ljava/time/zone/ZoneRules;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline jboolean ZoneRules::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Duration ZoneRules::getDaylightSavings(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"getDaylightSavings",
			"(Ljava/time/Instant;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	inline java::time::ZoneOffset ZoneRules::getOffset(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"getOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	inline java::time::ZoneOffset ZoneRules::getOffset(java::time::LocalDateTime arg0) const
	{
		return callObjectMethod(
			"getOffset",
			"(Ljava/time/LocalDateTime;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	inline java::time::ZoneOffset ZoneRules::getStandardOffset(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"getStandardOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	inline java::time::zone::ZoneOffsetTransition ZoneRules::getTransition(java::time::LocalDateTime arg0) const
	{
		return callObjectMethod(
			"getTransition",
			"(Ljava/time/LocalDateTime;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.object()
		);
	}
	inline JObject ZoneRules::getTransitionRules() const
	{
		return callObjectMethod(
			"getTransitionRules",
			"()Ljava/util/List;"
		);
	}
	inline JObject ZoneRules::getTransitions() const
	{
		return callObjectMethod(
			"getTransitions",
			"()Ljava/util/List;"
		);
	}
	inline JObject ZoneRules::getValidOffsets(java::time::LocalDateTime arg0) const
	{
		return callObjectMethod(
			"getValidOffsets",
			"(Ljava/time/LocalDateTime;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jint ZoneRules::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZoneRules::isDaylightSavings(java::time::Instant arg0) const
	{
		return callMethod<jboolean>(
			"isDaylightSavings",
			"(Ljava/time/Instant;)Z",
			arg0.object()
		);
	}
	inline jboolean ZoneRules::isFixedOffset() const
	{
		return callMethod<jboolean>(
			"isFixedOffset",
			"()Z"
		);
	}
	inline jboolean ZoneRules::isValidOffset(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1) const
	{
		return callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::zone::ZoneOffsetTransition ZoneRules::nextTransition(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"nextTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.object()
		);
	}
	inline java::time::zone::ZoneOffsetTransition ZoneRules::previousTransition(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"previousTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.object()
		);
	}
	inline JString ZoneRules::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::zone

// Base class headers

