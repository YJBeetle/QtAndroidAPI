#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ZoneOffset.def.hpp"
#include "./format/TextStyle.def.hpp"
#include "./zone/ZoneRules.def.hpp"
#include "../util/Locale.def.hpp"
#include "./ZoneId.def.hpp"

namespace java::time
{
	// Fields
	inline JObject ZoneId::SHORT_IDS()
	{
		return getStaticObjectField(
			"java.time.ZoneId",
			"SHORT_IDS",
			"Ljava/util/Map;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::ZoneId ZoneId::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;",
			arg0.object()
		);
	}
	inline JObject ZoneId::getAvailableZoneIds()
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"getAvailableZoneIds",
			"()Ljava/util/Set;"
		);
	}
	inline java::time::ZoneId ZoneId::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneId;",
			arg0.object<jstring>()
		);
	}
	inline java::time::ZoneId ZoneId::of(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::time::ZoneId ZoneId::ofOffset(JString arg0, java::time::ZoneOffset arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"ofOffset",
			"(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::time::ZoneId ZoneId::systemDefault()
	{
		return callStaticObjectMethod(
			"java.time.ZoneId",
			"systemDefault",
			"()Ljava/time/ZoneId;"
		);
	}
	inline jboolean ZoneId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ZoneId::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString ZoneId::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::zone::ZoneRules ZoneId::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	inline jint ZoneId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::time::ZoneId ZoneId::normalized() const
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/ZoneId;"
		);
	}
	inline JString ZoneId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
