#include "../../io/ObjectInputStream.hpp"
#include "../Duration.hpp"
#include "../Instant.hpp"
#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransition.hpp"

namespace java::time::zone
{
	// Fields
	
	// QJniObject forward
	ZoneOffsetTransition::ZoneOffsetTransition(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::zone::ZoneOffsetTransition ZoneOffsetTransition::of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2)
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
	jint ZoneOffsetTransition::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ZoneOffsetTransition::compareTo(java::time::zone::ZoneOffsetTransition arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/zone/ZoneOffsetTransition;)I",
			arg0.object()
		);
	}
	jboolean ZoneOffsetTransition::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::time::LocalDateTime ZoneOffsetTransition::getDateTimeAfter()
	{
		return callObjectMethod(
			"getDateTimeAfter",
			"()Ljava/time/LocalDateTime;"
		);
	}
	java::time::LocalDateTime ZoneOffsetTransition::getDateTimeBefore()
	{
		return callObjectMethod(
			"getDateTimeBefore",
			"()Ljava/time/LocalDateTime;"
		);
	}
	java::time::Duration ZoneOffsetTransition::getDuration()
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	java::time::Instant ZoneOffsetTransition::getInstant()
	{
		return callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	java::time::ZoneOffset ZoneOffsetTransition::getOffsetAfter()
	{
		return callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	java::time::ZoneOffset ZoneOffsetTransition::getOffsetBefore()
	{
		return callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint ZoneOffsetTransition::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneOffsetTransition::isGap()
	{
		return callMethod<jboolean>(
			"isGap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isOverlap()
	{
		return callMethod<jboolean>(
			"isOverlap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isValidOffset(java::time::ZoneOffset arg0)
	{
		return callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/ZoneOffset;)Z",
			arg0.object()
		);
	}
	jlong ZoneOffsetTransition::toEpochSecond()
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	jstring ZoneOffsetTransition::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::zone

