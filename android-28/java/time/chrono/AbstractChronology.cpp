#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../../util/Locale.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "./AbstractChronology.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	jint AbstractChronology::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractChronology::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AbstractChronology::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject AbstractChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	JString AbstractChronology::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::chrono

