#include "../io/ObjectInputStream.hpp"
#include "./temporal/ValueRange.hpp"
#include "./zone/ZoneRules.hpp"
#include "./ZoneOffset.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject ZoneOffset::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneOffset",
			"MAX",
			"Ljava/time/ZoneOffset;"
		);
	}
	QAndroidJniObject ZoneOffset::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneOffset",
			"MIN",
			"Ljava/time/ZoneOffset;"
		);
	}
	QAndroidJniObject ZoneOffset::UTC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneOffset",
			"UTC",
			"Ljava/time/ZoneOffset;"
		);
	}
	
	// QAndroidJniObject forward
	ZoneOffset::ZoneOffset(QAndroidJniObject obj) : java::time::ZoneId(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ZoneOffset::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	QAndroidJniObject ZoneOffset::of(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	QAndroidJniObject ZoneOffset::ofHours(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHours",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	QAndroidJniObject ZoneOffset::ofHoursMinutes(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutes",
			"(II)Ljava/time/ZoneOffset;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ZoneOffset::ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutesSeconds",
			"(III)Ljava/time/ZoneOffset;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ZoneOffset::ofTotalSeconds(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofTotalSeconds",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	QAndroidJniObject ZoneOffset::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint ZoneOffset::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ZoneOffset::compareTo(java::time::ZoneOffset arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/ZoneOffset;)I",
			arg0.object()
		);
	}
	jboolean ZoneOffset::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ZoneOffset::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jstring ZoneOffset::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ZoneOffset::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	QAndroidJniObject ZoneOffset::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	jint ZoneOffset::getTotalSeconds()
	{
		return callMethod<jint>(
			"getTotalSeconds",
			"()I"
		);
	}
	jint ZoneOffset::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneOffset::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jobject ZoneOffset::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject ZoneOffset::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring ZoneOffset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time

