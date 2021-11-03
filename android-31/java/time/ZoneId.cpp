#include "../io/ObjectInputStream.hpp"
#include "./ZoneOffset.hpp"
#include "./format/TextStyle.hpp"
#include "./zone/ZoneRules.hpp"
#include "../util/Locale.hpp"
#include "./ZoneId.hpp"

namespace java::time
{
	// Fields
	JObject ZoneId::SHORT_IDS()
	{
		return getStaticObjectField(
			"java.time.ZoneId",
			"SHORT_IDS",
			"Ljava/util/Map;"
		);
	}
	
	// QAndroidJniObject forward
	ZoneId::ZoneId(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::ZoneId ZoneId::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;",
			arg0.object()
		);
	}
	JObject ZoneId::getAvailableZoneIds()
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"getAvailableZoneIds",
			"()Ljava/util/Set;"
		);
	}
	java::time::ZoneId ZoneId::of(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneId;",
			arg0
		);
	}
	java::time::ZoneId ZoneId::of(jstring arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;",
			arg0,
			arg1.object()
		);
	}
	java::time::ZoneId ZoneId::ofOffset(jstring arg0, java::time::ZoneOffset arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"ofOffset",
			"(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;",
			arg0,
			arg1.object()
		);
	}
	java::time::ZoneId ZoneId::systemDefault()
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"systemDefault",
			"()Ljava/time/ZoneId;"
		);
	}
	jboolean ZoneId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZoneId::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jstring ZoneId::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::time::zone::ZoneRules ZoneId::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	jint ZoneId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::time::ZoneId ZoneId::normalized()
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/ZoneId;"
		);
	}
	jstring ZoneId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time

