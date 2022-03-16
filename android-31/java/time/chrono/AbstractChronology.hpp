#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../format/ResolverStyle.def.hpp"
#include "../temporal/ChronoField.def.hpp"
#include "../../util/Locale.def.hpp"
#include "../../util/concurrent/ConcurrentHashMap.def.hpp"
#include "./AbstractChronology.def.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint AbstractChronology::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean AbstractChronology::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AbstractChronology::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject AbstractChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString AbstractChronology::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::chrono

// Base class headers

