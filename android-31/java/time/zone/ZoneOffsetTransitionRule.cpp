#include "../../io/ObjectInputStream.hpp"
#include "../DayOfWeek.hpp"
#include "../LocalTime.hpp"
#include "../Month.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransition.hpp"
#include "./ZoneOffsetTransitionRule_TimeDefinition.hpp"
#include "./ZoneOffsetTransitionRule.hpp"

namespace java::time::zone
{
	// Fields
	
	// QJniObject forward
	ZoneOffsetTransitionRule::ZoneOffsetTransitionRule(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::zone::ZoneOffsetTransitionRule ZoneOffsetTransitionRule::of(java::time::Month arg0, jint arg1, java::time::DayOfWeek arg2, java::time::LocalTime arg3, jboolean arg4, java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, java::time::ZoneOffset arg6, java::time::ZoneOffset arg7, java::time::ZoneOffset arg8)
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
	java::time::zone::ZoneOffsetTransition ZoneOffsetTransitionRule::createTransition(jint arg0)
	{
		return callObjectMethod(
			"createTransition",
			"(I)Ljava/time/zone/ZoneOffsetTransition;",
			arg0
		);
	}
	jboolean ZoneOffsetTransitionRule::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ZoneOffsetTransitionRule::getDayOfMonthIndicator()
	{
		return callMethod<jint>(
			"getDayOfMonthIndicator",
			"()I"
		);
	}
	java::time::DayOfWeek ZoneOffsetTransitionRule::getDayOfWeek()
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	java::time::LocalTime ZoneOffsetTransitionRule::getLocalTime()
	{
		return callObjectMethod(
			"getLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	java::time::Month ZoneOffsetTransitionRule::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	java::time::ZoneOffset ZoneOffsetTransitionRule::getOffsetAfter()
	{
		return callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	java::time::ZoneOffset ZoneOffsetTransitionRule::getOffsetBefore()
	{
		return callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	java::time::ZoneOffset ZoneOffsetTransitionRule::getStandardOffset()
	{
		return callObjectMethod(
			"getStandardOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	java::time::zone::ZoneOffsetTransitionRule_TimeDefinition ZoneOffsetTransitionRule::getTimeDefinition()
	{
		return callObjectMethod(
			"getTimeDefinition",
			"()Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	jint ZoneOffsetTransitionRule::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneOffsetTransitionRule::isMidnightEndOfDay()
	{
		return callMethod<jboolean>(
			"isMidnightEndOfDay",
			"()Z"
		);
	}
	jstring ZoneOffsetTransitionRule::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::zone

