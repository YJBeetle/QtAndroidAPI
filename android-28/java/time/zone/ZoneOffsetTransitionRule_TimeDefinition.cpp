#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransitionRule_TimeDefinition.hpp"

namespace java::time::zone
{
	// Fields
	java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::STANDARD()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"STANDARD",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::UTC()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"UTC",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::WALL()
	{
		return getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"WALL",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	
	// QJniObject forward
	ZoneOffsetTransitionRule_TimeDefinition::ZoneOffsetTransitionRule_TimeDefinition(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule_TimeDefinition::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;",
			arg0
		);
	}
	jarray ZoneOffsetTransitionRule_TimeDefinition::values()
	{
		return callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"values",
			"()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		).object<jarray>();
	}
	java::time::LocalDateTime ZoneOffsetTransitionRule_TimeDefinition::createDateTime(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2)
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

