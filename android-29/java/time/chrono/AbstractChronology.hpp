#pragma once

#ifndef JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY
#define JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}
namespace __jni_impl::java::time::temporal
{
	class ChronoField;
}

namespace __jni_impl::java::time::chrono
{
	class AbstractChronology : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(__jni_impl::__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1);
	};
} // namespace __jni_impl::java::time::chrono

#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../util/Locale.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	
	// Constructors
	void AbstractChronology::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.AbstractChronology",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractChronology::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AbstractChronology::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AbstractChronology::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AbstractChronology::compareTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/Chronology;)I",
			arg0.__jniObject().object()
		);
	}
	jint AbstractChronology::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject AbstractChronology::resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class AbstractChronology : public __jni_impl::java::time::chrono::AbstractChronology
	{
	public:
		AbstractChronology(QAndroidJniObject obj) { __thiz = obj; }
		AbstractChronology()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY

