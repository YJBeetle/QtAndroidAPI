#include "../../io/ObjectInputStream.hpp"
#include "../Duration.hpp"
#include "../Instant.hpp"
#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransition.hpp"
#include "./ZoneRules.hpp"

namespace java::time::zone
{
	// Fields
	
	ZoneRules::ZoneRules(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ZoneRules::of(java::time::ZoneOffset arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneRules;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::of(java::time::ZoneOffset arg0, java::time::ZoneOffset arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Ljava/time/zone/ZoneRules;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean ZoneRules::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ZoneRules::getDaylightSavings(java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getDaylightSavings",
			"(Ljava/time/Instant;)Ljava/time/Duration;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::getOffset(java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::getOffset(java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"(Ljava/time/LocalDateTime;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::getStandardOffset(java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getStandardOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::getTransition(java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getTransition",
			"(Ljava/time/LocalDateTime;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::getTransitionRules()
	{
		return __thiz.callObjectMethod(
			"getTransitionRules",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ZoneRules::getTransitions()
	{
		return __thiz.callObjectMethod(
			"getTransitions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ZoneRules::getValidOffsets(java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getValidOffsets",
			"(Ljava/time/LocalDateTime;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint ZoneRules::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneRules::isDaylightSavings(java::time::Instant arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isDaylightSavings",
			"(Ljava/time/Instant;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ZoneRules::isFixedOffset()
	{
		return __thiz.callMethod<jboolean>(
			"isFixedOffset",
			"()Z"
		);
	}
	jboolean ZoneRules::isValidOffset(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::nextTransition(java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"nextTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneRules::previousTransition(java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"previousTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object()
		);
	}
	jstring ZoneRules::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::zone

