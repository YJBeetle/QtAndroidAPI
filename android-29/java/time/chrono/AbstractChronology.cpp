#include "../../io/ObjectInputStream.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../../util/Locale.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "./AbstractChronology.hpp"

namespace java::time::chrono
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractChronology::AbstractChronology(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint AbstractChronology::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AbstractChronology::compareTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/Chronology;)I",
			arg0.object()
		);
	}
	jboolean AbstractChronology::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AbstractChronology::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AbstractChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring AbstractChronology::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::chrono

