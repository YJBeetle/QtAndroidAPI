#include "../../io/ObjectInputStream.hpp"
#include "../Duration.hpp"
#include "../Instant.hpp"
#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransition.hpp"

namespace java::time::zone
{
	// Fields
	
	ZoneOffsetTransition::ZoneOffsetTransition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ZoneOffsetTransition::of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransition",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint ZoneOffsetTransition::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ZoneOffsetTransition::compareTo(java::time::zone::ZoneOffsetTransition arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/zone/ZoneOffsetTransition;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ZoneOffsetTransition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDateTimeAfter()
	{
		return __thiz.callObjectMethod(
			"getDateTimeAfter",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDateTimeBefore()
	{
		return __thiz.callObjectMethod(
			"getDateTimeBefore",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDuration()
	{
		return __thiz.callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getInstant()
	{
		return __thiz.callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getOffsetAfter()
	{
		return __thiz.callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getOffsetBefore()
	{
		return __thiz.callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint ZoneOffsetTransition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneOffsetTransition::isGap()
	{
		return __thiz.callMethod<jboolean>(
			"isGap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"isOverlap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isValidOffset(java::time::ZoneOffset arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/ZoneOffset;)Z",
			arg0.__jniObject().object()
		);
	}
	jlong ZoneOffsetTransition::toEpochSecond()
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	jstring ZoneOffsetTransition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::zone

