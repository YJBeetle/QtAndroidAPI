#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	java::time::ZoneId ZoneId::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneId;",
			arg0.object<jstring>()
		);
	}
	java::time::ZoneId ZoneId::of(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::time::ZoneId ZoneId::ofOffset(JString arg0, java::time::ZoneOffset arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"ofOffset",
			"(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;",
			arg0.object<jstring>(),
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
	jboolean ZoneId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ZoneId::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	JString ZoneId::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	java::time::zone::ZoneRules ZoneId::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	jint ZoneId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::time::ZoneId ZoneId::normalized() const
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/ZoneId;"
		);
	}
	JString ZoneId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time

