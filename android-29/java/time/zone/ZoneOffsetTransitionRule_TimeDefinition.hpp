#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../LocalDateTime.def.hpp"
#include "../ZoneOffset.def.hpp"
#include "./ZoneOffsetTransitionRule_TimeDefinition.def.hpp"

namespace java::time::zone
{
	// Fields
	inline java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::STANDARD()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"STANDARD",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	inline java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::UTC()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"UTC",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	inline java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::WALL()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"WALL",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;",
			arg0.object<jstring>()
		);
	}
	inline JArray ZoneOffsetTransitionRule_TimeDefinition::values()
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"values",
			"()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	inline java::time::LocalDateTime ZoneOffsetTransitionRule_TimeDefinition::createDateTime(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2) const
	{
		return callObjectMethod(
			"createDateTime",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace java::time::zone

// Base class headers
#include "../../lang/Enum.hpp"

