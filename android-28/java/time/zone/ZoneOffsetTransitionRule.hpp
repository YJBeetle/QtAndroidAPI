#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../DayOfWeek.def.hpp"
#include "../LocalTime.def.hpp"
#include "../Month.def.hpp"
#include "../ZoneOffset.def.hpp"
#include "./ZoneOffsetTransition.def.hpp"
#include "./ZoneOffsetTransitionRule_TimeDefinition.def.hpp"
#include "./ZoneOffsetTransitionRule.def.hpp"

namespace java::time::zone
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::zone::ZoneOffsetTransitionRule ZoneOffsetTransitionRule::of(java::time::Month arg0, jint arg1, java::time::DayOfWeek arg2, java::time::LocalTime arg3, jboolean arg4, java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, java::time::ZoneOffset arg6, java::time::ZoneOffset arg7, java::time::ZoneOffset arg8)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule",
			"of",
			"(Ljava/time/Month;ILjava/time/DayOfWeek;Ljava/time/LocalTime;ZLjava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransitionRule;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4,
			arg5.object(),
			arg6.object(),
			arg7.object(),
			arg8.object()
		);
	}
	inline java::time::zone::ZoneOffsetTransition ZoneOffsetTransitionRule::createTransition(jint arg0) const
	{
		return callObjectMethod(
			"createTransition",
			"(I)Ljava/time/zone/ZoneOffsetTransition;",
			arg0
		);
	}
	inline jboolean ZoneOffsetTransitionRule::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ZoneOffsetTransitionRule::getDayOfMonthIndicator() const
	{
		return callMethod<jint>(
			"getDayOfMonthIndicator",
			"()I"
		);
	}
	inline java::time::DayOfWeek ZoneOffsetTransitionRule::getDayOfWeek() const
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	inline java::time::LocalTime ZoneOffsetTransitionRule::getLocalTime() const
	{
		return callObjectMethod(
			"getLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	inline java::time::Month ZoneOffsetTransitionRule::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	inline java::time::ZoneOffset ZoneOffsetTransitionRule::getOffsetAfter() const
	{
		return callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::ZoneOffset ZoneOffsetTransitionRule::getOffsetBefore() const
	{
		return callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::ZoneOffset ZoneOffsetTransitionRule::getStandardOffset() const
	{
		return callObjectMethod(
			"getStandardOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule::getTimeDefinition() const
	{
		return callObjectMethod(
			"getTimeDefinition",
			"()Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	inline jint ZoneOffsetTransitionRule::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZoneOffsetTransitionRule::isMidnightEndOfDay() const
	{
		return callMethod<jboolean>(
			"isMidnightEndOfDay",
			"()Z"
		);
	}
	inline JString ZoneOffsetTransitionRule::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::zone

// Base class headers

