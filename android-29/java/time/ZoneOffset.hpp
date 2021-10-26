#pragma once

#ifndef JAVA_TIME_ZONEOFFSET
#define JAVA_TIME_ZONEOFFSET

#include "../../__JniBaseClass.hpp"
#include "ZoneId.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time::zone
{
	class ZoneRules;
}

namespace __jni_impl::java::time
{
	class ZoneOffset : public __jni_impl::java::time::ZoneId
	{
	public:
		// Fields
		static QAndroidJniObject UTC();
		static QAndroidJniObject MIN();
		static QAndroidJniObject MAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::time::ZoneOffset arg0);
		jint compareTo(jobject arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject of(jstring arg0);
		static QAndroidJniObject of(const QString &arg0);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jstring getId();
		jobject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getRules();
		jint getTotalSeconds();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject ofHours(jint arg0);
		static QAndroidJniObject ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject ofHoursMinutes(jint arg0, jint arg1);
		static QAndroidJniObject ofTotalSeconds(jint arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "zone/ZoneRules.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject ZoneOffset::UTC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneOffset",
			"UTC",
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
	QAndroidJniObject ZoneOffset::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneOffset",
			"MAX",
			"Ljava/time/ZoneOffset;"
		);
	}
	
	// Constructors
	void ZoneOffset::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.ZoneOffset",
			"(V)V");
	}
	
	// Methods
	jint ZoneOffset::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ZoneOffset::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZoneOffset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZoneOffset::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ZoneOffset::compareTo(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/ZoneOffset;)I",
			arg0.__jniObject().object()
		);
	}
	jint ZoneOffset::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jlong ZoneOffset::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
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
	QAndroidJniObject ZoneOffset::of(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneOffset;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ZoneOffset::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object()
		);
	}
	jstring ZoneOffset::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ZoneOffset::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean ZoneOffset::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneOffset::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneOffset::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	jint ZoneOffset::getTotalSeconds()
	{
		return __thiz.callMethod<jint>(
			"getTotalSeconds",
			"()I"
		);
	}
	QAndroidJniObject ZoneOffset::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
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
	QAndroidJniObject ZoneOffset::ofTotalSeconds(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneOffset",
			"ofTotalSeconds",
			"(I)Ljava/time/ZoneOffset;",
			arg0
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class ZoneOffset : public __jni_impl::java::time::ZoneOffset
	{
	public:
		ZoneOffset(QAndroidJniObject obj) { __thiz = obj; }
		ZoneOffset()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_ZONEOFFSET

