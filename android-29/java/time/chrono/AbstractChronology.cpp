#include "../../io/ObjectInputStream.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../../util/Locale.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "./AbstractChronology.hpp"

namespace java::time::chrono
{
	// Fields
	
	AbstractChronology::AbstractChronology(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AbstractChronology::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AbstractChronology::compareTo(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/Chronology;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractChronology::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AbstractChronology::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AbstractChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring AbstractChronology::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::chrono

