#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./temporal/ValueRange.hpp"
#include "./zone/ZoneRules.hpp"
#include "./ZoneOffset.hpp"

namespace java::time
{
	// Fields
	java::time::ZoneOffset ZoneOffset::MAX()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"MAX",
			"Ljava/time/ZoneOffset;"
		);
	}
	java::time::ZoneOffset ZoneOffset::MIN()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"MIN",
			"Ljava/time/ZoneOffset;"
		);
	}
	java::time::ZoneOffset ZoneOffset::UTC()
	{
		return getStaticObjectField(
			"java.time.ZoneOffset",
			"UTC",
			"Ljava/time/ZoneOffset;"
		);
	}
	
	// QAndroidJniObject forward
	ZoneOffset::ZoneOffset(QAndroidJniObject obj) : java::time::ZoneId(obj) {}
	
	// Constructors
	
	// Methods
	java::time::ZoneOffset ZoneOffset::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
	java::time::ZoneOffset ZoneOffset::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneOffset;",
			arg0.object<jstring>()
		);
	}
	java::time::ZoneOffset ZoneOffset::ofHours(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHours",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	java::time::ZoneOffset ZoneOffset::ofHoursMinutes(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutes",
			"(II)Ljava/time/ZoneOffset;",
			arg0,
			arg1
		);
	}
	java::time::ZoneOffset ZoneOffset::ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofHoursMinutesSeconds",
			"(III)Ljava/time/ZoneOffset;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::ZoneOffset ZoneOffset::ofTotalSeconds(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofTotalSeconds",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
	JObject ZoneOffset::adjustInto(JObject arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint ZoneOffset::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
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
	jboolean ZoneOffset::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ZoneOffset::get(JObject arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	JString ZoneOffset::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jlong ZoneOffset::getLong(JObject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::zone::ZoneRules ZoneOffset::getRules()
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
	jboolean ZoneOffset::isSupported(JObject arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	JObject ZoneOffset::query(JObject arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange ZoneOffset::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString ZoneOffset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time

